//������˫����ʵ��ָ������ĵ�ַ���������ݼ�ָ�������ռ�õ��ڴ�ռ�
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int iVal = 10;              //��������
    double dVal = 123.45;       //˫����ʵ������

    int *piVal = NULL;          //����Ϊ��ָ��
    piVal = &iVal;              //�������͵�ָ�������ָ��iVal�����ĵ�ַ

    double *pdVal = &dVal;      //ʵ�����͵�ָ�������ָ��dVal�����ĵ�ַ

    cout << "piVal������ַΪ��" << piVal << endl;
    cout << "piVal������ָ���ַ����������Ϊ��" << *piVal << endl;

    *piVal = 20;                //��������piValָ���������������Ϊ20
    cout << "piValָ������������ú�iVal����������ͬ������Ϊ��" << iVal << endl;
    cout << "����iVal��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(iVal) << "λ" << endl;
    cout << "����ָ�����piVal��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(piVal) << "λ" << endl;

    cout << "-------------------------------------------------------" << endl;
    cout << "pdVal������ַΪ��" << pdVal << endl;
    cout << "pdVal������ָ���ַ����������Ϊ��" << *pdVal << endl;

    *pdVal = 67.1234;           //��������pdValָ���������������Ϊ67.1234
    cout << "pdValָ������������ú�dVal����������ͬ������Ϊ��" << dVal << endl;
    cout << "˫����ʵ��dVal��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(dVal) << "λ" << endl;
    cout << "˫����ʵ��ָ�����pdVal��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(pdVal) << endl;

    system("pause");
    return 0;
}