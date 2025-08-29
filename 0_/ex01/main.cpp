
#include "./_Phonebook.hpp"

std::string    full_caps(std::string str) {
    int j = 0;

    while(str[j])
    {
        str[j] = std::toupper(str[j]);
        j++;
    }
    return (str);
}

std::string get_command (void) {
    std::string user_entry;

    std::cout << "What do you want to do ? [ADD] [SEARCH] [EXIT]" << std::endl;
    std::getline(std::cin, user_entry);
    if (std::cin.eof()) { exit(FAIL); }
    while (full_caps(user_entry) != "ADD" && full_caps(user_entry) != "SEARCH" && full_caps(user_entry) != "EXIT") {
        std::cout << "Try again, " << user_entry << " is an invalid command." << std::endl;
        std::cin >> user_entry;
    }
    return (full_caps(user_entry));
}

int main (void) {
    Phonebook   tiny;
    
    std::cout << "==================================================" << std::endl;
    std::cout << "Welcome in this tiny Phonebook !" << std::endl;;
    std::string cmd = get_command();
    while (cmd != "EXIT") {
        if (cmd == "ADD") {
            int spot = tiny.getTotal() % 8;
            tiny.newContact(tiny.getContactAt(spot), spot);
        }
        else if (cmd == "SEARCH") {
            tiny.searchContact();
        }
        cmd = get_command();
    }
    std::cout << "==================================================" << std::endl;
    std::cout << "EXIT : All data successfully erased. Have a nice day ! :)" << std::endl;
    std::cout << "==================================================" << std::endl;
    return SUCCESS;
}

/*
Protection CTRL + D cin eof
valgrind

Phone Number ? [only digits]
e
[Forbidden character] in [e detected. Please respect the requirements.

*/