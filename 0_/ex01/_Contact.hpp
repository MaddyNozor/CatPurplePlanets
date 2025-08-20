
#include <iostream>

class Contact
{
    private:
        int         id;
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact(void);
        ~Contact(void);
};