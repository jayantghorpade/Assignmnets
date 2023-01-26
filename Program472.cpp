#include <iostream>
using namespace std;
template <class T>
T MaxThree(T a, T b, T c)
{
    T max = a > b && a > c ? a : b > c ? b
                                       : c;
    return max;
}
// if (a > b && a > c)
// {
//     return a;
// }
// else if (b > c)
// {
//     return b;
// }
// else
// {
//     return c;
// }
//}
int main()
{
    int iret = MaxThree(300, 400, 6050);
    cout << iret << "\n";
    float fret = MaxThree(13.2, 14.2, 1.3);
    cout << fret << "\n";
    return 0;
}