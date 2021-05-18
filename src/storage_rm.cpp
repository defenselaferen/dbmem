#include <iostream>
#include <string>
#include <vector>

#include "../header/storage.hpp"
#include "../header/table_const.hpp"
#include "../header/type.hpp"
#include "../header/getidchar.hpp"
#include "../header/conditions.hpp"

void storage::Storage::clean_all() {
    storage_variable.clear();
}

void storage::Storage::delete_data(int id) {
    std::vector<table_const::STable> storage_variable_temp;

    for(int i = 0x0000; i < ((int)storage_variable.size()); i++) {
        switch(conditions::Fconditions(storage_variable[i].id_table == id)) {
            case conditions::FALSE: {
                storage_variable_temp.push_back(storage_variable[i]);
            }
            break;
        }
    }

    clean_all();

    for(int i = 0x0000; i < ((int)storage_variable_temp.size()); i++) {
        storage_variable.push_back(storage_variable_temp[i]);
    }
}