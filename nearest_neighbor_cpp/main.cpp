#include <iostream>
#include <string>

using namespace std;

#include "./Menu/Menu.hpp"


int main() {
    //Made menu class to refresh on C++ Classes
    //Menu mm;
    Menu mm("Kobe");
    mm.start();

    //Empty = Quit
    //[0] = Features, [1] = Algorithm Choice
    vector<int> userChoices = mm.selection();
    if (userChoices.empty()) {
        mm.end();
        return 0;
    }


    cout << "Feature: " << userChoices.at(0) << " | Algo: " << userChoices.at(1) << endl;

    




    mm.end();
    return 0;
}
