//
// Created by 蔡宜身 on 2020/12/1.
//
#include <cstring>
#include <iostream>
#include <string>

void cStyleString() {
  char str1[11] = "hello";
  char str2[] = "world";
  char str3[6];
  // copy str1 to str3
  strcpy(str3, str1);
  std::cout << "str3 is: " << str3 << std::endl;

  // concatenates str1 and str2
  strcat(str1, str2);
  std::cout << "strcat(str1, str2) is: " << str1 << std::endl;
  int len = strlen(str1);
  std::cout << "strlen(str1) is: " << len << std::endl;
}

// string class in C++
void cPlusString() {
  std::string str1 = "Hello";
  std::string str2 = "World";
  std::string str3;
  int len;

  // copy str1 to str3
  str3 = str1;
  std::cout << "str3 is: " << str3 << std::endl;

  // concatenates str1 and str2
  str3 = str1 + str2;
  std::cout << "str1 + str2 is : " << str3 << std::endl;

  // total length of str3
  len = str3.size();
  std::cout << "str3.size() :" << len << std::endl;
}