import java.util.*;
class StringX
{
    public char Str1[];
    public int no;

    public StringX(String str1)
    {
        Str1=str1.toCharArray();
    }
    public void StringCheck()
    {
        for(int i=0;i<Str1.length;i++)
        {
            if(Str1[i]>='a'&& Str1[i]<='z')
            {
               // System.out.print(Character.toUpperCase(Str1[i]));
                //or
                System.out.print((char)(Str1[i]-32));


            }
            else if(Str1[i]>='A'&& Str1[i]<='Z')
            {
               // System.out.print(Character.toLowerCase(Str1[i]));
                //or
                System.out.print((char)(Str1[i]+32));
            }
    }
    }
}
class Program354
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