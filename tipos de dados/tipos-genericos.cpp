#include <iostream>
using namespace std;

template <typename T, typename U>
class G
{
public:
    T x; // qual o tipo da variável x?
    char y;
    U z;
};

int main(int argc, char const *argv[])
{

    // declara o agregado genérico G
    G<float, char> g1 = {.x = 3.14, .y = 'Y'};
    G<int, double> g2 = {.x = 3, .y = 'Y'};
    G<char, int> g3 = {.x = 102, .y = 'h', .z = 98};

    cout << g1.x << endl << g1.y << endl;
    cout << endl << g2.x << endl << g2.y << endl;
    cout << endl << g3.x << endl << g3.y << endl << g3.z;

    return 0;
}
