#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    vector<int>  vec1(6, 3);												// 6��3
    vec1.push_back(55);														//��
    vec1.push_back(77);                         
/*    vec1.pop_back();                                                      
    vec1.pop_back();														//��
    vec1.pop_back();
    vec1.pop_back();*/														//ɾ��ĩβԪ�أ�����ɾ��ָ��Ԫ��(˳������)
    vector<string> vec2(10, "hahaha");
    vector<int>    vec3(vec1.begin(), vec1.end());							//��ȡ�������׵�ַ��ĩβ��ַ
    
    vector<int>::iterator iter1;
    iter1 = vec1.end();
    //cout << vec1.empty() << endl;                                         //�ж������Ƿ�Ϊ��
    //vec1.insert(vec1.end(), 5, 1);                                        //��vec1.endλ�ò���5��ֵΪ1��Ԫ��
    //vec1.clear();                                                         //���Ԫ��
    //cout << *(vec1.end() - 1) /*<< "\t" << *(vec1.end())*/ << endl;       //ע��v1.end()ָ��������һ��Ԫ�ص���һ��λ�ã����Է������һ��Ԫ�ص���ȷ����Ϊ��*(v1.end()-1);
    //cout << vec1.size() << endl;
    //����
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
    //����Ϊ�������Ϊvec1.begin()ʼ��Ϊ�����еĵ�һ��Ԫ��,���� vec1.begin() != vec1.end() ��Զ��������ȣ�vec1.begin()++ Ҳ��Զָ��ڶ���Ԫ�ص�ַ
    /*for (; vec1.begin() != vec1.end(); vec1.begin()++)
    {
    cout << *vec1.begin() << endl;
    }*/

    cout << "=========" << endl;
    vector<int> vec5;
    cout << vec5.size() << endl;        //0 ��ӳ�˾������ݳ���
    vec5.push_back(2);
    cout << vec5.size() << endl;        //1
    vec5.push_back(4);
    cout << vec5.size() << endl;        //2
    cout << vec5.capacity() << endl;    //2 ����
    cout << sizeof(vec5) << endl;       //sizeof ������ͳ�Ƶ�ֻ�����ݳ�Ա�ĳ��ȣ����Ȳ���(16)

    getchar();
    return 0;
}

/*
	vector֧��������ʺͿ��ٲ���ɾ����ͨ���±�   vec1[i] ��ʵ��
*/