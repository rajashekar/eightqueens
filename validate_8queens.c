#include<stdio.h>
#include<stdlib.h>

struct node {
    int p,q;
}*w;

void l2r1();
void l2r2();
void r2l1();
void r2l2();
void left2right();
void right2left();
void hor();
void ver();
void input();
void display();

int i,j,c=0,k=1,a[8][8],v=0,h=0,l2m=0,m2l=0,r2m=0,m2r=0;
char ch='y';

int main() {
    while(ch=='y')
    {
        c=0;
        k=1;
        v=0;
        h=0;
        l2m=0;
        m2l=0;
        r2m=0;
        m2r=0;
        for(i=0;i<8;i++)
            for(j=0;j<8;j++)
                a[i][j]=0;
        input();
        hor();
        ver();
        left2right();
        right2left();
        display();
        fflush(stdin);
        scanf("%c",&ch);
    }
}

void input() {
    printf("\n ENTER THE CO-ORIDINATES IN ALGEBRAIC NOTATION. Example: a1");
    char aa;
    int bb;
    for(i=0;i<8;i++) {
        printf("\n ENTER %d QUEEN COORDINATE ",i+1);
        w=(struct node *)malloc(sizeof(struct node));
        w->p=-1;
        scanf("%c%d",&aa,&bb);
        if(aa=='a') w->p = 0;
        if(aa=='b') w->p = 1;
        if(aa=='c') w->p = 2;
        if(aa=='d') w->p = 3;
        if(aa=='e') w->p = 4;
        if(aa=='f') w->p = 5;
        if(aa=='g') w->p = 6;
        if(aa=='h') w->p = 7;
        w->q = bb - 1;
        if( w->p < 0 || w->p > 7 || w->q < 0 || w->q > 7) {
            i--;
            printf("\n please check the coordinates u have entered ");
            printf("\n it should be in Algebraic notation");
            continue;
        }
        a[w->p][w->q]=1;
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { }
    }
}

void l2r1() {
    l2m=0;
    for(j=7;j>0;j--) {
        c=0;
        for(i=0;i<=j;i++) {
            if(a[j-i][i]==1)
                c++;
        }
        if(c>1)
            l2m=1;
    }
}

void l2r2() {
    k=1;
    m2l=0;
    for(j=7;j>1;j--) {
        c=0;
        for(i=0;i<j;i++) {
            if(a[(j+k-1)-i][i+k]==1)
                c++;
        }
        if(c>1)
            m2l=1;
        k++;
    }
}

void r2l1() {
    k=1;
    r2m=0;
    for(j=6;j>=0;j--) {
        c=0;
        for(i=0;i<=k;i++) {
            if(a[i][i+j]==1)
                c++;
        }
        if(c>1)
            r2m=1;
        k++;
    }
}

void r2l2() {
    k=1;
    m2r=0;
    for(j=6;j>=0;j--) {
        c=0;
        for(i=0;i<=k;i++) {
            if(a[i+j][i]==1)
                c++;
        }
        if(c>1)
            m2r=1;
        k++;
    }
}

void left2right() {
    l2r1();
    l2r2();
}

void right2left() {
    r2l1();
    r2l2();
}

void hor() {
    h=0;
    for(i=0;i<8;i++) {
        c=0;
        for(j=0;j<8;j++) {
            if(a[i][j]==1)
                c++;
        }
        if(c>1)
            h=1;
    }
}

void ver() {
    v=0;
    for(i=0;i<8;i++) {
        c=0;
        for(j=0;j<8;j++) {
            if(a[j][i]==1)
                c++;
        }
        if(c>1)
            v=1;
    }
}

void display() {
    if( h==0 && v==0 && l2m==0 && m2l==0 && r2m==0 && m2r==0)
        printf(" \n CONGRATS U HAD MADE IT ");
    else {
        if(h==1)
            printf("\n SORRY! MORE THAN ONE QUEEN IN ONE ROW ");
        if(v==1)
            printf("\n SORRY! MORE THAN ONE QUEEN IN ONE COLUMN ");
        if(l2m==1)
            printf("\n SORRY! MORE THAN ONE QUEEN IN ONE LEFT 2 MIDDLE DIAGONAL ");
        if(m2l==1)
            printf("\n SORRY! MORE THAN ONE QUEEN IN ONE MIDDLE 2 LEFT DIAGONAL");
        if(r2m==1)
            printf("\n SORRY! MORE THAN ONE QUEEN IN ONE RIGHT 2 MIDDLE DIAGONAL ");
        if(m2r==1)
            printf("\n SORRY! MORE THAN ONE QUEEN IN ONE MIDDLE 2 RIGHT DIAGONAL ");
    }
}
