import java.util.*;
class StringX
{
    public String Str1;
    public String Str2;

    public StringX(String str1,String str2)
    {
        Str1=str1;
        Str2=str2;
    }
    public void StringCheck()
    {
        if(Str1.equals(Str2))
        {
        System.out.println("True");
        }
        else
        {
            System.out.println("Flase");
        }
       
    }
}
class Program352
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter First String :");
        String str1=sc.nextLine();
        System.out.println("Enter First String :");
        String str2=sc.nextLine();
        StringX obj=new StringX(str1,str2);
        obj.StringCheck();

    }
}