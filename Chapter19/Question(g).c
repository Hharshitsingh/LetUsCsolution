/*goto pdf;*/
#include<stdio.h>
#include<stdlib.h>
struct customer
{
    int accno;
    char name[30];
    float bal;
};
struct trans
{
    int accno;
    char trans_type;
    float amount;
};
int main()
{
    struct customer c;
    struct trans t;
    FILE *fc,*ft;
    int slen=sizeof(struct customer);
    ft=fopen("TRANSACTION.DAT","rb+");
    if(ft==NULL)
    {
        printf("Cannot open file: TRANSACTION.DAT\n");
        exit(1);
    }
    fc=fopen("CUSTOMER.DAT","rb+");
    if(fc==NULL)
    {
        printf("Cannot open file: CUSTOMER.DAT\n");
        exit(1);
    }
    while(fread(&t,sizeof(t),1,fc)==1)
    {
        fseek(ft,0,SEEK_SET);
        while(fread(&c,slen,1,ft)==1)
        {
            if(c.accno==t.accno)
            {
                if(t.trans_type=='D')
                    c.bal+=t.amount;
                else
                {
                    if((t.trans_type=='W')&&(c.bal-t.amount>100))
                    c.bal-=t.amount;
                else
                    c.bal=100;
                }
                fseek(ft,-slen,SEEK_CUR);
                fwrite(&c,slen,1,ft);
                break;
            }
        }
    }
    fclose(fc);
    fclose(ft);
}
