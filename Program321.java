import java.util.*;
class ArrayX
{
    public int Arr[]; 
    public ArrayX(int Len)
    {
        Arr=new int[Len];
    }
    public void Accept()
    {
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println("Enter array element :"+i);
            Arr[i]=sc.nextInt();
        }
    }
    public int DisplayEvenOdd()
    {
        int sumEven=0;
        int sumOdd=0;
        for(int i=0;i<Arr.length;i++)
        {
            if(Arr[i]%2==0)
            {
                sumEven=sumEven+Arr[i];
            }
            else
            {
                sumOdd=sumOdd+Arr[i];
            }
        }
        return sumEven-sumOdd;
    }
}
class Program321
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length of array:");
        int size=sc.nextInt();
        ArrayX obj=new ArrayX(size);
        obj.Accept();
        int iret=obj.DisplayEvenOdd();
        System.out.println("Diff is :"+iret);

    }
}