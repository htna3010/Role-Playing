#include <iostream>
#include "Position.h"

Position::Position() : x(NULL), y(NULL)
{
}

Position::Position(int a, int b) : x(a), y(b)
{    
}

int Position::getX() const
{
    return x;
}

int Position::getY() const
{
    return y;
}

void Position::setX(int a)
{
    x = a;
}

void Position::Position::setY(int b)
{
    y = b;
} 