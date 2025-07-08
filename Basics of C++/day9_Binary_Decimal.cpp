#include <iostream>

using namespace std;

int main()
{
    // Convert decimal to Binary
    // +ve decimal numbers
    int n;
    int ans = 0, i = 1;
    cout << "Enter value of n  ";
    cin >> n;
    int temp = n;
    if (n > 0)
    {
        while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * i) + ans;
            n = n >> 1;
            i *= 10;
        }
        cout << "Binary value of " << temp << " is  " << ans << endl;
    }
    else
    {
        // For negative numbers, use two's complement with fixed bit-width
        int bitWidth = 10;               // Fixed bit-width (e.g., 8 bits)
        int mask = (1 << bitWidth) - 1; // Create a mask for bitWidth bits
        n = n & mask;                   // Restrict n to the lower bitWidth bits
        // Convert to binary
        while (n != 0)
        {
            int bit = n & 1;
            ans = (bit * i) + ans;
            n = n >> 1;
            i *= 10;
        }

        cout << "Binary value of " << temp << " in two's complement (" << bitWidth << " bits) is " << ans << endl;
    }
    // convert binary to Decimal
    int bin, temporay;
    int answer = 0, pow = 1;
    cout << "Enter a bianry number   ";
    cin >> bin;
    temporay = bin;
    while (bin != 0)
    {
        int digit = bin % 10;
        if (digit == 1)
            answer = (digit * pow) + answer;
        bin /= 10;
        pow *= 2;
    }
    cout << "Decimal of " << temporay << " is " << answer << endl;
    return 0;
}