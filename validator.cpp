#include "validator.h"

bool Validator::validateEmail(const string& email) {
    const regex pattern(R"(\S+@\S+\.com)");
    return regex_match(email, pattern);
}

bool Validator::validatePhoneNumber(const string& phoneNumber) {
    // Check if the phone number is 11 digits long
    if (phoneNumber.length() != 11) {
        return false;
    }

    const string prefix = phoneNumber.substr(0, 3);
    return (prefix == "010" || prefix == "012" || prefix == "011" || prefix == "015");
}
