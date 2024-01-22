#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector<double>temperature_list={23.4, 56.9, 74.5, 02.5, 89.4};

    for (int i=0; i< temperature_list.size(); i++) {
        cout << temperature_list.at(i) << endl;

    }

}