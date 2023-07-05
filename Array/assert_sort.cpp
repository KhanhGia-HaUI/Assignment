#include<iostream>
using namespace std;

bool check(int* a, int n)
{
	// increasement
    bool dk1 = true;
	// decreasement
    bool dk2 = true;
    for (int i = 1; i < n; i++){
        if (a[i] <= a[i-1]) 
        {
            dk1 = false;
        }
        if (a[i] >= a[i-1])
        {
             dk2 = false;
        }
    }
	// Boolean OR: If one in two is true, the answer will be true
    return (dk1 || dk2);
}

int main(){
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if (check(a, n)) 
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    return 0;
    delete[] a;
}