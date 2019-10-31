//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <vector>
//#include <set>
//#include<functional>        //greater 或 less 的头文件
//
//
//
//using namespace std;
//int main()
//{
//    vector<int> vec;
//    for (vector<int>::size_type i = 1; i <= 10; i++)
//    {
//        vec.push_back(i);
//        vec.push_back(i);
//    }
//
//    set<int> iset(vec.begin(), vec.end());                                              //初始化 set： 容器的每个键都只能对应一个元素。以一段范围的元素初始化set对象，或在set对象中插入一组元素时，对于每个键，事实上也只是仅仅添加了一个元素，而非一段元素值
//    cout << "iset:" << iset.size() << "\t" << "vec:" << vec.size() << endl;
//
//    set<int> iset2;                                                                     //不能定义对象时初始化： set<int> iset2(321);  //错误！！
//    //set<int, greater<int>> iset2;                                                       //从大到小排列值
//    iset2.insert(-321);
//    iset2.insert(vec.begin(), vec.end());
//
//    //find() count()
//    set<int>::iterator iter_set = iset2.find(5);                                        //返回元素内容为 "5" 的元素迭代器iter_set
//    cout << *iter_set << endl;
//    cout << "count:" << iset2.count(321) << endl;                                       //简单地判断某个元素是否存在 , 存在：1 否则：0
//   // iter_set = iset2.lower_bound(7);                                                    //返回一个迭代器，指向键大于等于 k 的第一个元素
//    iter_set = iset2.upper_bound(5);                                                    //返回一个迭代器，指向键大于   k 的第一个元素
//    pair<set<int>::iterator, set<int>::iterator> pr = iset2.equal_range(4);
//    cout << "pr.first:" << *pr.first << "\t" << "pr.second:" << *pr.second << endl;     //返回一个迭代器的 pair 对象。它的 first 成员等价于 m.lower_bound(k)。而 second 成员则等价于 m.upper_bound(k)
//
//    //遍历
//    cout << "---------遍历-------------" << endl;
//    for (iter_set = iset2.begin(); iter_set != iset2.end(); iter_set++)
//    {
//        cout << *iter_set << endl;
//    }
//
//    getchar();
//    return 0;
//}
//
///*
//    set容器默认从小到大排列值
//*/