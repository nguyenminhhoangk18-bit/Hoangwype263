#include <stdio.h>
#include <math.h>
void nhapmang( int a[],int n){
for (int i=0 ; i<n ; i++)
{
    printf("Hay nhap ki tu a[%d] :",i);
    scanf("%d",&a[i]);
}
}
void xuatmang( int a[],int n){
    printf("Cac ki tu vua nhap: ");
for (int i=0 ; i<n ; i++)
{
    printf("%d ",a[i]);
}
    printf("\n");
}
int Binarysearch( int a[],int n,int x)
{
    int left,right,mid; left=0; right=n-1;
    do {
        mid=(left+right)/2;
        if(a[mid]==x) return mid; /** trả về vị trí tìm thất tại a[] **/
        else if (a[mid]<x) left=mid+1;
        else right=mid-1;
    }while(left<=right);
    return -1; /** trả về nếu không tìm thấy **/
}
int main()
{
   int n,x;
   int a[100];
   printf("Hay nhap so luong ki tu: ");
   scanf("%d",&n);
   nhapmang(a,n);
   xuatmang(a,n);
   printf("Hay nhap phan tu can tim:");
   scanf("%d",&x);
   int posi=Binarysearch(a,n,x);
   if (posi != -1)
    printf("Tim thay %d o vi tri a[%d]",x,posi);
   else
    printf("Khong tim thay %d trong mang",x);
   return 0;
}
