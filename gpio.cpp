#include "gpio.h"

#include <QDebug>
#include <QFileSystemWatcher>
Gpio::Gpio()
{
  QFile exportFile("/sys/class/gpio/export");
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("24"));
  exportFile.close();
  QFile directionFile("/sys/class/gpio/gpio24/direction");
  if (!directionFile.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << directionFile.fileName();
  QByteArray rw = "out";
  directionFile.write(rw);
  directionFile.close();


}
Gpio::~Gpio()
{
  QFile exportFile("/sys/class/gpio/unexport");
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("24"));
  exportFile.close();
}

void Gpio::setlevel()
{
QFile valueFile("/sys/class/gpio/gpio24/value");
if (!valueFile.open(QIODevice::WriteOnly | QIODevice::Text))
    qWarning() << "cannot open " << valueFile.fileName();
valueFile.write(QByteArray("1"));
qDebug()<< " c clicked";
valueFile.close();
}

void Gpio::setlevellow()
{
  QFile valueFile("/sys/class/gpio/gpio24/value");
  if (!valueFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << valueFile.fileName();
  valueFile.write(QByteArray("0"));
  qDebug()<< " c clicked";
  valueFile.close();
}
