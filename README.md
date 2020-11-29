## Data structure

> Using googletest as test module, testing every single data structure implement function.

[Reference](https://www.jetbrains.com/help/clion/creating-google-test-run-debug-configuration-for-test.html#add-google-tests)


#### Source structure

- src: include all data structure implement
- tests: include all tests, every single test file correspond to src file, and test module name start with Test*
- googletest-src: 
This repo using git submodule to manage its googletest dependency
~~~bash
# submodule usage
$ git submodule init
$ git submodule add https://github.com/google/googletest.git googletest-src
~~~


#### Build steps

> Using cmake to build project

~~~bash
$ mkdir build && cd build
$ cmake build ..
$ make

# run all tests
$ ./Google_Tests_run

# run application
$ ./data_structure
~~~

#### clang-format usage

> Using clang-format to format code

~~~bash
# generate clang-format config file
$ clang-format -style=llvm -dump-config > .clang-format
~~~