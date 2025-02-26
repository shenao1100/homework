#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
class node {
public:
    char val = '\0';
    node* left = nullptr;
    node* right = nullptr;

    std::string preOrder() {
        std::string result = "";
        result += val;

        if (left != nullptr) {
            result += left->preOrder();
        }
        if (right != nullptr) {
            result += right->preOrder();
        }
        return result;
    }
    void setLeft(node* left_node) {
        left = left_node;
    }
    void setRight(node* right_node) {
        right = right_node;
    }
    void setVal(char new_val) {
        val = new_val;
    }
};

std::vector<std::string> split(std::string s, char delim) {
    std::vector<std::string> result;
    std::string tmp = "";
    for (int i = 0; i < s.length(); i++) {
        tmp += s[i];
        if (s[i] == delim) {
            result.push_back(tmp);
            tmp = "";
        }
    }
    if (tmp != "") {
        result.push_back(tmp);
    }
    return result;
}

node* reverseCalc(std::string inorder, std::string postorder) {
    if (postorder.empty()) return nullptr;
    // 父
    node* father_node = new node();
    char root_val = (char)postorder[postorder.size() - 1];
    father_node->setVal((char)postorder[postorder.size() - 1]);
    //postorder = postorder.substr(0, postorder.size() - 1);

    size_t root_pos = inorder.find(root_val);
    std::string left_str = inorder.substr(0, root_pos);  // 左子树部分
    std::string right_str = inorder.substr(root_pos + 1); // 右子树部分

    std::string left_post = postorder.substr(0, root_pos);
    std::string right_post = postorder.substr(root_pos, postorder.length() - root_pos - 1);
    // 左
    //std::cout << "left: " << left_str << " right: " << right_str << " root: " << root_val << " post: " <<postorder << " in: " << inorder << std::endl;

    father_node->setLeft(reverseCalc(left_str, left_post));

    // 右

    father_node->setRight(reverseCalc(right_str, right_post));

    return father_node;
}
int main() {
    std::string input_ln1, input_ln2;
    //std::getline(std::cin, input_ln1);
    //std::getline(std::cin, input_ln2);
    std::cin >> input_ln1 >> input_ln2;
    node* father_node = reverseCalc(input_ln1, input_ln2);
    std::string res = father_node->preOrder();
    std::cout<< res << std::endl;
    delete father_node;
    return 0;
}
