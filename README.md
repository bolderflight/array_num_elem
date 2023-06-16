[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

![Bolder Flight Systems Logo](img/logo-words_75.png) &nbsp; &nbsp; ![Arduino Logo](img/arduino_logo_75.png)

# ArrayNumElem
This library contains a function for computing the number of elements in a C-style array, which is useful for looping through the array. This library is compatible with Arduino and with CMake build systems. It would also be easy to include with other projects, since it is a header only library.
   * [License](LICENSE.md)
   * [Changelog](CHANGELOG.md)
   * [Contributing guide](CONTRIBUTING.md)

# Installation

## Arduino
Use the Arduino Library Manager to install this library or clone to your Arduino/libraries folder. This library is added as:

```C++
#include "array_num_elem.h"
```

An example Arduino executable is located at *examples/arduino/array_num_elem_ex/array_num_elem_ex.ino*. Teensy 3.x, 4.x, and LC devices are used for testing under Arduino and this library should be compatible with other devices.

## CMake
CMake is used to build this library, which is exported as a library target called *array_num_elem*. The header is added as:

```C++
#include "array_num_elem.h"
```

The library can be also be compiled stand-alone using the CMake idiom of creating a *build* directory and then, from within that directory issuing:

```
cmake ..
make
```

This will build the library, an example executable called *array_num_elem_example*, and an executable for testing using the Google Test framework, called *array_num_elem_test*. The example executable source file is located at *examples/cmake/array_num_elem_ex.cc*.

# Namespace
This library is within the namespace *bfs*.

# Functions

**size_t ArrayNumElem(const T (&array)[N])** Returns the number of array elements given a reference to a C-style array. Templated based on the type.

```C++
int8_t int_array[42];
float float_array[13];
double double_array[56];
std::cout << bfs::ArrayNumElem(int_array) << std::endl;  // 42
std::cout << bfs::ArrayNumElem(float_array) << std::endl;  // 13
std::cout << bfs::ArrayNumElem(double_array) << std::endl;  // 56
```
