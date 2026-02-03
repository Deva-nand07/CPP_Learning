#include <bits/stdc++.h>
using namespace std;

const int SUBJECTS = 5;
const int MAX_STUDENTS = 10;

// Function to calculate grade
string calculateGrade(float average)
{
    if (average >= 75)
        return "Distinction";
    else if (average >= 60)
        return "First Class";
    else if (average >= 40)
        return "Pass";
    else
        return "Fail";
}

// Function to add student data
void addStudent(
    string names[],
    int marks[][SUBJECTS],
    float averages[],
    string grades[],
    int &count)
{
    cout << "\nEnter Student Name: ";
    cin.ignore();
    getline(cin, names[count]);

    int total = 0;

    for (int i = 0; i < SUBJECTS; i++)
    {
        cout << "Enter marks for Subject " << (i + 1) << ": ";
        cin >> marks[count][i];
        total += marks[count][i];
    }

    averages[count] = total / (float)SUBJECTS;
    grades[count] = calculateGrade(averages[count]);

    count++;
    cout << "\nStudent data added successfully.\n";
}

// Function to display student database
void displayStudents(
    string names[],
    int marks[][SUBJECTS],
    float averages[],
    string grades[],
    int count)
{
    if (count == 0)
    {
        cout << "\nNo student data available.\n";
        return;
    }

    cout << "\n================ Student Database ================================\n";
    cout << left << setw(15) << "Name";

    for (int i = 0; i < SUBJECTS; i++)
        cout << setw(8) << ("S" + to_string(i + 1));

    cout << setw(10) << "Average" << setw(12) << "Grade" << endl;

    cout << "------------------------------------------------------------------\n";

    for (int i = 0; i < count; i++)
    {
        cout << left << setw(15) << names[i];

        for (int j = 0; j < SUBJECTS; j++)
            cout << setw(8) << marks[i][j];

        cout << setw(10) << averages[i]<< setw(12) << grades[i] << endl;
    }
}

int main()
{
    string studentNames[MAX_STUDENTS];
    int marks[MAX_STUDENTS][SUBJECTS];
    float averages[MAX_STUDENTS];
    string grades[MAX_STUDENTS];

    int studentCount = 0;
    int choice;

    do
    {
        cout << "\n===== Student Marks Analyzer =====\n";
        cout << "1. Add Student Data\n";
        cout << "2. Display Student Database\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (studentCount < MAX_STUDENTS)
                addStudent(studentNames, marks, averages, grades, studentCount);
            else
                cout << "\nStudent limit reached.\n";
            break;

        case 2:
            displayStudents(studentNames, marks, averages, grades, studentCount);
            break;

        case 3:
            cout << "\nExiting program.\n";
            break;

        default:
            cout << "\nInvalid choice.\n";
        }
    } while (choice != 3);

    return 0;
}
