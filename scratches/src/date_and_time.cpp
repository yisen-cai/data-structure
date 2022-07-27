//
// Created by 蔡宜身 on 2020/12/1.
//
#include <ctime>
#include <iostream>

void useTimeStruct() {
  // current date/time based on current system
  time_t now = time(0);

  // covert now to string form
  char *dt = ctime(&now);
  std::cout << "hello" << std::endl;

  // convert now to tm struct for UTC
  tm *gmtm = gmtime(&now);
  dt = asctime(gmtm);
  std::cout << "The UTC date and time is: " << dt << std::endl;

  std::cout << "Number of sec since January 1,1970 is::" << now << std::endl;

  // Format Time using struct tm
  tm *ltm = localtime(&now);

  // output each property
  std::cout << "Year: " << 1900 + ltm->tm_year << std::endl;
  std::cout << "Month: " << 1 + ltm->tm_mon << std::endl;
  std::cout << "Day: " << ltm->tm_mday << std::endl;
  std::cout << "Time: " << 5 + ltm->tm_hour << ":";
  std::cout << 30 + ltm->tm_min << ":";
  std::cout << ltm->tm_sec << std::endl;
}