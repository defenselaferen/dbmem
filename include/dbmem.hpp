#ifndef BDMEM_HPP
#define BDMEM_HPP

#ifdef __cplusplus
    #include <iostream>
    #include <string>
#endif

class _DBMEM_CLASS_FOR_BRIDGE_ {
    private:
        int id_of_array_ = 0;
    public:
        _DBMEM_CLASS_FOR_BRIDGE_();
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

typedef class _DBMEM_CLASS_FOR_BRIDGE_ Dbmem;

#endif // BDMEM_HPP