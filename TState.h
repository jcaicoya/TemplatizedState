
#ifndef TSTATE_H
#define TSTATE_H


#include <string>
#include <iostream>
#include <algorithm>


template <typename T>
class TState
{
    public:
        void print(const std::string &str);
};


class A{};
class B{};
class C{};


template <>
class TState<A>
{
public:
    void print(const std::string &str) {
       std::cout << str << std::endl;
    }
};


template <>
class TState<B>
{
public:
    void print(const std::string &str) {
        std::string strCopy(str);
        std::transform(str.begin(), str.end(), strCopy.begin(), ::toupper);
        std::cout << strCopy << std::endl;
    }
};


template <>
class TState<C>
{
public:
    void print(const std::string &str) {
        std::string strCopy(str);
        std::transform(str.begin(), str.end(), strCopy.begin(), ::tolower);
        std::cout << strCopy << std::endl;
    }
};



#endif // TSTATE_H
