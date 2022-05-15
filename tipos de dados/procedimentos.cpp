#include <iostream>
#include <tuple>
using namespace std;
int main(int argc, char const *argv[])
{
    // variável do tipo 'int', com valor 25
    int x = quadrado(5);

    tuple <int, int> tupla = duplo(10); // x1=13 x2=16

    return 0;
}

// função que retorna um 'int', com parâmetro 'p'
int quadrado(int p)
{
    return p * p;
}

//é procedimento pq não retorna nada (void)
void imprime(int a, int b)
{
    for (int i = a; i < b; i++)
        cout << i;
}

auto duplo(int p)
{
    return make_tuple(p + 3, p + 6);
}
