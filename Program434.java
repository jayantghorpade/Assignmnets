import java.util.*;
class StringX
{
   public char Arr[];
    public StringX(char ch[])
    {
        Arr=ch;
    }
public int CapitalCount()
{
    int iCnt=0;
    for(int i=0;i<Arr.length;i++)
    {
        if(Arr[i]>='A' && Arr[i]<='Z')
        {
            iCnt++;
        }
    }
    return iCnt;
} 

}
class Program434
{
    public static void main(String args[])
    {
        int iret=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter length of char array :");
        int len=sc.nextInt();
        char ch[]=new char[len];
        System.out.println("Enter Char");
        for(int i=0;i<ch.length;i++)
        {
            ch[i]=sc.next().charAt(0);
        }
        System.out.println("ARRAY ELEMNTS ARE :");
        for(int j=0;j<ch.length;j++)
        {
        System.out.print(ch[j]);
        }
        StringX obj=new StringX(ch);
        iret=obj.CapitalCount();
        System.out.println("count is ="+iret);
    }
}