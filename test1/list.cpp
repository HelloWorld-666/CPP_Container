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
//    //cout << lst1.size() << endl;                                //����
//    //lst1.sort();                                                //����
//    //lst1.unique();												//��ͬԪ������ֻ����1��
//    //cout << "&��Ԫ�����ã�" << lst1.front() << endl;		    //���ص�һ��Ԫ�ص�����
//    //cout << "&βԪ�����ã�" << lst1.back() << endl;             //�������һ��Ԫ�ص�����
//    ////lst1.remove(555);                                         //ɾ����ͬԪ��
//    //list<int>::iterator iter1 = lst1.begin();                   //ע�������Ҫ��ʼ��Ϊ lst1.begin()
//    //for (; iter1 != lst1.end(); iter1++)
//    //{
//    //    cout << "iter1��" << *iter1 << endl;
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
//    iter2 = ++iter2;                                                //����ʹ��iter2++,ǰ��++�Ľ���Ǽ�֮ǰ������Ӧ���ú���++
//    cout << "n:"<< *iter2 << endl;
//    //lst2.insert(iter2, 2, 789);
//    char str[5] = { 22, 33, 44, 55, 66 };
//    //lst2.insert(iter2, str + 1, str + 4);                         //����һ����Χ�ڵ�Ԫ�ص�
//    lst2.erase(lst2[3], lst2.end());                                //ɾ����Χ��Ԫ��
//
//    //����
//    for (iter2 = lst2.begin(); iter2 != lst2.end(); iter2++)        //ע��iter2��Ҫ���³�ʼ��Ϊ��lst2.begin()������iter2֮ǰ�����ݾ��޷��������
//    {
//        cout << *iter2 << endl;
//    }
//
//    _sleep(900000);
//    return 0;
//}