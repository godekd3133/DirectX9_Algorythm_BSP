#pragma once
#include "CTreeNode.h"
class CBSPMap
{
public:
	CBSPMap();
	~CBSPMap();

public:
	void MakeBSPMap(int _iExpansionCount);
	void ExpansionTreeNode(CTreeNode * m_pTreeNode, RECT _reRect,int _iExpansionCount);
private:
	CTreeNode * m_pMap;
};

