#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 1. Declaration
    vector<int> v;

    // 2. push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;


    // 3. size()
    cout << "Size: " << v.size() << endl;

    // 4. capacity()
    cout << "Capacity: " << v.capacity() << endl;

    // 5. empty()
    cout << "Empty: " << v.empty() << endl;


    // 6. front()
    cout << "Front: " << v.front() << endl;

    // 7. back()
    cout << "Back: " << v.back() << endl;

    // 8. at()
    cout << "Element at index 2: " << v.at(2) << endl;

    // 9. [] operator
    cout << "Element at index 1: " << v[1] << endl;


    // 10. insert()
    v.insert(v.begin() + 2, 25);

    cout << "After insert: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;


    // 11. erase()
    v.erase(v.begin() + 2);

    cout << "After erase: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;


    // 12. pop_back()
    v.pop_back();

    cout << "After pop_back: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;


    // 13. resize()
    v.resize(6, 100);

    cout << "After resize: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;


    // 14. reserve()
    v.reserve(20);
    cout << "Capacity after reserve: " << v.capacity() << endl;


    // 15. shrink_to_fit()
    v.shrink_to_fit();
    cout << "Capacity after shrink_to_fit: "
         << v.capacity() << endl;


    // 16. clear()
    vector<int> temp = {1, 2, 3, 4, 5};

    temp.clear();

    cout << "Size after clear: "
         << temp.size() << endl;


    // 17. begin() and end()
    vector<int> a = {10, 20, 30, 40, 50};

    cout << "Using begin/end: ";
    for (auto it = a.begin(); it != a.end(); it++)
        cout << *it << " ";
    cout << endl;


    // 18. rbegin() and rend()
    cout << "Reverse using rbegin/rend: ";
    for (auto it = a.rbegin(); it != a.rend(); it++)
        cout << *it << " ";
    cout << endl;


    // 19. data()
    int *ptr = a.data();

    cout << "First element using data(): "
         << *ptr << endl;


    // 20. assign()
    vector<int> b;

    b.assign(5, 100);

    cout << "After assign: ";
    for (int x : b)
        cout << x << " ";
    cout << endl;


    // 21. swap()
    vector<int> x = {1, 2, 3};
    vector<int> y = {10, 20, 30};

    x.swap(y);

    cout << "X after swap: ";
    for (int n : x)
        cout << n << " ";
    cout << endl;

    cout << "Y after swap: ";
    for (int n : y)
        cout << n << " ";
    cout << endl;


    // 22. emplace_back()
    vector<int> c;

    c.emplace_back(10);
    c.emplace_back(20);
    c.emplace_back(30);

    cout << "After emplace_back: ";
    for (int n : c)
        cout << n << " ";
    cout << endl;


    // 23. emplace()
    c.emplace(c.begin() + 1, 15);

    cout << "After emplace: ";
    for (int n : c)
        cout << n << " ";
    cout << endl;


    // 24. Vector initialization
    vector<int> d(5, 50);

    cout << "Initialized vector: ";
    for (int n : d)
        cout << n << " ";
    cout << endl;


    // 25. Copy vector
    vector<int> e = d;

    cout << "Copied vector: ";
    for (int n : e)
        cout << n << " ";
    cout << endl;


    // 26. Comparison operators
    vector<int> p = {1, 2, 3};
    vector<int> q = {1, 2, 4};

    cout << "p == q : " << (p == q) << endl;
    cout << "p != q : " << (p != q) << endl;
    cout << "p < q  : " << (p < q) << endl;
    cout << "p > q  : " << (p > q) << endl;
    cout << "p <= q : " << (p <= q) << endl;
    cout << "p >= q : " << (p >= q) << endl;


    return 0;
}