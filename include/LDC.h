#include <iostream>
#include "Maillon.h"
using namespace std;

template <typename T>
class LDC
{
public:
    LDC<T>()
    {
        this->tete = NULL;
        this->courant = NULL;
        this->length = 0;
    };
    //LDC<T>(LDC<T> &);
    ~LDC<T>()
    {
        while(this->tete)
        {
            delete courant;
            delete tete;
        }
    };

    T Contenu();          //retourne l'element de la liste courant
    T ContenuTete();    //retourne l'element de la liste tete
    T* Acces(int i);  //mettre courant sur le i ème elt
    T* Suc();         //mettre courant sur suivant
    int Longueur();        //taille de la liste
    void Inserer(T* e); //inserer e après la position courante
    
private:
    T* tete;    //début de la liste
    T* courant; //position courante
    int length;
};

template <typename T>
T LDC<T>::Contenu()
{
    return courant->getData();
}
template <typename T>
T LDC<T>::ContenuTete()
{
    return tete->getData();
}

template <typename T>
void LDC<T>::Inserer(T* e)
{
   e->next = NULL;
   e->prev = NULL;
   if(this->tete == NULL)
   {
       this->tete = e;
       this->courant = this->tete;
       this->length += 1;
   }
   else
   {
       this->courant->next = e;
       e->prev = this->courant;
       this->courant = e;
       this->length += 1;
   }
}

/*template <typename T>
T* LDC<T>::Acces(int i)
{

}*/
