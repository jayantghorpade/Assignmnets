import java.util.*;
class ArrayX
{
    float Arr1[];
    public ArrayX(float A[])
{
    Arr1=A;
}
}
class BrrayX extends ArrayX
{

    public BrrayX(float A[])
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
public void Result()
{
    int k=0;
     for(int i=0;i<Arr1.length;i++)
    {
        if(Arr1[i]<35)
        {
            System.out.println("Fail ="+Arr1[i]);
        }
        else if(Arr1[i]<50)
        {
 System.out.println("Pass Class="+Arr1[i]);
        }
         else if(Arr1[i]<60)
        {
 System.out.println("Second class="+Arr1[i]);
        }
         else if(Arr1[i]<70)
        {
 System.out.println("First Class="+Arr1[i]);
        }
         else if(Arr1[i]>70)
        {
 System.out.println("First Class with Distinction ="+Arr1[i]);
        }
    }
}
}
class Program435
{
    public static void main(String args[])
    {
        int len1=0,len2=0;
        float Arr[];
        System.out.println("enter How many Student Of student of result show :");
        Scanner sc=new Scanner(System.in);
        len1=sc.nextInt();
        Arr=new float[len1];
        System.out.println("Enter Marks:");
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println("enter Student marks:"+(i+1));
            Arr[i]=sc.nextFloat();
        }
        BrrayX obj=new BrrayX(Arr);
        obj.Display();
        obj.Result();
    }
}