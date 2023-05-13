#include <QApplication>
#include <QMainWindow>

#include "main.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow mainWindow;
    Ui_MainWindow ui;
    ui.setupUi(&mainWindow);

    mainWindow.show();

    return app.exec();
}
