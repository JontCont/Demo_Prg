#include <stdlib.h>
#include <stdio.h>


int main()
{
    int a[]={1,4,5,3,6,5,4,9,10,11};
    int num = sizeof(a)/ sizeof(a[0]);
    printf("�Ҧ��Ϊ��Ŷ� : %d , ���o�}�C���j�p : %d",sizeof(a),num);
    
}