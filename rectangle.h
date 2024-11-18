#include "objet2D.h"

class rectangle : public objet2D{

public :

    rectangle();
    rectangle(int tlongueur, int tlargeur);

    virtual int getPerimetre();
    virtual int getAire();
    virtual std::string to_string();
};