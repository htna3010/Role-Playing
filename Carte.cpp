#include "Carte.h"
#include <fstream>
#include <string>
#include <iostream>

Carte::Carte (std::ifstream fileInput)
{
    if(fileInput.fail())
    {
        std::cout <<"Failed to open this file!" << std::endl;
    }
    while (!fileInput.eof())
    {
        std::string n;
        fileInput >> n;
        std::cout << n << " ";
    }
    std::cout << std::endl;
    fileInput.close();
}

Carte::~Carte()
{
   
}