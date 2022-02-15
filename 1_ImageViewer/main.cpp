#include <QApplication>
#include "mainWindow.h"

int main(int arg, char* argv[]){
    QApplication app(argc, argv);
    MainWindow window;
    window.setWindowTitle("ImageViewer");
    window.show();
    return app.exec();
}