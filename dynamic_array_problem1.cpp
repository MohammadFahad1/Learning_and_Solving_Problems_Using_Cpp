#include <bits/stdc++.h>
using namespace std;

int *get_array(int n)
{
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    return p;
}

int main()
{
    int n;
    cin >> n;
    int *ar = get_array(n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}