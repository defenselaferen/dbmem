# dbmem

This project support for: windows, linux
Simple Database Memory Made In C++

## Compile

### Windows
How to compile in windows. You need Visual Studio C++ For Compile.
Open file (.sln). Or open project in Visual Studio C++. And Compile
With Button Build.

### Linux
How to compile in linux. You need compile g++. If you don't have
compile g++ run this script in to you'r terminal `$ sudo apt install g++`.
You must have make tools. run `$ make` for compile.

## How To Using

### Class
How to using dbmem in you're script C++. the first you must declared
class Dbmem. for example on you're script.
```CPP
#include <iostream>
#include <dbmem.hpp>

int main(int argc, const char* argv[]) {
  Dbmem* db = new Dbmem();
  
  return 0;
}
```

### Function Insert
How to using insert function of class Dbmem. For this section function for
Insert data it's: `add_integer`, `add_float`, `add_double`, `add_string`.
Parameter of that's function.
```CPP
void add_integer(int value_of_int);
void add_float(float value_of_float);
void add_double(double value_of_double);
void add_string(std::string value_of_string);
```

How to using it. For example:
```CPP
#include <iostream>
#include <dbmem.hpp>

int main(int argc, const char* argv[]) {
  Dbmem* db = new Dbmem();
  
  // integet insert function
  db->add_integer(10);
  
  // integet insert function
  db->add_float(12.3);
  
  // integet insert function
  db->add_double(23.342);
  
  // integet insert function
  db->add_string("Hello, World!");
  
  return 0;
}
```

### Function Get
How to get data in Dbmem. The first this library like array. The first id start in zero number.
The list function of Dbmem it's: `getType`, `getint`, `getfloat`, `getdouble`, `getstring`. If
you won't get data. The first you will need to check the data it's int, double, float, or string.
If you won't get data string but you using integer get function. The compile not display error.
But after compile and you run the program the data can't be display.
The parameter of that's function it's:
```CPP
std::string getType(int id);
int getint(int id);
float getfloat(int id);
double getdouble(int id);
std::string getstring(int id);
```

For example. How to using function get of Dbmem:
```CPP
#include <iostream>
#include <dbmem.hpp>

int main(int argc, const char* argv[]) {
  Dbmem* db = new Dbmem();
  
  // integet insert function
  db->add_integer(10);
  
  // integet insert function
  db->add_string("Hello, World!");
  
  std::cout << db->getint(0) << std::endl;
  std::cout << db->getstring(1) << std::endl;
  
  return 0;
}
```


### Function Delete
If yout won't delete data you can using function `delete_data`. But if you won't delete all data.
You can using function `clean_all`. The parameter of that's function:
```CPP
void clean_all();
void delete_data(int id);
```

For example for using it:
```CPP
#include <iostream>
#include <dbmem.hpp>

int main(int argc, const char* argv[]) {
  Dbmem* db = new Dbmem();
  
  // integet insert function
  db->add_integer(10);
  
  // integet insert function
  db->add_string("Hello, World!");
  
  db->delete_data(1);
  db->clean_all();
  
  return 0;
}
```
