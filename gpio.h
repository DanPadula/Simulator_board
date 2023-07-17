#ifndef GPIO_H
#define GPIO_H
#include <QObject>
#include <QFile>
#include <QTextStream>

class Gpio : public QObject
{
  Q_OBJECT

public:
  //Constructor should export gpio file
  enum Level{Low, High};
  enum Direction{In, Out};
  Gpio();
  ~Gpio();
  Q_INVOKABLE void setlevel(QString command);
  Q_INVOKABLE void setlevellow(QString command);
};

#endif // GPIO_H
