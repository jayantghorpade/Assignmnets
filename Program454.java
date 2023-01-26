import java.util.*;
class StringX
{
    String str1;
    public StringX(String str,String ch)
    {
        str1=str.replace(ch,"");
    }
    public void Dispaly()
    {
        System.out.println(str1);
    }
}
class Program454
{
    public static void main(    String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sc.nextLine();
        System.out.println("removing char");
        String ch=sc.next();
        StringX obj=new StringX(str,ch);
       obj.Dispaly();
    }
}