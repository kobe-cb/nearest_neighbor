#include "Menu.hpp"


Menu::Menu() {
    id = "Bob";
}

Menu::Menu(const string& idInput) {
    id = idInput;
}

Menu::~Menu() {

}

void Menu::start() {
    cout << "===== Begin Session =====" << endl;
    cout << "Welcome to " + id + "'s Feature Selection Algorithm." << endl;
    return;
}

vector<int> Menu::selection() {
    vector<int> userChoices;
    string userFeature = "";
    string userAlgo = "";

    cout << "Please enter total number of features." << endl;
    cin >> userFeature;
    do {   
        cout << "Type the number of algorithm you want to run" << endl;
        cout << "• Forward Selection (1)" << endl;
        cout << "• Backward Elimination (2)" << endl;
        cout << "• Bertie's Special Algorithm (3)" << endl; 
        cout << "• quit (q)" << endl; 
        cin >> userAlgo;

        if (userAlgo != "1" && userAlgo != "2" && userAlgo != "3" && userAlgo != "q" && userAlgo != "Q") {
            //do function here
            cout << "Invalid selection, Please try again." << endl;
        }
        else {
            goto DONE;
        }
    }
    while ( (userAlgo != "q") && (userAlgo != "Q") );

    DONE:
    if (userAlgo == "q" || userAlgo == "Q") {
        return userChoices;
    }

    userChoices.push_back(stoi(userFeature));
    userChoices.push_back(stoi(userAlgo));
    return userChoices;
}

void Menu::end() {
    cout << "Goodbye!" << endl;
    cout << "===== Close Session =====" << endl;
    return;
}
