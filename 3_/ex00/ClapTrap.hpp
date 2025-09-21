#ifndef ClapTrap_HPP
#define ClapTrap_HPP

// ===== COLORS & LAYOUT =====
#define RESET "\033[0m"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLACK "\033[30m"
#define WHITE "\033[37m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"
#define REVERSED "\033[7m"

#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_YELLOW "\033[43m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN "\033[46m"
#define BG_WHITE "\033[47m"

// ===== INCLUDES =====
#include <iostream>
#include <string>

// ===== DEFINE CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====

class ClapTrap
{
private:


public:
    /* constructor default, copy, affecation operator, destructor */
    ClapTrap();
    ClapTrap(const ClapTrap &toCopy);
    ClapTrap &operator=(const ClapTrap &toCopy);
    ~ClapTrap();


};

#endif