#include "bll.hpp"

template <typename T> sl::SList<T>* create_list(void) {
    sl::SList<T>* l = new sl::SList<T>;
    if (l != nullptr) {
        l->next = nullptr;
        return l;
    } else {
        std::cerr << "Cannot create list" << std::endl;
        return nullptr;
    }
}

template <typename T> void free_list(sl::SList<T>* l) {
    sl::SList<T>* p = l;
    while (p->next != nullptr) {
        sl::SList<T>* tmp = p->next;
        delete p;
        p = tmp;
    }
    delete p;
}

template <typename T> int sl::size(sl::SList<T>* l);

template <typename T> T sl::get_data(sl::SList<T>* l) {
    if (l == nullptr) {
        std::cerr << "Cannot get data from null pointer" << std::endl;
        return nullptr;
    }
    return l->data;
}

template <typename T> sl::SList<T>* sl::get_next(sl::SList<T>* l) {
    if (l == nullptr) {
        std::cerr << "Cannot get next from null pointer" << std::endl;
        return;
    }
    return l->next;
}

template <typename T> sl::SList<T>* sl::prepend(sl::SList<T>* l, T value);
template <typename T> sl::SList<T>* sl::append(sl::SList<T>* l, T value) {
    sl::SList<T>* p = l;
    while (p->next != nullptr) {
        p = p->next;
    }

    sl::SList<T>* n_node = sl::create_list<T>();
    n_node->data = value;
    p->next = n_node;

    return l;
}

template <typename T> sl::SList<T>* sl::insert_after(sl::SList<T>* l, sl::SList<T>* p, T data);
template <typename T> sl::SList<T>* sl::insert_before(sl::SList<T>* l, sl::SList<T>* p, T data);
template <typename T> sl::SList<T>* sl::remove(sl::SList<T>* l, sl::SList<T>* p);
