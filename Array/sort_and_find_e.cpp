#include <iostream>
using namespace std;

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

bool includes(int* b, int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (b[i] == value)
        {
            return true;
        }
    }
    return false;
}

int dem(int* a, int n, int giatri) {
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == giatri)
        {
            d++;
        }
    }
    return d;
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
    BubbleSort(a, n);
    int* b = new int[n];
    int size_b = 0;
    for (int i = 0; i < n; i++)
    {
        if (!includes(b, size_b, a[i]))
        {
            b[size_b] = a[i];
            size_b++;
            cout << a[i] << " - " << dem(a, n, a[i]) << "; ";
        }
    }
    return 0;
    delete[] a;
    delete[] b;
}