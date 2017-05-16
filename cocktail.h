#ifndef COCKTAIL_H
#define COCKTAIL_H

#include "ingredient.h"

#include <QVector>

class Cocktail
{
public:
    Cocktail();
private:
    //todo: where do we get the size relation ingredient-cocktail?
    int _size;
    QVector<Ingredient> _ingredient;
};

#endif // COCKTAIL_H
