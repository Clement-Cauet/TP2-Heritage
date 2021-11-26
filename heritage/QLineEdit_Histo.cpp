#include "heritage.h"
#include "QLineEdit_Histo.h"

QLineEdit_Histo::QLineEdit_Histo(int nbrLine, QWidget *parent)
	: QLineEdit(parent)
{
	this->nbrLine = nbrLine;
	connect(this, SIGNAL(returnPressed()), this, SLOT(pushValueTab()));
}

void QLineEdit_Histo::pushValueTab()
{
	if (text() != "") {
		if (vHisto.size() >= nbrLine) {
			vHisto.erase(vHisto.begin());
		}
		vHisto.push_back(text());
		emit returnTab(vHisto);
	}
}

int QLineEdit_Histo::getValueTab(int nbrLine)
{
	return this->tab[nbrLine];
}


