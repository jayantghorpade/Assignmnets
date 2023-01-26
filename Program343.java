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
    public int FindIndex()
    {
        int flag=-1;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no to check index of that no :");
        int check=sc.nextInt();
        for(int i=(Arr.length)-1;i>=0;i--)
        {
            if(Arr[i]==check)
            {
                flag=i;
                break;
                
            }
           
        } 
         return flag;
}
}
class Program343
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array:");
        int length=sc.nextInt();
        Derived obj=new Derived(length);
        obj.Accept();
        int iret=obj.FindIndex();
        System.out.println(iret);
    }
}