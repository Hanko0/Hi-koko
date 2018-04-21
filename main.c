#include <stdio.h>

void main()
{
    //伤害。伤害的增加值，攻击距离
    //
    double attach =57.88; //伤害值
    double attachAdd = 4.5;//伤害增加值
    int attachRange = 172; //攻击距离
    double hj =27.536; //护甲
    double hjAdd =3.0; //护甲增加值
    double mk =32.1;  //魔抗
    double mkAdd =1.25 //魔抗增加值


    printf("名称:盖伦\t");
    printf("伤害:%.2lf(+%.1lf)\t攻击距离:%d\n",attach,attachAdd,attachRange);
    printf("护甲:%.3lf(+%.1lf)\t魔    抗:%.1lf(+%.2lf)\n",hj,hjAdd,mk,mkAdd);
    printf("生命:661.28(+84.25)\t生命回复:7.84(+0.5)\n");
    printf("法力:0.0(+0.0)\t\t法力回复:0.0(+0.0)\n");
    printf("移速:340\t\t定    位:上单 辅助 打野\n");
    printf("点券:450\t\t金币:1000\n");
    return 0;
}
