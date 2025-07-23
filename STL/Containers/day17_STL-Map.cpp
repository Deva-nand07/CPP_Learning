#include <iostream>
#include <map> // For using std::map (STL map)
#include<unordered_map>
using namespace std;
void printMap(map<int, string> m)
{
    for (auto i : m)
    {
        cout << i.first << "    " << i.second << endl;
    }
}

int main()
{
    // Maps in c++
    // Map is  Collection of key-value pairs sorted on the basis of the keys where no two pairs have same keys.

    map<int, string> mymap;
    // 2 Methods of Insertion
    mymap[1] = "One"; // Insert key-value pairs into the map
    mymap[10] = "Ten";
    mymap.insert({5, "Five"});
    mymap.insert({3, "Three"});
    printMap(mymap);
    cout << "Size of map: " << mymap.size() << endl; // Output the size of the map
    cout << "Is the map empty? " << (mymap.empty() ? "Yes" : "No") << endl; // Check if the map is empty
    cout<< "Value at key 10: " << mymap[10] << endl; // Access value at a specific key
    cout << "Value at key 100: " << mymap[100] << endl; // Accessing a non-existing key will insert it with a default value
    cout<<"Is 5 present in the map? " << (mymap.count(5) ? "Yes" : "No") << endl; // Check if a key is present in the map
    mymap.erase(3); // Erase a key-value pair from the map
    cout << "Map after erasing key 3: " << endl;
    printMap(mymap); 
    auto search = mymap.find(10); // Find a key in the map
    cout << "Searching for key 10: ";
    if(search != mymap.end())
    {
        cout << "Found! Value: " << search->second<< endl; // Output the value if found
    }
    else
    {
        cout << "Not Found!" << endl; // Output if not found
    }
    
    // unodreed maps
    unordered_map<int, string> unMap;
    // It is same as Map only diffrence is that it is unordered and has different complexity
    unMap[1] = "One"; // Insert key-value pairs into the unordered map
    return 0;
}