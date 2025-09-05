/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:34:25 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/05 15:43:33 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "string_substitution.hpp"  

int main(int argc, char **argv) {
    
    if (argc != 4) {
        std::cout << RED << argv[0] << " needs <filename> <s1> <s2>" << RESET << std::endl;
        return (EXIT_FAIL);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    //ft get file content
    std::ifstream inFile(filename.c_str());
    if (!inFile) {
        std::cout << "Error: cannot " << filename << std::endl;
        return (EXIT_FAIL);
    }
    std::string content;
    std::string line;
    while (std::getline(inFile, line)) {
        content.append(line);
        content.push_back('\n'); 
    }
    inFile.close();


    
    std::string new_content = find_and_substitute_s1_by_s2(content, s1, s2);

    // create new file
    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        std::cout << "Error: cannot create output file." << std::endl;
        return (EXIT_FAIL);
    }
    outFile << new_content;
    outFile.close();

    return (EXIT_SUCCESS);
}
