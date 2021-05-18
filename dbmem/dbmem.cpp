#include <iostream>
#include <string>
#include <vector>

#include "../header/storage.hpp"
#include "../include/dbmem.hpp"

// global variable
int indexing = 0;
std::vector<storage::Storage> _storage_array_;

_DBMEM_CLASS_FOR_BRIDGE_::_DBMEM_CLASS_FOR_BRIDGE_() {
    storage::Storage _TEMP_;
    _storage_array_.push_back(_TEMP_);

    id_of_array_ = indexing;
    indexing += 1;
}

// function add
void _DBMEM_CLASS_FOR_BRIDGE_::add_integer(int value_of_int) {
    _storage_array_[id_of_array_].add_integer(value_of_int);
}

void _DBMEM_CLASS_FOR_BRIDGE_::add_float(float value_of_float) {
    _storage_array_[id_of_array_].add_float(value_of_float);
}

void _DBMEM_CLASS_FOR_BRIDGE_::add_double(double value_of_double) {
    _storage_array_[id_of_array_].add_double(value_of_double);
}

void _DBMEM_CLASS_FOR_BRIDGE_::add_string(std::string value_of_string) {
    _storage_array_[id_of_array_].add_string(value_of_string);
}

// function for delete
void _DBMEM_CLASS_FOR_BRIDGE_::clean_all() {
    _storage_array_[id_of_array_].clean_all();
}

void _DBMEM_CLASS_FOR_BRIDGE_::delete_data(int id) {
    _storage_array_[id_of_array_].delete_data(id);
}

// function get data
std::string _DBMEM_CLASS_FOR_BRIDGE_::getType(int id) {
    return _storage_array_[id_of_array_].getType(id);
}

int _DBMEM_CLASS_FOR_BRIDGE_::getint(int id) {
    return _storage_array_[id_of_array_].getint(id);
}

float _DBMEM_CLASS_FOR_BRIDGE_::getfloat(int id) {
    return _storage_array_[id_of_array_].getfloat(id);
}

double _DBMEM_CLASS_FOR_BRIDGE_::getdouble(int id) {
    return _storage_array_[id_of_array_].getdouble(id);
}

std::string _DBMEM_CLASS_FOR_BRIDGE_::getstring(int id) {
    return _storage_array_[id_of_array_].getstring(id);
}