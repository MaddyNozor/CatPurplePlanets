
#include <iostream>
#include "./_Contact.hpp"

class Phonebook
{
private:
    Contact _spot[8];
    int     _total_added;
public:

    Phonebook(/* args */);
    ~Phonebook();

    int &getTotal(void);     

    int     getFirstEmptySpot();
    void    addContact(Contact &c_spot);
    void    searchContact(Contact &c_spot);
};


