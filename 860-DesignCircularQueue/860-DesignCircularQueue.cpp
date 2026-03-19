// Last updated: 19/03/2026, 21:14:26
class MyCircularQueue {
public:
    vector<int> cq;
    int size;
    int front;
    int rear;
    int count;

    MyCircularQueue(int k) {
        size = k;
        front = 0;
        rear = 0;
        count = 0;
        cq.resize(size);
    }

    bool enQueue(int value) {
        if (isFull()) return false;
        cq[front] = value;
        front = (front + 1) % size;
        count++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        rear = (rear + 1) % size;
        count--;
        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return cq[rear];
    }

    int Rear() {
        if (isEmpty()) return -1;
        return cq[(front - 1 + size) % size];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }
};
