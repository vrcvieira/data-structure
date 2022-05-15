#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x1 = 5;          // => 5
    int x2 = x1 + 8;     // => 13
    int x3 = x2 / 2;     // => 6
    float x4 = x2 / 2;   // => 6.0
    float x5 = x2 / 2.0; // => 6.5
    auto x6 = 13;        // => 13 (C warning: Wimplicit-int)
    auto x7 = x2 / 2;    // => ? (C warning: Wimplicit-int)
    auto x8 = x2 / 2.0;  // => ? (C warning: Wimplicit-int)/* code */
    cout << x8;
    return 0;
}
