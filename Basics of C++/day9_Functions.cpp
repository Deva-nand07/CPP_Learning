#include <iostream>
#include <cmath> // For pow function
using namespace std;

void odd_even() // value less function to check if a number is odd or even
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n & 1)
    cout << n << " is odd" << endl;
    else
        cout << n << " is even" << endl;
}

int sum(int a, int b) //function with two parameters
{ 
    return a + b;
}

int factorial(int n)
{                         // recursive function to calculate factorial
    if (n == 0 || n == 1) // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive call
}

int increment(int n, int inc = 1)
{ // function with default parameter
    return n + inc;
}

bool is_prime(int n) // function to check if a number is prime
{
    if (n <= 1)
        return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false; // n is divisible by i, hence not prime
    }
    return true; // n is prime
}

int Combination(int n, int r) //nCr function to calculate combinations
{ 
    // Using the formula nCr = n! / (r! * (n - r)!)
    return factorial(n)/(factorial(r) * factorial(n - r)); // function to calculate combination
}
int main()
{
    int n;
    cout << pow(2, 3) << endl; // Inbuilt function to calculate power of a number
    odd_even();                // Function to check if a number is odd or even
    cout<<" Sum of 5 and 10 is " << sum(5, 10) << endl; // calling function with two constant arguments
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;            // passing argument to function
    cout << "Incrementing 5 by 2 gives: " << increment(5, 2) << endl;          // calling function with two arguments
    cout << "Incrementing 5 by default value gives: " << increment(5) << endl; // calling function with one argument, using default argument
    cout << "Enter a number to check if it is prime: ";
    cin >> n;
    if (is_prime(n)) // calling function to check if a number is prime
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
    cout << "Enter n and r to calculate nCr: ";
    int nCr_n, nCr_r;
    cin >> nCr_n >> nCr_r;
    cout<< "Combination of " << nCr_n << " and " << nCr_r << " is: " << Combination(nCr_n, nCr_r) << endl;
    return 0;
}