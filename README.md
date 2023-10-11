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

1. You need to have cmake, gdb, g++ and gnu toolkit installed.
2. Use --recurse-submodules command when cloning the repo since it uses the googletest repository as a submodule.
3. Go to the project's root folder. Type the following commands to build the project:
```sh
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
