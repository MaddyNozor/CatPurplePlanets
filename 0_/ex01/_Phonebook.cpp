
#include "./_Phonebook.hpp"

Phonebook::Phonebook() {
    _total_added = 0;
    for (int i = 0; i <= 7; i++) {
        _contacts[i].setID(i); 
        std::cout << "New Contact ID: " << _contacts[i].getID() << std::endl;
        }
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
    while (Phonebook::checkEntry(entry_user, NAME) != SUCCESS) {
            std::cout << entry_user << "] detected. Please respect the requirements." << std::endl;
            std::cout << "FirstName ? [only letters/'/-]" << std::endl;
            std::getline(std::cin, entry_user);
    }
    new_c.setFirstName(entry_user);

    std::cout << "Lastname ? [only letters/'/-]" << std::endl;
    std::getline(std::cin, entry_user);
    while (Phonebook::checkEntry(entry_user, NAME) != SUCCESS) {
            std::cout << entry_user << " detected. Please respect the requirements." << std::endl;
            std::cout << "Lastname ? [only letters/'/-]" << std::endl;
            std::getline(std::cin, entry_user);
    }
    new_c.setLastName(entry_user);

    std::cout << "Nickname ?" << std::endl;
    std::getline(std::cin, entry_user);
    while (Phonebook::checkEntry(entry_user, STD) != SUCCESS) {
            std::cout << entry_user << " detected. Please respect the requirements." << std::endl;
            std::cout << "Nickname ? [only letters/'/-]" << std::endl;
            std::getline(std::cin, entry_user);
    }
    new_c.setNickName(entry_user);

    std::cout << "Phone Number ? [only digits]" << std::endl;
    std::getline(std::cin, entry_user);
    while (Phonebook::checkEntry(entry_user, PHONE_NUMBER) != SUCCESS) {
            std::cout << entry_user << " detected. Please respect the requirements." << std::endl;
            std::cout << "Phone Number ? [only digits] " << std::endl;
            std::getline(std::cin, entry_user);
    }
    new_c.setPhoneNumber(entry_user);

    std::cout << "Darkest Secret ?" << std::endl;
    std::getline(std::cin, entry_user);
    while (Phonebook::checkEntry(entry_user, STD) != SUCCESS) {
            std::cout << entry_user << " detected. Please respect the requirements." << std::endl;
            std::cout << "Darkest Secret ? " << std::endl;
            std::getline(std::cin, entry_user);
    }
    new_c.setDarkestSecret(entry_user);

    c = new_c;
    new_c.setID(42);
    increaseTotal();
    //std::cout << c.getID() << " <- ID / firstname -> " << c.getFirstName() << std::endl;

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
        std::cout << std::setw(10) << i << " | "
            << std::setw(10) << first << " | "
            << std::setw(10) << last << " | "
            << std::setw(10) << nick << std::endl;
    }
    std::cout << "==================================================" << std::endl; 
    // while (getFirst)
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