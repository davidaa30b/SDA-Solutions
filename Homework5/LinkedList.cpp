//#include<iostream>
//
//using namespace std;
//
//template<class T>
//struct Node {
//	T value;
//	Node* next = nullptr;
//	Node(T value, Node* next=nullptr) {
//		this->value = value;
//		this->next = next;
//	}
//};
//
//template<class T>
//class List {
//private:
//	Node<T>* head;
//	Node<T>* tail;
//public:
//	List() {
//		head = nullptr;
//		tail = nullptr;
//	}
//	
//	void push_back(T value) {
//		if (head == nullptr) {
//			head = new Node<T>(value);
//			tail = head;
//		}
//		else {
//			tail->next = new Node<T>(value);
//			tail = tail->next;
//		}
//	}
//
//	void push_front(T value) {
//		Node<T>* newHead = new Node<T>(value, head);
//		head = newHead;
//
//		if (tail == nullptr) {
//			tail = head;
//		}
//	}
//
//	void print() {
//		Node<T>* current = head;
//		while (current != nullptr) {
//			cout << current->value << " ";
//			current = current->next;
//		}
//		cout << endl;
//	}
//	void insert(T value, int position) {
//		if (position == 0) {
//			push_front(value);
//			return;
//		}
//		else if (head == nullptr) {
//			throw  out_of_range("Invalid insert index, list is empty");
//		}
//
//		Node<T>* previous = nullptr;
//		Node<T>* current = head;
//
//		for (int i = 0; i < position; i++) {
//			if (current != nullptr) {
//				previous = current;
//				current = current->next;
//			}
//			else {
//				throw  out_of_range("Cannot insert in invalid position");
//			}
//		}
//
//		previous->next = new Node<T>(value,current);
//
//		if (tail == previous) {
//			tail = previous->next;
//		}
//	}
//	void pop_front() {
//		Node<T>* temp;
//		temp = head;
//
//		if (head != nullptr) {
//			if (head == tail) {
//				tail = nullptr;
//			}
//
//			head = head->next;
//			delete temp;
//		}
//	}
//
//	void pop_back() {
//		Node<T>* current = head;
//		Node<T>* previous = nullptr;
//
//		while (current != tail) {
//			previous = current;
//			current = current->next;
//		}
//		tail = previous;
//		previous->next = nullptr;
//		delete current;
//	}
//
//	void remove(int position) {
//		if (position == 0) {
//			pop_front();
//			return;
//		}
//		else if (head == nullptr) {
//			throw out_of_range("Invalid remove index, list is empty");
//		}
//		Node<T>* current = head;
//		Node<T>* previous = nullptr;
//
//		for (int i = 0; i < position; i++) {
//			if (current->next != nullptr) {
//				previous = current;
//				current = current->next;
//			}
//			else {
//				throw out_of_range("Cannot remove in invalid position");
//			}
//		}
//		previous->next = current->next;
//		if (tail == current) {
//			tail = previous;
//		}
//		delete current;
//	}
//
//	 bool search(T value) {
//		 Node<T>* current = head;
//		while (current != nullptr) {
//			if (current->value == value) {
//				return true;
//			}
//			current = current->next;
//		}
//		return false;
//	}
//
//	T peek_front() {
//		if (head != nullptr) {
//			return head->value;
//		}
//		else {
//			throw out_of_range("List is empty, cannot peek_front()");
//		}
//	}
//
//	T peek_back() {
//		if (tail != nullptr) {
//			return tail->value;
//		}
//		else {
//			throw out_of_range("List is empty, cannot peek_back()");
//		}
//	}
//	
//	T get_at(int position) {
//		if (head == nullptr) {
//			throw out_of_range("List is empty, cannot get from it");
//		}
//
//		if (position == 0) {
//			return head->value;
//		}
//
//		Node<T>* current = head;
//		for (int i = 0; i < position; i++) {
//			if (current->next != nullptr) {
//				current = current->next;
//			}
//			else {
//				throw out_of_range("Cannot get from list, no such position");
//
//			}
//		}
//		return current->value;
//	}
//};
////int main() {
////	List<int> arr;
////
////	arr.push_back(3);
////	arr.push_back(33);
////	arr.push_back(333);
////	arr.push_back(3333);
////	arr.push_back(33333);
////	cout << "-------print arr-------" << endl;
////	arr.print();
////	cout << "-----------------------" << endl;
////	arr.push_front(0);
////	arr.push_front(0);
////	cout << "-------print arr-------" << endl;
////	arr.print();
////	cout << "-----------------------" << endl;
////	arr.insert(4, 2);
////	cout << "-------print arr-------" << endl;
////	arr.print();
////	cout << "-----------------------" << endl;
////	arr.remove(5);
////	cout << "-------print arr-------" << endl;
////	arr.print();
////	cout << "-----------------------" << endl;
////	arr.pop_back();
////	cout << "-------print arr-------" << endl;
////	arr.print();
////	cout << "-----------------------" << endl;
////	arr.pop_front();
////	cout << "-------print arr-------" << endl;
////	arr.print();
////	cout << "-----------------------" << endl;
////	cout << arr.get_at(3) << endl;
////	cout << arr.search(33333) << endl;
////	
////	return 0;
////}
//
