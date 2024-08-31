#ifndef VALIDATOR_H
#define VALIDATOR_H

#include <regex>
#include <string>
using namespace std;

class Validator {
public:
    bool validateEmail(const string& email);

    bool validatePhoneNumber(const string& phoneNumber);
};

#endif 