#include "pch.h"
#include "objet2D.h"
#include "rectangle.h"
#include "carre.h"
#include "stockage.h"
 
using namespace std; 

int main(){
    stockage* objets;

    int n; 
    cout << "Nombre des objets : " ;
    cin >> n;

    objets = new stockage(n);

    for (int i = 0; i < n; i++){
        char o; 
        cout << "Objet numero " << i + 1 << " (R)ectangle ou (C)arre " << endl;
        do {
            cin >> o;
        } while ((o != 'R') && (o != 'r') && (o != 'C') && (o != 'c'));

        if ((o == 'R') || (o == 'r')) {
            rectangle* rect;

            int l; 
            cout << "Longueur du rectangle " << endl; 
            cin >> l;

            int g; 
            cout << "Largeur du rectangle " << endl; 
            cin >> g;

            rect = new rectangle(l, g);
            objets->add(rect);
        }
        else {
            carre* car;
            int l; 
            cout << "cote du cube " << endl; cin >> l;
            car = new carre(l);
            objets->add(car);
        }
    }

    objets->to_string();
    delete objets; 
}