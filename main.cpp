#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("FileSync - файловый менеджер");
    w.setWindowIcon(QIcon(":/app.jpg"));
    w.show();
    return a.exec();
}
