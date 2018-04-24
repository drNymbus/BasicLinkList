#include "bll.hpp"

template<typename T> SList<T>::SList() {
    &SList::data = new T;
}

template<typename T> SList<T>::SList(SList* l) {
    // SList* p = l;
    // while (p.next() != nullptr) {
    //
    // }
}
template<typename T> SList<T>::SList(T& object);
template<typename T> SList<T>::~SList();

template<typename T> void SList<T>::setData(T& value) {
    SList::data = value;
}
template<typename T> T SList<T>::getData() {
    return SList::data;
}

template<typename T> void SList<T>::setNext(SList* n) {
    SList::next = n;
}

template<typename T> SList* SList<T>::getNext() {
    return SList::next;
}

template<typename T> int SList<T>::size() {
    unsigned int count = (SList::data) ? 1 : 0;
    SList* p = SList::next;
    while (p.getNext() != nullptr) {
        count++;
        p = p.getNext();
    }
    return count;
}

template<typename T> SList* SList<T>::prepend(T& value);
template<typename T> SList* SList<T>::append(T& value);
template<typename T> SList* SList<T>::swap(SList* s);
template<typename T> SList* SList<T>::makeRoundList();

bool operator>(SList* l1, SList* l2) {
    if (l1.size() > l2.size()) return true;
    return false;
}
bool operator<(SList* l1, SList* l2) {
    if (l1.size() < l2.size()) return true;
    return false;
}
bool operator==(SList* l1, SList* l2) {
    if (l1.size() == l2.size()) return true;
    return false;
}

ostream& operator<<(ostream& os, SList* l) {
    SList* p = l;
    os << p.getData(); p = p.getNext();
    while (p.getNext() != nullptr) {
        os << ", ";
        os << l.data();
    }
    return os;
}

int main() {
    SList<int> l;
    l.append(5);
    l.append(6);
    // cout << l << endl;
    l.prepend(1);
    // cout << l << endl;
    return 0;
}
