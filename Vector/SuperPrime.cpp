#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isSuperPrime(int n)
{
    if (!isPrime(n)) {
        return false;
    }
    std::vector<int> split = {};
    while (n > 0)
    {
        split.push_back(n);
        n /= 10;
    }
    for (auto c : split)
    {
        if (!isPrime(c))
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
    std::vector<int> a;
    for (int i = 2; i < n; i++)
    {
        if (isSuperPrime(i))
        {
            a.push_back(i);
        }
    }
    for (auto& c : a)
    {
        cout << c << " ";
    }
    return 0;
}