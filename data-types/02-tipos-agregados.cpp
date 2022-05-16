#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
    class P
    {
    public:
        int x;
        char y;
    };
    // declara variável tipo P
    P p1; // na declaração explícita, p1 vira uma variável do tipo P
    p1.x = 5;
    p1.y = 'r';

    // designated initializers
    auto p2 = new P; // p2 passa a ser um ponteiro do tipo P
    (*p2).x = 76;    // derreferenciamento
    p2->y = 'b';     // acesso direto via ponteiro

    auto p3 = P{.x = 10, .y = 'w'};
    p3.x = 15;
    p3.y = 'b';

    cout << p1.x << endl << p1.y << endl;
    cout << endl << p2->x << endl << p2->y << endl;
    cout << endl << p3.x << endl  << p3.y;

    return 0;
}
