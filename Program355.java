import java.util.*;
class StringX
{
    public char Arr[];
    public int no;

    public StringX(String str1)
    {
        Arr=str1.toCharArray();
    }
    public void StringCheck()
    {
        int start=0;
        int end=Arr.length-1;
        char temp='\0';
        int flag=0;
        while(start<end)
        {
            if(Arr[start]>='A' && Arr[start]<='Z')
            {
                Arr[start]=Character.toLowerCase(Arr[start]);
            }
            else if( Arr[end]>='A' && Arr[end]<='Z')
            {
                Arr[end]=Character.toLowerCase(Arr[end]);
            }
            if(Arr[start]!=Arr[end])
            {
                flag=1;
                break;
            }
            start++;
            end--;

        }
        if(flag==0)
        {
            System.out.println("true");
        }
        else
        {
            System.out.println("False");
        }
    }
}
class Program355
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter First String :");
        String str1=sc.nextLine();
        StringX obj=new StringX(str1);
        obj.StringCheck();

    }
}