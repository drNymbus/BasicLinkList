#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstddef>

namespace sl {
    template <typename T>
    struct SList {
            T data;
            SList* next;
    };

    template <typename T> sl::SList<T>* create_list(void);
    template <typename T> void free_list(SList<T>* l);
    template <typename T> int size(SList<T>* l);
    template <typename T> T get_data(SList<T>* l);
    template <typename T> SList<T>* get_next(SList<T>* l);

    template <typename T> SList<T>* prepend(SList<T>* l, T value);
    template <typename T> SList<T>* append(SList<T>* l, T value);
    template <typename T> SList<T>* insert_after(SList<T>* l, SList<T>* p, T data);
    template <typename T> SList<T>* insert_before(SList<T>* l, SList<T>* p, T data);
    template <typename T> SList<T>* remove(SList<T>* l, SList<T>* p);
}
// bool operator>(SList* l1, SList* l2);
// bool operator<(SList* l1, SList* l2);
// bool operator==(SList* l1, SList* l2);
// ostream& operator<<(ostream& os, SList* l);
