#include <stdio.h>

void main()
{
    //�˺����˺�������ֵ����������
    //
    double attach =57.88; //�˺�ֵ
    double attachAdd = 4.5;//�˺�����ֵ
    int attachRange = 172; //��������
    double hj =27.536; //����
    double hjAdd =3.0; //��������ֵ
    double mk =32.1;  //ħ��
    double mkAdd =1.25 //ħ������ֵ


    printf("����:����\t");
    printf("�˺�:%.2lf(+%.1lf)\t��������:%d\n",attach,attachAdd,attachRange);
    printf("����:%.3lf(+%.1lf)\tħ    ��:%.1lf(+%.2lf)\n",hj,hjAdd,mk,mkAdd);
    printf("����:661.28(+84.25)\t�����ظ�:7.84(+0.5)\n");
    printf("����:0.0(+0.0)\t\t�����ظ�:0.0(+0.0)\n");
    printf("����:340\t\t��    λ:�ϵ� ���� ��Ұ\n");
    printf("��ȯ:450\t\t���:1000\n");
    return 0;
}
