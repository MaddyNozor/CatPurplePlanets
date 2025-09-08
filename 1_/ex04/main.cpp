/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:34:25 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/08 17:47:31 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_substitution.hpp"  

int main(int argc, char **argv) {
    
    if (argc != 4) {
        std::cout << RED << argv[0] << " needs <filename> <s1> <s2>" << RESET << std::endl;
        return (EXIT_FAIL);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    std::string content = getFileContent(filename);
    std::string new_content = find_and_substitute_s1_by_s2(content, s1, s2);
    putContentInNewFile( filename, new_content);

    return (EXIT_SUCCESS);
}

// int namefile; //use f2
// echo "your_text_here" > namefile && cat -e namefile
// ./sed_is_for_losers namefile "im_looking_for_that" "use_this_instead" && cat -e namefile.replace

// echo "[your_text_here]" > sample.txt && cat -e sample.txt
// ./sed_is_for_losers sample.txt "_" "-xXx-"" && cat -e sample.txt.replace