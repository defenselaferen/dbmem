#ifndef DBMEM_TYPE_HPP
#define DBMEM_TYPE_HPP

namespace type {
    enum Type_DEBMEM {
        Type_Start = 0x0000,
        Type_End,
        Type_Float,
        Type_Int,
        Type_Double,
        Type_Char,
        Type_NULL
    };

    typedef enum Type_DEBMEM Etype;
};

#endif // DBMEM_TYPE_HPP