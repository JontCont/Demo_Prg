void SelSort(int A[], int n)  //��ܱƧǪk���Ƶ{��
 {
   int i, j, Temp, Min = 0;
   for (i = 1; i <= n - 1; i++)
    {
       Min = i;
       for (j = i + 1; j <= n; j++)
          if (A[j] < A[Min])
             Min = j;
      {//�۾F��Ӫ���ƥ洫��m
       Temp = A[i];
       A[i] = A[Min];
       A[Min] = Temp;
      }
    }
 }
 

