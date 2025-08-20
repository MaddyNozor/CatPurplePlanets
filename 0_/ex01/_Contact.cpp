
#include "./_Contact.hpp"

Contact::Contact(void)
{
    std::cout << "Call Contact Constructor" << std::endl;
    this->id = 42;
}

Contact::~Contact(void)
{
    std::cout << "Destroy Contact " << this->id << std::endl;
}