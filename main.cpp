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
	system("title ytdttj的刷机工具箱b1.2");
	cout<<"欢迎使用ytdttj的刷机工具箱Beta 1.2\n微博@ytdttj\n----------------------------\n使用前请确认你的手机已开启ADB调试，或已进入fastboot模式\n并且已连接电脑！！（划重点）\n----------------------------\n";
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
	cout<<"正在检测设备是否连接....\n";
	cout<<"请注意是否出现xxxxxxx fastboot的提示\n如果没有，请重新插拔usb或换一个接口\n（再或者看看是不是刚刚选错了）\n\n有BL锁的机型请先解锁BL锁（开发者模式中将OEM解锁开启，然后使用工具箱中的解锁功能解锁）\n----------------------------\n\n";
	system("fastboot devices");
	cout<<"\n----------------------------\n";
	system("pause");
	cout<<"\n请选择功能："<<endl<<"1.刷入recovery\n2.刷入镜像（boot/system）\n3.解锁BootLoader（小米华为机型请不要尝试！）\n";
	cin>>tmp;
	switch(tmp)
	{
		default : cout<<"不是一个选项噢~";		
		case 1 : fsb1();
				 break;
		case 2 : fsb2();
				 break;
		case 3 : fsb3();
				 break;
	}
}

void adb1()//system校验 
{
	//
	system("cls");
	cout<<"本功能适用于小米等设备，可防止恢复官方REC\n\n----------------------------\n\n";
	cout<<"按下任意键开始解除校验";
	system("pause>nul");
	system("cls");
	system("adb root");
	system("adb disable-verity");
	system("adb reboot");
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

void fsb1()//rec
{
	//
	system("cls");
	cout<<"请将你要刷入的Recovery文件名改为recovery.img并移动至同一目录下\n本功能暂时不支持A/B分区设备（如Google Pixel、一加6等）\n完成操作请按任意键\n----------------------------\n\n";
	system("pause");
	cout<<"开始刷入recovery咯~想到马上就有新rec用，是不是很激动呢~\n刷完就帮你自动进入recovery噢~\n\n";
	system("fastboot flash recovery recovery.img");
	system("fastboot boot recovery.img");
}

void fsb2()//boot/system
{
	//
	system("cls");
	cout<<"（虽然说recovery也是镜像，但是我还是特意把它分开了）\n请选择你要刷入的镜像分区：\n1.boot\n2.system\n\n";
	cin>>tmp;
	if (tmp == 1)
	{
		cout<<endl<<"请将你要刷入的boot文件名改为boot.img并移动至同一目录下\nA/B分区的机型可能会凉凉（如Google Pixel、一加6等）\n完成操作请按任意键\n----------------------------\n\n";
		system("fastboot flash boot boot.img");
	}
	else if (tmp == 2)
	{
		cout<<endl<<"请将你要刷入的system文件名改为system.img并移动至同一目录下\nA/B分区的机型可能会凉凉（如Google Pixel、一加6等）\n完成操作请按任意键\n----------------------------\n\n";
		system("fastboot flash system system.img");
	}
	else
	{
		cout<<"\n过分！这根本不是一个选项啦！";
	}
}

void fsb3()//bl
{
	//
	system("cls");
	cout<<"再次提醒！！小米和华为机型请绕道，否则机子死了我不负责任233\n\n那么，准备好了吗？按任意键继续吧？\n";
	system("pause");
	cout<<"\n那么开始咯！等到出现Bootloader Lock State : UNLOCKED就是成功啦！\n后续更新会推出BL回锁功能，敬请期待~\n\n";
	system("fastboot oem unlock");
}
