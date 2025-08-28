
#include "./_Phonebook.hpp"

Phonebook::Phonebook(/* args */) {
    _total_added = 0;
    std::cout << "Call Phonebook Constructor" << std::endl;
}

Phonebook::~Phonebook() {
    std::cout << "Call Phonebook Destructor" << std::endl;
}

//============= GETTERS ====================

int     Phonebook::getFirstEmptySpot() {
    int res = 0;
    while ( this->_contacts[res].getID() != 42)
        res++;
    return res;
}

int&     Phonebook::getTotal(void) {
    return(this->_total_added);
}

Contact& Phonebook::getContactAt(int spot) {
    return (_contacts[spot]);
}

//============= SETTERS ====================

void Phonebook::newContact(Contact &c) {
    Contact new_c;
    std::string entry_user;

    std::cout << "FirstName ? [only letters/'/-]" << std::endl;
    std::cin >> entry_user;
    while (Phonebook::checkEntry(entry_user, NAME) != SUCCESS) {
            std::cout << entry_user << " detected. Please respect the requirements." << std::endl;
            std::cout << "FirstName ? [only letters/'/-]" << std::endl;
            std::cin >> entry_user;
    }
    new_c.setFirstName(entry_user);

    std::cout << "Lastname ? [only letters/'/-]" << std::endl;
    std::cin >> entry_user;
    while (Phonebook::checkEntry(entry_user, NAME) != SUCCESS) {
            std::cout << entry_user << " detected. Please respect the requirements." << std::endl;
            std::cout << "Lastname ? [only letters/'/-]" << std::endl;
            std::cin >> entry_user;
    }
    new_c.setLastName(entry_user);

    std::cout << "Nickname ?" << std::endl;
    std::cin >> entry_user;
    while (Phonebook::checkEntry(entry_user, STD) != SUCCESS) {
            std::cout << entry_user << " detected. Please respect the requirements." << std::endl;
            std::cout << "Nickname ? [only letters/'/-]" << std::endl;
            std::cin >> entry_user;
    }
    new_c.setNickName(entry_user);

    std::cout << "Phone Number ? [only digits]" << std::endl;
    std::cin >> entry_user;
    while (Phonebook::checkEntry(entry_user, PHONE_NUMBER) != SUCCESS) {
            std::cout << entry_user << " detected. Please respect the requirements." << std::endl;
            std::cout << "Phone Number ? [only digits] " << std::endl;
            std::cin >> entry_user;
    }
    new_c.setPhoneNumber(entry_user);

    std::cout << "Darkest Secret ?" << std::endl;
    std::cin >> entry_user;
    while (Phonebook::checkEntry(entry_user, STD) != SUCCESS) {
            std::cout << entry_user << " detected. Please respect the requirements." << std::endl;
            std::cout << "Darkest Secret ? " << std::endl;
            std::cin >> entry_user;
    }
    new_c.setDarkestSecret(entry_user);

    c = new_c;
    std::cout << c.getID() << " <- ID / firstname -> " << c.getFirstName() << std::endl;

}

int         Phonebook::checkEntry(std::string entry, int type) {
    if (entry.empty()) {
        std::cout << "[EMPTY STRING]";
        return (EMPTY);
    }
    for (int i = 0; entry[i]; i++) {
        if (!std::isprint(entry[i])
            || (type == PHONE_NUMBER && !std::isdigit(entry[i]))
            || (type == NAME && (!std::isalpha(entry[i]) && entry[i] != '\'' && entry[i] != '-'))) {
                std::cout << "[Forbidden character] in >";
                return (FORBID);
            }
    }
    return(SUCCESS);
}

// void Phonebook::addContact(Contact &c) {
//     // Contact new_c;
//     // // int     spot = getTotal() % 8;

//     // // new_c = getContactAt(spot);

//     // newContact(new_c);

//     std::cout << spot << " <- ID / firstname -> " << c.getFirstName() << std::endl;
// }

void Phonebook::searchContact(Contact &c){
    std::cout << c.getLastName() << std::endl;
}

    // while (cmd != "EXIT") {
    //     if (cmd == "ADD") {
    //         int spot = tiny.getTotal() % 8;
    //         tiny.addContact(tiny.getContactAt(spot));
