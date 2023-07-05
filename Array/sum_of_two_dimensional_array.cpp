#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int n;
    cin >> n;
    int** a = new int*[m];
    for(int i = 0; i < m; i++)
    {
        a[i] = new int[n];
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
    }
    cout << sum;
    return 0;
    for(int i = 0; i < m; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}