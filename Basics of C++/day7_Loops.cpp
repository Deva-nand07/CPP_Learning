#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> //This contain all libraries of c++

using namespace std;
void printValues(int i)
{
    cout << i << " " << endl;
}

int main()
{
    // for loop
    // for(initialization;condition;updation)

    // infinite loop using 'for' keyword
    /*for(;;){
        cout<<"hello"<<endl;
    }*/
    
    // for ( range_declaration : range_expression )     {
    //  loop_statements here
    //}
    int arr[] = {10, 20, 30, 40, 50};
    cout << "Printing array elements: " << endl;
    // range based for loop
    for (int &val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << endl;
    int arr3[] = {40, 50, 60, 70, 80, 90, 100};
    for (auto element : arr3)
    {
        cout << element << " ";
    }
    cout << endl;

    int arr1[] = {10, 20, 30};
    // Without reference (value copy)
    cout << "Original array is.. ";
    for (int i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int val : arr1)
    {
        val += 5; // This won't modify the original array
    }

    cout << "Array after value copy: ";
    for (int a : arr1)
    {
        cout << a << " ";
    }
    cout << endl;

    int arr2[] = {10, 20, 30};
    // With reference
    for (int &ref : arr2)
    {
        ref += 5; // This modifies the original array
    }

    cout << "Array after using reference: ";
    for (int b : arr2)
    {
        cout << b << " ";
    }
    cout << endl;

    // for_each loop
    //  initializing vector
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Print Values of vector" << endl;
    // iterating using for_each loop
    for_each(v.begin(), v.end(), printValues);

    // while loop
    int i = 1;
    /*while(1){//infite loop
        cout<<i<<endl;
        i++;
    }*/
    return 0;
}