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
    void initScale();

private:
    QVector<Container> _container;
    QVector<Ingredient> _ingredients;
    QVector<Cocktail> _cocktails;
};

#endif // BARKEEPER_H
