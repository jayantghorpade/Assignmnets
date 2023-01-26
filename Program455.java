import java.util.*;
class StringX
{
    char str1[];
    public StringX(String str)
    {
       str1=str.toCharArray();
    }
    public void Dispaly()
    {
        int icnt=0;
        for(int i=0;i<str1.length;i++)
        {
            if(str1[i]=='(' || str1[i]==')')
            {
                icnt++;
            }
        }
        if(icnt%2==0)
        {
            System.out.println("true");
        }
        else
        {
            System.out.println("false");
        }
    }
}
class Program455
{
    public static void main(    String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter string");
        String str=sc.nextLine();
        StringX obj=new StringX(str);
       obj.Dispaly();
    }
}