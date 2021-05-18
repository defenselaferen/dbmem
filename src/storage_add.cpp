#include <iostream>
#include <string>
#include <vector>

#include "../header/storage.hpp"
#include "../header/table_const.hpp"
#include "../header/type.hpp"
#include "../header/getidchar.hpp"

void storage::Storage::add_integer(int value_of_int) {
    {
        #ifdef COMPILER_NOT_VSCODE
            table_const::STable Start_Table_Type = {
                .id_table = id_table_now,
                .type_table = type::Type_Start,
                .data_table = 1
            };
        #else
            table_const::STable Start_Table_Type;
            Start_Table_Type.id_table = id_table_now;
            Start_Table_Type.type_table = type::Type_Start;
            Start_Table_Type.data_table = 1;
        #endif // COMPILER_NOT_VSCODE

        storage_variable.push_back(Start_Table_Type);
    }

    #ifdef COMPILER_NOT_VSCODE
        table_const::STable Insert_Data = {
            .id_table   = id_table_now,
            .type_table = type::Type_Int,
            .data_table = ((double)value_of_int)
        };
    #else
        table_const::STable Insert_Data;
        Insert_Data.id_table = id_table_now;
        Insert_Data.type_table = type::Type_Int;
        Insert_Data.data_table = ((double)value_of_int);
    #endif

    storage_variable.push_back(Insert_Data);

    {
        #ifdef COMPILER_NOT_VSCODE
            table_const::STable End_Table_Type = {
                .id_table   = id_table_now,
                .type_table = type::Type_End,
                .data_table = type::Type_NULL
            };
        #else
            table_const::STable End_Table_Type;
            End_Table_Type.id_table = id_table_now;
            End_Table_Type.type_table = type::Type_End;
            End_Table_Type.data_table = type::Type_NULL;
        #endif

        storage_variable.push_back(End_Table_Type);
    }
    id_table_now += 1;
}

void storage::Storage::add_float(float value_of_float) {
    {
        #ifdef COMPILER_NOT_VSCODE
            table_const::STable Start_Table_Type = {
                .id_table   = id_table_now,
                .type_table = type::Type_Start,
                .data_table = 1
            };
        #else
            table_const::STable Start_Table_Type;
            Start_Table_Type.id_table = id_table_now;
            Start_Table_Type.type_table = type::Type_Start;
            Start_Table_Type.data_table = 1;
        #endif

        storage_variable.push_back(Start_Table_Type);
    }

    #ifdef COMPILER_NOT_VSCODE
        table_const::STable Insert_Data = {
            .id_table   = id_table_now,
            .type_table = type::Type_Float,
            .data_table = ((double)value_of_float)
        };
    #else
        table_const::STable Insert_Data;
        Insert_Data.id_table = id_table_now;
        Insert_Data.type_table = type::Type_Float;
        Insert_Data.data_table = ((double)value_of_float);
    #endif

    storage_variable.push_back(Insert_Data);

    {
        #ifdef COMPILER_NOT_VSCODE
            table_const::STable End_Table_Type = {
                .id_table   = id_table_now,
                .type_table = type::Type_End,
                .data_table = type::Type_NULL
            };
        #else
            table_const::STable End_Table_Type;
            End_Table_Type.id_table = id_table_now;
            End_Table_Type.type_table = type::Type_End;
            End_Table_Type.data_table = type::Type_NULL;
        #endif

        storage_variable.push_back(End_Table_Type);
    }
    id_table_now += 1;
}

void storage::Storage::add_double(double value_of_double) {
    {
        #ifdef COMPILER_NOT_VSCODE
            table_const::STable Start_Table_Type = {
                .id_table   = id_table_now,
                .type_table = type::Type_Start,
                .data_table = 1
            };
        #else
            table_const::STable Start_Table_Type;
            Start_Table_Type.id_table = id_table_now;
            Start_Table_Type.type_table = type::Type_Start;
            Start_Table_Type.data_table = 1;
        #endif

        storage_variable.push_back(Start_Table_Type);
    }

    #ifdef COMPILER_NOT_VSCODE
        table_const::STable Insert_Data = {
            .id_table   = id_table_now,
            .type_table = type::Type_Double,
            .data_table = ((double)value_of_double)
        };
    #else
        table_const::STable Insert_Data;
        Insert_Data.id_table = id_table_now;
        Insert_Data.type_table = type::Type_Double;
        Insert_Data.data_table = ((double)value_of_double);
    #endif

    storage_variable.push_back(Insert_Data);

    {
        #ifdef COMPILER_NOT_VSCODE
            table_const::STable End_Table_Type = {
                .id_table   = id_table_now,
                .type_table = type::Type_End,
                .data_table = type::Type_NULL
            };
        #else
            table_const::STable End_Table_Type;
            End_Table_Type.id_table = id_table_now;
            End_Table_Type.type_table = type::Type_End;
            End_Table_Type.data_table = type::Type_NULL;
        #endif

        storage_variable.push_back(End_Table_Type);
    }
    id_table_now += 1;
}

void storage::Storage::add_string(std::string value_of_string) {
    {
        #ifdef COMPILER_NOT_VSCODE
            table_const::STable Start_Table_Type = {
                .id_table   = id_table_now,
                .type_table = type::Type_Start,
                .data_table = ((double)value_of_string.length())
            };
        #else
            table_const::STable Start_Table_Type;
            Start_Table_Type.id_table = id_table_now;
            Start_Table_Type.type_table = type::Type_Start;
            Start_Table_Type.data_table = ((double)value_of_string.length());
        #endif

        storage_variable.push_back(Start_Table_Type);
    }

    for(unsigned int i = 0x0000; i < value_of_string.length(); i++) {
        #ifdef COMPILER_NOT_VSCODE
            table_const::STable Character_TEMP = {
                .id_table   = id_table_now,
                .type_table = type::Type_Char,
                .data_table = ((double)getidchar::getid(value_of_string[i]))
            };
        #else
            table_const::STable Character_TEMP;
            Character_TEMP.id_table = id_table_now;
            Character_TEMP.type_table = type::Type_Char;
            Character_TEMP.data_table = ((double)getidchar::getid(value_of_string[i]));
        #endif


        storage_variable.push_back(Character_TEMP);
    }

    {
        #ifdef COMPILER_NOT_VSCODE
            table_const::STable End_Table_Type = {
                .id_table   = id_table_now,
                .type_table = type::Type_End,
                .data_table = type::Type_NULL
            };
        #else
            table_const::STable End_Table_Type;
            End_Table_Type.id_table = id_table_now;
            End_Table_Type.type_table = type::Type_End;
            End_Table_Type.data_table = type::Type_NULL;
        #endif

        storage_variable.push_back(End_Table_Type);
    }
    id_table_now += 1;
}