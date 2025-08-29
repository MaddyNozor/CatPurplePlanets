
#include "./_Contact.hpp"

Contact::Contact(void) {
    std::cout << "Call Contact Constructor" << std::endl;
    this->_id = 42;
}

Contact::~Contact(void) {
    std::cout << "Destroy Contact " << this->_id << std::endl;
}

//==================SET==================

int Contact::setID(int entry) {
    this->_id = entry;
    return SUCCESS ;
}

int Contact::setFirstName(std::string entry) {
    this->_firstname = entry;
    return SUCCESS ;
}

int Contact::setLastName(std::string entry) {
    this->_lastname = entry;
    return SUCCESS;
}

int Contact::setNickName(std::string entry) {
    this->_nickname = entry;
    return SUCCESS;
}

int Contact::setPhoneNumber(std::string entry) {
    this->_phone_number = entry;
    return SUCCESS;
}

int Contact::setDarkestSecret(std::string entry) {
    this->_darkest_secret = entry;
    return SUCCESS;
}

//==================GET==================

const int &Contact::getID(void) {
    return(_id);
}

const std::string &Contact::getFirstName(void) {
    return(_firstname);
}

const std::string &Contact::getLastName(void) {
    return(_lastname);
}

const std::string &Contact::getNickname(void) {
    return(_nickname);

}

const std::string &Contact::getPhoneNumber(void){
    return(_phone_number);
}

const std::string &Contact::getDarkestSecret(void){
    return(_darkest_secret);
}
