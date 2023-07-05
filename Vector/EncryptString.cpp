#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::string convert(std::string s)
{
    std::string str = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int dem = 0;
            str += s[i];
            dem++;
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[j] == s[i])
                {
                    dem++;
                }
                else {
                    break;
                }
            }
            s.erase(i, dem - 1);
            str += std::to_string(dem);
        }
    }
    return str;
}



int main()
{
    std::string a;
    getline(cin, a);
    cout << convert(a);
    return 0;
}