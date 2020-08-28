
class Base1
{
  void foo();
};

class Base2
{
  void foo(int);
};

class Der : public Base1, public Base2
{
  void bar()
  {
    foo(32);
    // Call to foo here will result in ambiguity
    // It is not related to function overloading
    // In order for it to be function overloading, functions must be in the same scope
    // Here functions are in different scope and compiling gives an error in name-lookup step
  }
};
