#pragma once
#include <iostream>
#include <vector>
#include "../lib_polinom/lib_polinom.h"
#include "../lib_TableInterface/lib_TableInterface.h"

class AVLTree;
class Cnode;

class DataTableTree {
	std::string name;
	polinom pol;
	
	friend class Cnode;
	friend class AVLTree;
	friend class TabSearchTree;

public:
	DataTableTree(std::string name1, polinom pol1) {
		name = name1;
		pol = pol1;
	}
	DataTableTree() {}

	bool operator==(const DataTableTree& data) {
		return(this->name == data.name && this->pol == data.pol);
	}

	bool operator!=(const DataTableTree& data)
	{
		return !(this->name == data.name && this->pol == data.pol);
	}
};


class Cnode {
	DataTableTree data;
	Cnode* Left;
	Cnode* Right;
	Cnode* Parent;
	int imbalance;
	int datanum;
public:

	friend class AVLTree;
	friend class TabSearchTree;

	Cnode(DataTableTree data1) {
		data = data1;
		Left = nullptr;
		Right = nullptr;
		Parent = nullptr;
		imbalance = 0;
		datanum = int(data.name[1]);
	}
	Cnode(DataTableTree data1, int imbalance1) {
		data = data1;
		Left = nullptr;
		Right = nullptr;
		Parent = nullptr;
		imbalance = imbalance1;
		datanum = int(data.name[1]);
	}

	Cnode() {
		Left = nullptr;
		Right = nullptr;
		Parent = nullptr;
		datanum = 0;
		imbalance = 0;
	}

	Cnode(DataTableTree data1, Cnode* Left1, Cnode* Right1, Cnode* Parent1, int imbalance1)
	{
		data = data1;
		Left = Left1;
		Right = Right1;
		Parent = Parent1;
		imbalance = imbalance1;
		datanum = int(data.name[1]);
	}

	Cnode operator=(const Cnode right) {
		this->data = right.data;
		this->Left = right.Left;
		this->Right = right.Right;
		this->Parent = right.Parent;
		this->imbalance = right.imbalance;
		this->datanum = right.datanum;
	} 
};


class AVLTree 
{
	Cnode* root;
public:
	AVLTree() {
		root = nullptr;
	}

	AVLTree(DataTableTree root1) {
		root->data = root1;
	}

	void Push(DataTableTree newElement)
	{
		Cnode* NewNode = new Cnode(newElement);
		if (root == NULL)
		{
			root = NewNode;
			root->imbalance = 0;
		}
		else {
			Cnode* Copy = root;
			while (Copy->Left != NewNode && Copy->Right != NewNode) {
				if (Copy->datanum < NewNode->datanum)
				{
					if (Copy->Left == nullptr)
					{
						Copy->Left = NewNode;
						NewNode->Parent = Copy;
					}
					else Copy = Copy->Left;
				}
				else {
					if (Copy->Right == nullptr)
					{
						Copy->Right = NewNode;
						NewNode->Parent = Copy;
					}
					else Copy = Copy->Right;
				}
			}
			Copy = NewNode;
			if (Copy->Parent->Left == nullptr || Copy->Parent->Right == nullptr)
			{
				while (Copy->Parent != nullptr) {
					if (Copy->Parent->Left == Copy) Copy->Parent->imbalance -= 1;
					else Copy->Parent->imbalance += 1;
					Copy = Copy->Parent;
				}
			}
			ChekBalance();
		}
	}

	Cnode* Find(std::string FindName) {
		polinom EmptyPol;
		if (root == nullptr) throw std::logic_error("Derevo pustoe");
		Cnode* Copy = root;
		bool flag = true;
		while (flag)
		{
			if (Copy->data.name == FindName) return Copy;
			if (Copy->datanum < (int)FindName[1])
			{
				if (Copy->Left == nullptr) flag = false;
				else Copy = Copy->Left;
			}
			else {
				if (Copy->Right == nullptr) flag = false;
				else Copy = Copy->Right;
			}
		}
		if (Copy->data.name == FindName) return Copy;
		return nullptr;
	}

	void DelElement(std::string FindName)
	{
		if (root == nullptr) throw std::logic_error("Derevo pustoe");
		bool flag = false;
		Cnode* Copy = new Cnode();
		if (root->data.name == FindName) {
			if (root->Left == nullptr && root->Right == nullptr) {
				root = nullptr;
				return;
			}
			else if (root->Left == nullptr) {
				root = root->Right;
				root->Parent = nullptr;
				return;
			}
			else if (root->Right == nullptr) {
				root = root->Left;
				root->Parent = nullptr;
				return;
			}
			root = root->Right;
			Copy = root->Left;
			root = root->Right;
			root->Parent = nullptr;
		}
		else
		{
			Cnode* DelNode = Find(FindName);
			Cnode* CopyParent = DelNode->Parent;

			if (CopyParent->Left == DelNode)
			{
				CopyParent->imbalance += 1;
				if (DelNode->Left != nullptr)
				{
					CopyParent->Left = DelNode->Left;
					Copy = DelNode->Right;
				}
				else CopyParent->Left = nullptr;
			}
			else {
				CopyParent->imbalance -= 1;
				if (DelNode->Right != nullptr)
				{
					CopyParent->Right = DelNode->Left;
					Copy = DelNode->Left;
				}
				else CopyParent->Right = nullptr;
			}

			while (CopyParent->Parent != nullptr) {
				if (CopyParent->Parent->Left = CopyParent) CopyParent->Parent->imbalance += 1;
				else CopyParent->Parent->imbalance -= 1;
				CopyParent = CopyParent->Parent;
			}
		}
		Cnode* NewNode = Copy;
		Copy = root;
		while (Copy->Left != NewNode && Copy->Right != NewNode) {
			if (Copy->datanum < NewNode->datanum)
			{
				if (Copy->Left == nullptr)
				{
					Copy->Left = NewNode;
					NewNode->Parent = Copy;
				}
				else Copy = Copy->Left;
			}
			else {
				if (Copy->Right == nullptr)
				{
					Copy->Right = NewNode;
					NewNode->Parent = Copy;
				}
				else Copy = Copy->Right;
			}
		}
		Copy = NewNode;
		while (Copy->Parent != nullptr) {
			if (Copy->Parent->Left == Copy) Copy->Parent->imbalance -= 1;
			else Copy->Parent->imbalance += 1;
			Copy = Copy->Parent;
		}
		ChekBalance();
	}

