#include<iostream>
#include<windows.h>


using namespace std;
//keep
void adb(void);
void fsb(void);

void adb1(void);
void adb2(void);
void adb3(void);

int tmp;

int main()
{
	//keep
	system("title ytdttj��ˢ��������v1.0");
	cout<<"��ӭʹ��ytdttj��ˢ��������v1.0\n΢��@ytdttj\n----------------------------\nʹ��ǰ��ȷ������ֻ��ѿ���ADB���ԣ����ѽ���fastbootģʽ\n���������ӵ��ԣ��������ص㣩\n----------------------------\n";
	system("pause");
	cout<<"������ѡ��������ӷ�ʽ��1.ADB��Recovery��    2.Fastboot\n";
	cin>>tmp;
	if (tmp == 1)
	{
		adb();
	}
	else if (tmp == 2)
	{
		fsb();
	}
	else
	{
		cout<<"�ⲻ��һ��ѡ����˳����¿�ʼ��~\n";
	}
	return 0;
} 

void adb()
{
	system("cls");
	cout<<"���ڼ���豸�Ƿ�����....\n";
	cout<<"��ע���Ƿ����xxxxxxx device����ʾ\n���û�У������²��usb��һ���ӿ�\n���ٻ��߿����ǲ��Ǹո�ѡ���ˣ�\n----------------------------\n\n";
	system("adb devices");
	cout<<"\n----------------------------\n";
	system("pause");
	cout<<"\n��ѡ���ܣ�"<<endl<<"1.����system��ȥ��bootУ�飩\n2.��װAPP\n3.����ϵͳ���棨Ŀǰ������OPPO)\n";
	cin>>tmp;
	switch(tmp)
	{
		default : cout<<"����һ��ѡ����~";		
		case 1 : adb1();
				 break;
		case 2 : adb2();
				 break;
		case 3 : adb3();
				 break;

	}
	
}

void fsb()
{
	system("cls");
}

void adb1()//systemУ�� 
{
	//
	
}

void adb2()//��װapp 
{
	//
	system("cls");
	cout<<"�뽫��Ҫ��װ��APP�ļ�����Ϊapp.apk���ƶ���ͬһĿ¼��\n��ɲ����밴�����\n----------------------------\n\n";
	system("pause");
	cout<<"��ʼ��װ���APP��~��ȴ�Success����ʾ����~\n\n";
	system("adb install -r app.apk");
}

void adb3()//����ϵͳ���� 
{
	//
	system("cls");
	cout<<"������Ŀǰ������OPPO������ϵͳ�ȴ�����\n��Ҳ���Խ����ϵͳ������������������ytdttj@163.com\n\nԭ���ǽ���ϵͳ������\n���������Ȱ�װ����������������������޷��������棡��\n\n";
	cout<<"��ѡ��\n1.����OPPO Launcher\n2.�ָ�OPPO Launcher\n\n";
	cin>>tmp;
	if (tmp == 1)
	{
		cout<<"\n\n��ѡ���˽���OPPO Launcher�����ٴ�ȷ�����Ѿ���װ������������\n\nȷ���밴�����\n";
		system("pause>nul");
		cout<<"\n��ʼִ��adb������Ժ�\n\n";
		system("adb shell pm disable-user com.oppo.launcher");
	}
	if (tmp == 2)
	{
		cout<<"\n\n��ѡ���˻ָ�OPPO Launcher������Ϊ��ָ�\n";
		system("adb shell pm enable com.oppo.launcher");
	}
}



