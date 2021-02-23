#include <cmath>
#include <iostream>
#include <ctime>
#include <string>
#include <random>
using namespace std;

void welcome();

int main(){
    srand((unsigned)time(0));
    string password;
    int length;

    welcome();
    cout << "\x1B[93m >> \033[0m";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        int next_char = (rand() % 3) + 1;
        switch (next_char)
        {
        case 1:{
            char lower_case_letter = (rand() % (122-97 + 1)) + 97;
            password += lower_case_letter;
            }
            break;
        case 2:{
            char upper_case_letter = (rand() % (90-65 + 1)) + 65;
            password += upper_case_letter;
            }
            break;
        case 3:{
            int number = (rand() % 9) + 1;
            password += to_string(number);
            }
            break;
        default:
            break;
        }
    }

    cout << "\x1B[93m >> " + password + "\033[0m\n\n";
    

    return 0;
}

/* text based interface*/
void welcome(){
    cout << "\x1B[35m    oooooooooo     ooooooooo    oooooooooooo    oooooooooooo                  oooooooooooo     ooooooooooooo    oooooooooooooo  \033[0m\n";
    cout << "\x1B[35m   oooooooooooo   ooooooooooo  oooooooooooooo  oooooooooooooo                oooooooooooo     ooooooooooooooo  oooooooooooooooo \033[0m\n";
    cout << "\x1B[35m   ooooo   ooooo oooo    ooooo oooo      ooooo oooo      ooooo              oooo              ooooo      ooooo oooo0        oooo\033[0m\n";
    cout << "\x1B[35m   oooo     oooo oooo     oooo  oooo      oooo  oooo      oooo              oooo              oooo        oooo oooo         oooo\033[0m\n";
    cout << "\x1B[35m   oooo     oooo          oooo    ooooo           ooooo                     oooo              oooo        oooo oooo         oooo\033[0m\n";
    cout << "\x1B[35m   oooo     ooo           oooo       ooooo           ooooo                  oooo              oooo       oooo  oooo         oooo\033[0m\n";
    cout << "\x1B[35m   ooooooooooo        oooooooo         oooo             oooo      oooooooo  oooo              oooooooooooooo   oooo         oooo\033[0m\n";
    cout << "\x1B[35m   oooooooooo       oooooooooo           oooo             oooo    oooooooo  oooo    ooooo     oooooooooooo     oooo         oooo\033[0m\n";
    cout << "\x1B[35m   oooo            ooooooooooo            oooo             oooo             oooo    o  oooo   oooo             oooo         oooo\033[0m\n";
    cout << "\x1B[35m   oooo           oooo    oooo             oooo             oooo            oooo        oooo  oooo             oooo         oooo\033[0m\n";
    cout << "\x1B[35m   oooo           oooo    oooo oooo        oooo oooo        oooo            oooo         oooo oooo       oooo  oooo         oooo\033[0m\n";
    cout << "\x1B[35m   oooo           oooo    oooo ooooo      ooooo ooooo      ooooo            ooooo        oooo  oooo      oooo  oooo         oooo\033[0m\n";
    cout << "\x1B[35m   oooo            ooooooooooo  oooooooooooooo   oooooooooooooo              oooooooooooooooo   oooooooooooo   oooo         oooo\033[0m\n";
    cout << "\x1B[35m   oooo             ooooooooo    oooooooooooo     oooooooooooo                 oooooooooooo       oooooooo     oooo         oooo\033[0m\n";

    cout << endl << endl;
    cout << "\x1B[35m--------------------------------------------------------------------------------------------------------------------------------\033[0m\n";
    cout << "\x1B[35m--                                                                                                                            --\033[0m\n";
    cout << "\x1B[93m--                                         Enter the length of the desired password.                                          --\033[0m\n";
    cout << "\x1B[35m--                                                                                                                            --\033[0m\n";
    cout << "\x1B[35m--------------------------------------------------------------------------------------------------------------------------------\033[0m\n";
}