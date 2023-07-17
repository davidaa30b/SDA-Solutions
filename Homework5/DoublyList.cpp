#include<iostream>
using namespace std;

struct Node {
	unsigned long long data;
	Node* previous;
	Node* next;
	Node(unsigned long long data, Node* previous = nullptr, Node* next = nullptr) {
		this->data = data;
		this->previous = previous;
		this->next = next;
	}
};

class List {
private:
	Node* head;
	Node* tail;
	Node* mid;
	unsigned long long size;
public:
	List() {
		head = nullptr;
		tail = nullptr;
		mid = nullptr;
		size = 0;
	}
	void push_back(int data) {
		size++;
		if (head == nullptr) {
			head = new Node(data);
			mid = head;
			tail = head;
			return;
		}
		if (size != 2 && size % 2 == 0) {
			mid = mid->next;
		}
		tail->next = new Node(data, tail);
		tail = tail->next;
	}

	void pop_back() {
		if (size % 2 == 0 && size > 3)
			mid = mid->previous;
		size--;
		if (head == tail) {
			Node* current = head;
			head = nullptr;
			tail = head;
			mid = head;
			delete current;
			return;
		}

		Node* toDelete = tail;
		tail = tail->previous;
		tail->next = nullptr;
		delete toDelete;
	}
	
	int get_size() {
		return size;
	}

	int show_mid_value() {
		if (mid != nullptr)
			return mid->data;
		else return 0;
		
	}

	void relocate() {
		Node* oldHead = head;
		Node* oldMid = mid;
		head = mid->next;
		tail->next = oldHead;
		if (size % 2 == 0) {
			mid = tail;
		}
		else {
			mid = tail->previous;
		}
		oldMid->next = nullptr;
		tail = oldMid;
		//tail->next = nullptr;
		
	}
	void display() {
		Node* current = head;
		while(current != nullptr) {
			cout << current->data << " ";
			current = current->next;
		}
		cout << "\n";
	}
};

int main() {
	/*List list;
	list.push_back(10);
	list.push_back(20);
	list.push_back(30);
	list.push_back(40);
	list.push_back(50);
	list.push_back(60);
	list.display();
	list.relocate();
	list.display();
	cout << list.show_mid_value() << endl;*/

	List cheatSheet;
	long long n;
	cin >> n;
	string request;
	unsigned long long value = 0;

	for (unsigned long long i = 0; i < n; i++) {
		cin >> request;
		if (request == "add") {
			cin >> value;
			cheatSheet.push_back(value);
		}

		if (request == "gun") {
			cheatSheet.pop_back();
		}

		if (request == "milen") {
			cheatSheet.relocate();
		}
	}

	cout << cheatSheet.get_size() << "\n";
	cheatSheet.display();

	return 0;
}