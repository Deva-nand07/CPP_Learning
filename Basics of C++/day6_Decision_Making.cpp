
//                         Decision Making

#include <iostream>
using namespace std;

// return jump statement case
bool check(int age)
{
    if (age >= 18)
        return 1;
    else
        return 0;
}
void checkAdult(int age)
{
    if (check(age))
        cout << "You are an adult\n";
    else
        cout << "You are not an adult\n";
}

int main()
{
    // if in C++

    int no;
    cout << endl;
    cout << "\nEnter value of no ..";
    cin >> no;

    // if - else
    if ((no > 0) || (no < 0))
        cout << "No is no zero" << endl;
    else
        cout << "No is zero" << endl; // we can skip {} if there is only one statement
    cout << endl;

    // if - else - if ladder
    if (no < 0)
        cout << "No is Negative" << endl;
    else if (no > 0)
        cout << "No is Positive" << endl;
    else
        cout << "No is not positive nor negative " << endl;

    int year;
    cout << "\nEnter year .. : ";
    cin >> year;

    // Nested if
    if (year % 4 == 0)
    {
        // first nested if-else statement
        if (year % 100 == 0)
        {
            // second nested if-else statement
            if (year % 400 == 0)
            {
                cout << year << " is a leap year.";
            }
            else
            {
                cout << year << " is not a leap year.";
            }
        }
        else
        {
            cout << year << " is a leap year.";
        }
    }
    else
    {
        cout << year << " is not a leap year.";
    }

    int day;
    cout << endl;
    cout << "\nEnter day bw 1 to 7..: ";
    cin >> day;
    //  switch statement
    switch (day)
    {
    default:
        cout << "Enter valid day " << endl;
        break;
    case 1:
        cout << "Day is Monday" << endl;
        break;
    case 2:
        cout << "Day is Tuesday" << endl;
        break;
    case 3:
        cout << "Day is Wednesday" << endl;
        break;
    case 4:
        cout << "Day is Thursday" << endl;
        break;
    case 5:
        cout << "Day is Friday" << endl;
        break;
    case 6:
        cout << "Day is Saturday" << endl;
        break;
    case 7:
        cout << "Day is Sunday" << endl;
        break;
    }

    //                                  Jump Statements

    // break
    for (int i = 1; i < 10; i++)
    {
        cout << i << " ";
        if (i == 5)
            break;
    }
    cout << endl;
    // continue
    for (int i = 1; i < 10; i++)
    {

        if (i == 5)
            continue;
        cout << i << " ";
    }
    cout << endl;
    // return
    int age;
    cout << "\nEnter age .. : ";
    cin >> age;
    checkAdult(age); // Calling fuction

    // goto
    int n;
    cout << "\nEnter a number.. ";
    cin >> n;
    if (n % 2 == 0)
        goto label1;
    else
        goto label2;

label1:
    cout << n << " is even number" << endl;
    goto end;
label2:
    cout << n << " is odd number" << endl;

end:
    // Ternery Operator "?"
    auto result = (n & 1) ? "ODD" : "EVEN";
    cout << result;
    return 0;
}