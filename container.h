#ifndef CONTAINER_H
#define CONTAINER_H

#include <QString>

#include "ingredient.h"

class Container
{
public:
    Container();
    Container(int id, QString name, QString gpioPort, int ingredientId);
private:
    int _id;
    QString _name;
    QString _gpioPort;
    int _ingredientId;

};

#endif // CONTAINER_H
