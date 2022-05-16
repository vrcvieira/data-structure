#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 5;   
    int* ponteiro = &x;
    
    //mostra o endereço
    cout << ponteiro << endl; 

    //mostra o conteúdo de onde está apontado
    cout << *ponteiro << endl;
   
    x = 11;

    //ponteiro guarda endereço. Derreferenciado (*p), guarda conteúdo.
    ponteiro = &x; 

    cout << ponteiro << endl << *ponteiro;

    return 0;
}
