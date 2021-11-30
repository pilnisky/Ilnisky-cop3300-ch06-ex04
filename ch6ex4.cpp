/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Palmer Ilnisky
 */



    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>
    #include <cmath>
    using namespace std;
    inline void keep_window_open() { char ch; cin >> ch; }

class name_value {
    public:
      std::string name;
      int value;
};



int main(){

    int i = 0;
    int k = 0;
    std::string name;
    int value;
    std::vector<name_value> list;
    name_value object;

    while (i == 0){

        std::cout << "Please enter a name and a value (Name value, format): \n";
        std::cout << "Enter 'NoName 0' to exit:";
        std::cin >> name;
        std::cin >> value;

        if (name.compare("NoName") == 0 && value == 0){
            exit (EXIT_FAILURE);
        }

        for (int j = 0; j<list.size(); j++){ //Checks if name is in use, if it is goes back to top of loop.
            if(name == list[j].name){
                std::cout << "\n That name is already in use. Exiting... \n\n"; 
                exit (EXIT_FAILURE);
            }
        }
        
        object.name = name;
        object.value = value;

        list.push_back(object); //enters a new object to the list.

        for (int j = 0; j<list.size(); j++){ //Prints the list
            std::cout << list[j].name << " " << list[j].value << "\n"; 
        }
    }

    return 0;
}