
#include <iostream>
#include <cctype>

#define SUCCESS 0
#define FAIL 1
#define EMPTY 2
#define FORBID 3

class Contact
{
    private:
        int         _id;
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        Contact(void);
        ~Contact(void);

        int setID(int entry);
        int setFirstName(std::string entry);
        int setLastName(std::string entry);
        int setNickName(std::string entry);
        int setPhoneNumber(std::string entry);
        int setDarkestSecret(std::string entry);

        int         &getID(void);
        std::string &getFirstName(void);
        std::string &getLastName(void);
        std::string &getNickname(void);
        std::string &getPhoneNumber(void);
        std::string &getDarkestSecret(void);
};