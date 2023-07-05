#include <iostream>
using namespace std;

void insert(int* a, int &n, int pos, int val)
{
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = val;
    n++;
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int vitri, giatri;
    cin >> vitri >> giatri;
    insert(a, n, vitri, giatri);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
    delete[] a;
}