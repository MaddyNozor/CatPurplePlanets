
#include "./_Phonebook.hpp"

Phonebook::Phonebook() {
    _total_added = 0;
    for (int i = 0; i <= 7; i++) {
        _contacts[i].setID(i); 
        //std::cout << "New Contact ID: " << _contacts[i].getID() << std::endl;
        }
    std::cout << "Call Phonebook Constructor" << std::endl;
}

Phonebook::~Phonebook() {
    std::cout << "Call Phonebook Destructor" << std::endl;
}

//============= GETTERS ====================

int     &Phonebook::getTotal() {
    return(this->_total_added);
}

int     &Phonebook::increaseTotal() {
    this->_total_added++;
    return(this->_total_added);
}

Contact &Phonebook::getContactAt(int spot) {
    return (_contacts[spot]);
}

//============= [ADD] ====================

void    Phonebook::newContact(Contact &c, int spot) {
    Contact new_c;
    std::string entry_user;

    new_c.setID(spot);

    std::cout << "FirstName ? [only letters/'/-]" << std::endl;
    std::getline(std::cin, entry_user);
    if (std::cin.eof()) { exit(FAIL); }
    while (Phonebook::checkEntry(entry_user, NAME) != SUCCESS) {
            std::cout << entry_user << "] detected. Please respect the requirements." << std::endl;
            std::cout << "FirstName ? [only letters/'/-]" << std::endl;
            std::getline(std::cin, entry_user);
            if (std::cin.eof()) { exit(FAIL); }
    }
    new_c.setFirstName(entry_user);

    std::cout << "Lastname ? [only letters/ /'/-]" << std::endl;
    std::getline(std::cin, entry_user);
    if (std::cin.eof()) { exit(FAIL); }
    while (Phonebook::checkEntry(entry_user, LASTNAME) != SUCCESS) {
            std::cout << entry_user << "] detected. Please respect the requirements." << std::endl;
            std::cout << "Lastname ? [only letters/ /'/-]" << std::endl;
            std::getline(std::cin, entry_user);
            if (std::cin.eof()) { exit(FAIL); }
    }
    new_c.setLastName(entry_user);

    std::cout << "Nickname ?" << std::endl;
    std::getline(std::cin, entry_user);
    if (std::cin.eof()) { exit(FAIL); }
    while (Phonebook::checkEntry(entry_user, STD) != SUCCESS) {
            std::cout << entry_user << "] detected. Please respect the requirements." << std::endl;
            std::cout << "Nickname ? [only letters/'/-]" << std::endl;
            std::getline(std::cin, entry_user);
            if (std::cin.eof()) { exit(FAIL); }
    }
    new_c.setNickName(entry_user);

    std::cout << "Phone Number ? [only digits]" << std::endl;
    std::getline(std::cin, entry_user);
    if (std::cin.eof()) { exit(FAIL); }
    while (Phonebook::checkEntry(entry_user, PHONE_NUMBER) != SUCCESS) {
            std::cout << entry_user << "] detected. Please respect the requirements." << std::endl;
            std::cout << "Phone Number ? [only digits] " << std::endl;
            std::getline(std::cin, entry_user);
            if (std::cin.eof()) { exit(FAIL); }
    }
    new_c.setPhoneNumber(entry_user);

    std::cout << "Darkest Secret ?" << std::endl;
    std::getline(std::cin, entry_user);
    if (std::cin.eof()) { exit(FAIL); }
    while (Phonebook::checkEntry(entry_user, STD) != SUCCESS) {
            std::cout << entry_user << "] detected. Please respect the requirements." << std::endl;
            std::cout << "Darkest Secret ? " << std::endl;
            std::getline(std::cin, entry_user);
            if (std::cin.eof()) { exit(FAIL); }
    }
    new_c.setDarkestSecret(entry_user);

    c = new_c;
    new_c.setID(42);
    increaseTotal();

    return;
}

