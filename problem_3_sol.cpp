#include <iostream>
#include <vector>
#include <numeric>




int main()

{

    std::vector<double> number_list={3.4, 8.1, 9.4, 6.2, 6.0};
    double sum= accumulate(number_list.begin(), number_list.end(), 0.0);
    double average= sum/ number_list.size();
    std:: cout<< "The sum of numbers is: " << sum << ", and the average is: " << average << std::endl;
    return 0;
}