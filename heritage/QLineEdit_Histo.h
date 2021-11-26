#pragma once

#include <qobject.h>
#include <QLineEdit>
#include <QDebug>

class QLineEdit_Histo : public QLineEdit
{
	Q_OBJECT
		QVector<QString> vHisto;

public:
	QLineEdit_Histo(int nbrLine, QWidget *parent = Q_NULLPTR);

	int getValueTab(int nbrLine);
	

public slots:
	void pushValueTab();

signals:
	void returnTab(QVector<QString> vHisto);


private:
	int tab[10];
	int lineTab;
	int nbrLine;
};
