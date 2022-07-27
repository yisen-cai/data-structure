//
// Created by 蔡宜身 on 2020/12/3.
//

#ifndef DATA_STRUCTURE_SCRATCHES_SRC_WINDOWMANAGER_H
#define DATA_STRUCTURE_SCRATCHES_SRC_WINDOWMANAGER_H
#include <string>
#include <vector>
// I think this two classes have to be defined in same file
class Screen;

class WindowManager {
 private:
  // Screens this WindowManager is tracking
  // by default a WindowManager has one standard sized black Screen
  std::vector<Screen> screens;

 public:
  using ScreenIndex = std::string::size_type;
  WindowManager();
  void clear(unsigned long index);

  void hello();

  ScreenIndex addScreen(const Screen &s);
};

// Reference:
// https://www.reddit.com/r/learnprogramming/comments/2gkdji/c_cant_resolve_source_order_dependencies_when/
//#include <string>
//#include <vector>
//
// class Screen;
//
// class Window_mgr {
//    std::vector<Screen> screens;
//  public:
//    using ScreenIndex = std::vector<Screen>::size_type;
//    void clear(ScreenIndex);
//};
//
// class Screen {
//    friend void Window_mgr::clear(Window_mgr::ScreenIndex);
//    std::string contents;
//};
//
// void Window_mgr::clear(ScreenIndex i)
//{
//    screens[i].contents = "";
//}

#endif  // DATA_STRUCTURE_SCRATCHES_SRC_WINDOWMANAGER_H
