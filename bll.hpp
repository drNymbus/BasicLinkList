#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

template<typename T>
class SList {
    public:
        SList();
        SList(SList* l);
        SList(T& object);
        ~SList();

        void setData(T& value);
        T getData(SList* l);
        void setNext(SList* next);
        SList* getNext(SList* l);
        int size(SList* l);
        SList* prepend(SList* l, T& value);
        SList* append(SList* l, T& value);
        SList* swap(SList* s);
        SList* makeRoundList();

        // bool operator>(SList* l1, SList* l2);
        // bool operator<(SList* l1, SList* l2);
        // bool operator==(SList* l1, SList* l2);
        // ostream& operator<<(ostream& os, SList* l);

    private:
        T& data;
        SList* next = nullptr;
};
