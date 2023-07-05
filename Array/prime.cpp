#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n)
{
    if(n < 2)
	{
		 return false;
	}
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
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
    for (int i = 0; i < n; i++)
    {
        if(is_prime(a[i]))
        {
            cout << a[i] << " ";
        }
    }
    return 0;
    delete[] a;
}