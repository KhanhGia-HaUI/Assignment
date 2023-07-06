#include <iostream>
using namespace std;

// Max from bottom and Min from top

struct node {
public:
    int index;
    int element;
};

void find(int* a, int n, node* &max, node* &min)
{
    max->index = 0;
    max->element = *(a + 0);
    min->index = 0;
    min->element = *(a + 0);
    for (auto i = 0; i < n; i++)
    {
        if (a[n - i - 1] > max->element)
        {
            max->element = a[n - i - 1];
            max->index = n - i - 1;
        }
        if (a[i] < min->element)
        {
            min->element = a[i];
            min->index = i;
        }
    }
}

void swap(int &a, int &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    node* b = new node();
    node* c = new node();
    find(a, n, b, c);
    swap(a[b->index], a[c->index]);
    for (auto i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
    delete[] a;
    delete b;
    delete c;
}