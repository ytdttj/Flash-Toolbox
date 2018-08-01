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
	system("title ytdttj的刷机工具箱v1.0");
	cout<<"欢迎使用ytdttj的刷机工具箱v1.0\n微博@ytdttj\n----------------------------\n使用前请确认你的手机已开启ADB调试，或已进入fastboot模式\n并且已连接电脑！！（划重点）\n----------------------------\n";
	system("pause");
	cout<<"现在请选择你的连接方式：1.ADB（Recovery）    2.Fastboot\n";
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
		cout<<"这不是一个选项，请退出重新开始噢~\n";
	}
	return 0;
} 

void adb()
{
	system("cls");
	cout<<"正在检测设备是否连接....\n";
	cout<<"请注意是否出现xxxxxxx device的提示\n如果没有，请重新插拔usb或换一个接口\n（再或者看看是不是刚刚选错了）\n----------------------------\n\n";
	system("adb devices");
	cout<<"\n----------------------------\n";
	system("pause");
	cout<<"\n请选择功能："<<endl<<"1.解锁system（去除boot校验）\n2.安装APP\n3.更换系统桌面（目前仅适配OPPO)\n";
	cin>>tmp;
	switch(tmp)
	{
		default : cout<<"不是一个选项噢~";		
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

void adb1()//system校验 
{
	//
	
}

void adb2()//安装app 
{
	//
	system("cls");
	cout<<"请将你要安装的APP文件名改为app.apk并移动至同一目录下\n完成操作请按任意键\n----------------------------\n\n";
	system("pause");
	cout<<"开始安装你的APP咯~请等待Success的提示出现~\n\n";
	system("adb install -r app.apk");
}

void adb3()//更换系统桌面 
{
	//
	system("cls");
	cout<<"本功能目前仅适配OPPO，其他系统等待适配\n你也可以将你的系统的启动器包名发送至ytdttj@163.com\n\n原理是禁用系统启动器\n所以请事先安装好其他启动器，否则可能无法进入桌面！！\n\n";
	cout<<"请选择：\n1.禁用OPPO Launcher\n2.恢复OPPO Launcher\n\n";
	cin>>tmp;
	if (tmp == 1)
	{
		cout<<"\n\n你选择了禁用OPPO Launcher，请再次确认你已经安装了其他启动器\n\n确认请按任意键\n";
		system("pause>nul");
		cout<<"\n开始执行adb命令，请稍后\n\n";
		system("adb shell pm disable-user com.oppo.launcher");
	}
	if (tmp == 2)
	{
		cout<<"\n\n你选择了恢复OPPO Launcher，正在为你恢复\n";
		system("adb shell pm enable com.oppo.launcher");
	}
}



