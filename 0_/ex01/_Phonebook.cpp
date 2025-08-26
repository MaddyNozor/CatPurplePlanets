
#include "./_Phonebook.hpp"

Phonebook::Phonebook(/* args */) {
    _total_added = 0;
    std::cout << "Call Phonebook Constructor" << std::endl;
}

Phonebook::~Phonebook() {
    std::cout << "Call Phonebook Destructor" << std::endl;
}

int     Phonebook::getFirstEmptySpot() {
    int res = 0;
    while ( this->_contacts[res].getID() != 42)
        res++;
    return res;
}

int&     Phonebook::getTotal(void) {
    return(this->_total_added);
}

Contact& Phonebook::getContactAt(int& spot) {
    return (_contacts[spot]);
}

void Phonebook::newContact(Contact &c) {

    std::string entry_user;

    std::cout << "FirstName ? [only leters/'/-]" << std::endl;
    std::cin >> entry_user;
    while (checkName != SUCCESS) {
            std::cout << entry_user << " is invalid. Please respect the requirement." << std::endl;
            std::cout << "FirstName ? [only leters/'/-]" << std::endl;
            std::cin >> entry_user;
    }
    c.setFirstName(entry_user);

    std::cout << "Lastname ? [only leters/'/-]" << std::endl;
    std::cin >> entry_user;
    while (checkName != SUCCESS) {
            std::cout << entry_user << " is invalid. Please respect the requirement." << std::endl;
            std::cout << "Lastname ? [only leters/'/-]" << std::endl;
            std::cin >> entry_user;
    }
    c.setLastName(entry_user);

    std::cout << "Nickname ?" << std::endl;
    std::cin >> entry_user;
    while (checkName != SUCCESS) {
            std::cout << entry_user << " is invalid. Please respect the requirement." << std::endl;
            std::cout << "Lastname ? [only leters/'/-]" << std::endl;
            std::cin >> entry_user;
    }
    c.setNickName(entry_user);

    std::cout << "Phone Number ? [only digits]" << std::endl;
    std::cin >> entry_user;
    while (checkNumber != SUCCESS) {
            std::cout << entry_user << " is invalid. Please respect the requirement." << std::endl;
            std::cout << "Phone Number ? [only digits] " << std::endl;
            std::cin >> entry_user;
    }
    c.setPhoneNumber(entry_user);

    std::cout << "Darkest Secret ?" << std::endl;
    std::cin >> entry_user;
    while (checkName != SUCCESS) {
            std::cout << entry_user << " is invalid. Please respect the requirement." << std::endl;
            std::cout << "Lastname ? [only leters/'/-]" << std::endl;
            std::cin >> entry_user;
    }
    c.setDarkestSecret(entry_user);

}

void Phonebook::addContact(Contact &c) {
    int spot = getTotal() % 8;

    std::cout << spot << c.getFirstName() << std::endl;
}

void Phonebook::searchContact(Contact &c){
    std::cout << c.getLastName() << std::endl;
}
