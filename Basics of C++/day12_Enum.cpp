#include<iostream>
using namespace std;

int main(){
    // Enum in C++
    // An enumeration (enum) is a user-defined data type that consists of a set of named integral constants.
    // It is used to define variables that can hold a set of predefined values.
    enum Meal {BREAKFAST, LUNCH, DINNER}; // Enum declaration
    Meal myMeal; // Enum variable declaration
    myMeal = LUNCH; // Assigning a value to the enum variable
    cout<<"Selected meal: ";
    switch(myMeal) {
        case BREAKFAST:
            cout << "Breakfast" << endl;
            break;
        case LUNCH:
            cout << "Lunch" << endl;
            break;
        case DINNER:
            cout << "Dinner" << endl;
            break;
        default:
            cout << "Invalid meal selection" << endl;
    }
    // Values of the enum constants are automatically assigned starting from 0
    cout << "Breakfast value: " << BREAKFAST << endl; // Outputs 0
    cout << "Lunch value: " << LUNCH << endl; // Outputs 1
    cout << "Dinner value: " << DINNER << endl; // Outputs 2
    enum State
    {
        IDLE,
        RUNNING,
        PAUSED,
        STOPPED
    };
    State machineState = RUNNING;
    // 🛠️ Used in:
    // Embedded systems
    // Game engines (PlayerState)
    // UI flow (Login → Home → Logout)
    return 0;
}