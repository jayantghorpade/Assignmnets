#include <iostream>
using namespace std;
template <class T>
void Display(T val, int no)
{
    for (int i = 1; i <= no; i++)
    {
        cout << val << "\t";
    }
    cout << "\n";
}
int main()
{
    Display('M', 7);
    Display(12.3, 5);
    Display(999, 7);
    Display(9.66, 7);
    return 0;
}