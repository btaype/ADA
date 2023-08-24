
#include <iostream>
using namespace std;
class CVector
{
private:
    int* m_pVect=NULL,
    m_nCount = 0,
    m_nMax = 0,
    m_nDelta;
    //void Init(int delta);
    void Resize();

public:
    CVector();
    void Insert(int elem);
    
};
CVector::CVector() {
    
    m_nDelta=10;
}
void CVector::Insert(int elem)
{
    //cout << m_nMax<<'\n';
    if (m_nCount == m_nMax)
        Resize();
    m_pVect[m_nCount++] = elem;
}
void CVector::Resize()
{
    int* pTemp, i;
    pTemp = new int[m_nMax + m_nDelta];
    for (i = 0; i < m_nMax; i++)
        pTemp[i] = m_pVect[i];
    delete[] m_pVect;
    m_pVect = pTemp;
    m_nMax += m_nDelta;

}
int main() {
    CVector p1;
    for (int i = 0; i < 30; i++) {
        p1.Insert(i);
    }
    return 0;
}