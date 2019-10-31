//#include <iostream>
//#include <string>
//#include <list>
//
//using namespace std;
//
//int main()
//{
//    //list<int> lst1(3, 555);
//    //lst1.push_back(888);
//    //lst1.push_back(19);
//    ////lst1.reverse();
//    //cout << lst1.size() << endl;                                //个数
//    //lst1.sort();                                                //排序
//    //lst1.unique();												//相同元素最终只保留1个
//    //cout << "&首元素引用：" << lst1.front() << endl;		    //返回第一个元素的引用
//    //cout << "&尾元素引用：" << lst1.back() << endl;             //返回最后一个元素的引用
//    ////lst1.remove(555);                                         //删除相同元素
//    //list<int>::iterator iter1 = lst1.begin();                   //注意迭代器要初始化为 lst1.begin()
//    //for (; iter1 != lst1.end(); iter1++)
//    //{
//    //    cout << "iter1：" << *iter1 << endl;
//    //}
//
//    list<int> lst2(1,23);
//    list<int> lst3(lst2);   //list<int> lst3(lst2.begin(), list.end());
//    lst3.assign(lst2.begin(), lst2.end());
//    lst2.push_back(88);
//    lst2.push_back(89);
//    lst2.push_back(90);
//    
//    list<int>::iterator iter2 = lst2.begin() ;
//    iter2 = ++iter2;                                                //不能使用iter2++,前置++的结果是加之前的数，应该用后置++
//    cout << "n:"<< *iter2 << endl;
//    //lst2.insert(iter2, 2, 789);
//    char str[5] = { 22, 33, 44, 55, 66 };
//    //lst2.insert(iter2, str + 1, str + 4);                         //增加一个范围内的元素到
//    lst2.erase(lst2[3], lst2.end());                                //删除范围内元素
//
//    //遍历
//    for (iter2 = lst2.begin(); iter2 != lst2.end(); iter2++)        //注意iter2需要重新初始化为：lst2.begin()，否则iter2之前的数据就无法完整输出
//    {
//        cout << *iter2 << endl;
//    }
//
//    _sleep(900000);
//    return 0;
//}