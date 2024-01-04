/*
    Accepts 2 value and has a choice from MDAS.
    The User of the system sometimes make mistake make sure only accept values stated on main menu.
    The owner also want to make the system loop so it can solve problems without reopening the system.
*/ 

/*
    Accepts 2 value and has a choice from MDAS.
    The User of the system sometimes make mistake make sure only accept values stated on main menu.
    The owner also want to make the system loop so it can solve problems without reopening the system.
*/

#include <iostream>
int MainMenu();
int InputData;
int Add()
int Subtraction()
int Division()
{
    int val1, val2, choice;
    char continueChoice = 'y';

    do
    {
        do
        {
           
            switch (choice);
            {
            int addition()
                std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";


               
              int subraction()
                std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
                break;
             int multiplication ()
                std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
                break;
            int division()
                std::cout << "Please input value 1:";
                std::cin >> val1;
                std::cout << "Please input value 2:";
                std::cin >> val2;
                std::cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
                break;
            default:
                std::cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        std::cout << "Do you want to Contninue [y/n]:";
        std::cin >> continueChoice;

        std::system("cls");

    } while (continueChoice == 'y');

    

    int MainMenu();
    {
        int choice;
        std::cout
            << "--- Please Select for Math Solution to use ---\n"
            << "1. Add\n"
            << "2. Subtract\n"
            << "3. Multipliction\n"
            << "4. Division\n"
            << "\n"
            << "Enter Choice: ";
        std::cin >> choice;

        std::system("cls");
        return choice;

    }
