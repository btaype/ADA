#include <iostream>
using namespace std;
int gVect[100]; 
int gnCount=0; 
void Insert(int elem)
{
if( gnCount < 100 ) 
  gVect[gnCount++] = elem; 
}

int main() {
  for(int i=0;i<30;i++){
    Insert(i);
  }
}
