# C++ Technology Template
### by Harsh Jalutharia and Elijah Whittle

***

### Features

- **Programming Language:** C++
- **Build System Generator:** Cmake
- **Toolchain:** GNU Toolchain (gcc, gdb etc.)
- **Testing Framework:** GoogleTest
- **Continuous Integration:** CircleCI
- **Static Analysis:** clang-tidy
- **Code Formatting:** clang-format
- **Package Manager:** None
- **License:** GNU GPLv3

### Instructions

1. You need to have git, cmake, gdb, g++, make (gnu toolkit) installed.
2. Don't download the code as a zip. Clone the repo and use "--recurse-submodules" when cloning since it uses the googletest repository as a submodule.
```sh
git clone --recurse-submodules https://github.com/harshjalutharia/cpp_template_v3.git
```
3. Go to the project's root folder. Type the following commands to build the project:
```sh
mkdir build
cd build
cmake ..
make
```
4. This will create 2 files, one called Main and the other called tests.
5. You can run either of them using the following commands:
```sh
./Main
./tests
```
