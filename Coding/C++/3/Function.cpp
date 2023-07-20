#include <iostream>
#include <string>
#include <vector>

using namespace std;

float square(float,float);        //necessary if we want to put the function after the main
            //this has to be the number of variable we pass to the function wich each different type
//thi is the return type
void fun();


void by_ptr(int*);


int globalVar = 0;              //this is a global variable
int main(){
    float y =square(10.1,20.);
    cout<<y<<endl;

    int variable = 1;
    int *pointer = &variable;   //take the pointer position of variable
    by_ptr(pointer);            //pass the pointer
    cout<<"variable: "<<variable<<endl; 

}

float square(float x,float z){
    x = x*x;
    return x;
}

void fun(){

}

void by_ptr(int* ptr) 
{
	*ptr = *ptr + 1;        //add +1 a the pointer where variable is located
}