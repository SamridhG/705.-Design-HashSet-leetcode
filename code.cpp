class MyHashSet {
public:
      set<int>A;
    /** Initialize your data structure here. */
    MyHashSet() {
      
    }
    
    void add(int key) {
        A.insert(key);
    }
    
    void remove(int key) {
        auto p=A.find(key);
        if(p!=A.end())
        {A.erase(p);}
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        auto p=A.find(key);
        return p!=A.end()? true:false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
