#include<reg51.h>
#define uchar unsigned char
#define uint unsigned int
/*七段共阴极数码管显示定义*/
uchar code table[ ]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,
0x7F,0x6F,0xBF,0x86,0xDB,0xCF,0XE6,0xED,0xFD,0x87,0xFF,0xEF};
/*定义并初始化变量*/
uchar second=0;
uchar minute=0;
uchar hour=0;
uchar count=0;
sbit P3_0=P3^0;//秒调整端口定义
sbit P3_1=P3^1;//分钟调整端口定义
sbit P3_2=P3^2;//小时调整端口定义
void delay(uchar i );//延时子程序
void key( );//键盘扫描子程序
void time( );//时间处理子程序
void display( );//显示子程序

void delay (uchar i){
	uchar j;
	for(i;i>0;i--)
		for(j=0;j<125;j++);
}

void key ( ) {
	//秒按键的调整
	if(P3_0==0){
		delay(30);
		if(P3_0==0){
			second++;
			if(second==60){
				second=0;
			}
		}
		while(!P3_0);
	}
	//分钟按键的调整
	if(P3_1==0){
		delay(30);
		if(P3_1==0){
			minute++;
			if(minute==60){
				minute=0;
			}
		}
		while(!P3_1);
	}
	//小时按键的调整
	if(P3_2==0){
		delay(30);
		if(P3_2==0){
			hour++;
			if(hour==24){
				hour=0;
			}
		}
	}
	while(!P3_2);
}

void time( ){
	if(second==60) {
		second=0;
		minute ++;
		if(minute ==60) {
			minute =0;
			hour++;
			if(hour==24) {
				hour=0;
			}
		}
	}
}

void display( ){
	P2=0xfe;
	P0= table [hour/10];//显示小时的十位
	delay(4);
	P2=0xfd;
	P0=( table [(hour%10)])|0X80;//显示小时的个位
	delay(4);
	P2=0xfb;
	P0= table [minute/10];//显示分的十位
	delay(4);
	P2=0xf7;
	P0=( table [minute%10])|0X80;//显示分的个位
	delay(4);
	P2=0xef;
	P0= table [second/10];//显示秒的十位
	delay(4);
	P2=0xdf;
	P0= table [second%10];//显示秒的个位
	delay(4);
}
/*定时器0方式1，50ms中断一次*/
void timer0( ) interrupt 1 {
	TMOD = 0x01;
	TH0=(65536-50000)/256;
	TL0=(65536-50000)%256;
count++;
	if(count==20){
		second++;
		count=0;//对计数单元清零
	}
}

void main( )
{
	P3=0xff;//初始化p3口，全设为高电平
 	TMOD=0x01;//设置定时器0工作方式1
	TH0=(65536-50000)/256;//预置计数初值
	TL0=(65536-50000)%256;
EA=1;
	ET0=1;
	TR0=1;
	while (1){
		key( );//按键扫描
		time( );//时间处理
		display( );//显示时间
 	}
}
