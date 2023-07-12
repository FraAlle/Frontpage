#include <iostream>

using namespace std;    //abstract container hold logical unique entities / using namespace is a C++ standard
                        //it's like import functions in python, or u import the namespace generally o u must call it in this way std::cout
                        //std é un oggetto
void pippo(){
  cout << "Hello World";
}

int main(void)
{
  pippo();
  return 1;             //interrupt the function when the code return something
}

