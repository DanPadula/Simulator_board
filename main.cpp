#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QtQuick>
#include <QQmlContext>
#include <QProcess>
#include "gpio.h"


//using namespace std;

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
  //new code from here 8/3/2022

  //to here 8/3/2022
  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;

  qmlRegisterType<Gpio>("CustomComponents",1,0,"Recall");
  Gpio gpio_out;

  engine.rootContext()->setContextProperty("gpio", &gpio_out);

  const QUrl url(QStringLiteral("qrc:/main.qml"));
  QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                   &app, [url](QObject *obj, const QUrl &objUrl) {
    if (!obj && url == objUrl)
      QCoreApplication::exit(-1);
  }, Qt::QueuedConnection);
  engine.load(url);



  QProcess OProcess;
  QString Command;    //Contains the command to be executed
  QStringList args;   //Contains arguments of the command

  Command = "./";
  args<<"/home/pi/Desktop/I2C/spitest";

  OProcess.start(Command,args,QIODevice::ReadOnly); //Starts execution of command
  OProcess.waitForFinished();                       //Waits for execution to complete

  QString StdOut      =   OProcess.readAllStandardOutput();  //Reads standard output
  QString StdError    =   OProcess.readAllStandardError();   //Reads standard error

  qDebug()<<"\n Printing the standard output..........\n";
  qDebug()<<StdOut;
  qDebug()<<"\n Printing the standard error..........\n";
  qDebug()<<StdError;

  qDebug()<<"\n\n";

  return app.exec();
}
