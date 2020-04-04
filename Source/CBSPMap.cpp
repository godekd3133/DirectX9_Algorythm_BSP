#include "DXUT.h"
#include "CBSPMap.h"

CBSPMap::CBSPMap()
{
}

CBSPMap::~CBSPMap()
{
}

void CBSPMap::MakeBSPMap(int _iExpansionCount)
{
	m_pMap = new CTreeNode();
	ExpansionTreeNode(m_pMap, _iExpansionCount);

}

void CBSPMap::ExpansionTreeNode(CTreeNode * m_pTreeNode, RECT _reRect,  int _iExpansionCount)
{
	CTreeNode * pChildTreeNode[2];
	pChildTreeNode[0] = new CTreeNode();
	pChildTreeNode[1] = new CTreeNode();

	//������ Ʈ������� �θ��带 ���ڷ� ���� ���� ����
	pChildTreeNode[0]->SetParentTreeNode(m_pTreeNode);
	pChildTreeNode[1]->SetParentTreeNode(m_pTreeNode);

	//�θ����� �¿� Ʈ����带 ������ Ʈ������ ����
	m_pTreeNode->SetLeftTreeNode(pChildTreeNode[0]);
	m_pTreeNode->SetRightTreeNode(pChildTreeNode[1]);

	//�п�Ƚ���� 0�� �ɶ����� �п�
	if (_iExpansionCount >= 1)
	{
		ExpansionTreeNode(pChildTreeNode[0], _iExpansionCount - 1);
		ExpansionTreeNode(pChildTreeNode[1], _iExpansionCount - 1);
	}
}
