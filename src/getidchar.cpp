#include <iostream>
#include <string>

#include "../header/getidchar.hpp"

std::string char_id_value = "ABCDEFGHIJKLMNOPQRSTUVWSXYZ"
                            "abcedfghijklmnopqrstuvwxyz"
                            "1234567890~`!@#$%^&*()_-+={[}]:;"
                            "'<,>./?\"\\  ";

char getidchar::getchar(int id) {
    return char_id_value[id - 1];
}

int getidchar::getid(char chars) {
    int value = 0;
    for(int i = 0; i < char_id_value.length(); i++) {
        if(chars == char_id_value[i]) {
            value = i + 1;
        }
    }

    return value;
}