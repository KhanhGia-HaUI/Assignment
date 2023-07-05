#include <iostream>
using namespace std;

void lamphang(int* a, int size_a, int* b, int size_b, int* &c)
{
    int d = 0;
    for(int i = 0; i < size_a; i++)
    {
        c[d] = a[i];
        d++;
    }
    for(int i = 0; i < size_b; i++)
    {
        c[d] = b[i];
        d++;
    }
}

void BubbleSort(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                a[i] ^= a[j];
                a[j] ^= a[i];
                a[i] ^= a[j];
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int* b = new int[m];
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    int size_c = m + n;
    int* c = new int[size_c];
    lamphang(a, n, b, m, c);
    BubbleSort(c, size_c);
    for(int i = 0; i < size_c; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
	delete[] a;
	delete[] b;
	delete[] c;
}