#ifndef D5AA91E7_3465_4A44_99F8_FA9D87DAF95A
#define D5AA91E7_3465_4A44_99F8_FA9D87DAF95A
#include "Element.h"

class ObjetRamassable : public Element 
{
    private:
        int point;
    public:
    ObjetRamassable(int point);
    ObjetRamassable();
    virtual ~ObjetRamassable();
    
};
#endif /* D5AA91E7_3465_4A44_99F8_FA9D87DAF95A */
