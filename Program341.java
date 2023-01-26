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
    public boolean FindNo()
    {
        boolean flag=false;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no to check wheater no is prsent or not :");
        int check=sc.nextInt();
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]==check)
            {
                flag=true;
                
            }
           
        } 
         return flag;
}

}
class Program341
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array:");
        int length=sc.nextInt();
        Derived obj=new Derived(length);
        obj.Accept();
        boolean iret=obj.FindNo();
        System.out.println(iret);
    }
}