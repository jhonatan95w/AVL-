#ifndef __NODE_AVL_H__
#define __NODE_AVL_H__

#include <string>
#include "produto.h"

class NodeAVL
{
public:
	NodeAVL(const produto& data, NodeAVL* parent = nullptr, NodeAVL* left = nullptr, NodeAVL* right = nullptr);
	~NodeAVL();

	void CopyDataFrom(const NodeAVL* node);

	int GetID() const;

	produto GetData() const;
	void SetData(const produto& data);

	NodeAVL* GetParent() const;
	void SetParent(NodeAVL* parent);

	NodeAVL* GetLeft() const;
	void SetLeft(NodeAVL* left);

	NodeAVL* GetRight() const;
	void SetRight(NodeAVL* right);

	bool IsRoot() const;
	bool IsLeaf() const;

	int GetDegree() const;
	int GetDepth() const;
	int GetHeight() const;

	int GetBalanceFactor() const;
	void UpdateBalanceFactor();

	std::string ToString() const;

private:
	int m_ID;
	produto m_Data;
	
	NodeAVL* m_Parent;
	NodeAVL* m_Left;
	NodeAVL* m_Right;

	int m_BalanceFactor;

	int GetDepthInternal(const NodeAVL* node) const;
	int GetHeightInternal(const NodeAVL* node) const;
};

#endif