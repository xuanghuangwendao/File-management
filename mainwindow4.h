#pragma once

#include <QWidget>
#include "widget.h"
#include "ui_mainwindow4.h"

class mainwindow4 : public QWidget
{
	Q_OBJECT

public:
	mainwindow4(QWidget *parent = Q_NULLPTR);
	~mainwindow4();

private slots:
	void slot1();
	void slot2();

private:
	Ui::mainwindow4 ui;
};
