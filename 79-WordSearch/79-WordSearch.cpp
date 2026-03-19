// Last updated: 19/03/2026, 21:17:42
class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, string &word, int index,
             vector<vector<int>>& visited) {
        if (index == word.size()) {
            return true;
        }
        bool res = false;
        // left
        j = j - 1;

         if (j < board[0].size() && j >= 0 && i < board.size() && i >= 0) {
            if (visited[i][j] != 1 && board[i][j] == word[index]) {
                visited[i][j] = 1;
                bool res = dfs(board, i, j, word, index + 1, visited);
                if (res) {
                    return res;
                }
                visited[i][j] = 0;
            }
        }
        j++;
        // right
        j++;
        if (j < board[0].size() && j >= 0 && i < board.size() && i >= 0) {
            if (visited[i][j] != 1 && board[i][j] == word[index]) {
                visited[i][j] = 1;
                bool res = dfs(board, i, j, word, index + 1, visited);
                if (res) {
                    return res;
                }
                visited[i][j] = 0;
            }
        }
        j--;

        // up

        i--;
       if (j < board[0].size() && j >= 0 && i < board.size() && i >= 0) {
            if (visited[i][j] != 1 && board[i][j] == word[index]) {
                visited[i][j] = 1;
                bool res = dfs(board, i, j, word, index + 1, visited);
                if (res) {
                    return res;
                }
                visited[i][j] = 0;
            }
        }
        i++;

        // down
        i++;
        if (j < board[0].size() && j >= 0 && i < board.size() && i >= 0) {
            if (visited[i][j] != 1 && board[i][j] == word[index]) {
                visited[i][j] = 1;
                bool res = dfs(board, i, j, word, index + 1, visited);
                if (res) {
                    return res;
                }
                visited[i][j] = 0;
            }
        }
        i--;

        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<int>> visited;
        visited.resize(board.size(), vector<int>(board[0].size(), 0));

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == word[0]) {
                    visited[i][j] = 1;
                    bool res = dfs(board, i, j, word, 1, visited);
                    if (res) {
                        return res;
                    }
                    visited[i][j] = 0;
                }
            }
        }
        return false;
    }
};