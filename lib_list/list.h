#pragma once

#include <iostream>
#include <ostream>

template <class Type>
class CNode
{
	Type data;
	CNode<Type>* next;

public:

	CNode() {
		next = nullptr;
	}

	CNode(Type val)
	{
		data = val;
		next = nullptr;
	}

	void set_next(CNode<Type>* newnext) {
		next = newnext;
	}

	void print() {
		std::cout << data << " -> ";
	}

	CNode<Type>* get_next() {
		/*if (next == nullptr)
		{
			throw std::logic_error("ERROR! next = nullptr");
		}
		else*/ return next;
	}

	Type get_data()
	{
		return data;
	}

};

template <class Type>
class Clist
{
protected:
	CNode<Type>* head;
	CNode<Type>* tail;
public:
	Clist() {
		head = nullptr;
		tail = nullptr;
	}
	
	size_t size()
	{
		size_t len = 0;
		CNode<Type>* head_copy = head;
		while (head_copy != nullptr)
		{
			head_copy = head_copy->get_next();
			len++;
		}
		return len;
	}
	
	void push_back(Type val)
	{
		CNode<Type>* newnode = new CNode<Type>(val);
		if (this->isEmpty())
		{
			head = newnode;
			tail = newnode;		
		}
		else {
			tail->set_next(newnode);
			tail = newnode;
		}
	}

	void push_front(Type val) {
		CNode<Type>* newnode = new CNode<Type>(val);
		if (this->isEmpty())
		{
			head = newnode;
			tail = newnode;
		}
		else {
			newnode->set_next(head);
			head = newnode;
		}
	}

	void insert(CNode<Type>* pos, int val)
	{
		if (pos == nullptr) {
			throw std::logic_error("ERROR! pos = 0");
		}
		else {
			CNode<Type>* newnode = new CNode<Type>(val);
			newnode->set_next(pos->get_next());
			pos->set_next(newnode);
			if (newnode->get_next() == nullptr) tail = newnode;		
		}
	}

	void eraseCNode(CNode<Type>* pos) {
		if (pos->get_data() < 0) throw std::logic_error("Pos < 0");	
		if (isEmpty()) throw std::logic_error("beda");

		if (pos != head)
		{
			CNode<Type>* copy = head;
			CNode<Type>* DeletedNode = head->get_next();
			int i = 0;
			while (DeletedNode != pos)
			{
				i++;
				copy = copy->get_next();
				DeletedNode = DeletedNode->get_next();
			}
			copy->set_next(DeletedNode->get_next());
			DeletedNode = nullptr;
		}
		else
		{
			this->pop_front();
		}
	}

	void erasePos(int pos) {
		if (pos < 0) throw std::logic_error("Pos < 0");
		if (isEmpty()) throw std::logic_error("beda");

		if (pos != 0)
		{
			CNode<Type>* copy = head;
			CNode<Type>* DeletedNode = head->get_next();
			int i = 1;
			while (i != pos)
			{
				i++;
				copy = copy->get_next();
				DeletedNode = DeletedNode->get_next();
			}
			copy->set_next(DeletedNode->get_next());
			DeletedNode = nullptr;
		}
		else
		{
			this->pop_front();
		}
	}

	Type GetIndEl(int ind) {
		if (ind > this->size()) throw std::logic_error("ind > size");

		int i = 0;
		CNode<Type>*cur = head;
		while (i != ind) {
			cur = cur->get_next();
			i++;
		}
		return cur->get_data();
	}

	void pop_front() {
		if (isEmpty()) throw std::logic_error("beda");
		else {
			CNode<Type>* head_copy = head;
			head = head->get_next();
			delete head_copy;
		}
	}

	void pop_back() {
		if (isEmpty()) throw std::logic_error("beda");
		else
		{
			if (head == tail)
			{
				head = nullptr;
				tail = nullptr;
			}
			else
			{
				CNode<Type>* tail_copy = tail;
				tail = head;
				while (tail->get_next() != tail_copy)
				{
					tail = tail->get_next();
				}
				tail_copy = nullptr;
			}
		}
	}

	void printAll()
	{
		if (this->isEmpty())
		{
			std::cout << "Is empty";
		}
		else
		{
			CNode<Type>* head_copy = head;
			while (head_copy->get_next() != tail)
			{
				head_copy->print();
				head_copy = head_copy->get_next();
			}
			head_copy->print();
		}
	}
	CNode<Type>* GetLastData() {
		return tail;
	}

	CNode<Type>* GetFirstData() {
		return head;
	}

	bool isEmpty() {
		if (head == nullptr) return true;
		else return false;
	}

	void clear() {
		/*if (!isEmpty())
		{
			while (tail != nullptr)
			{
				CNode <Type>* copy = head;
				head = head->get_next;
				copy = nullptr;
			}
		}*/
	}

	bool operator==(const Clist right) {
		CNode<Type>* head_copy1 = this->head;
		CNode<Type>* head_copy2 = right.head;
		if (this->size() != right.size())  return false;
		while (head_copy1 != this->tail || head_copy2 != right.tail) {
			if (head_copy1->get_data() != head_copy2->get_data()) return false;
		}
		if (head_copy1->get_data() != head_copy2->get_data()) return false;
		return true;
	}

	Clist& operator=(const Clist& rig)
	{
		/*for (int i = 0; i < rig.size(); i++) {
			if (i > this->size()) this->push_back(rig.GetIndEl(i));
			else this->GetIndEl(i) = rig.GetIndEl(i);
		}
		if (rig.size() < this->size()) {
			for (int i = rig.size(); i < this->size(); i++) this->pop_back();
		}
		return *this;*/

		if (rig.head == nullptr) {
			this->head = nullptr;
			this->tail = nullptr;
			return *this;
		}
		
		CNode<Type>* rig_copy = rig.head;
		while (rig_copy->get_next() != nullptr)
		{
			this->push_back(rig_copy->get_data());
			rig_copy = rig_copy->get_next();
		}
		if(rig_copy != nullptr) this->push_back(rig_copy->get_data());
		
		return *this;
	}
	~Clist()
	{
		this->clear();
	}
};
