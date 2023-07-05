#include <iostream>
#include <vector>
using namespace std;

void reverse(std::vector<int>& a);

void convert_to_binary(int &n, vector<int> &a)
{
    while (n > 0)
    {
        a.push_back(n % 2);
        n /= 2;
    }
    reverse(a);
}

void reverse(std::vector<int>& a)
{
    std::vector<int> b = {};
    for (int i = (a.size() - 1); i >= 0; i--)
    {
        b.push_back(a.at(i));
    }
    a.clear();
    for (auto i = 0; i < b.size(); i++)
    {
        a.push_back(b.at(i));
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a = {};
    convert_to_binary(n, a);
    for (auto c : a)
    {
        cout << c;
    }
    return 0;
}