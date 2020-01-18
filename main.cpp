#include "mainwindow.h"

#include <DApplication>
DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();
    DApplication app(argc, argv);
    app.setProductName("Hello Deepin");
    app.setApplicationDescription("first Application for deepin");
    app.setApplicationLicense("Deepin Application");
    app.setApplicationVersion("0.0.1");
    app.setApplicationHomePage("https://github.com");
    app.setApplicationAcknowledgementVisible(false);
    app.setApplicationAcknowledgementPage("https://github.com");
    MainWindow w;
    w.show();
    return app.exec();
}
