#include <iostream>

void say_hello( std:: string user_name, int user_age)
{
    std:: cout << "Hello " << user_name << " your age is " << user_age << std::endl;
}

std:: string user_name;
int user_age;

int main()


{

    std:: cout << "Please enter your name ";
    std:: cin >> user_name;

    std:: cout << "Please enter your age ";
    std:: cin >> user_age;
    say_hello(user_name, user_age);
    return 0;
}