
#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[3];
    int marks[3];
    int choice;
    bool entered = false;

    do {
        cout << "\n--- Student Record Manager ---\n";
        cout << "1. Enter student records\n";
        cout << "2. Display results\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            for (int i = 0; i < 3; i++) {
                cout << "Enter student name: ";
                getline(cin, names[i]);

                cout << "Enter marks (0-100): ";
                cin >> marks[i];

                while (marks[i] < 0 || marks[i] > 100) {
                    cout << "Invalid marks! Enter 0-100: ";
                    cin >> marks[i];
                }

                cin.ignore();
            }

            entered = true;
            cout << "Records saved!\n";
        }
        else if (choice == 2) {
            if (entered == false) {
                cout << "Enter records first!\n";
            }
            else {
                int total = 0;

                cout << "\n--- Student Results ---\n";

                for (int i = 0; i < 3; i++) {
                    cout << names[i] << " - " << marks[i];

                    if (marks[i] >= 90)
                        cout << " - Grade A\n";
                    else if (marks[i] >= 75)
                        cout << " - Grade B\n";
                    else if (marks[i] >= 60)
                        cout << " - Grade C\n";
                    else if (marks[i] >= 40)
                        cout << " - Grade D\n";
                    else
                        cout << " - Fail\n";

                    total += marks[i];
                }

                cout << "Class average: "
                     << total / 3.0 << endl;
            }
        }
        else if (choice == 3) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}
