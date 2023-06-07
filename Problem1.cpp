
#include<iostream>
using namespace std;
class Account {
 public:
     float salary = 60000;
};
class Programer: public Account{
 public:
     float bonus = 500;
};
int main() {
 Programer p1;
 cout<<"Salary is:"<<p1.salary<<endl;
 cout<<"Bonus is :"<<p1.bonus<<endl;

 return 0;
}
