#include <iostream>
using namespace std;

// Em C++ (tipo agregado Z)
class Z
{
public:
    int x;
    // procedimento para imprimir o valor de x via ponteiro de escopo local
    void imprimex()
    {
        cout << this->x;
    }
};

int main(int argc, char const *argv[])
{
    // aloca memória para um ponteiro do tipo Z
    auto *x = new Z{.x = 77};
    // imprime o valor de x para x em Z via procedimento
    x->imprimex();
    
    return 0;
}
