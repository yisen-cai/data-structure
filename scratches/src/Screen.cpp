//
// Created by 蔡宜身 on 2020/12/3.
//
#include "Screen.h"
#include "WindowManager.h"

// Screen::Screen(unsigned long Height, unsigned long Width, char c)
//    : height(Height), width(Width), contents(Height * Width, c)
//{
//}

char Screen::get() const
{
    return contents[cursor];
}

char Screen::get(Screen::pos ht, Screen::pos wd) const
{
    return 0;
}

Screen &Screen::move(Screen::pos r, Screen::pos c)
{
    return *this;
}

void Screen::increAccessCtr() const
{
    ++accessCtr;
}

Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

Screen &Screen::set(Screen::pos r, Screen::pos col, char c)
{
    contents[r * width + col] = c;
    return *this;
}

const Screen &Screen::display(std::ostream &os) const
{
    // this way, the continued action can change its contents,
    // myScreen.display(cout).set('*') won't set
    return *this;
}

Screen &Screen::display(std::ostream &os)
{
    return *this;
}

void clear(unsigned long index)
{
}

void WindowManager::clear(unsigned long index)
{
    Screen &s = screens[index];
    s.contents = std::string(s.height * s.width, ' ');
}

WindowManager::WindowManager() : screens{Screen(80, 24)}
{
}

// return type is before we're in the scope of WindowManager, there need to use
// WindowManager:: to access
WindowManager::ScreenIndex WindowManager::addScreen(const Screen &s)
{
    return 0;
}
void WindowManager::hello()
{
}

Screen::Screen(Screen::pos h, Screen::pos w) : height(h), width(w), contents(h * w, ' ')
{
}

//{
//    Screen &s = screens[index];
//    s.contents = std::string(s.height * s.width, ' ');
//}
