import java.util.*;
class StringX
{
    public char Str1[];
    public char Str2[];
    public int no;

    public StringX(String str1,String str2,int val)
    {
        Str1=str1.toCharArray();
        Str2=str2.toCharArray();
        no=val;
    }
    public void StringCheck()
    {
        int flag=0;
        for(int i=0;i<no;i++)
        {
            if(Str1[i]!=Str2[i])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}
class Program353
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter First String :");
        String str1=sc.nextLine();
        System.out.println("Enter First String :");
        String str2=sc.nextLine();
         System.out.println("Enter no of char check weather same or not in String :");
        int  no=sc.nextInt();import java.util.*;
class StringX
{
    public char Str1[];
    public char Str2[];
    public int no;

    public StringX(String str1,String str2,int val)
    {
        Str1=str1.toCharArray();
        Str2=str2.toCharArray();
        no=val;
    }
    public void StringCheck()
    {
        int flag=0;
        for(int i=0;i<no;i++)
        {
            if(Str1[i]!=Str2[i])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}
class Program353
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter First String :");
        String str1=sc.nextLine();
        System.out.println("Enter First String :");
        String str2=sc.nextLine();
         System.out.println("Enter no of char check weather same or not in String :");
        int  no=sc.nextInt();
        StringX obj=new StringX(str1,str2,no);
        obj.StringCheck();

    }
}
        StringX obj=new StringX(str1,str2,no);
        obj.StringCheck();

    }
}