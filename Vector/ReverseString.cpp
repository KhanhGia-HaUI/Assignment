#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s = "";
    vector<char> a;
    getline(cin, s);
    for (int i = s.length(); i >= 0; i--)
    {
        a.push_back(s[i]);
    }
    for (auto c : a)
    {
        cout << c;
    }
    return 0;
}