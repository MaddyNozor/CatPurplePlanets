
#include "./_Phonebook.hpp"

std::string    full_caps(std::string str)
{
    int j = 0;

    while(str[j])
    {
        str[j] = std::toupper(str[j]);
        j++;
    }
    return (str);
}

std::string get_command ()
{
    std::string user_entry;

    std::cout << "What do you want to do ? [ADD] [SEARCH] [EXIT]" << std::endl;
    std::cin >> user_entry;
    while (full_caps(user_entry) != "ADD" && full_caps(user_entry) != "SEARCH" && full_caps(user_entry) != "EXIT")
    {
        std::cout << "Try again, " << user_entry << " is an invalid command." << std::endl;
        std::cin >> user_entry;
    }
    return (full_caps(user_entry));
}

int main (void)
{
    Phonebook   tiny;
    
    std::cout << "Welcome in this tiny Phonebook !" << std::endl;;
    std::string cmd = get_command();
    if (cmd == "ADD")
        std::cout << "new member ? " << cmd << std::endl;
    if (cmd == "SEARCH")
        std::cout << "Ou est charly " << cmd << std::endl;
    if (cmd == "EXIT")
        std::cout << "bye bye " << cmd << std::endl;
    return 0;
}