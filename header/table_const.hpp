#ifndef DBMEM_TABLE_CONST_HPP
#define DBMEM_TABLE_CONST_HPP

#include "type.hpp"

namespace table_const {
    struct Table_DEBMEM {
        int id_table;
        type::Etype type_table;
        double data_table;
    };

    typedef struct Table_DEBMEM STable;
};

#endif // DBMEM_TABLE_CONST_HPP