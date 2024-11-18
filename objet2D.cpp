#include "objet2D.h"

objet2D::objet2D(){
    this->Longueur = 0; 
    this->Largeur = 0; 
}

objet2D::objet2D(int longueur, int largeur){
    this->Longueur = longueur; 
    this->Largeur = largeur; 
}

int objet2D::getLongueur(){
    return this->Longueur; 
}

int objet2D::getLargeur(){
    return this->Largeur; 
}

int objet2D::getPerimetre() { 
    return 0; 
}

int objet2D::getAire() { 
    return 0; 
}

std::string objet2D::to_string() { 
    return "Objet2D function"; 
}