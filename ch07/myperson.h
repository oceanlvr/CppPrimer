// 7.15
#ifndef MY_PEARSON
#define MY_PEARSON

#include <iostream>
#include <string>

struct Person;
std::istream& read(std::istream&, Person&);

struct Person {
    Person() = default;
    Person(const std::string sname, const std::string saddr) : name(sname), address(saddr) {}
    Person(std::istream& is) { read(is, *this); }
    // const成员函数
    std::string getName() const { return name; }
    std::string getAdress() const { return address; }

    std::string name;
    std::string address;
};

std::istream& read(std::istream& is, Person& person)
{
    is >> person.name >> person.address;
    return is;
}
std::ostream& print(std::ostream& os, Person& person)
{
    os << person.name << person.address;
    return os;
}

#endif