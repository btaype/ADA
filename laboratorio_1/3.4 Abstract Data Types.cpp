#include <iostream>

template <typename Type> class CVector
{
private:
	Type* m_pVect=NULL; 
	int m_nCount=0, 
		m_nMax=0, 
		m_nDelta; 
	//void Init(int delta); 
	void Resize(); 
public:
	CVector(int delta = 10); 
	void Insert(Type  elem); 
	
};
template <typename Type> void CVector<Type>::Resize()
{
	Type* pTemp=NULL, i;
	pTemp = new Type[m_nMax + m_nDelta];
	for (i = 0; i < m_nMax; i++)
		pTemp[i] = m_pVect[i];
	delete[] m_pVect;
	m_pVect = pTemp;
	m_nMax += m_nDelta;

}
template <typename Type> CVector<Type>::CVector(int delta)
{
	m_nDelta=delta;
}
template <typename Type> void CVector<Type>::Insert(Type elem)
{
	if (m_nCount == m_nMax)
		Resize();
	m_pVect[m_nCount++] = elem; 
}
int main() {
	CVector<int> p1;
	for (int i = 0; i < 30; i++) {
		p1.Insert(i);
	}
  return 0;
}