#ifndef BARKEEPER_H
#define BARKEEPER_H

#include "container.h"
#include "ingredient.h"
#include "cocktail.h"

#include <QVector>
#include <QtXml>

class Barkeeper
{
public:
    Barkeeper();
    int readConfig();
        // reads config / initialize container, ingredients, cocktails
    void initScale();
        // initialise/adjust scale
    void initCocktails();
        // checks if selected cocktails are available with configured container

private:
    QVector<Container> _container;
    QVector<Ingredient> _ingredients;
    QVector<Cocktail> _cocktails;
};

#endif // BARKEEPER_H
