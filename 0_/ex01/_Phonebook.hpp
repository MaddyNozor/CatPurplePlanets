
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include "./_Contact.hpp"

#define NAME 10
#define LASTNAME 13
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
    std::string truncToTen(std::string entry);
    int         checkEntry(std::string entry, int type);        

    void        searchContact();
    int         checkID(const std::string entry);
    void        printContactData(Contact &target);

};


