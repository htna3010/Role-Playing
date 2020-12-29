#include "Carte.h"
#include "Carte.cpp"
#include <string>
#include <iostream>
#include <fstream>

int main()
{
    Carte c(std::ifstream("carte1.txt"));
}