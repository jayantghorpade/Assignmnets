import java.util.*;
class ArrayX
{
    int Arr1[];
    int Brr1[];
    public ArrayX(int A[],int B[])
{
    Arr1=A;
    Brr1=B;
}
}
class BrrayX extends ArrayX
{

    public BrrayX(int A[],int B[])
    {
        super(A,B);
    }
public void  Display()
{
    System.out.println("First Array Elements :");
    for(int i=0;i<Arr1.length;i++)
    {
        System.out.print("|"+Arr1[i]+"|"+"\t");
    }
    System.out.println();
    System.out.println("Second Array Elements :");
    for(int i=0;i<Brr1.length;i++)
    {
        System.out.print("|"+Brr1[i]+"|"+"\t");
     
    }
    System.out.println();
}
public int MinArr()
{
    int Min1=Arr1[0];
    System.out.println("First Array min is===:");
    for(int i=0;i<Arr1.length;i++)
    {
        if(Arr1[i]<Min1)
        {
            Min1=Arr1[i];
        }
    }
    return Min1;
}
public int MinBrr()
{
    int Min2=Brr1[0];
    System.out.println("second Array min is===:");
    for(int i=0;i<Brr1.length;i++)
    {
        if(Brr1[i]<Min2)
        {
            Min2=Brr1[i];
        }
    }
    return Min2;
    }
    
} 
class Program422
{
    public static void main(String args[])
    {
        int iret1=0;
        int iret2=0;
        int len1=0,len2=0;
        int Arr[];
        int Brr[];
        System.out.println("enter length of First Array array");
        Scanner sc=new Scanner(System.in);
        len1=sc.nextInt();
        Arr=new int[len1];
        System.out.println("Enter First array elements :");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println("enter the lements :"+(i+1));
            Arr[i]=sc.nextInt();
        }
        System.out.println("enter length of Second array");
        len2=sc.nextInt();
        Brr=new int[len2];
        System.out.println("Enter second array elements :");
        for(int j=0;j<Brr.length;j++)
        {
            System.out.println("enter the lements :"+(j+1));
            Brr[j]=sc.nextInt();
        }
        BrrayX obj=new BrrayX(Arr,Brr);
        obj.Display();
        iret1=obj.MinArr();
        System.out.println("Min Arr is :"+iret1);
        iret2=obj.MinBrr();
        System.out.println("Min Brr is :"+iret2);
    }
}