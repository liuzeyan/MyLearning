#include<reg51.h>
#define uchar unsigned char
#define uint unsigned int
/*�߶ι������������ʾ����*/
uchar code table[ ]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,
0x7F,0x6F,0xBF,0x86,0xDB,0xCF,0XE6,0xED,0xFD,0x87,0xFF,0xEF};
/*���岢��ʼ������*/
uchar second=0;
uchar minute=0;
uchar hour=0;
uchar count=0;
sbit P3_0=P3^0;//������˿ڶ���
sbit P3_1=P3^1;//���ӵ����˿ڶ���
sbit P3_2=P3^2;//Сʱ�����˿ڶ���
void delay(uchar i );//��ʱ�ӳ���
void key( );//����ɨ���ӳ���
void time( );//ʱ�䴦���ӳ���
void display( );//��ʾ�ӳ���

void delay (uchar i){
	uchar j;
	for(i;i>0;i--)
		for(j=0;j<125;j++);
}

void key ( ) {
	//�밴���ĵ���
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
	//���Ӱ����ĵ���
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
	//Сʱ�����ĵ���
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
	P0= table [hour/10];//��ʾСʱ��ʮλ
	delay(4);
	P2=0xfd;
	P0=( table [(hour%10)])|0X80;//��ʾСʱ�ĸ�λ
	delay(4);
	P2=0xfb;
	P0= table [minute/10];//��ʾ�ֵ�ʮλ
	delay(4);
	P2=0xf7;
	P0=( table [minute%10])|0X80;//��ʾ�ֵĸ�λ
	delay(4);
	P2=0xef;
	P0= table [second/10];//��ʾ���ʮλ
	delay(4);
	P2=0xdf;
	P0= table [second%10];//��ʾ��ĸ�λ
	delay(4);
}
/*��ʱ��0��ʽ1��50ms�ж�һ��*/
void timer0( ) interrupt 1 {
	TMOD = 0x01;
	TH0=(65536-50000)/256;
	TL0=(65536-50000)%256;
count++;
	if(count==20){
		second++;
		count=0;//�Լ�����Ԫ����
	}
}

void main( )
{
	P3=0xff;//��ʼ��p3�ڣ�ȫ��Ϊ�ߵ�ƽ
 	TMOD=0x01;//���ö�ʱ��0������ʽ1
	TH0=(65536-50000)/256;//Ԥ�ü�����ֵ
	TL0=(65536-50000)%256;
EA=1;
	ET0=1;
	TR0=1;
	while (1){
		key( );//����ɨ��
		time( );//ʱ�䴦��
		display( );//��ʾʱ��
 	}
}
