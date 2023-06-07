#include<iostream>
using namespace std;
class Animal{
public:
    void eat() {
    cout<<"***********Eating *************This is from from base class"<<endl;
    }
};
class Dog:public Animal{
public:
    void bark() {
    cout<<"***********Dog *************  is barking This is from Derived class";
    }
};
int main() {
    Dog d1;
    d1.bark();
    cout<<"\n";
    d1.eat();

    return 0;
}
