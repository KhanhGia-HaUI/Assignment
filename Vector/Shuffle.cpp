#include <iostream>
#include <string>
#include <vector>
using namespace std;

void change(std::vector<int>& a)
{
    a.push_back(a[0]);
    a.erase(a.begin());
}

int main()
{
    int n;
    cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        a.push_back(m);
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        change(a);
    }
    for (auto c : a)
    {
        cout << c << " ";
    }
    return 0;

}