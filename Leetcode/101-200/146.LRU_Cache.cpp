class LRUCache {
public:

    typedef typename std::list<std::pair<int,int>>::iterator list_iterator_t;

    LRUCache(int capacity) :
    _cache_capacity(capacity) {
    }
    
    int get(int key) {  

        auto element = _cache_items_map.find(key);

        if(element !=_cache_items_map.end())
        {
            _cache_items_list.splice(_cache_items_list.begin(), _cache_items_list, element->second);
            return(element->second->second);
        }
        else
        {
            return -1;
        }
    }
    
    void put(int key, int value) {

        auto it = _cache_items_map.find(key);
		_cache_items_list.push_front({key, value});

		if (it != _cache_items_map.end()) 
        {
			_cache_items_list.erase(it->second);
			_cache_items_map.erase(it);
		}

		_cache_items_map[key] = _cache_items_list.begin();
		
		if (_cache_items_map.size() > _cache_capacity) 
        {
			auto last = _cache_items_list.end();
			last--;
			_cache_items_map.erase(last->first);
			_cache_items_list.pop_back();
		}
    }

    private: 

    //this one is about the order
    std::list<std::pair<int,int>> _cache_items_list; 
    //this one is about content
    std::unordered_map<int,list_iterator_t> _cache_items_map;   
    //this one tells us how big the list can be
    int _cache_capacity;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
