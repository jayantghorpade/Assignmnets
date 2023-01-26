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
    public Derived(int len)
    {
        super(len);
    }
    public void startend()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter start index :");
        int start=sc.nextInt();
        System.out.println("Enter end index :");
        int end=sc.nextInt();
        System.out.println("Elemnts :");
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]>=start && Arr[i]<=end)
            {
                System.out.println(Arr[i]+"\t");      
            }  
        } 
}
}
class Program344
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array:");
        int length=sc.nextInt();
        Derived obj=new Derived(length);
        obj.Accept();
        obj.startend();
         }
}