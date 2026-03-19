// Last updated: 19/03/2026, 21:16:42
class Solution {

    unordered_map<string, int> visited;

public:
    int ladderLength(string beginWord, string endWord,
                     vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (!dict.count(endWord))
            return 0;

        unordered_set<string> beginSet, endSet;
        beginSet.insert(beginWord);
        endSet.insert(endWord);

        int steps = 1;

        while (!beginSet.empty() && !endSet.empty()) {
            if (beginSet.size() > endSet.size())
                swap(beginSet, endSet);

            unordered_set<string> nextSet;

            for (string word : beginSet) {
                for (int i = 0; i < word.size(); i++) {
                    char old = word[i];
                    for (char c = 'a'; c <= 'z'; c++) {
                        if (c == old)
                            continue;
                        word[i] = c;

                        if (endSet.count(word))
                            return steps + 1;

                        if (dict.count(word)) {
                            nextSet.insert(word);
                            dict.erase(word);
                        }
                    }
                    word[i] = old;
                }
            }

            beginSet = nextSet;
            steps++;
        }
        return 0;
    }
};