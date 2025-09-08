/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_substitution.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:49:58 by mairivie          #+#    #+#             */
/*   Updated: 2025/09/08 11:58:53 by mairivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_substitution.hpp"  

std::string find_and_substitute_s1_by_s2(std::string &content, std::string &s1, std::string &s2) {
    std::string result;
    size_t start_pos = 0;
    size_t pos_s2_found = 0;
    
    if (s1.empty())
        return content;
         
    while ((pos_s2_found = content.find(s1, start_pos)) != std::string::npos) {
        result.append(content.substr(start_pos, pos_s2_found - start_pos));
        result.append(s2);
        start_pos = pos_s2_found + s1.length();
    }
    result.append(content.substr(start_pos));
    return result;
}

std::string getFileContent(std::string filename) {
    
    std::ifstream file_src(filename.c_str());
    if (!file_src) {
        std::cout << "Error: cannot open or read in " << filename << std::endl;
    }
    std::string file_content;
    std::string line;
    while (std::getline(file_src, line)) {
        file_content.append(line);
        file_content.push_back('\n'); 
    }
    file_src.close();
    return (file_content);
}
    
    
int putContentInNewFile(std::string filename, std::string new_content) {
    
    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        std::cout << "Error: cannot create output file." << std::endl;
        return (EXIT_FAIL);
    }
    outFile << new_content;
    outFile.close();
    return (EXIT_SUCCESS);
}
