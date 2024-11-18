#include "stockage.h"

stockage::stockage(int tmptaille) {
    this->taille = tmptaille; 
    index = 0;
    tab = new objet2D*[this->taille];
}

stockage::~stockage() { 
    delete* tab; 
}

void stockage::add(objet2D* objet) {
    this->add(objet,this->index);
    this->index++;
}

void stockage::add(objet2D* objet, int index) {
    tab[index] = objet;
}

void stockage::to_string() {
    for (int i = 0; i < this->taille; i++) {
        std::cout << "objet numero " << i + 1 << " " << tab[i]->to_string() << std::endl;
    }
}