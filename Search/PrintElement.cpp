#include <iostream>
using namespace std;

void print(int* a, int n)
{
    bool t = false;
    for(auto i = 0; i < n; i++)
    {
        if(i % 2 == 0 && a[i] % 2 != 0)
        {
            t = true;
            cout << a[i] << " ";
        }
    }
    if(!t)
    {
        cout << "NULL";
    }
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for(auto i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    print(a, n);
    return 0;
}