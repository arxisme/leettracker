// Last updated: 12/04/2026, 21:02:36
1class MedianFinder {
2public:
3    priority_queue<int, vector<int>, greater<int>> minheap;
4    priority_queue<int> maxheap;
5    MedianFinder() {
6        
7    }
8    
9    void addNum(int num) {
10        minheap.push(num);
11        num = minheap.top();
12        minheap.pop();
13        maxheap.push(num);
14        int diff = maxheap.size()-minheap.size();
15        if(diff>1){
16            minheap.push(maxheap.top());maxheap.pop();
17        }
18        
19    }
20    
21    double findMedian() {
22        int m = maxheap.size();
23        int n = minheap.size();
24        if((m+n)%2){
25            return maxheap.top()+0.0;
26        }
27        return (maxheap.top()+minheap.top())/2.0;
28        
29    }
30};
31
32/**
33 * Your MedianFinder object will be instantiated and called as such:
34 * MedianFinder* obj = new MedianFinder();
35 * obj->addNum(num);
36 * double param_2 = obj->findMedian();
37 */