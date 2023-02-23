#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQuick>
#include <QQmlContext>
#include "gpio.h"



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

  return app.exec();
}
