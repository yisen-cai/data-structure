## Data structure

> Using googletest as test module, testing every single data structure implement function.

[Reference](https://www.jetbrains.com/help/clion/creating-google-test-run-debug-configuration-for-test.html#add-google-tests)


#### Source structure

- src: include all data structure implement

- tests: include all tests, every single test file correspond to src file, and test module name start with Test*

- googletest: 
  This repo using git submodule to manage its googletest dependency.

- spdlog:
  C++ log library.

- hello

  This is a library test

- scratches

  Review C++ grammar, explore C++ features.

~~~bash
# submodule usage
$ git submodule init
$ git submodule add https://github.com/google/googletest.git googletest-src
# cloned repo and udpate the submodule 
$ git submodule init && git submodule update
~~~



#### Build steps

> Using cmake to build project

~~~bash
$ mkdir build && cd build
$ cmake build ..
$ make

# run all tests
$ ./google-test-run

# run application
$ ./data-structure
~~~



#### clang-format usage

> Using clang-format to format code

~~~bash
# generate clang-format config file, and then use clion config format
$ clang-format -style=llvm -dump-config > .clang-format
~~~

#### Open in Visual Studio

~~~powershell
PS> mkdir build && cd build
PS> cmake ..
PS> explorer.exe data_structure.sln
# then it will load all structure, if we want to see file structure in Solution Explorer, click Switch Views
~~~