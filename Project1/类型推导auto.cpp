class MagicFoo {
public:
    std::vector<int> vec;
    MagicFoo(std::initializer_list<int> list) {
        // ������д�߳��ĵ�������������
        for (auto it = list.begin(); it != list.end(); ++it) {
            vec.push_back(*it);
        }
    }
};

auto i = 5; // i ���Ƶ�Ϊ int
auto arr = new auto(10); // arr ���Ƶ�Ϊ int 
