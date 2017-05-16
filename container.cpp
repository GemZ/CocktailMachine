#include "container.h"

Container::Container()
{
}

Container::Container(int id, QString name, QString gpioPort, int ingredientId)
{
    _id = id;
    _name = name;
    _gpioPort = gpioPort;
    _ingredientId = ingredientId;

    // Check if ingredientId is available:
        //todo

    //
}
