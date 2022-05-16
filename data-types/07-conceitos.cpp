#include <iostream>
using namespace std;

template <typename Agregado>
concept bool TemImprimeX = requires(Agregado a)
{
    {
        a.imprimex()
    }
};

template <typename Agregado>
class TemImprimeX{
public:
    Agregado a;
    void imprimex(){
        cout << this->a;
    }
};

int main(int argc, char const *argv[])
{
    auto *x = new TemImprimeX<int>{.a=10};
    x->imprimex();
    return 0;
}
