import java.util.*;
class ArrayX
{
    int Arr1[];
    public ArrayX(int A[])
{
    Arr1=A;
}
}
class BrrayX extends ArrayX
{

    public BrrayX(int A[])
    {
        super(A);
    }
public void  Display()
{
    System.out.println("First Array Elements :");
    for(int i=0;i<Arr1.length;i++)
    {
        System.out.print("|"+Arr1[i]+"|"+"\t");
    }
    System.out.println();
}
public void Palindrome()
{
    int flag=0;
    int start=0;
    int end=Arr1.length-1;
   while(start<end)
   {
    if(Arr1[start]!=Arr1[end])
    {
        flag=1;
        break;
    }
    start++;
    end--;
   }
    if(flag==1)
    {
        System.out.println("False");
    }
    else
    {   
    System.out.println("True");
    }
}
}
class Program425
{
    public static void main(String args[])
    {
        int len1=0,len2=0;
        int Arr[];
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
        BrrayX obj=new BrrayX(Arr);
        obj.Display();
        obj.Palindrome();
    }
}