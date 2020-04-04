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

	//생성한 트리노드의 부모노드를 인자로 받은 노드로 설정
	pChildTreeNode[0]->SetParentTreeNode(m_pTreeNode);
	pChildTreeNode[1]->SetParentTreeNode(m_pTreeNode);

	//부모노드의 좌우 트리노드를 생성한 트리노드로 설정
	m_pTreeNode->SetLeftTreeNode(pChildTreeNode[0]);
	m_pTreeNode->SetRightTreeNode(pChildTreeNode[1]);

	//분열횟수가 0이 될때까지 분열
	if (_iExpansionCount >= 1)
	{
		ExpansionTreeNode(pChildTreeNode[0], _iExpansionCount - 1);
		ExpansionTreeNode(pChildTreeNode[1], _iExpansionCount - 1);
	}
}
