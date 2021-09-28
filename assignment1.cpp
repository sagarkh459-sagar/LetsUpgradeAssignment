#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 1;
    int b = 1;
    int n;
    cin >> n;
    while (b < n)
    {
        a += 1;
        b += a;
        cout << "Hi";
    }

    return 0;
}

// The time complexity for this code is O(n/2)
