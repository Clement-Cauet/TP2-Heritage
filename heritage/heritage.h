#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_heritage.h"
#include "QLineEdit_Histo.h"
#include <QLineEdit>
#include <QTableWidget>
#include <QDebug>

class heritage : public QMainWindow
{
	Q_OBJECT

public:
    heritage(QWidget *parent = Q_NULLPTR);
	QLineEdit *lineEdit;
	QLineEdit *lineEditHisto;
	QTableWidget *tabHisto;
	
	

public slots:
	void setHisto();
	void afficheTab(QVector<QString> vHisto);

private:
    Ui::heritageClass ui;
	QLineEdit_Histo *qlineedit_histo;
	int nbrLine;
};
