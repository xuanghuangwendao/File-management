#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
	string title = "�ĵ�ͳ�ƹ���ϵͳ";
	w.setWindowTitle(QString::fromLocal8Bit(title.data()));
    w.show();
    return a.exec();
}
