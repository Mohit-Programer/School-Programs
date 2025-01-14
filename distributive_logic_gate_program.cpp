
#include<iostream>
using namespace std;

//                           List of Funtion created
//                          -------------------------
 
int First(int a,int b);
int Second(int a,int b,int c);
int Third(int a,int b);
int Fourth(int a,int b);
int Fiveth(int a,int b,int c);


//                       Funtion of logic Gate of 3 state
//                      ----------------------------------
 
int First(int b,int c)
{
	return b|c;
 } 

int Second(int a,int b,int c)
{
	return a&(b|c);
 }  
 
int Third(int a, int b)
{
	return a&b;
 }  

int Fourth(int a, int c)
{
	return a&c;
 } 

int Fiveth(int a, int b,int c)
{
	return (a&b)|(a&c);
 } 
 
//                            Main Menu
//                           -----------                    
  
 int main()
 {
 	cout <<" A\tB\tC\tB+C\tA(B+C)\tAB\tAC\tAB+AC" << endl;
 	cout <<" -------------------------------------------------------------------- " << endl;

 	for (int A=0 ; A<=1 ; A++)
 	{
 		for (int B=0 ; B<=1 ; B++)
 		{
 			for (int C=0 ; C<=1 ; C++)
 			{
 					cout << " "<< A << "\t" << B << "\t"  << C  << "\t "
 			     << First(B,C) << "\t  " 
 			     << Second(A,B,C) << "\t"
 			     << Third(A,B) << "\t"
 			     << Fourth(A,C) << "\t  "
 			     << Fiveth(A,B,C) << "\t"
 			     << endl;
 			 }
		 }
	 }
 	return 0;
 }