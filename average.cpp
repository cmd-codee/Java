#include <iostream>
using namespace std;
int main()
{
    int i;
    float k = 0;
    float c = 0;
    while (i != 0)
    {
        cin >> i;
        if (i != 0)
        {
            c += i;
            k += 1;
        }  
    }  
    cout << "average = " << c/k;
    string b;
    cin >> b;
}