#include<stdio.h>

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
void check();
void chesscheck();

int i,j,c=0,k=1,a[8][8],v=0,h=0,l2m=0,m2l=0,r2m=0,m2r=0;
int i1,i2,i3,i4,i5,i6,i7,i8,f,way=1,y,b[8],br=1;

int main() {
    printf("Displaying all possibilities in Algebraic notation\n");
    for(i1=1;i1<=8;i1++) {
        for(i2=1;i2<=8;i2++) {
            for(i3=1;i3<=8;i3++) {
                for(i4=1;i4<=8;i4++) {
                    for(i5=1;i5<=8;i5++) {
                        for(i6=1;i6<=8;i6++) {
                            for(i7=1;i7<=8;i7++) {
                                for(i8=1;i8<=8;i8++) {
                                    b[0]=i1;
                                    b[1]=i2;
                                    b[2]=i3;
                                    b[3]=i4;
                                    b[4]=i5;
                                    b[5]=i6;
                                    b[6]=i7;
                                    b[7]=i8;
                                    check();
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void input() {
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

    for(i=0;i<8;i++) {
        y=b[i];
        a[i][y-1]=1;
    }
}

void chesscheck() {
    input();
    hor();
    ver();
    left2right();
    right2left();
    display();
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

void r2l1()
{
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
    char aa[8] = {'a','b','c','d','e','f','g','h'};
    if( h==0 && v==0 && l2m==0 && m2l==0 && r2m==0 && m2r==0) {
        printf("  WAY %d : ",way);
        for(i=0;i<8;i++) {
            for(j=0;j<8;j++) {
                if(a[i][j]==1)
                    printf("  %c%d",aa[i],j+1);
            }
        }
        way++;
        br++;
        printf("\n");
    }
}


void check() {
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0;
    for(f=0;f<8;f++) {
        if(b[f]==1)
            a1=1;
        if(b[f]==2)
            a2=1;
        if(b[f]==3)
            a3=1;
        if(b[f]==4)
            a4=1;
        if(b[f]==5)
            a5=1;
        if(b[f]==6)
            a6=1;
        if(b[f]==7)
            a7=1;
        if(b[f]==8)
            a8=1;
    }
    if(a1==1 && a2==1 && a3==1 && a4==1 && a5==1 && a6==1 && a7==1 && a8==1)
        chesscheck();
}

