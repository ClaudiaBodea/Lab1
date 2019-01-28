#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Introduceti valoarea 1: ";
    cin >> a;
    cout << "Introduceti valoarea 2: ";
    cin >> b;
    if(a <b)
        cout << "Crescatoare" << endl;
    else
        cout << "Ne-crescatoare" << endl;
    return 0;
}
