import java.util.*;
class CharX
{
    char Ch[];
    public CharX(char Arr[])
    {
        Ch=Arr;
    public void CharchterOcuurence()
    {
        for(int i=0;i<Ch.length;i++)
        {
            if(Ch[i]>='A'&&Ch[i]<='Z')
            {
                Ch[i]=(char)(Ch[i]+32);
            }
        }
    }
    public int CheckOccurence()
    {
        int iCnt=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter charchter to check ocurrnce in cha array");
        char X=sc.next().charAt(0);
        for(int i=0;i<Ch.length;i++)
        {
            if(Ch[i]==X)
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
class Program443
{
    public static void main(String args[])
    {
        int iret=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter how many char you want to store:");
        int len=sc.nextInt();
        char ch[]=new char[len];
        for(int i=0;i<ch.length;i++)
        {
            ch[i]=sc.next().charAt(0);
        }
        CharX obj=new CharX(ch);
        obj.CharchterOcuurence();
        iret=obj.CheckOccurence();
        System.out.println("count is="+iret);
    }
}