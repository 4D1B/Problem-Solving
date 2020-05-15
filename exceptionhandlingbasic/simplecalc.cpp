#include <iostream>

using namespace std;


class Calculator {

  private:
     int num1; int num2; int result;

  public:
    void setN1(int n1)
   {
       num1= n1;
   }

    void setN2(int n2)
   {
       num2= n2;
   }


   int sum()
   {
       if((num1 == 0)||(num2 == 0)) {
            throw "Division by zero condition!";
        }
       result= num1 + num2;
       return result;
   }
   int div()
   {
        if((num1 == 0)||(num2 == 0)) {
            throw "Division by zero condition!";
        }
       result = num1/num2;
       return result;
   }

};

int main()
{
    int num1,num2;

    cin >>num1 ;
    cin >>num2 ;
    Calculator c1 ;
    c1.setN1(num1);
    c1.setN2(num2);

    cout <<"division result is "<<  c1.div() << endl;
     cout <<" sum result is "<< c1.sum() << endl;
    return 0;
}
