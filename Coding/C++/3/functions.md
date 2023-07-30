#FUNCTIONS
parameters passed by refer can be changed inside the functions.
U can use functions with pointers, in this case u will perform an parameter by value but it will be changeble bc we work with the posistion of the memory of that variable.
u can omit the parameters that are sets in the function definition. f.e. void new_greet(string greet, int repeats = 1) when the function in called there is no need to insert both values bc the second is already set as 1.

#INLINE
It's type of function that works differently. Normally the functions are stored and analized from the pc before the main, and each time we call it, the pc must go to the function pointer and get the result, this operation need time, for that, in case that function is called a lot of time it will take some time to be executed completly.
There is another way to avoid that, we can create little functions and make them work faster than a large one and make the code write it each time we invoke it. These kinda functions are called INLINE FUNCTIONS.
And is set just adding before the type the keywoard "inline".

#OVERLOADED
This happens when we want to create 2 differents function using the same name, in this case will be executed the little one first and then the largest utilizing this call max(max(a,b),c).
Another usage is depending on the chosing the best candidate by the data we pass to the function. If we have two function one that accept float and one that accept int and we pass an int variable, will be chose the function with the int variable, and viceversa.
void play_with_number(int x)        //this one will be the function selected
{
	...
}

void play_with_number(float x)
{
	...
}

play_with_number(1);

Another inside on the overloaded functions: the C++ code will try to promote the types if there isn't one exactly compatible, for example it will transform an float into double, but not a double into float. IT'S ONLY PROMOTION USAGE. But we can bypass that if we convince the compiler that the value we are passing is in the exact type we want by using this play_with_number(1.f); the f will tell the compiler that we are passing an float number type.