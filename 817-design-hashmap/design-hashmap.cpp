class MyHashMap {
    vector<int>ans;
public:
    MyHashMap():ans(1000001,-1) {
    }
    
    void put(int key, int value) {
        ans[key] = value;
    }
    
    int get(int key) {
       return ans[key];
    }
    
    void remove(int key) {
        ans[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */