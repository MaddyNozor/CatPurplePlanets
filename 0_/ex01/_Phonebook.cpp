
#include "./_Phonebook.hpp"

Phonebook::Phonebook(/* args */) {
    std::cout << "Call Phonebook Constructor" << std::endl;
}

Phonebook::~Phonebook() {
    std::cout << "Call Phonebook Destructor" << std::endl;
}

int     Phonebook::getFirstEmptySpot() {
    int res = 0;
    while ( this->_spot[res].getID() != 42)
        res++;
    return res;
}

int     &Phonebook::getTotal(void) {
    return(this->_total_added);
}

void Phonebook::addContact(Contact &c) {
    int spot = getFirstEmptySpot();

    std::cout << spot << c.getFirstName() << std::endl;
}

void Phonebook::searchContact(Contact &c){
    std::cout << c.getLastName() << std::endl;
}
