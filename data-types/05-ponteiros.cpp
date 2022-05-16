#include <iostream>
using namespace std;

class P
{
public:
    int x;
    char y;
};

int main(int argc, char const *argv[])
{
    int x = 5;
    int *ponteiro = &x;

    // mostra o endereço
    cout << ponteiro << endl;

    // mostra o conteúdo de onde está apontado
    cout << *ponteiro << endl;

    x = 11;

    // ponteiro guarda endereço. Derreferenciado (*p), guarda conteúdo.
    ponteiro = &x;

    cout << ponteiro << endl
         << *ponteiro << endl;

    // aloca memória para o agregado P
    auto *vp = new P{
        .x = 10,
        .y = 'Y'};
    // imprime x (valor 10)
    cout << vp->x;
    // descarta a memória
    delete vp;

    return 0;
    
}
