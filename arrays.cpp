// #include <iostream>

// int main()

// {
//     double temperature_list[4]= {22.5, 34.8, 65.9, 78.5};

// std::cout << temperature_list[1] <<std::endl;
//     return 0;
// }



#include <iostream>
#include <vector>

int main()

{
    std::vector <double> temps={22.5, 34.8, 65.9, 78.5};
    // double temperature_list[4]= {22.5, 34.8, 65.9, 78.5};

    std::cout << temps.at(1) <<std::endl;
        return 0;
}