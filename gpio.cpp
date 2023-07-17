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
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("12"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("16"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("20"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("21"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("17"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("18"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("27"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("23"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("6"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("5"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("26"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("4"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("25"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("19"));
  exportFile.close();
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("22"));
  exportFile.close();
  //gpio23 setup
  QFile gpio23("/sys/class/gpio/gpio23/direction");
  if (!gpio23.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio23.fileName();
  QByteArray out23 = "out";
  gpio23.write(out23);
  gpio23.close();
  //gpio17 setup
  QFile gpio17("/sys/class/gpio/gpio17/direction");
  if (!gpio17.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio17.fileName();
  QByteArray out17 = "out";
  gpio17.write(out17);
  gpio17.close();
  //gpio 27setup
  QFile gpio27("/sys/class/gpio/gpio27/direction");
  if (!gpio27.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio27.fileName();
  QByteArray out27 = "out";
  gpio27.write(out27);
  gpio27.close();
  //gpi0 18 setup
  QFile gpio18("/sys/class/gpio/gpio18/direction");
  if (!gpio18.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio18.fileName();
  QByteArray out18 = "out";
  gpio18.write(out18);
  gpio18.close();
  //gpio6 setup
  QFile gpio6("/sys/class/gpio/gpio26/direction");
  if (!gpio6.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio6.fileName();
  QByteArray out6 = "out";
  gpio6.write(out6);
  gpio6.close();
  //gpio5 setup
  QFile gpio5("/sys/class/gpio/gpio24/direction");
  if (!gpio5.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio5.fileName();
  QByteArray out5 = "out";
  gpio5.write(out5);
  gpio5.close();
  //gpio 26
  QFile gpio26("/sys/class/gpio/gpio24/direction");
  if (!gpio26.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio26.fileName();
  QByteArray out26 = "out";
  gpio26.write(out26);
  gpio26.close();
  //gpio 24
  QFile gpio24("/sys/class/gpio/gpio24/direction");
  if (!gpio24.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio24.fileName();
  QByteArray out24 = "out";
  gpio24.write(out24);
  gpio24.close();
  //gpio 12
  QFile gpio12("/sys/class/gpio/gpio12/direction");
  if (!gpio12.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio12.fileName();
  QByteArray out12 = "out";
  gpio12.write(out12);
  gpio12.close();
  //gpio 16 setup
  QFile gpio16("/sys/class/gpio/gpio16/direction");
  if (!gpio16.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio16.fileName();
  QByteArray out16 = "out";
  gpio16.write(out16);
  gpio16.close();
  //gpio 20 setup
  QFile gpio20("/sys/class/gpio/gpio20/direction");
  if (!gpio20.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio20.fileName();
  QByteArray out20 = "out";
  gpio20.write(out20);
  gpio20.close();
  //gpio 21 setup
  QFile gpio21("/sys/class/gpio/gpio21/direction");
  if (!gpio21.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio21.fileName();
  QByteArray out21 = "out";
  gpio21.write(out21);
  gpio21.close();
  //gpio 22 setup
  QFile gpio22("/sys/class/gpio/gpio22/direction");
  if (!gpio22.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio22.fileName();
  QByteArray out22 = "out";
  gpio22.write(out22);
  gpio22.close();
  //gpio 19 setup
  QFile gpio19("/sys/class/gpio/gpio19/direction");
  if (!gpio19.open(QIODevice::WriteOnly))
      qWarning() << "cannot open " << gpio19.fileName();
  QByteArray out19 = "out";
  gpio19.write(out19);
  gpio19.close();

}
Gpio::~Gpio()
{
  QFile exportFile("/sys/class/gpio/unexport");
  if (!exportFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << exportFile.fileName();
  exportFile.write(QByteArray("24"));
  exportFile.close();
}

void Gpio::setlevel(QString command)
{
QFile valueFile(command);
if (!valueFile.open(QIODevice::WriteOnly | QIODevice::Text))
    qWarning() << "cannot open " << valueFile.fileName();
valueFile.write(QByteArray("1"));
qDebug()<< " c clicked";
valueFile.close();
}

void Gpio::setlevellow(QString command)
{
  QFile valueFile(command);
  if (!valueFile.open(QIODevice::WriteOnly | QIODevice::Text))
      qWarning() << "cannot open " << valueFile.fileName();
  valueFile.write(QByteArray("0"));
  qDebug()<< " c clicked";
  valueFile.close();
}
