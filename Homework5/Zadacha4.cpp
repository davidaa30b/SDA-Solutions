//#include<iostream>
//#include <string>
//#include<exception>
//#include<vector>
//using namespace std;
//
//struct Node {
//    unsigned long long  value;
//    Node* previous;
//    Node* next;
//
//    Node(unsigned long long  value) {
//        this->value = value;
//        this->previous = nullptr;
//        this->next = nullptr;
//    }
//
//    Node(unsigned long long  value, Node* next, Node* previous) {
//        this->value = value;
//        this->next = next;
//        this->previous = previous;
//    }
//};
//
//class DoublyLinkedList {
//private:
//    Node* head;
//    Node* tail;
//
//    unsigned long long elementsCount;
//
//    Node* goToPosition(unsigned long long  position) {
//        if (position < elementsCount - position) {
//            unsigned long long  currentPosition = 0;
//            Node* current = head;
//
//            while (currentPosition < position) {
//                current = current->next;
//                currentPosition++;
//            }
//
//            return current;
//        }
//
//        unsigned long long  currentPosition = elementsCount - 1;
//        Node* current = tail;
//        while (currentPosition > position) {
//            current = current->previous;
//            currentPosition--;
//        }
//
//        return current;
//    }
//
//public:
//
//    DoublyLinkedList() {
//        head = nullptr;
//        tail = nullptr;
//        elementsCount = 0;
//    }
//
//    void push_back(unsigned long long number) {
//        elementsCount++;
//
//        if (tail == nullptr) {
//            head = new Node(number, nullptr, nullptr);
//            tail = head;
//            return;
//        }
//
//        tail->next = new Node(number, nullptr, tail);
//        tail = tail->next;
//    }
//
//    void my_push_back(Node* node) {
//        elementsCount++;
//
//        if (head == nullptr) {
//            head = node;
//            node->next = nullptr;
//            node->previous = nullptr;
//            tail = head;
//            return;
//        }
//
//        node->next = nullptr;
//        node->previous = tail;
//        tail->next = node;
//        tail = tail->next;
//    }
//
//    void push_front(unsigned long long  number) {
//        elementsCount++;
//
//        if (head == nullptr) {
//            head = new Node(number, nullptr, nullptr);
//            tail = head;
//            return;
//        }
//
//        head = new Node(number, head, nullptr);
//    }
//
//    void push_front_Node(Node* node) {
//        elementsCount++;
//
//        if (head == nullptr) {
//            head = node;
//            node->previous = nullptr;
//            node->next = nullptr;
//            tail = head;
//            return;
//        }
//
//        node->previous = nullptr;
//        node->next = head;
//        head->previous = node;
//        head = head->previous;
//        // head = new Node(number, head, nullptr);
//    }
//
//
//
//    void insert_at(unsigned long long  number, unsigned long long  position) {
//        if (position < 0 || position > elementsCount) {
//            throw invalid_argument("Index out of range exception.");
//        }
//
//        if (position >= elementsCount) {
//            push_back(number);
//            return;
//        }
//
//        if (position == 0) {
//            push_front(number);
//            return;
//        }
//
//        elementsCount++;
//
//        Node* current = goToPosition(position - 1);
//        current->next = new Node(number, current->next, current);
//        current->next->next->previous = current->next;
//    }
//
//    void pop_front() {
//        if (head == nullptr) {
//            return;
//        }
//
//        elementsCount--;
//
//        Node* temp = head;
//        head = head->next;
//        head->previous = nullptr;
//        delete temp;
//    }
//
//    void pop_back() {
//        Node* current = head;
//        Node* previous = nullptr;
//
//        while (current != tail) {
//            previous = current;
//            current = current->next;
//        }
//        tail = previous;
//        previous->next = nullptr;
//        delete current;
//    }
//
//    void remove_at(unsigned long long position) {
//        if (position < 0 || position >= elementsCount) {
//            throw invalid_argument("Index out of range exception.");
//        }
//
//        if (position == 0) {
//            pop_front();
//            return;
//        }
//
//        if (position == elementsCount - 1) {
//            pop_back();
//            return;
//        }
//
//        elementsCount--;
//
//        Node* current = goToPosition(position - 1);
//
//        Node* temp = current->next;
//        current->next = temp->next;
//        current->next->previous = current;
//
//        delete temp;
//    }
//
//    void reverse() {
//        if (elementsCount == 2) {
//            swap(head->value, head->next->value);
//            return;
//        }
//
//        Node* forward = head;
//        Node* backward = tail;
//
//        unsigned long long currentPosition = 0;
//
//        while (currentPosition < elementsCount / 2) {
//            swap(forward->value, backward->value);
//            forward = forward->next;
//            backward = backward->previous;
//            currentPosition++;
//        }
//    }
//
//    unsigned long long peek_front() {
//        return head->value;
//    }
//
//
//    unsigned long long get_at(unsigned long long  position) {
//        if (position >= elementsCount || position < 0) {
//            throw invalid_argument("Index out of range exception.");
//        }
//
//        return goToPosition(position)->value;
//    }
//
//    unsigned long long getLast() {
//        return tail->value;
//    }
//
//    unsigned long long size() {
//        return this->elementsCount;
//    }
//
//    string to_string() {
//        string result = "[";
//
//        Node* current = head;
//        while (current != nullptr) {
//            result.append(std::to_string(current->value));
//
//            if (current->next != nullptr) {
//                result.append(", ");
//            }
//
//            current = current->next;
//        }
//
//        result.append("]");
//
//        return result;
//    }
//
//    void removeByAddress(Node* node) {
//        cout << "*******************" << endl;
//        //cout << pos->address << endl;
//        cout << head->next << endl;
//        cout << node << endl;
//        cout << node->value << endl;
//        //cout << node->next->value << endl;
//        cout << "*******************" << endl;
//
//        if (!node->next)
//            return;
//
//        Node* del = node->next;
//        node->value = del->value;
//        node->next = del->next;
//
//        free(del);
//    }
//
//    void clear() {
//        if (head == nullptr) {
//            return;
//        }
//
//        Node* temp = head;
//        Node* current = head->next;
//
//        while (current != nullptr) {
//            delete temp;
//
//            temp = current;
//            current = current->next;
//        }
//
//        delete temp;
//        this->elementsCount = 0;
//    }
//    unsigned long long getElementCount() {
//        return elementsCount;
//    }
//    void display() {
//        Node* cur = head;
//        while (cur != nullptr) {
//            cout << cur->value;
//            cur = cur->next;
//        }
//        cout << endl;
//
//    }
//};
//
//
//
//int main() {
//
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//
//    unsigned long long t, n;
//    cin >> t >> n;
//
//    DoublyLinkedList list;
//    vector<Node*> nodes(2000001);
//    unsigned long long currentCount = 0;
//    for (unsigned long long i = 0; i < t; i++) {
//        unsigned long long req = 0;
//        cin >> req;
//        if (nodes[req] == nullptr) {
//            cout << "false" << "\n";
//            Node* newNode = new Node(req);
//            nodes[req] = newNode;
//            list.push_front_Node(newNode);
//            currentCount++;
//            if (currentCount > n) {
//                unsigned long long headNode = list.getLast();
//                nodes[headNode] = nullptr;
//                list.pop_back();
//
//
//
//            }
//        }
//        else {
//            cout << "true" << "\n";
//
//            if (list.peek_front() != req) {
//
//                if (list.getLast() == req) {
//
//                    list.pop_back();
//                    nodes[req] = nullptr;
//                    Node* newNode = new Node(req);
//                    list.push_front_Node(newNode);
//                    nodes[req] = newNode;
//                }
//                else {
//
//
//                    Node* newNode = nodes[req];
//                    Node* previousNode = newNode->previous;
//                    Node* nextNode = newNode->next;
//                    previousNode->next = nextNode;
//                    nextNode->previous = previousNode;
//
//                    newNode->next = nullptr;
//                    newNode->previous = nullptr;
//                    list.push_front_Node(newNode);
//                }
//            }
//        }
//        //list.display();
//    }
//
//    return 0;
//
//}