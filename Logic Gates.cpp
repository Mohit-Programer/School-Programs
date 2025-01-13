
#include<iostream>
using namespace std;

//                           List of Funtion created
//                          -------------------------

int AND_gate(int a,int b);
int OR_gate(int a,int b);
int NAND_gate(int a,int b);
int NOR_gate(int a,int b);
int XOR_gate(int a,int b);
int XNOR_gate(int a,int b);

//                       Funtion of logic Gate of 2 state
//                      ----------------------------------

int AND_gate(int a,int b)
{
  return a &b ;
 } 

int OR_gate(int a,int b)
{
  return a | b ;
 }  

int NAND_gate(int a, int b)
{
  return !(a & b);
 }  

int NOR_gate(int a, int b)
{
  return !(a | b );
 } 

int XOR_gate(int a, int b)
{
  return a ^ b ;
 } 

int XNOR_gate(int a, int b)
{
  return !(a ^ b) ;
 } 

//                            Main Menu
//                           -----------                    

 int main()
 {
  cout <<" A\tB\tA & B\tA | B\tA !& B\tA !| B\tA ^ B\tA !^ B " << endl;
  cout <<" -------------------------------------------------------------------- " << endl;

  for (int A=0 ; A<=1 ; A++)
  {
    for (int B=0 ; B<=1 ; B++)
    {
      cout << " "<< A << "\t" << B << "\t  " 
           << AND_gate(A,B) << "\t  " 
           << OR_gate(A,B) << "\t  "
           << NAND_gate(A,B) << "\t  "
           << NOR_gate(A,B) << "\t  "
           << XOR_gate(A,B) << "\t  "
           << XNOR_gate(A,B) << "\t  "
           << endl;
     }
   }
  return 0;
 }
