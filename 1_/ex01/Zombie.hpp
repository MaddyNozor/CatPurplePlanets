/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:17:33 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/01 17:29:17 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //
#include <string> //
#include <cctype> //

// ===== COLORS & LAYOUT =====
#define RESET      "\033[0m"

#define BLACK      "\033[30m"
#define RED        "\033[31m"
#define GREEN      "\033[32m"
#define YELLOW     "\033[33m"
#define BLUE       "\033[34m"
#define MAGENTA    "\033[35m"
#define CYAN       "\033[36m"
#define WHITE      "\033[37m"

#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define REVERSED   "\033[7m"

#define BG_RED     "\033[41m"
#define BG_GREEN   "\033[42m"
#define BG_YELLOW  "\033[43m"
#define BG_BLUE    "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN    "\033[46m"
#define BG_WHITE   "\033[47m"

// ===== CLEAN CODE =====
#define EXIT_SUCCESS 0
#define EXIT_FAIL 1

// ===== CLASS DECLARATION =====
class Zombie
{
private:
    std::string _name;
public:
    Zombie(void);
    Zombie(std::string entry);
    ~Zombie(void);

    int         setName(std::string entry);
    std::string &getName(void);
    
    void        announce(void);
};

// ===== OTHERS FUNCTIONS =====
Zombie* zombieHorde( int N, std::string name );
