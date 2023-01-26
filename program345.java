import java.util.*;
class ArrayX 
{
    public int Arr[];
    public ArrayX(int len)
    {
        Arr=new int[len];
    }
    protected void Accept()
    {
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println("Enter array elemts: "+i);
            Arr[i]=sc.nextInt();
        } 
    } 
}
class Derived extends ArrayX
{
    public int isum=1;
    public Derived(int len)
    {
        super(len);
    }
    public int ProductOddNo()
    {
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]%2!=0)
            {
                isum=isum*Arr[i];
            }
        } 
        return isum;  
}
}
class Program345
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array:");
        int length=sc.nextInt();
        Derived obj=new Derived(length);
        obj.Accept();
       int iret=obj.ProductOddNo();
       System.out.println("product of all odd no is :"+iret);
        }
}