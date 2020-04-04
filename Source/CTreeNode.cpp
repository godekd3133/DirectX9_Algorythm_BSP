#include "DXUT.h"
#include "CTreeNode.h"


CTreeNode::CTreeNode()
	: m_pParentTreeNode (nullptr), m_pRightTreeNode (nullptr) , m_pLeftTreeNode(nullptr)
{
}

CTreeNode::~CTreeNode()
{
}
