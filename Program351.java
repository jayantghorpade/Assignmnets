import java.util.*;
class StringX
{
    public String Str1;
    public String Str2;
    public int no;
    public StringX(String strx,String strxx,int val)
    {
        Str1=strx;
        Str2=strxx;
        no=val;
    }
    public void Concatinate()
    {
        String s=Str2.substring(0,no+1);
        System.out.println("after concatination is "+Str1+" "+s);
    }
}
class Program351
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter First String :");
        String str1=sc.nextLine();
        System.out.println("Enter First String :");
        String str2=sc.nextLine();
        System.out.println("ENTER NO OF ELEMENTS TO CONCAT");
        int no=sc.nextInt();
        StringX obj=new StringX(str1,str2,no);
        obj.Concatinate();
    }
}