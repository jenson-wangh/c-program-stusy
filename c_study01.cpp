//#include<stdio.h>   //***************************************************************************************
//#include<string.h>
//#include<stdlib.h>
//enum DAY{
//    MON=1,TUE,WED,THR,FRI,SAT,SUN
//};
//int main(int argc,char* argv[]){
//    // 输入输出函数，单行注释
//    /* 输入输出函数，块注释 */
//    /* //嵌套单行注释 */
//    //  声明的同时已经分配了空间，sizeof为40
//    int arr[10];
//    printf("%d\n",sizeof(arr));
//    //  结构体实验,结构体中的内容可以单独使用。
//    enum DAY day=MON;
//    printf("%d,%d\n",day,SUN);  // 错误用法：printf("%d\n",(int)day.TUE);
//    //  字符串函数使用
//    char str1[100]="hello world!"; // 13-length
//    char str2[]={'j','e','n','s','o','n',' ','w','a','n','g'}; // 11-length
//    char str3[50];
//    printf("%d\n",sizeof(str2)); //str2-length
//    strcpy(str3,str1);
//    printf("str3: %s",str3);
//    strcat(str1,str2);
//    printf("%s",str1);
//      return 0;
//    }
//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    // 插入排序
//    int arr[]={1,5,7,9,3,4,8,0,2};
//    int i,j,temp;
//    int len=sizeof(arr)/sizeof(arr[0]);
//    for (i=1;i<len;i++){
//            temp = arr[i];
//            for (j=i;j>0 && arr[j-1]>temp;j--)
//                    arr[j] = arr[j-1];
//            arr[j] = temp;
//    }
//    for(int i=0;i<len;i++){
//        printf("%d,",arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>     //***************************************************************************************
//  // 错误信息提示的用法
//#include <errno.h>
//#include <string.h>
//extern int errno ;
//  // 文件读写操作
//int main (int argc,char* argv[])
//{
//   FILE * pf;     // File *fopen(const char* filename,const char *mode);
//   int errnum;
//   pf = fopen ("unexist.txt", "rb");
//   if (pf == NULL)
//   {
//      errnum = errno;
//      fprintf(stderr, "错误号: %d\n", errno);
//      perror("通过 perror 输出错误");
//      fprintf(stderr, "打开文件错误: %s\n", strerror( errnum ));
//   }
//   else
//   {
//      fclose (pf);
//   }
//   return 0;
//}
//#include<stdio.h>  //***************************************************************************************
//  文本文件写入
//int main(int argc,char *argv[]){
//    FILE *file1=NULL;
//    file1=fopen("E:/notbook/file1.txt","w+");
//    if(file1==NULL){
//        printf("file1 is null");
//        return 0;
//    }
//    fprintf(file1,"this is my first user file-fprintf()!\n");
//    fputs("this is my first user file-fputs()!\n",file1);
//    fclose(file1);
//    return 0;
//}

//#include <stdio.h>    //***************************************************************************************
//  文本文件读取。
//int main()
//{
//   FILE *fp = NULL;
//   char buff[255];

//   fp = fopen("E:/notbook/file1.txt", "r");
//   fscanf(fp, "%s", buff);
//   printf("1: %s\n", buff );

//   fgets(buff, 255, (FILE*)fp);
//   printf("2: %s\n", buff );

//   fgets(buff, 255, (FILE*)fp);
//   printf("3: %s\n", buff );
//   fclose(fp);
//}
//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    //  两数交换
//    int i=0,j=0;
//    printf("please input i,j:\n");
//    scanf("%d %d",&i,&j);
//    printf("i=%d,j=%d\n",i,j);
//    i=i+j;
//    j=i-j;
//    i=i-j;
//    printf("i=%d,j=%d\n",i,j);
//    return 0;
// }
//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    //  判断奇数偶数
//    int num=0;
//    printf("please input num:\n");
//    scanf("%d",&num);
//    if(num&1){
//        printf("%d shi ji shu",num);
//    }else{
//        printf("%d shi ou shu",num);
//    }
//    return 0;
// }
//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    //  循环输出范围内的奇数
//    for(int i=30;i<=100;i++){
//        if(i&1){
//            printf("%d shi ji shu\n",i);
//        }else{
//            printf("%d shi ou shu\n",i);
//        }
//    }
//    return 0;
// }
//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    //判断元音辅音
//    while(1){
//    printf("please input a str(kongge jieshu):\n");
//        char c;
//    scanf("%c",&c);
//    if(c==32)break;
//        int xiaoXie=(c=='a'||c=='o'||c=='e'||c=='i'||c=='u');
//        int daXie=(c=='A'||c=='O'||c=='E'||c=='I'||c=='U');
//        if(xiaoXie||daXie){
//            printf("shi yuanyin\n");
//        }else{
//            printf("shi fuyin\n");
//        }
//    };
//    return 0;
// }
//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    //  判断三数中的最大值
//    int i=0,j=0,k=0;
//    printf("please input i,j,k:\n");
//    scanf("%d %d %d",&i,&j,&k);
//    int max=i;
//    if(max<j) max=j;
//    if(max<k){
//        max=k;
//    }
//    printf("max is %d",max);
//    return 0;
// }
//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    //  一元二次方程求解
//    double a=0,b=0,c=0;
//    printf("please input a,b,c:\n");
//    scanf("%lf %lf %lf",&a,&b,&c);
//    double x1=(sqrt(b*b-4*a*c)+b)/(2*a);
//    double x2=(sqrt(b*b-4*a*c)-b)/(2*a);
//    printf("x1=%f,x2=%f\n",x1,x2);
//    return 0;
// }
//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    //  判断闰年-能被4整除不能被100整除或者能被400整除
//    printf("please input a year-num:\n");
//    int year=0;
//    scanf("%d",&year);
//    if((year%4==0&&year%100!=0)||year%400==0)
//        printf("%d shi run nian",year);
//    else printf("%d bu shi run nian",year);
//    return 0;
// }
//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    //  判断正数负数和0
//    double num=0;
//    printf("please input  num=\n");
//    scanf("%lf",&num);
//    if(num>0){
//        printf("%f >0\n",num);
//    }else if(num<0){
//        printf("%f <0\n",num);
//    }else{
//        printf("%f =0\n",num);
//    }
//    return 0;
// }
//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    //  判断字母
//    char ch1;
//    printf("please input a char:\n");
//    scanf("%c",&ch1);
//    int daXie=(ch1>='A'&&ch1<='Z');
//    int xiaoXie=(ch1>='a'&&ch1<='z');
//    if(daXie||xiaoXie){
//        printf("ok\n");
//    }else{
//        printf("is not");
//    }
//    return 0;
// }

//#include<stdio.h>   //***************************************************************************************
//int main(int argc,char* argv[]){
//    //  输出小于1000的斐波那契数列
//       int num1=0,num2=1;
//       int temp=0;
//       while(1){
//       temp=num1+num2;
//if(temp>=1000)break;
//           printf("%d,",temp);
//       num1=num2; //1,2,3,5,8,13...
//           num2=temp;
//       }
//   return 0;
//}
//#include<stdio.h>
////  最大公因数
//int main(int argc,char* argv[]){
//    int a=0,b=0,t=0,aa=0,bb=0;
//    printf("please input a,b:\n");
//    scanf("%d %d",&a,&b);
//    aa=a,bb=b;
//    while(b!=0){
//        t=a%b;
//        printf("a=%d,b=%d,t=%d\n",a,b,t);
//        a=b;
//        b=t;
//    }
//    printf("%d %d zuida gongyueshu wei: %d",aa,bb,a);
//    return 0;
//}
