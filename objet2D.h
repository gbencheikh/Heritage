#pragma once
#include "pch.h"

class objet2D{
protected : 
    int Longueur; 
    int Largeur; 

public: 
    objet2D(); 
    objet2D(int,int);

    int getLongueur(); 
    int getLargeur();  

    void setLongueur(int);
    void setLargeur(int); 

    virtual int getPerimetre(); 
    virtual int getAire(); 
    virtual std::string to_string(); 
};
