#include<iostream>
#include<windows.h>


using namespace std;
//keep
void adb(void);
void fsb(void);

void adb1(void);
void adb2(void);
void adb3(void);

void fsb1(void);
void fsb2(void);
void fsb3(void);

int tmp;

int main()
{
	//keep
	system("title ytdttj��ˢ��������b1.2");
	cout<<"��ӭʹ��ytdttj��ˢ��������Beta 1.2\n΢��@ytdttj\n----------------------------\nʹ��ǰ��ȷ������ֻ��ѿ���ADB���ԣ����ѽ���fastbootģʽ\n���������ӵ��ԣ��������ص㣩\n----------------------------\n";
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
	cout<<"���ڼ���豸�Ƿ�����....\n";
	cout<<"��ע���Ƿ����xxxxxxx fastboot����ʾ\n���û�У������²��usb��һ���ӿ�\n���ٻ��߿����ǲ��Ǹո�ѡ���ˣ�\n\n��BL���Ļ������Ƚ���BL����������ģʽ�н�OEM����������Ȼ��ʹ�ù������еĽ������ܽ�����\n----------------------------\n\n";
	system("fastboot devices");
	cout<<"\n----------------------------\n";
	system("pause");
	cout<<"\n��ѡ���ܣ�"<<endl<<"1.ˢ��recovery\n2.ˢ�뾵��boot/system��\n3.����BootLoader��С�׻�Ϊ�����벻Ҫ���ԣ���\n";
	cin>>tmp;
	switch(tmp)
	{
		default : cout<<"����һ��ѡ����~";		
		case 1 : fsb1();
				 break;
		case 2 : fsb2();
				 break;
		case 3 : fsb3();
				 break;
	}
}

void adb1()//systemУ�� 
{
	//
	system("cls");
	cout<<"������������С�׵��豸���ɷ�ֹ�ָ��ٷ�REC\n\n----------------------------\n\n";
	cout<<"�����������ʼ���У��";
	system("pause>nul");
	system("cls");
	system("adb root");
	system("adb disable-verity");
	system("adb reboot");
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

void fsb1()//rec
{
	//
	system("cls");
	cout<<"�뽫��Ҫˢ���Recovery�ļ�����Ϊrecovery.img���ƶ���ͬһĿ¼��\n��������ʱ��֧��A/B�����豸����Google Pixel��һ��6�ȣ�\n��ɲ����밴�����\n----------------------------\n\n";
	system("pause");
	cout<<"��ʼˢ��recovery��~�뵽���Ͼ�����rec�ã��ǲ��Ǻܼ�����~\nˢ��Ͱ����Զ�����recovery��~\n\n";
	system("fastboot flash recovery recovery.img");
	system("fastboot boot recovery.img");
}

void fsb2()//boot/system
{
	//
	system("cls");
	cout<<"����Ȼ˵recoveryҲ�Ǿ��񣬵����һ�����������ֿ��ˣ�\n��ѡ����Ҫˢ��ľ��������\n1.boot\n2.system\n\n";
	cin>>tmp;
	if (tmp == 1)
	{
		cout<<endl<<"�뽫��Ҫˢ���boot�ļ�����Ϊboot.img���ƶ���ͬһĿ¼��\nA/B�����Ļ��Ϳ��ܻ���������Google Pixel��һ��6�ȣ�\n��ɲ����밴�����\n----------------------------\n\n";
		system("fastboot flash boot boot.img");
	}
	else if (tmp == 2)
	{
		cout<<endl<<"�뽫��Ҫˢ���system�ļ�����Ϊsystem.img���ƶ���ͬһĿ¼��\nA/B�����Ļ��Ϳ��ܻ���������Google Pixel��һ��6�ȣ�\n��ɲ����밴�����\n----------------------------\n\n";
		system("fastboot flash system system.img");
	}
	else
	{
		cout<<"\n���֣����������һ��ѡ������";
	}
}

void fsb3()//bl
{
	//
	system("cls");
	cout<<"�ٴ����ѣ���С�׺ͻ�Ϊ�������Ƶ���������������Ҳ�������233\n\n��ô��׼�������𣿰�����������ɣ�\n";
	system("pause");
	cout<<"\n��ô��ʼ�����ȵ�����Bootloader Lock State : UNLOCKED���ǳɹ�����\n�������»��Ƴ�BL�������ܣ������ڴ�~\n\n";
	system("fastboot oem unlock");
}
