#ifndef DBMEM_CONDITIONS_HPP
#define DBMEM_CONDITIONS_HPP

namespace conditions {
    enum CONDITIONS_STRUCT {
        FALSE = 0x001,
        TRUE  = 0x002
    };

    typedef enum CONDITIONS_STRUCT Dconditions;

    Dconditions Fconditions(bool conditions_boolean);
};

#endif // DBMEM_CONDITIONS_HPP