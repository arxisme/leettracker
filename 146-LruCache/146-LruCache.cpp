// Last updated: 19/03/2026, 21:16:20
struct Li {
    int key, val;
    Li* prev;
    Li* next;

    Li(int k, int v) {
        key = k;
        val = v;
        prev = next = NULL;
    }
};
class LRUCache {
public:
    int cap;
    unordered_map<int, Li*> mp;

    Li* head;
    Li* tail;

    LRUCache(int capacity) {
        cap = capacity;
        head = new Li(-1, -1);
        tail = new Li(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    void remove(Li* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insert(Li* node) {
        node->prev = tail->prev;
        node->next = tail;
        tail->prev->next = node;
        tail->prev = node;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) return -1;

        Li* node = mp[key];
        remove(node);
        insert(node);

        return node->val;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            Li* node = mp[key];
            node->val = value;
            remove(node);
            insert(node);
            return;
        }

        if (mp.size() == cap) {
            Li* lru = head->next;
            remove(lru);
            mp.erase(lru->key);
            delete lru;
        }

        Li* node = new Li(key, value);
        insert(node);
        mp[key] = node;
    }
};