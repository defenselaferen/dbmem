#include <iostream>
#include <string>
#include <vector>
#include <array>

#include "../header/storage.hpp"
#include "../header/table_const.hpp"
#include "../header/type.hpp"
#include "../header/getidchar.hpp"
#include "../header/conditions.hpp"

std::string storage::Storage::getType(int id) {
    std::string return_value;

    for(int i = 0x0000; i < ((int)storage_variable.size()); i++) {
        switch(conditions::Fconditions(storage_variable[i].id_table == id)) {
            case conditions::TRUE: {
                if(storage_variable[i].type_table == type::Type_Start) {
                    if(storage_variable[i + 1].type_table == type::Type_Char) {
                        return_value = "string";
                    } else {
                        switch(storage_variable[i + 1].type_table) {
                            case type::Type_Int: {
                                return_value = "int";
                            }
                            break;
                            case type::Type_Float: {
                                return_value = "float";
                            }
                            break;
                            case type::Type_Double: {
                                return_value = "double";
                            }
                            break;
                        }
                    }
                }
            }
            break;
        }
    }
    return return_value;
}

int storage::Storage::getint(int id) {
    int return_value = 1;

    switch(conditions::Fconditions(getType(id) == "int")) {
        case conditions::FALSE: {
            std::cout << "Error Can't Give Int Data" << std::endl;
            return_value = 0;
        }
        break;
    }

    if(return_value) {
        for(int i = 0x0000; i < ((int)storage_variable.size()); i++) {
            switch(conditions::Fconditions(
                (storage_variable[i].id_table == id) &&
                (storage_variable[i + 1].type_table == type::Type_Int))) {
                case conditions::TRUE: {
                    return_value = ((int)storage_variable[i + 1].data_table);
                }
                break;
            }
        }
    }

    return return_value;
}

float storage::Storage::getfloat(int id) {
    float return_value = ((float)1);

    switch(conditions::Fconditions(getType(id) == "float")) {
        case conditions::FALSE: {
            std::cout << "Error Can't Give Floar Data" << std::endl;
            return_value = ((float)0);
        }
        break;
    }

    if(((int)return_value)) {
        for(int i = 0x0000; i < ((int)storage_variable.size()); i++) {
            switch(conditions::Fconditions(
                (storage_variable[i].id_table == id) &&
                (storage_variable[i + 1].type_table == type::Type_Float))) {
                case conditions::TRUE: {
                    return_value = ((float)storage_variable[i + 1].data_table);
                }
                break;
            }
        }
    }

    return return_value;
}

double storage::Storage::getdouble(int id) {
    double return_value = ((double)1);

    switch(conditions::Fconditions(getType(id) == "double")) {
        case conditions::FALSE: {
            std::cout << "Error Can't Give Double Data" << std::endl;
            return_value = ((double)0);
        }
        break;
    }

    if(((int)return_value)) {
        for(int i = 0x0000; i < ((int)storage_variable.size()); i++) {
            switch(conditions::Fconditions(
                (storage_variable[i].id_table == id) &&
                (storage_variable[i + 1].type_table == type::Type_Double))) {
                case conditions::TRUE: {
                    return_value = storage_variable[i + 1].data_table;
                }
                break;
            }
        }
    }

    return return_value;
}

std::string storage::Storage::getstring(int id) {
    bool _check_ = true;
    std::string return_value;

    switch(conditions::Fconditions(getType(id) == "string")) {
        case conditions::FALSE: {
            std::cout << "Error Can't Give String Data" << std::endl;
            _check_ = false;
        }
        break;
    }

    if(_check_) {
        for(int i = 0x0000; i < ((int)storage_variable.size()); i++) {
            if(storage_variable[i + 1].type_table == type::Type_Char) {
                bool its_finish = false;

                while(!its_finish) {
                    switch(storage_variable[i].type_table) {
                        case type::Type_Char: {
                            return_value += getidchar::getchar(
                                (int)storage_variable[i].data_table);
                        }
                        break;
                        case type::Type_End: {
                            its_finish = true;
                        }
                        break;
                    }
                    i++;
                }
                i = ((int)storage_variable.size());
            }
        }
    }

    return return_value;
}