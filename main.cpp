#include <iostream>

using namespace std;

int main () 
{
    int user_age=20;

    if (user_age<18) {
        cout << "You are not an adult" << endl;
    }

    else if ((user_age>=18) && (user_age<30)) {
        cout << "Adult with less than 30 years!" << endl;
    }

    else if ((user_age>=30) && (user_age<40)) {
        cout << "You are under forties" << endl;
    }

    else {
        cout << "Age more than 40" << endl;
    }


    return 0;



}