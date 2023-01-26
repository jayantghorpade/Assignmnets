import java.util.*;
class ArrayX
{
    public int Arr[];
    public ArrayX(int len)
    {
        Arr=new int[len];
    }
    public void Accept()
    {
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println("array elements: "+i);
            Arr[i]=sc.nextInt();
        }
    } 
    public void DisplayMultple11()
    {
     for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]%11==0)
            {
            System.out.print(Arr[i]+"\t"); 
            }
        }   
    }


}
class Program325
{
    public static void main(String args[])
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter length of array");
        int size=sc.nextInt();
        ArrayX obj=new ArrayX(size);
        obj.Accept();
        obj.DisplayMultple11();
    }
}