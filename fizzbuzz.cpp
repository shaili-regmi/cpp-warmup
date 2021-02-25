// Name: Shaili Regmi
// Date: 2/24/2021

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
   int X, Y, N;
   cin >> X;
   cin >> Y;
   cin >> N;

   for (int i = 1; i <= N; i++)
   {
	   if ((i % X == 0) && (i % Y == 0))
	   {
		   cout << "FizzBuzz" << endl; // Replace integers divisible by both X and Y with Fizzbuzz.
	   }
	   else if (i % X == 0)
	   {
		   cout << "Fizz" << endl; // Replace integers divisible by X with Fizz.
	   }
	   else if (i % Y == 0)
	   {
		   cout << "Buzz" << endl; // Replace integers divisible by Y with Buzz.
	   }
	   else
	   {
		   cout << i << endl;
	   }
   }
   return 0;
}

