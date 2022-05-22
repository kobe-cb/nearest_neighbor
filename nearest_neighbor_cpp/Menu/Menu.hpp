#ifndef __MENU_H__
#define __MENU_H__

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Menu {
    private:
        string id;

    public:
        Menu();
        Menu(const string&);
        ~Menu();
        void start();
        vector<int> selection();
        void end();
};

#endif