	void findAndReplace(std::string FindName, polinom Newpol) {
		if (root == nullptr) throw std::logic_error("Derevo pustoe");
		Cnode* FindElement = Find(FindName);
		FindElement->data.pol = Newpol;
	}

private:

	bool isBalanced(Cnode* root)
	{
		// for height of left subtree
		int lh;

		// for height of right subtree
		int rh;

		// If tree is empty then return true
		if (root == NULL)
			return 1;

		// Get the height of left and right sub trees
		lh = height(root->Left);
		rh = height(root->Right);

		if (abs(lh - rh) <= 1 && isBalanced(root->Left)
			&& isBalanced(root->Right))
			return 1;

		// If we reach here then tree is not height-balanced
		return 0;
	}

	int height(Cnode* node)
	{
		// base case tree is empty
		if (node == NULL)
			return 0;

		// If tree is not empty then
		// height = 1 + max of left height
		// and right heights
		return 1 + std::max(height(node->Left), height(node->Right));
	}


	int lenghtEl(DataTableTree findData) {
		Cnode* Copy = root;
		int res = 1;
		bool flag = true;
		while (flag)
		{
			if (Copy->data == findData) return res;
			if (Copy->datanum < (int)findData.name[1])
			{
				if (Copy->Left == nullptr) flag = false;
				else
				{
					Copy = Copy->Left;
					res++;
				}
			}
			else {
				if (Copy->Right == nullptr) flag = false;
				else
				{
					Copy = Copy->Right;
					res++;
				}
			}
		}
		if (Copy->data == findData) return res;
		return 0;
	}
	
	void LLRotation(Cnode* cur) {
		Cnode* parent2 = cur->Parent->Parent;
		Cnode* parent1 = cur->Parent;
		parent1->Right = parent2;
		parent1->Parent = parent2->Parent;
		parent2->Parent = parent1;
		parent2->Left = nullptr;
		if (parent1->Parent != nullptr) {
			if (parent1->Parent->Left == parent2) parent1->Parent->Left = parent1;
			else parent1->Parent->Right = parent1;
		}
		if (root == parent2) root = parent1;
	}

	void LRRotation(Cnode* cur) {
		Cnode* parent2 = cur->Parent->Parent;
		Cnode* parent1 = cur->Parent;
		cur->Left = parent1;
		cur->Right = parent2;
		cur->Parent = parent2->Parent;
		parent2->Parent = cur;
		parent1->Parent = cur;
		if (cur->Parent != nullptr) {
			if (parent1->Parent->Left == parent2) parent1->Parent->Left = parent1;
			else parent1->Parent->Right = parent1;
		}
		if (root == parent2) root = cur;
 	}

	void RLRotation(Cnode* cur) {
		Cnode* parent2 = cur->Parent->Parent;
		Cnode* parent1 = cur->Parent;
		cur->Right = parent1;
		cur->Left = parent2;
		cur->Parent = parent2->Parent;
		parent2->Parent = cur;
		parent1->Parent = cur;
		if (cur->Parent != nullptr) {
			if (parent1->Parent->Left == parent2) parent1->Parent->Left = parent1;
			else parent1->Parent->Right = parent1;
		}
		if (root == parent2) root = cur;
	}

	void RRRotation(Cnode* cur) {
		Cnode* parent2 = cur->Parent->Parent;
		Cnode* parent1 = cur->Parent;
		parent1->Left = parent2;
		parent1->Parent = parent2->Parent;
		parent2->Parent = parent1;
		parent2->Right = nullptr;
		if (parent1->Parent != nullptr) {
			if (parent1->Parent->Left == parent2) parent1->Parent->Left = parent1;
			else parent1->Parent->Right = parent1;
		}
		if (root == parent2) root = parent1;
	}

	void ChekBalance() {
		if (root->imbalance < -1 || root->imbalance > 1) {
			Cnode* cur = root;
			while (cur->imbalance != 0) {
				if (cur->imbalance <= -1) cur = cur->Left;
				else cur = cur->Right;
			}
			Cnode* parent2 = cur->Parent->Parent;
			Cnode* parent1 = cur->Parent;
			if (parent2->Left == parent1 && parent1->Left == cur)  LLRotation(cur);
			else if (parent2->Left == parent1 && parent1->Right == cur) LRRotation(cur);
			else if (parent2->Right == parent1 && parent1->Left == cur) RLRotation(cur);
			else if (parent2->Right == parent1 && parent1->Right == cur) RRRotation(cur);
		}
	}
};


class TabSearchTree : public Table       
{
private:
	AVLTree Table;
public:
	TabSearchTree(){}

	~TabSearchTree(){}

	void add(std::string name1, polinom pol) override {
		DataTableTree NewData(name1, pol);
		Table.Push(NewData);
	}

	void destroyPol(std::string findName) override {
		Table.DelElement(findName);
	}

	polinom find(std::string findName) override {
		return Table.Find(findName)->data.pol;
	}

	void findAndReplace(std::string findName, polinom NewPol) override {
		Table.findAndReplace(findName, NewPol);
	}
};