int     Phonebook::checkEntry(std::string entry, int type) {
    if (entry.empty()) {
        std::cout << "[EMPTY STRING]";
        return (EMPTY);
    }
    for (int i = 0; entry[i]; i++) {
        if (!std::isprint(entry[i])
            || (type == PHONE_NUMBER && !std::isdigit(entry[i]))
            || (type == LASTNAME && (!std::isalpha(entry[i]) && entry[i] != ' ' && entry[i] != '\'' && entry[i] != '-'))
            || (type == NAME && (!std::isalpha(entry[i]) && entry[i] != '\'' && entry[i] != '-'))
            ) {
                std::cout << "[Forbidden character] in [";
                return (FORBID);
            }
    }
    return(SUCCESS);
}

//============= [SEARCH] =====================

std::string Phonebook::truncToTen(std::string entry) {
    if (entry.length() > 10) {
        std::string trunc_entry = "0123456789";
        for(int i = 0; i <= 8; i++)
            trunc_entry[i] = entry[i];
        trunc_entry[9] = '.';
        return(trunc_entry);
    }
    return (entry);
}

void Phonebook::searchContact() {
    if (getTotal() == 0) {
        std::cout << "Phonebook is empty. Try to [ADD] your first contact! \n" << std::endl;
        return;
    }
    std::cout << "==================================================" << std::endl;
    std::cout << std::setw(10) << "Index" << " | "
              << std::setw(10) << "First Name" << " | "
              << std::setw(10) << "Last Name" << " | "
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << "---------- | ---------- | ---------- | ----------" << std::endl;
    for (int i = 0; (i < getTotal() && i <= 7); i++) {
        std::string first = truncToTen(_contacts[i].getFirstName());
        std::string last = truncToTen(_contacts[i].getLastName());
        std::string nick = truncToTen(_contacts[i].getNickname());

        std::cout << std::left << std::setw(10) << i << " | "
            << std::left << std::setw(10) << first << " | "
            << std::left << std::setw(10) << last << " | "
            << std::left << std::setw(10) << nick << std::endl;
    }
    std::cout << "==================================================" << std::endl;

    std::string entry_user;
    std::cout << "Select one of the ID above to see its data : [one digit]" << std::endl;
    std::getline(std::cin, entry_user);
    if (std::cin.eof()) { exit(FAIL); }
    while (Phonebook::checkID(entry_user) != SUCCESS) {
        std::cout << " detected. Please respect the requirements." << std::endl;
        std::cout << "Contact ID ? [0 to 7 if registered]" << std::endl;
        std::getline(std::cin, entry_user);
        if (std::cin.eof()) { exit(FAIL); }
    }
    Contact &target = getContactAt(std::atoi(entry_user.c_str()));
    printContactData(target);

    std::cout << "==================================================" << std::endl;
    return;
}

void    Phonebook::printContactData(Contact &target) {
    std::cout << "Firstname : " << target.getFirstName() << std::endl;
    std::cout << "Lastname : " << target.getLastName() << std::endl;
    std::cout << "Nickname : " << target.getNickname() << std::endl;
    std::cout << "Phone Number : " << target.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret : " << target.getDarkestSecret() << std::endl;
    return;
}

int     Phonebook::checkID(const std::string entry) {
    if (entry.empty()) {
        std::cout << "[EMPTY STRING]";
        return (EMPTY);
    }
    else if (entry.length() != 1 ) {
        std::cout << "[TOO MANY CHAR]";
        return (FAIL);
    }
    else if  (!std::isdigit(entry[0])) {
        std::cout << "[FORBIDDEN CHAR]";
        return (FORBID);
    }
    int max = getTotal();
    if (std::atoi(entry.c_str()) > (max -1) || std::atoi(entry.c_str()) > 7) {
        std::cout << "[UNREGISTERED ID]";
        return (FAIL);
    }
    return(SUCCESS);
}

/*
Afficher liste contacts
    while firstname non null
    fonction afficher ligne contact
        aliigne a droite
        setw 1 pour les 10 cases
        ft trunc si plus de 10 (9 + .)
        pipe

    ft ask ID contact 
        gestion d'erreur
    afficher info du contact
        first name :
        etc...
    retour boucle commande
*/