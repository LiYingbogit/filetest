#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//�ļ�����
int main()
{
    string a,data;
    int b,c;
    ifstream ifs("E:\\C++filedemo\\CSAPP����.txt");
    while(getline(ifs,a))
        cout<<a<<endl;
    ifs.close();

    ifstream ifs1("E:\\C++filedemo\\file5.txt");
    while(ifs1>>b>>c)
    {
        cout<<b<<" "<<c<<endl;
    }
    ifs1.close();


    ofstream ofs("E:\\C++filedemo\\file.txt",iostream::app);//�ļ�����׷��

    if(ofs.is_open())
    {
        ofs<<"���ļ��ɹ��������Ҽ��������"<<endl;

    }

    ofs.close();
    return 0;
}
