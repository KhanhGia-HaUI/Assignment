#include <iostream>
using namespace std;

int count(int* a, int n, int val)
{
    int c = 0;
    for(auto i = 0; i < n; i++)
    {
        if(a[i] == val)
        {
            c++;
        }
    }
    return c;
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
    int k;
    cin >> k;
    cout << count(a, n, k);
    return 0;
}