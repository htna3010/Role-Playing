#include<iostream>
#include "Element.h"
#include "Position.h"

Element::Element(Position p) : pos(p)
{
}

Element::Element() : pos(NULL)
{
}

Element::~Element() 
{
    delete pos;
}