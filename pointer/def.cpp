#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;
    // 1. pointer variable
    int *pa = &a;
    printf("a = %#X, pa = %#X\n", &a, pa);

    // 2. dereference
    *pa = 7;
    cout << "a = " << a << ", *pa = " << *pa << endl;

    //*&a = *(&a) = *pa = a
    //&*pa = &(*pa) = &a = pa
    cout << *&a << endl;
    cout << &*pa << endl;
    cout << "--------------------------------" << endl;

    // empty pointer
    // int *p = NULL;
    // cout << "*p = " << *p << endl;

    // // wild pointer
    // int *p1 = (int *)0x1100;
    // cout << "*p1 = " << *p1 << endl;

    // Constant pointer: pointer itself cannot change its target, but can modify the value it points to
    a =1;
    b =2;
    int * const p = &a;
    // p = &b; error
    *p = 10;
    cout << "a = " << a << ", *p = " << *p << endl;
    cout << "--------------------------------" << endl;

    // Pointer to constant: cannot modify the value it points to, but pointer can point to other variables
    a =1;
    b =2;
    const int *p2 = &a;
    //*p2 = 10; error
    p2 = &b;
    cout << "a = " << a << ", *p2 = " << *p2 << endl;

    // Constant pointer to constant: neither pointer nor value can be modified
    a=10;
    b=20;
    const int * const p3 = &a;
    //*p3 = 6; error
    //p3 = &b; error

    cout << "--------------------------------" << endl;

    int arr[5] = {1,2,3,4,5};
    int *p4 = arr;
    cout << "p4 = " << p4 << endl;
    cout << "*p4 = " << *p4 << endl;
    cout << "p4[0] = " << p4[0] << endl;
    cout << p4 + 1 << endl;
    cout << "arr[0] = " << arr[0] << endl;
    cout << "p4[1] = " << p4[1] << endl;
    cout << "arr[1] = " << arr[1] << endl;


}