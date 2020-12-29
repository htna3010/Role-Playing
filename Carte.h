#ifndef BB7F836D_3598_45C3_8A05_F5EE666B44FE
#define BB7F836D_3598_45C3_8A05_F5EE666B44FE
#include "Guerrier.h"
#include "Obstacle.h"
#include "ObjetRamassable.h"
#include <fstream>
#include <iostream>

class Carte
{
    private:
        int largeur;
        int hauteur;
       // Obstacle obs;
        //ObjetRamassable objRamass;
        //Guerrier guer;
    public:
    Carte();
    Carte(std::ifstream fileInput);
    ~Carte();
    


};
#endif /* BB7F836D_3598_45C3_8A05_F5EE666B44FE */
