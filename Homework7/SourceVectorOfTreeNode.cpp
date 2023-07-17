#include <iostream>
#include <vector>

using namespace std;
 
size_t N, K, A,remShips = 0,countOfStrikes;

size_t getSize(vector<size_t>& underField) {
    return underField[1] - underField[0] + 1;
}

void incrementRemShips(vector<size_t>& underField) {
    remShips += (getSize(underField) + 1) / (A + 1);
   // cout << "remShips: " <<remShips<< endl;
}

void removeFromRemShips(vector<size_t>& underField) {

    remShips -= (getSize(underField) + 1) / (A + 1);
    //cout << "remShips: " << remShips << endl;

}

bool checkEnd() {
    //cout << remShips << " < " << K << endl;
    return remShips < K;
}

struct Node {
    vector<size_t> value;
    Node* left;
    Node* right;

    Node(vector<size_t> value) {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BinarySearchTree {
private:
    Node* root;


    Node* insert(Node* node,vector<size_t> field,size_t differ) {
        
        if (node == nullptr) {
            node = new Node(field);
            //cout <<"remShips : "<< remShips << endl;
            incrementRemShips(field);
        }
        else {

            if (node->left == nullptr && node->right == nullptr) {
                removeFromRemShips(field);


                    vector<size_t> leftField;
                    leftField.push_back(field[0]);
                    leftField.push_back(differ - 1);
                    if (getSize(leftField) >= A) {
                        //    incrementRemShips(leftField);
                        node->left = insert(node->left, leftField, differ);
                    }
                

                    vector<size_t> rightField;
                    rightField.push_back(differ + 1);
                    rightField.push_back(field[1]);
                    if (getSize(rightField) >= A) {
                        //  incrementRemShips(rightField);
                        node->right = insert(node->right, rightField, differ);
                    }
                
            }
            
            if (node->left != nullptr) {
               // incrementRemShips(node->left->value);
                if (node->left->value[0] <= differ && node->left->value[1] >= differ) {
                     insert(node->left, node->left->value, differ);
                }
            }
            
            
            
            if (node->right != nullptr) {
               // incrementRemShips(node->right->value);
                if (node->right->value[0] <= differ && node->right->value[1] >= differ) {
                     insert(node->right, node->right->value, differ);
                }
            }

        }


        return node;
    }
  

public:
    BinarySearchTree() {
        this->root = nullptr;
    }

    void insert(vector<size_t> field,size_t differ) {
        this->root = insert(this->root, field, differ);
      //  cout << "remShips : " << remShips << endl;
    }

    Node* getRoot() {
        return root;
    }

    void print(Node * node) {
        if (node == nullptr) {
            return;
        }

        cout << node->value[0] << " : " << node->value[1] << endl;
        print(node->left);
        print(node->right);
    }

};



int main() {
    
    cin >> N >> K >> A;
    cin >> countOfStrikes;
    size_t* strikes = new size_t[countOfStrikes]{};
    for (size_t i = 0; i < countOfStrikes; i++) {
        cin >> strikes[i];
    }

    if ((A+1)*K -1 > N) {
        cout << "-1";
        return 0;
    }

    BinarySearchTree tree;
    tree.insert(*new vector<size_t>{ 1,N }, 0);
   // cout << "remShips : " << remShips << endl;

    int answer=-1;
    if (checkEnd()) {
        cout << 0;
        return 0;
    }

    for (size_t i = 1; i <= countOfStrikes; i++) {
        
        if (strikes[i-1] <= N && strikes[i-1]>=1) {
            tree.insert(*new vector<size_t>{ 1,N }, strikes[i - 1]);
        }
       // cout << "remShips : " << remShips << endl;
        
        if (checkEnd()) {
            answer = i;
            break;
        }

    }

    //tree.print(tree.getRoot());

    if (answer == -1) {
        cout << -1;
    }
    else {
        cout << answer;
    }
    delete[] strikes;
    return 0;
}