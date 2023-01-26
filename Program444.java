import java.util.*;
class CharX
{
    char Ch[];
    public CharX(char Arr[])
    {
        Ch=Arr;
    }
    public int CheckOccurence()
    {
        int iCnt1=0;
        int iCnt2=0;
        for(int i=0;i<Ch.length;i++)
        {
            if(Ch[i]>='a'&& Ch[i]<='z')
            {
                iCnt1++;
            }
            else
            {
                iCnt2++;
            }
        }
        return iCnt2-iCnt1;
    }
}
class Program444
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
        iret=obj.CheckOccurence();
        System.out.println("Diff  is="+iret);
    }
}