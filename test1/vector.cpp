#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    vector<int>  vec1(6, 3);												// 6个3
    vec1.push_back(55);														//入
    vec1.push_back(77);                         
/*    vec1.pop_back();                                                      
    vec1.pop_back();														//出
    vec1.pop_back();
    vec1.pop_back();*/														//删除末尾元素，不能删除指定元素(顺序容器)
    vector<string> vec2(10, "hahaha");
    vector<int>    vec3(vec1.begin(), vec1.end());							//获取迭代器首地址、末尾地址
    
    vector<int>::iterator iter1;
    iter1 = vec1.end();
    //cout << vec1.empty() << endl;                                         //判断容器是否为空
    //vec1.insert(vec1.end(), 5, 1);                                        //从vec1.end位置插入5个值为1的元素
    //vec1.clear();                                                         //清空元素
    //cout << *(vec1.end() - 1) /*<< "\t" << *(vec1.end())*/ << endl;       //注意v1.end()指向的是最后一个元素的下一个位置，所以访问最后一个元素的正确操作为：*(v1.end()-1);
    //cout << vec1.size() << endl;
    //遍历
   /* for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << endl;
    }*/

    /*for (; vec1.begin() != vec1.end(); vec1.begin()++)
    {
    cout << *(vec1.begin()) << endl;
    }*/
   
    iter1 = vec1.begin();
    for (; iter1 != vec1.end(); iter1++)
    {
        cout << *iter1 << endl;
    }
    //以下为错误表达：因为vec1.begin()始终为容器中的第一个元素,所以 vec1.begin() != vec1.end() 永远不可能相等，vec1.begin()++ 也永远指向第二个元素地址
    /*for (; vec1.begin() != vec1.end(); vec1.begin()++)
    {
    cout << *vec1.begin() << endl;
    }*/

    cout << "=========" << endl;
    vector<int> vec5;
    cout << vec5.size() << endl;        //0 反映了具体数据长度
    vec5.push_back(2);
    cout << vec5.size() << endl;        //1
    vec5.push_back(4);
    cout << vec5.size() << endl;        //2
    cout << vec5.capacity() << endl;    //2 容量
    cout << sizeof(vec5) << endl;       //sizeof 操作符统计的只是数据成员的长度，长度不变(16)

    getchar();
    return 0;
}

/*
	vector支持随机访问和快速插入删除：通过下标   vec1[i] 来实现
*/