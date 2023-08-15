class MagicFoo {
public:
    std::vector<int> vec;
    MagicFoo(std::initializer_list<int> list) {
        // 不用再写冗长的迭代器类型名了
        for (auto it = list.begin(); it != list.end(); ++it) {
            vec.push_back(*it);
        }
    }
};

auto i = 5; // i 被推导为 int
auto arr = new auto(10); // arr 被推导为 int 
