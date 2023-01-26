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
}
public void Odd()
{
    System.out.println("First Array even elements :");
    for(int i=0;i<Arr1.length;i++)
    {
        if(Arr1[i]%2!=0)
        {
        System.out.print("|"+Arr1[i]+"|"+"\t");
        }
    }
    System.out.println("second Array even elements :");
    for(int i=0;i<Brr1.length;i++)
    {
        if(Brr1[i]%2!=0)
        {
        System.out.print("|"+Brr1[i]+"|"+"\t");
        }
    } 
}

}
class Program413
{
    public static void main(String args[])
    {
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
        obj.Odd();
    }
}