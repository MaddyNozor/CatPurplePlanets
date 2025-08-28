
#include <iostream>
#include "./_Contact.hpp"

#define NAME 10
#define PHONE_NUMBER 11
#define STD 12

class Phonebook
{
private:
    Contact _contacts[8];
    int     _total_added;
public:

    Phonebook();
    ~Phonebook();

    int&        getTotal(void);     
    Contact&    getContactAt(int spot);

    void        newContact(Contact &c);
    void        addContact(Contact &c);
    void        searchContact(Contact &c);
    
    int         checkEntry(std::string entry, int type);
    int         getFirstEmptySpot();
};


