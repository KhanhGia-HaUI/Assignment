#include <iostream>
using namespace std;
// 1 2 3 4 5 6 7 8 9 10 
// 0                  9
//      (int) (0 + 9) / 2 =  4
// a[4] = 5 > 11 sai
// trai = 4 + 1 = 5
// 5                  9
//          7
// a[7] = 8 > 1 sai
// 8                    9
// a[9] = 10 == 11
// 


int BinarySearch(int* a, int n, int val)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (a[mid] < val)
        {
            left = mid + 1;
        }
        else {
            right = mid;
        }
    }
    if (a[left] == val)
    {
        return left;
    }
    return -1;
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
    int k;
    cin >> k;
    cout << BinarySearch(a, n, k);
    return 0;
    delete[] a;
}

