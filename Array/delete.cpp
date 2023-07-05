#include <iostream>
using namespace std;

void delete_e(int* a, int&n, int pos)
{
    for (int i = pos; i < n; i++)
    {
        a[i] = a[i+1];
    }
    n--;
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int vitri;
    cin >> vitri;
	delete_e(a, n, vitri);
	for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
    delete[] a;
}