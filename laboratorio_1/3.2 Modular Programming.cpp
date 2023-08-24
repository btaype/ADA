#include <iostream>

struct Vector
{
int*m_pVect=NULL, 
m_nCount=0, 
m_nMax=0, 
m_nDelta=10;
};
void Resize(Vector *p)
{
  int *pTemp, i;
  pTemp = new int[p->m_nMax + p->m_nDelta]; 
  for(i = 0 ; i < p->m_nMax ; i++) 
    pTemp[i] = p->m_pVect[i]; 
  delete [ ] p->m_pVect; 
  p->m_pVect = pTemp;
  p->m_nMax+=p->m_nDelta;
  
}
void Insert(Vector *pThis, int elem)
{
  if( pThis->m_nCount == pThis->m_nMax )
    Resize(pThis); 
  
  pThis->m_pVect[pThis->m_nCount++] = elem;
}


int main() {
  Vector p1;
  for(int i=0;i<30;i++){
    Insert(&p1,i);
  }
  return 0;
  
}