#include "RootkitGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	RootkitGUI w;
	w.show();
	return a.exec();
}
