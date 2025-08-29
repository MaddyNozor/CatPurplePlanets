
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

        const int         &getID(void);
        const std::string &getFirstName(void);
        const std::string &getLastName(void);
        const std::string &getNickname(void);
        const std::string &getPhoneNumber(void);
        const std::string &getDarkestSecret(void);
};