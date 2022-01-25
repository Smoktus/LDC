#include <iostream>
#include "include/LDC.h"
using namespace std;

typedef LDC<Maillon<int>> ListInt;
int main()
{
    std::cout << "Hello World" << std::endl;

    Maillon<int> m(58);
    cout << m.getData() << endl;
    Maillon<int> m1;
    m1 = m;
    cout << m1.getData() << endl;
    ListInt l;
    l.Inserer(new Maillon<int>(23));
    //l.Contenu();

    return 0;
}