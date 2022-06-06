#include <iostream>
#include <tuple>
using namespace std;

// função que retorna um 'int', com parâmetro 'p'
int quadrado(int p)
{
    return p * p;
}

//duplo é uma função, pois é um método que retorna algo, ao final
auto duplo(int p)
{
    return make_tuple(p + 3, p + 6);
}

//é procedimento pq não retorna nada (void)
void imprime(int a, int b)
{
    for (int i = a; i < b; i++)
        cout << i;
}

int main(int argc, char const *argv[])
{
    
    // variável do tipo 'int', com valor 25
    int x = quadrado(5);

    tuple <int, int> tupla = duplo(10); // x1=13 x2=16

    cout << get<0>(tupla) << endl << get<1>(tupla) << endl << endl;

    //testando o procedimento imprime
    imprime(1,5);

    cout << endl << endl << quadrado;
    
    return 0;
}

