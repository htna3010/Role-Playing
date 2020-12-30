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
    //while (!fileInput.eof())
   // {   
        int l, h;
        fileInput >> l >> h ;
        largeur = l;
        hauteur = h;
        std::cout << l << std::endl;
        std::cout << h << std::endl;
      // for(int i = 0; i < largeur;i++){
      //     for(int i = 0; i < hauteur; i++){
        while(!fileInput.eof()){
            std::string n("");
            if(getline(fileInput, n)){
                std::cout << n << std::endl;
            }  
        }
        //   }
        //   std::cout << std::endl;
      // }
        
        
       
  //  }
    std::cout << std::endl;
    fileInput.close();
}

Carte::~Carte()
{
   
}