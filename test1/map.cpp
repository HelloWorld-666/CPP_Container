//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//    map<string, int> map1;                                                          //map�����ı���������������ͬʱ��ʼ��                                                        
//    map1["boy"] = 99;                                                               //ͨ�������±��ʼ����ʽ����Ԫ��
//    cout << map1["boy"] << endl;
//    map1.insert(pair<string, int>("haha", 93));                                     //����Ԫ�ص����ַ��� map<string, int>     pair(string, int) 
//    map1.insert(map<string, int>::value_type("pmy", 22));
//    map1.insert(make_pair<string, int>("aaa", 575));
//    map1.insert(make_pair("bbb", 234));
//    cout << map1["aaa"] << '\t' << map1["bbb"] << endl;
//
//    map<string, int>::iterator iter_map1 = map1.begin();
//    cout << "iter_map1->first:" << iter_map1->first << '\t' << "iter_map1->second:" << iter_map1->second << endl;
//
//    //map1.erase(iter_map1);                                                          //ɾ��������
//    //map1.erase("bbb");                                                              //����Keyֵɾ��value
//    //map1.clear();
//    cout << "size:" << map1.size() << '\t' << "empty:" << map1.empty() << endl;       //��С���Ƿ��
//
//    //����
//    cout << "-----------����--------------" << endl;
//    for (map<string, int>::iterator iter_map = map1.begin(); iter_map != map1.end(); iter_map++)
//    {
//        cout << iter_map->first << '\t' << iter_map->second << endl;
//    }
//
//    //count()�����ص��Ǳ�����Ԫ�صĸ��� �У�����1�����򣬷���0
//    map<string, int> map2;
//    map2.insert(pair<string, int>("a", 666));
//    //map2.erase("a");                                                                   
//    map2["a"] = 888;                                                                  //insertʱ��ͬ��key���ᱻ���ǣ����� map[key] =value;�����ĵ����ǻᱻ��д��Ӧkey��ֵ��
//    map2.insert(make_pair("a", 999));                                                 //C++����,���map�������֮ǰ��<key, value>,���key֮ǰ��map������Ѿ��еĻ������Ḳ��֮ǰ��value,һ�����ж�֮ǰ��û�����ݣ��еĻ���ɾ����Ȼ����ȥ��ӡ�
//    cout << "map2.count:" << map2.count("a") << endl;                                 //ע�⣬map�в�������ͬԪ�أ����Է���ֵֻ����1��0��
//    cout << map2["a"] << endl;
//
//    
//    //find()�����ص��Ǳ�����Ԫ�ض�Ӧλ�õ� ������iter��û���򷵻�map.end()
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
//    ���ɣ�map��insert���з���ֵ�ģ�insert�ظ��Ļ��д��������������������ҳ�2��������ͬ�����ֵ�ʱ������Ч
//
//    m.erase(b,e)����m��ɾ��һ�η�Χ�ڵ�Ԫ�أ��÷�Χ�ɵ�������b��e���

//    ��ʹ����map Ҳ�ṩ��һ������������ķ�ʽ����������ͨ���±����������ݣ���������������������
//    STL ��ֻ��vector ��map ����ͨ��������ķ�ʽ����Ԫ�أ�����ͬele[1] ��ʽ
//*/