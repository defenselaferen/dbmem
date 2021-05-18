#ifndef DBMEM_STORAGE_HPP
#define DBMEM_STORAGE_HPP

#ifdef __cplusplus
    #include <iostream>
    #include <vector>
    #include <string>
#endif

#include "table_const.hpp"

namespace storage {
    class Storage {
        private:
            std::vector<table_const::STable> storage_variable;
            int id_table_now = 0;
        public:
            // function add
            void add_integer(int value_of_int);
            void add_float(float value_of_float);
            void add_double(double value_of_double);
            void add_string(std::string value_of_string);
        public:
            // function for delete
            void clean_all();
            void delete_data(int id);
        public:
            // function get data
            std::string getType(int id);
            int getint(int id);
            float getfloat(int id);
            double getdouble(int id);
            std::string getstring(int id);
    };
};

#endif // DBMEM_STORAGE_HPP