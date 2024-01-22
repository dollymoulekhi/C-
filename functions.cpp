#include <iostream>

using namespace std;

void say_hello( string user_name, int user_age)
{
    cout << "Hello " << user_name << " your age is " << user_age << endl;
}

string user_name;
int user_age;

int main()


{

    cout << "Please enter your name ";
    cin >> user_name;

    cout << "Please enter your age ";
    cin >> user_age;
    say_hello(user_name, user_age);
    return 0;
}