#include <string>
#include "Element.h"

class Guerrier : public Element
{
    private:
        int poine_de_vie = 100;
        std::string equipe;
        std::string nom;
        int capaAtt;
        int capaDef;
    public:
    Guerrier(int pdv, std::string equipe, std::string nom, int capaAtt, int capaDef);
    Guerrier();
    virtual ~Guerrier();
};