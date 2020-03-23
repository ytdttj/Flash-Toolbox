#include <iostream>
#include <windows.h>

using namespace std;
//

int tmp;
void adb();
void fsb();

void adb1(void);
void adb2(void);
void adb3(void);
void adb4(void);
void adb5(void);
void adb6(void);

void fsb1(void);
void fsb2(void);
void fsb3(void);

void color();

int main()
{
	//
	cout<<"Copyright 2020 CSG Studio Reserved.\n";
	system("title CSG刷机工具箱");
	cout<<"欢迎使用CSG团队出品的刷机工具箱\n----------------------------\n使用前请确认你的手机已开启ADB调试,或已进入fastboot模式\n并且已连接电脑!!(划重点)\n----------------------------\n";
	system("pause");
	cout<<"请选择你的连接方式：1.ADB(Recovery)    2.Fastboot\n3.更改工具箱配色\n\n";
	cin>>tmp;
	if (tmp == 1)
	{
		adb();
	}
	else if (tmp == 2)
	{
		fsb();
	}
	else if (tmp == 3)
    {
        color();
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
	system("title ADB Mode");
	cout<<"请注意是否出现xxxxxxx device的提示\n如果没有，请重新插拔数据线或换一个接口\n（或者看看是不是刚刚选错了\n";
	system("adb devices");
	cout<<"\n------------------\n";
	system("pause");
	cout<<"\n请选择功能：\n1.解锁system（去除boot校验）\n2.安装APP\n3.冰箱等类似软件激活\n4.黑阈激活\n5.叹号杀手（原生及类原生）\n6.Sideload（需要在TWRP中选择ADB Sideload）\n7.返回上一级菜单\n";
	cin>>tmp;
	switch(tmp)
	{
		default : cout<<"不是一个选项噢~";
		case 1 : adb1();break;
		case 2 : adb2();break;
		case 3 : adb3();break;
		case 4 : adb4();break;
		case 5 : adb5();break;
		case 6 : adb6();break;
		case 7 : system("cls");main();break;
	}
}


void adb1()//system
{
	//
	system("cls");
	cout<<"本功能适用于小米等设备，可防止恢复官方Recovery\n\n----------------------------\n\n";
	cout<<"按下任意键开始解除校验";
	system("pause>nul");
	system("cls");
	system("adb root");
	system("adb disable-verity");
	cout<<"按下回车重启设备\n";
	system("pause>nul");
	system("adb reboot");
}

void adb2()//app
{
	//
	system("cls");
	cout<<"请将你要安装的APP文件名改为app.apk并移动至同一目录下\n完成操作请按任意键\n----------------------------\n\n";
	system("pause");
	cout<<"开始安装你的APP咯~请等待Success的提示出现~\n\n";
	system("adb install -r app.apk");
}

void adb3()//jh
{
	//
	system("cls");
	cout<<"请选择你要激活的软件：\n1.冰箱    2.空调狗\n3.小黑屋";
	cin>>tmp;
    if (tmp == 1)
    {
        system("cls");
        cout<<"注意事项\n----------------------------\n";
        cout<<"1.索尼手机去除手机SIM卡；小米用户请在开发者选项中关闭[MIUI优化]\n";
        cout<<"2.进入手机[设置-账户]，删除*所有*账户，包括你的Google/小米/华为等系统账号（完成后可重新登录）\n";
        cout<<"3.如果你之前设置过多用户或手机自带访客模式、应用双开等，也需要一并关闭或删除（完成后可重新打开）\n";
        cout<<"\n完成上述步骤后请按任意键继续";
        system("pause>nul");
        cout<<"出现Success之类的字样就成功啦！\n";
        system("adb shell dpm set-device-owner com.catchingnow.icebox/.receiver.DPMReceiver");
        cout<<"\n如果失败，请仔细检查上述过程是否缺漏；\n解除冰箱权限：解冻所有应用，然后到冰箱设置里点击卸载，确认后即可解除";
    }
    if (tmp == 2)
    {
        //
        system("cls");
        cout<<"注意事项\n----------------------------\n";
        cout<<"1.进入手机[设置-账户]，删除*所有*账户，包括你的Google/小米/华为等系统账号（完成后可重新登录）\n";
        cout<<"2.如果你之前设置过多用户或手机自带访客模式、应用双开等，也需要一并关闭或删除（完成后可重新打开）\n";
        cout<<"\n完成上述步骤后请按任意键继续";
        system("pause>nul");
        cout<<"出现Success之类的字样就成功啦！\n";
        system("adb shell dpm set-device-owner me.yourbay.airfrozen/.main.core.mgmt.MDeviceAdminReceiver");
        cout<<"\n如果失败，请仔细检查上述过程是否缺漏；\n解除空调狗权限：解冻所有应用，然后到空调狗设置里点击卸载，确认后即可解除";
    }
    if (tmp == 3)
    {
        //
        system("cls");
        cout<<"注意事项\n----------------------------\n";
        cout<<"1.开启ADB调试，将手机连接至电脑\n";
        cout<<"2.如果你的设备系统是Android 8.0（Oreo）及以上，请将手机的USB选项设备为”仅充电“，否则服务将在拔掉数据线之后自动停止\n";
        cout<<"\n完成上述步骤后请按任意键继续";
        system("pause>nul");
        cout<<"出现Success之类的字样就成功啦！\n";
        system("adb -d shell sh /sdcard/Android/data/web1n.stopapp/files/demon.sh");
        cout<<"\n如果失败，请仔细检查上述过程是否缺漏；解除小黑屋权限：解冻所有应用，然后到小黑屋设置里点击卸载，确认后即可解除";
    }
}

void adb4()//hy
{
	//
	system("cls");
	cout<<"请在开发者选型中打开USB调试功能，USB选项选择“仅充电”\n";
	cout<<"Android 8及以上只要关闭USB调试或更改USB选项，黑阈就会失效\n";
	cout<<"如果拔掉数据线之后黑阈就失效，请尝试其他USB选项\n准备好后请按任意键开始激活\n";
	system("pause>nul");
	system("adb -d shell sh /data/data/me.piebridge.brevent/brevent.sh");
	cout<<"\n如果失败，请仔细检查上述过程是否缺漏；\n解除黑阈权限：解冻所有应用，然后到黑阈设置里点击卸载，确认后即可解除";
}

void adb5()
{
	//地址connect.rom.miui.com/generate_204
	system("cls");
	cout<<"请打开USB调试，并连接至电脑\n准备好后请按任意键开始\n";
	system("pause>nul");
	system("adb shell settings delete global captive_portal_mode");
	system("adb shell settings put global captive_portal_mode 1");
	system("adb shell settings delete global captive_portal_https_url");
	system("adb shell settings delete global captive_portal_http_url");
	system("adb shell settings put global captive_portal_http_url http://connect.rom.miui.com/generate_204");
	system("adb shell settings put global captive_portal_https_url https://connect.rom.miui.com/generate_204");
}

void adb6()
{
    //
    system("cls");
    cout<<"请将文件改名为sideload.zip放在同文件夹下\n并手机进入TWRP，在“高级”选项中选择“ADB Sideload”选项，并滑动滑块，准备好后请按任意键\n";
    system("pause>nul");
    system("adb sideload sideload.zip");
}

void fsb()//
{
	//
	system("cls");
	system("title Fastboot Mode");
	cout<<"请注意是否出现xxxxxxx fastboot的提示\n如果没有，请重新插拔数据线或换一个接口\n（或者看看是不是刚刚选错了\n";
	system("fastboot devices");
	cout<<"\n------------------\n";
	system("pause");
	cout<<"\n请选择功能：\n1.刷入recovery\n2.刷入镜像（boot/system）\n3.解锁Bootloader\n4.返回上一级菜单\n";
	cin>>tmp;
	switch(tmp)
	{
		default : cout<<"不是一个选项噢~";
		case 1 : fsb1();break;
		case 2 : fsb2();break;
		case 3 : fsb3();break;
		case 4 : system("cls");main();break;
	}
}

void fsb1()//rec
{
	//
	system("cls");
	cout<<"请将你要刷入的Recovery文件名改为recovery.img并移动至同一目录下\n本功能暂时不支持A/B分区设备（如Google Pixel、一加6等）\n完成操作请按任意键\n----------------------------\n\n";
	system("pause");
	cout<<"开始刷入recovery~\n刷完自动进入recovery\n\n";
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
		cout<<"\n这根本不是一个选项！";
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


void color()
{
    //
    system("cls");
    cout<<"在以下选项中做出选择吧！"<<endl;
    cout<<"1.经典黑客风（黑底绿字0a）\n";
    cout<<"2.青涩年华（青底白字3f）\n\n";
    cin>>tmp;
	switch(tmp)
	{
		default : cout<<"不是一个选项噢~";
		case 1 : system("color 0a");system("cls");main();break;
		case 2 : system("color 3f");system("cls");main();break;
	}
}
















