
#include <iostream>
#include "./_Contact.hpp"

class Phonebook
{
private:
    Contact _contacts[8];
    int     _total_added;
public:

    Phonebook();
    ~Phonebook();

    int&        getTotal(void);     
    Contact&    getContactAt(int& spot);

    void        addContact(Contact &c_spot);
    void        searchContact(Contact &c_spot);
    
    int         getFirstEmptySpot();
};


