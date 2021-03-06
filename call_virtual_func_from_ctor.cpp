
#include <iostream>

class Base
{
  Base()
  {
    foo(); // The derived object is not alive, therefore call to foo here will be statically resolved
  }
  
  virtual void foo() 
  {
    std::cout << "Base::foo()";
  }
};

class Derived : public Base
{
  Derived()
  {
  }
  
  virtual void foo() 
  {
    std::cout << "Derived::foo()";
  }
};
