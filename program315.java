import java.util.*;
class ReverseString
{
    public String s;
    public int start;
    public int end;
    public ReverseString(String str)
    {
        s=str;
        start=0;
        end=str.length()-1;
    }
    public void ReverseOrder()
    {
        char temp='\0';
        char Arr[]=s.toCharArray();
         while(start<end)
        {
            temp=Arr[start];
            Arr[start]=Arr[end];
            Arr[end]=temp;
        start++;
        end--;
        }
        System.out.println(Arr);        
    }
}
class Program315
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter String :");
        String str=sc.nextLine();
        
        ReverseString obj=new ReverseString(str);
        obj.ReverseOrder();
        
    }
}