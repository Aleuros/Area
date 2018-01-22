#include <iostream>
using namespace std;
void showmenu();

int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 3)
    {
        switch (choice)
        {
            case 1 : cout << "This will have the circle function";
                    break;
            case 2 : cout << "This will have the square function";
                    break;
            default : cout << "That is not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    return 0;
}

void showmenu()
{
    cout << "Program Name: Area" << endl;
    cout << "The goal of this program is to calculate the area of a circle or a square.\n" << endl;

    cout << "Please enter 1 or 2" << endl;
    cout << "1 to Calculate Circle" << endl;
    cout << "2 to Calculate Square" << endl;


}

