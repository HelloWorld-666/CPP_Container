//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <vector>
//#include <set>
//#include<functional>        //greater �� less ��ͷ�ļ�
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
//    set<int> iset(vec.begin(), vec.end());                                              //��ʼ�� set�� ������ÿ������ֻ�ܶ�Ӧһ��Ԫ�ء���һ�η�Χ��Ԫ�س�ʼ��set���󣬻���set�����в���һ��Ԫ��ʱ������ÿ��������ʵ��Ҳֻ�ǽ��������һ��Ԫ�أ�����һ��Ԫ��ֵ
//    cout << "iset:" << iset.size() << "\t" << "vec:" << vec.size() << endl;
//
//    set<int> iset2;                                                                     //���ܶ������ʱ��ʼ���� set<int> iset2(321);  //���󣡣�
//    //set<int, greater<int>> iset2;                                                       //�Ӵ�С����ֵ
//    iset2.insert(-321);
//    iset2.insert(vec.begin(), vec.end());
//
//    //find() count()
//    set<int>::iterator iter_set = iset2.find(5);                                        //����Ԫ������Ϊ "5" ��Ԫ�ص�����iter_set
//    cout << *iter_set << endl;
//    cout << "count:" << iset2.count(321) << endl;                                       //�򵥵��ж�ĳ��Ԫ���Ƿ���� , ���ڣ�1 ����0
//   // iter_set = iset2.lower_bound(7);                                                    //����һ����������ָ������ڵ��� k �ĵ�һ��Ԫ��
//    iter_set = iset2.upper_bound(5);                                                    //����һ����������ָ�������   k �ĵ�һ��Ԫ��
//    pair<set<int>::iterator, set<int>::iterator> pr = iset2.equal_range(4);
//    cout << "pr.first:" << *pr.first << "\t" << "pr.second:" << *pr.second << endl;     //����һ���������� pair �������� first ��Ա�ȼ��� m.lower_bound(k)���� second ��Ա��ȼ��� m.upper_bound(k)
//
//    //����
//    cout << "---------����-------------" << endl;
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
//    set����Ĭ�ϴ�С��������ֵ
//*/