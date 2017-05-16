#ifndef CONTAINER_H
#define CONTAINER_H

#include <QString>

#include "ingredient.h"

class Container
{
public:
    Container();
private:
    QString _name;
    QString _gpioPort;
    Ingredient _ingredient;
    int _id;


};

#endif // CONTAINER_H
