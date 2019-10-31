//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//    map<string, int> map1;                                                          //map容器的变量不能在声明的同时初始化                                                        
//    map1["boy"] = 99;                                                               //通过数组下标初始化形式插入元素
//    cout << map1["boy"] << endl;
//    map1.insert(pair<string, int>("haha", 93));                                     //插入元素的两种方法 map<string, int>     pair(string, int) 
//    map1.insert(map<string, int>::value_type("pmy", 22));
//    map1.insert(make_pair<string, int>("aaa", 575));
//    map1.insert(make_pair("bbb", 234));
//    cout << map1["aaa"] << '\t' << map1["bbb"] << endl;
//
//    map<string, int>::iterator iter_map1 = map1.begin();
//    cout << "iter_map1->first:" << iter_map1->first << '\t' << "iter_map1->second:" << iter_map1->second << endl;
//
//    //map1.erase(iter_map1);                                                          //删除迭代器
//    //map1.erase("bbb");                                                              //根据Key值删除value
//    //map1.clear();
//    cout << "size:" << map1.size() << '\t' << "empty:" << map1.empty() << endl;       //大小，是否空
//
//    //遍历
//    cout << "-----------遍历--------------" << endl;
//    for (map<string, int>::iterator iter_map = map1.begin(); iter_map != map1.end(); iter_map++)
//    {
//        cout << iter_map->first << '\t' << iter_map->second << endl;
//    }
//
//    //count()：返回的是被查找元素的个数 有，返回1；否则，返回0
//    map<string, int> map2;
//    map2.insert(pair<string, int>("a", 666));
//    //map2.erase("a");                                                                   
//    map2["a"] = 888;                                                                  //insert时相同的key不会被覆盖，但是 map[key] =value;这样的调用是会被重写相应key的值的
//    map2.insert(make_pair("a", 999));                                                 //C++里面,如果map里面插入之前的<key, value>,如果key之前在map里面就已经有的话，不会覆盖之前的value,一般先判断之前有没有数据，有的话先删除，然后再去添加。
//    cout << "map2.count:" << map2.count("a") << endl;                                 //注意，map中不存在相同元素，所以返回值只能是1或0。
//    cout << map2["a"] << endl;
//
//    
//    //find()：返回的是被查找元素对应位置的 迭代器iter，没有则返回map.end()
//    if (map2.find("a") != map2.end())
//    {
//        cout << "yes !" << endl;
//    }
//    else
//    {
//        cout << "no !" << endl;
//    }
//    map<string, int>::iterator iter2_map = map2.find("b");
//    cout << iter2_map->first << ":" << iter2_map->second << endl;
//
//    getchar();
//    return 0;
//}
//
///*
//    技巧：map的insert是有返回值的，insert重复的会有错误，这个技巧在面试如何找出2个数组相同的数字的时候有奇效
//
//    m.erase(b,e)：从m中删除一段范围内的元素，该范围由迭代器对b和e标记

//    在使用上map 也提供了一种类数组操作的方式，即它可以通过下标来检索数据，这是其他容器做不到的
//    STL 中只有vector 和map 可以通过类数组的方式操作元素，即如同ele[1] 方式
//*/