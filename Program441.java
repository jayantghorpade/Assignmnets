import java.util.*;
class CharX
{
    char Ch[];
    public CharX(char Arr[])
    {
        Ch=Arr;
    }
    public void Display()
    {
         for(int i=0;i<Ch.length;i++)
        {
            System.out.print(Ch[i]+"\t");
        }
            System.out.println();

    }
    public void CapitalCount()
    {
        for(int i=0;i<Ch.length;i++)
        {
            if(Ch[i]>='A'&&Ch[i]<='Z')
            {
                System.out.print((char)(Ch[i]+32)+"\t");
            }
            else
            {
            System.out.print(Ch[i]+"\t");
            }
        }
    }

}
class Program441
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter how many char you want to store:");
        int len=sc.nextInt();
        char ch[]=new char[len];
        for(int i=0;i<ch.length;i++)
        {
            ch[i]=sc.next().charAt(0);
        }
        CharX obj=new CharX(ch);
        obj.Display();
        obj.CapitalCount();

    }
}