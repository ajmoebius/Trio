//Author:Aaron Moebius

#include <iostream>
#include<vector>
using namespace std;


// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void rearrange(int&, int&, int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  rearrange(red, green, blue);  

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE

void rearrange(int &one, int &two, int &thr)
{
  vector<int>order;
  
  order.push_back(one);
  order.push_back(two);
  order.push_back(thr);
  int biggest=0;
  int second=0;
  int third;
  for(int index = 0; index < 3; index++)
  {
    if(order[index] > biggest)
    {
      biggest = order[index];
    }
  }
  
  for(int index = 0; index < 3; index++)
  {
    if(order[index] != biggest && order[index] > second)
    {
      second = order[index];
    }
  }

  
  for(int index = 0; index < 3; index++)
  {
    if(order[index]!= biggest && order[index] != second)
    {
      third = order[index];
    }
  }

  one = biggest;
  two = second;
  thr = third;

}
