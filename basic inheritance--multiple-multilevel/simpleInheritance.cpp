#include <iostream>

using namespace std;

class Animal {

  private:
    string name;
    string food;

  public:
    void setName(string n)
   {
       name= n;
   }

    string getName()
   {
       return name;
   }
};

class Cat: virtual public Animal {
    private:
        string color;
    public:
    void setCatColor(string nc)
   {
       color= nc;
   }

    string getCatColor()
   {
       return color;
   }
};

class Dog: virtual public Animal {
    private:             // Access specifier       // Attribute (int variable)
        string color;

    public:
    void setDogColor(string nd)
   {
       color= nd;
   }

    string getDogColor()
   {
       return color;
   }
};


class Tiger: public Cat, public Dog {
    private:             // Access specifier       // Attribute (int variable)
        string size_;
    public:
    void setTiger(string nd)
   {
       size_= nd;
   }

    string getTiger()
   {
       return size_;
   }
};

int main() {
  Tiger tigerObj ;  // Create an object of MyClass

  // Access attributes and set values
    tigerObj.setName("roy");
    tigerObj.setDogColor("yell");
    tigerObj.setCatColor("grey");
    tigerObj.setTiger("big");
  // Print attribute values
  cout << tigerObj.getName()  << "\n";
  cout << tigerObj.getDogColor()  << "\n";
  cout << tigerObj.getCatColor()  << "\n";
  cout << tigerObj.getTiger()  ;
  return 0;
}
