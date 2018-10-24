#ifndef DISCRIMINANT_H
#define DISCRIMINANT_H
#include <QObject>
#include <QMessageBox>
class Discriminant
{
public:
    Discriminant();
    QVector<double> calc(double a, double b, double c);
};

#endif // DISCRIMINANT_H
