#include <iostream>
#include <fstream>
#include <string>

static std::string replaceAll(const std::string &content,
                              const std::string &s1,
                              const std::string &s2) {
    if (s1.empty())
        return content; // éviter boucle infinie

    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = content.find(s1, pos)) != std::string::npos) {
        result.append(content.substr(pos, found - pos));
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(content.substr(pos));
    return result;
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::ifstream inFile(filename.c_str());
    if (!inFile) {
        std::cerr << "Error: cannot open input file." << std::endl;
        return 1;
    }

    std::string content;
    std::string line;
    while (std::getline(inFile, line)) {
        content.append(line);
        content.push_back('\n'); // conserver les retours à la ligne
    }
    inFile.close();

    std::string replaced = replaceAll(content, argv[2], argv[3]);

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        std::cerr << "Error: cannot create output file." << std::endl;
        return 1;
    }
    outFile << replaced;
    outFile.close();

    return 0;
}
