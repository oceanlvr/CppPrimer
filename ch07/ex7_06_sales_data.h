#ifndef CP5_ex7_06_h
#define CP5_ex7_06_h

#include <iostream>
#include <string>

// added add, read, print functions
struct Sales_data {
    // const 函数
    std::string const& isbn() const { return bookNo; };
    // 不适合定义成类的函数
    Sales_data& combine(const Sales_data&);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// member functions.
//成员函数
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// nonmember functions
//非成员函数
std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

//非成员函数
std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

//非成员函数
Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

#endif