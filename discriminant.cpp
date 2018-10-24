#include "discriminant.h"
#include <math.h>
Discriminant::Discriminant()
{}

QVector<double> Discriminant::calc(double a, double b, double c)
{
    double disc;
    QVector<double> tmp;
    disc = b*b-4*a*c;
    if (disc < 0)
        QMessageBox::information(nullptr,"Вниманние","Нет корней");
    else if (disc == 0) {
       tmp.push_back(-b/2*a);
    } else {
        tmp.push_back((-b+sqrt(disc))/2*a);
        tmp.push_back((-b-sqrt(disc))/2*a);
    }
    return tmp;
}
