 #include <stdio.h>
  2 #define SIZE 9
  3 typedef struct{unsigned char x:1;}bit;
  4 const int uset[SIZE]={1,2,3,4,5,6,7,8,9};
  5 void readset(bit a[],int n);
  6 void printset(const bit a[]);
  7 void unionset(const bit a[],const bit b[],bit c[]);
  8 void intersect(const bit a[],const bit b[],bit c[]);
  9 void difference(const bit a[],const bit b[],bit c[]);
 10
 11 int main(void)
 12 {
 13     bit a[SIZE]={{0}},b[SIZE]={{0}},c[SIZE]={{0}};
 14     int n;
 15     printf("Universal set:{1,2,3,4,5,6,7,8,9}\n\n);
 16     printf("No.of element in set :");
 17     if(scanf("%d",&n)!=1)return 1;
 18     readset(a,n);
 19     printf("No.of elements in set B :");
 20     if(scanf("%d",&n)!=1)return 1;
 21     readset(b,n);
 22
 23     print("\n set A: ");
 24     print set(a);
 25     printf("set B: ");
 26     printset(b);
 27
 28     unionset(a,b,c);
 29     printf("\n\tA U B = ");
 30     printset(c);
 31
 32     intersect(a,b,c);
 33     printf("\n\tA intersect B = ");
 34     printset(c);
 35
 36     difference(a,b,c);
 37     printf("\n\tA - B = ");
 38     printset(c);
 39     return 0;
 40 }
 41 void readset(bit a[],int n)
 42 {
 43     int i,k,x;
 44     if(n<0||n>SIZE){
 45         printf("invalid size;must be between 0 and %d.\n", size);
 46         return;
 47     }
 48     printf("enter %d element: ",n);
     for(i=0;i<n;i++){
          if(scanf("%d",&x)! = 1)return;
         for(k=0;k<SIZE;k++){
 52             if(uset[k]==x{a[k].x=1;break;}
 53     }
 54     if(k==SIZE)
 55         printf("%d is not in the Universal set, ignored.\n",x);
 56     }
 57 }
 58 void printset(const bit a[])
 59 {
 60     int k,first=1;
 61     printf("{");
 62     for(k=0;k<size;K++){
 63         if(a[k].x){
 64             printf(first ? "%d" : ",%d", uset[k]);
 65             first = 0;
 66         }
 67     }
 68     printf("}\n");
 69 }
 70 void unionset(const bit a[],const bit b[],bit c[])
 71 {
 72     for(int k=0;k<SIZE;k++)
 73         c[k].x=a[k].x|b[k].x;
 74 }
 75 void intersect(const bit a[],const bit b[],bit c[])
 76 {
 77     for(int k=0;k<SIZE;k++)
 78         c[k].x=a[k].x&b[b].x;
 79 }
 80 void difference(const bit a[],const bit b[],bit c[]
 81 {
 82     for(int k = 0;k<SIZE;k++)
 83         c[k].x=a[k].x && !b[k].x;
 84 }

