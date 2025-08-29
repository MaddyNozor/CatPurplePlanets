
#include <iostream>
#include <iomanip>
#include <cstring>
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

    int         &getTotal(void); 
    int         &increaseTotal(void);    
    Contact     &getContactAt(int spot);

    void        newContact(Contact &c, int spot);
    void        searchContact();
    
    std::string truncToTen(std::string entry);
    int         checkEntry(std::string entry, int type);        
    int         getFirstEmptySpot();
};


