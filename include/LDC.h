
#include <iostream>
#include "Maillon.h"
using namespace std;

template <typename T>
class LDC
{
public:
    friend Maillon<T>;
    LDC<T>()
    {
        tete = NULL;
        courant = NULL;
    };
    LDC<T>(T& d)
    {
        tete = new Maillon<T>(d);
        courant = tete;
    };
    LDC<T>(LDC<T> &);
    ~LDC<T>()
    {

    };

    T& Contenu();          //retourne l'element de la liste
    LDC<T> &Acces(int i);  //mettre courant sur le i ème elt
    LDC<T> &Suc();         //mettre courant sur suivant
    int Longueur();        //taille de la liste
    LDC<T> &Inserer(T &e); //inserer e après la position courante
private:
    Maillon<T> *tete;    //début de la liste
    Maillon<T> *courant; //position courrant
};

template <typename T>
T& LDC<T>::Contenu()
{
    return courant->data;
}

