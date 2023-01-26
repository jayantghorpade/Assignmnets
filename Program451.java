import java.util.*;
class StringX
{
   String str1;
   String str2,str3;
    public StringX(String a,String b)
    {
        str1=a;
        str2=b;
        str3=a+a;
    }
    public void Rotation()
    {
        if(str1.length()!=str2.length())
        {
            System.out.println("flase");
            System.exit(0);
        }
        if(str3.indexOf(str2)!=-1)
        {
            System.out.println("true");
        }
        else
        {
        System.out.println("False");
        }
        }
 }
class Program451
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER FIRST STRING :");
        String str1=sc.nextLine();
         System.out.println("ENTER SECOND STRING :");
        String str2=sc.nextLine();
        StringX obj=new StringX(str1,str2);
        obj.Rotation();
    }
}