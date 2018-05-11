#include "bll.hpp"
#include <iostream>

int main(void) {
    sl::SList<int>* l = sl::create_list<int>();

    l = sl::append(l, 3);
    l = sl::append(l, 4);

    std::cout << l << std::endl;

    l = sl::prepend(l, 2);
    l = sl::prepend(l, 1);

    std::cout << l << std::endl;

    sl::free_list(l);

    sl::SList<char>* c = sl::create_list<char>();
    c = sl::insert_before(c, get_next(c), 't');
    std::cout << c << std::endl;

    c = sl::insert_after(c, get_next(c), 'o');
    std::cout << c << std::endl;

    sl::free_list(c);

    return 0;
}
