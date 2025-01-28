#include <iostream>

int main(int argc, char* argv[]) {
    
    if (argc == 1) {
        std::cout << "No path specified, opening current working directory" << std::endl;
        system("explorer .");
        return 0;
    } else if (argc == 2) {
        std::cout << "Opening " << argv[1] << std::endl;
        system((std::string("explorer ") + argv[1]).c_str());
        return 0;
    } else {
        std::cout << "Something went wrong";
        return 1;
    }
    
    return 0;
}