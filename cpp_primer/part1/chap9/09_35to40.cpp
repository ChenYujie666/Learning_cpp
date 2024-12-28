// 练习9.35：解释一个vector的capacity和size有何区别。
// capacity是在内存不重新分配的情况下，可以容纳的元素数量； size实际上的元素数量。

//练习9.36：一个容器的capacity可能小于它的size吗？
// 不可能
#if 0

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;

    vec.shrink_to_fit();

    std::cout << "Size after shrink_to_fit: " << vec.size() << std::endl;
    std::cout << "Capacity after shrink_to_fit: " << vec.capacity() << std::endl;

    return 0;
}

#endif

//练习9.37：为什么list或array没有capacity成员函数？
// list是动态分配的，不需要capacity；array是静态分配的，不需要capacity。


//练习9.38：编写程序，探究在你的标准库实现中，vector是如何增长的。
// 也许是每次增长2倍
#if 1 
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.reserve(7);
    std::cout << "Initial capacity: " << vec.capacity() << std::endl;
    
    for (int i = 0; i < 100; ++i) {
        vec.push_back(i);
        std::cout << "Capacity after pushing " << i << " elements: " << vec.capacity() << std::endl;
    }
    return 0;
}
#endif

// 练习9.39：解释下面程序片段做了什么：[插图]
// 输入字符，存入vector中，然后后面补一半长度的空字符串



//练习9.40：如果上一题中的程序读入了256个词，在resize之后容器的capacity可能是多少？如果读入了512个、1000个或1048个词呢？
// 256个词，capacity可能是512；512个词，capacity可能是1024；1000个词，capacity可能是1024；2048个词，capacity可能是2048。