#pragma once
//
// Created by Mohamed Ali on 16-Nov-22.
//
#include <string>
#include <vector>

#ifndef DS_PROJECT_SCANNER_SCANNER_H
#define DS_PROJECT_SCANNER_SCANNER_H


class Scanner {
private:
    std::string tinyCode;
    std::vector<std::string> tokensList;
    std::vector<std::string> codeList;
    std::vector<int> tokensPerLine;
public:
    Scanner(std::string tinyCode);
    void scan(); // function that passes through string and finds tokens 

    /*
    * helper functions to find if the value is in the vector or not
    * 1st takes a char and 2nd takes string 
    * 3rd checks if input is number or not
    * 4th checks if input is alphanumeric or not
    */
    bool inArray(const char& value, const std::vector<char>& array);
    bool inArray(const std::string& value, const std::vector<std::string>& array);
    bool isNumber(const std::string input);
    bool isAlpha(const std::string input);
    std::vector<std::string> getCodeList(); // getter
    std::vector<std::string> getTokenList(); //getter
    std::vector<int> getTokensPerLine(); //getter

    /*
    * helper function that takes a string, and 2 other strings 
    * 1st is removed string 2nd is replacement string
    */
    std::string translate(std::string orgStr, std::string remove, std::string replace); 


};


#endif //DS_PROJECT_SCANNER_SCANNER_H

