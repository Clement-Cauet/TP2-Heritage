#include "heritage.h"

heritage::heritage(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	lineEdit = new QLineEdit(this);
	lineEdit->setGeometry(15, 50, 50, 20);

	QObject::connect(lineEdit, SIGNAL(returnPressed()), this, SLOT(setHisto()));
}

void heritage::setHisto()
{
	nbrLine = lineEdit->text().toInt();
	lineEdit->deleteLater();

	lineEditHisto = new QLineEdit_Histo(nbrLine, this);
	lineEditHisto->setGeometry(15, 50, 200, 20);
	lineEditHisto->setVisible(true);

	tabHisto = new QTableWidget(nbrLine, 1, this);
	tabHisto->setGeometry(250, 50, 100, 200);
	tabHisto->setVisible(true);

	connect(lineEditHisto, SIGNAL(returnTab(QVector<QString>)), this, SLOT(afficheTab(QVector<QString>)));
}

void heritage::afficheTab(QVector<QString> vHisto)
{
	lineEditHisto->clear();
	for (int i = 0; i < vHisto.size(); i++) {
		auto data = new QTableWidgetItem(vHisto.at(i));
		data->setTextAlignment(Qt::AlignCenter);
		tabHisto->setItem(i , 0, data);
	}
}
