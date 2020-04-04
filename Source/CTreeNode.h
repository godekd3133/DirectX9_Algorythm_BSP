#pragma once
class CTreeNode
{
public:
	CTreeNode();
	~CTreeNode();

private:
	CTreeNode * m_pParentTreeNode;
	CTreeNode * m_pLeftTreeNode;
	CTreeNode * m_pRightTreeNode;

	RECT m_reRect;
public:
	RECT GetRect() { return m_reRect; }
	void SetRect(RECT _reRect) { m_reRect = _reRect; }

	
	CTreeNode * GetParentTreeNode() { return m_pParentTreeNode; }
	CTreeNode * GetLeftTreeNode() { return m_pLeftTreeNode; }
	CTreeNode * GetRightTreeNode() { return m_pRightTreeNode; }

	void SetParentTreeNode(CTreeNode * _pParentTreeNode)
	{
		m_pParentTreeNode = _pParentTreeNode;
	}
	void SetLeftTreeNode(CTreeNode * _pLeftTreeNode)
	{
		m_pLeftTreeNode = _pLeftTreeNode;
	}
	void SetRightTreeNode(CTreeNode * _pRightTreeNode)
	{
		m_pRightTreeNode = _pRightTreeNode;
	}
};

