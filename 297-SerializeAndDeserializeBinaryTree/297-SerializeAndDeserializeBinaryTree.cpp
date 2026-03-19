// Last updated: 19/03/2026, 21:15:16
class Codec {
public:
   
    string serialize(TreeNode* root) {
        string res;
        dfsSerialize(root, res);
        return res;
    }

    void dfsSerialize(TreeNode* root, string& res) {
        if (!root) {
            res += "%,";
            return;
        }
        res += to_string(root->val) + ",";
        dfsSerialize(root->left, res);
        dfsSerialize(root->right, res);
    }

    
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return dfsDeserialize(ss);
    }

    TreeNode* dfsDeserialize(stringstream& ss) {
        string token;
        getline(ss, token, ',');

        if (token == "%") return nullptr;

        TreeNode* root = new TreeNode(stoi(token));
        root->left = dfsDeserialize(ss);
        root->right = dfsDeserialize(ss);
        return root;
    }
};
