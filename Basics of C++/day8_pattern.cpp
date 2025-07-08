#include <iostream>
using namespace std;
int main()
{
    // 1st pattern
    int n;
    cout << "Enter no of rows/columns : ";
    cin >> n;
    cout << "pattern 1" << endl;
    for (int i = 1; i < n; i++) // using for Loop
    {
        for (int j = 1; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    int i = 1;
    while (i < n)
    { // Using While Loop
        int j = 1;
        while (j < n)
        {
            cout << "* ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    cout << endl;

    // 2nd pattern
    cout << "pattern 2" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    int i1 = 1;
    while (i1 <= n)
    { // Using While Loop
        int j1 = 1;
        while (j1 <= n)
        {
            cout << j1 << " ";
            j1 = j1 + 1;
        }
        cout << endl;
        i1 = i1 + 1;
    }
    cout << endl;

    // 3rd pattern
    cout << "pattern 3" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    int i2 = 1;
    while (i2 <= n)
    { // Using While Loop
        int j2 = 1;
        while (j2 <= n)
        {
            cout << i2 << " ";
            j2 = j2 + 1;
        }
        cout << endl;
        i2 = i2 + 1;
    }
    cout << endl;

    // 4th pattern
    cout << "pattern 4" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= n; j++)
        {
            cout << n - j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 5th pattern
    cout << "pattern 5" << endl;
    int x = 1;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= n; j++)
        {
            cout << x << " ";
            x += 1;
        }
        cout << endl;
    }
    cout << endl;

    // 6th pattern
    cout << "pattern 6" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // 7th pattern
    cout << "pattern 7" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 8th pattern
    cout << "pattern 8" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 9th pattern
    cout << "pattern 9" << endl;
    int y = 1;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= i; j++)
        {
            cout << y << " ";
            y += 1;
        }
        cout << endl;
    }
    cout << endl;

    // 10th pattern
    cout << "pattern 10" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i + j - 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    // another method of solving
    int a;
    for (int r = 1; r <= n; r++) // using for Loop
    {
        a = r;
        for (int c = 1; c <= r; c++)
        {
            cout << a << " ";
            a += 1;
        }
        cout << endl;
    }
    cout << endl;

    // 11th pattern
    cout << "pattern 11" << endl;
    int b;
    for (int r = 1; r <= n; r++) // using for Loop
    {
        b = r;
        for (int c = 1; c <= r; c++)
        {
            cout << b << " ";
            b -= 1;
        }
        cout << endl;
    }
    cout << endl;
    // another method of solving
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 12th pattern
    cout << "pattern 12" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    cout << endl;

    // 13th pattern
    cout << "pattern 13" << endl;
    char ch = 'A';
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
        }
        ch += 1;
        cout << endl;
    }
    cout << endl;

    // 14th pattern
    cout << "pattern 14" << endl;
    ch = 'A';
    for (int i = 1; i <= n; i++) // using for Loops
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    cout << endl;

    // 15th pattern
    cout << "pattern 15" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        ch = 'A';
        ch = ch + i - 1;
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    cout << endl;

    // 16th pattern
    cout << "Pattern 16" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int x = 1; x <= i; x++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // 17th pattern
    cout << "Pattern 17" << endl;
    x = n;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= x; j++)
        {
            cout << "* ";
        }
        x -= 1;
        cout << endl;
    }
    cout << endl;

    // 18th pattern
    cout << "Pattern 18" << endl;
    x = n;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        int space = i - 1;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= x; j++)
        {
            cout << "* ";
        }
        x -= 1;
        cout << endl;
    }
    cout << endl;

    // 19th pattern
    cout << "Pattern 19" << endl;
    x = n;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        int space = i - 1;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= x; j++)
        {
            cout << i << " ";
        }
        x -= 1;
        cout << endl;
    }
    cout << endl;

    // 20th pattern
    cout << "Pattern 20" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int x = 1; x <= i; x++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 21th pattern
    cout << "Pattern 21" << endl;
    x = n;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        int y = i;
        int space = i - 1;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= x; j++)
        {
            cout << y << " ";
            y += 1;
        }
        x -= 1;
        cout << endl;
    }
    cout << endl;

    // 22th pattern
    cout << "Pattern 22" << endl;
    x = n;
    y = 1;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        int space = i - 1;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= x; j++)
        {
            cout << y << " ";
            y += 1;
        }
        x -= 1;
        cout << endl;
    }
    cout << endl;

    // 23th pattern
    y = 1;
    cout << "Pattern 23" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int x = 1; x <= i; x++)
        {
            cout << y << " ";
            y += 1;
        }
        cout << endl;
    }
    cout << endl;

    // 24th pattern
    cout << "Pattern 24" << endl;
    for (int i = 1; i <= n; i++) // using for Loop
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int x = 1; x <= i; x++)
        {
            cout << x << " ";
        }
        int b = i - 1;
        for (int c = 1; c <= i - 1; c++)
        {
            cout << b << " ";
            b -= 1;
        }
        cout << endl;
    }
    cout << endl;

    // 25th pattern
    cout << "Pattern 25" << endl;

    for (int i = 1; i <= n; i++) // using for Loop
    {
        a = n;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        for (int x = 1; x <= i - 1; x++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << a - i + 1 << " ";
            a -= 1;
        }
        cout << endl;
    }
    cout << endl;

    // 26th pattern
    cout << "Pattern 26" << endl;
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int x = 1; x <= i; x++)
        {
            cout << "* ";
        }
        for (int z = 1; z <= i - 1; z++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // 27th pattern
    cout << "Pattern 27" << endl;
    int k = n;
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int x = 1; x <= i; x++)
        {
            cout << "* ";
        }
        for (int z = 1; z <= i - 1; z++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        int space = i - 1;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int z = 1; z <= n - i; z++)
        {
            cout << "* ";
        }
        for (int y = 1; y <= k; y++)
        {
            cout << "* ";
        }
        k -= 1;
        cout << endl;
    }

    return 0;
}