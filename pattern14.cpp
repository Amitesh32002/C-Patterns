#include<iostream>

using namespace std;
// ----1
// ---1 2
// --1 2 3
// -1 2 3 4
// 1 2 3 4 5
int main()
{
   int row;
   cout<<"Enter row:";
   cin>>row;

   for (int i = 1; i <= row; i++)
   {
       for(int j = row ; j >i; j--)
       {
           cout<<"-";
       }
       for (int j = 1; j <=i; j++)
       {
           cout<<j<<" ";
       }
       cout<<endl;
       
   }
   

}