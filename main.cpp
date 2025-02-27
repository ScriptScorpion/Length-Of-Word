#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string a;
    std::cout << "What you like to choose with or without space" << "\n";
    std::getline(std::cin, a);
    if (a.empty()) {
        std::cout << "Enter Word";
    }
    else if (a == "with" || a == "WITH" || a == "With") {
        //std::getline(std::cin, input);
        std::string b;
        std::getline(std::cin, b);
        std::cout << "This is lenght of your word: " << b.length();
        
    }
    else if (a == "without" || a == "WITHOUT" || a == "Without") {
        std::string c;
        std::getline(std::cin, c);
        c.erase(std::remove(c.begin(), c.end(), ' '), c.end());
        std::cout << "This is lenght of your word: " << c.length();

    }
    
}
