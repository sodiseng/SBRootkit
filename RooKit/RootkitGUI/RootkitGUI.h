#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RootkitGUI.h"

class RootkitGUI : public QMainWindow
{
	Q_OBJECT

public:
	RootkitGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::RootkitGUIClass ui;
};
