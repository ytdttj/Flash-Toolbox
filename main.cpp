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

void fx2p(void);
void fx2p1(void);
void fx2p2(void);
void fx2p3(void);

void color();

int main()
{
	//
	cout<<"Copyright 2020 CSG Studio Reserved.\n";
	system("title CSGˢ��������");
	cout<<"��ӭʹ��CSG�Ŷӳ�Ʒ��ˢ��������\n----------------------------\nʹ��ǰ��ȷ������ֻ��ѿ���ADB����,���ѽ���fastbootģʽ\n���������ӵ���!!(���ص�)\n----------------------------\n";
	system("pause");
	cout<<"��ѡ��������ӷ�ʽ��\n1.ADB(Recovery)\n2.Fastboot\n3.���Ĺ�������ɫ\n4.Find X2 Pro�޶�\n\n";
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
	else if (tmp == 4)
	{
		fx2p();
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
	system("title ADB Mode");
	cout<<"��ע���Ƿ����xxxxxxx device����ʾ\n���û�У������²�������߻�һ���ӿ�\n�����߿����ǲ��Ǹո�ѡ����\n";
	system("adb devices");
	cout<<"\n------------------\n";
	system("pause");
	cout<<"\n��ѡ���ܣ�\n1.����system��ȥ��bootУ�飩\n2.��װAPP\n3.����������������\n4.���м���\n5.̾��ɱ�֣�ԭ������ԭ����\n6.Sideload����Ҫ��TWRP��ѡ��ADB Sideload��\n7.������һ���˵�\n";
	cin>>tmp;
	switch(tmp)
	{
		default : cout<<"����һ��ѡ����~";adb();break;
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
	cout<<"������������С�׵��豸���ɷ�ֹ�ָ��ٷ�Recovery\n\n----------------------------\n\n";
	cout<<"�����������ʼ���У��";
	system("pause>nul");
	system("cls");
	system("adb root");
	system("adb disable-verity");
	cout<<"���»س������豸\n";
	system("pause>nul");
	system("adb reboot");
}

void adb2()//app
{
	//
	system("cls");
	cout<<"�뽫��Ҫ��װ��APP�ļ�����Ϊapp.apk���ƶ���ͬһĿ¼��\n��ɲ����밴�����\n----------------------------\n\n";
	system("pause");
	cout<<"��ʼ��װ���APP��~��ȴ�Success����ʾ����~\n\n";
	system("adb install -r app.apk");
}

void adb3()//jh
{
	//
	system("cls");
	cout<<"��ѡ����Ҫ����������\n1.����    2.�յ���\n3.С����\n4.������һ���˵�\n";
	cin>>tmp;
    if (tmp == 1)
    {
        system("cls");
        cout<<"ע������\n----------------------------\n";
        cout<<"1.�����ֻ�ȥ���ֻ�SIM����С���û����ڿ�����ѡ���йر�[MIUI�Ż�]\n";
        cout<<"2.�����ֻ�[����-�˻�]��ɾ��*����*�˻����������Google/С��/��Ϊ��ϵͳ�˺ţ���ɺ�����µ�¼��\n";
        cout<<"3.�����֮ǰ���ù����û����ֻ��Դ��ÿ�ģʽ��Ӧ��˫���ȣ�Ҳ��Ҫһ���رջ�ɾ������ɺ�����´򿪣�\n";
        cout<<"\n�������������밴���������";
        system("pause>nul");
        cout<<"����Success֮��������ͳɹ�����\n";
        system("adb shell dpm set-device-owner com.catchingnow.icebox/.receiver.DPMReceiver");
        cout<<"\n���ʧ�ܣ�����ϸ������������Ƿ�ȱ©��\n�������Ȩ�ޣ��ⶳ����Ӧ�ã�Ȼ�󵽱�����������ж�أ�ȷ�Ϻ󼴿ɽ��";
    }
    if (tmp == 2)
    {
        //
        system("cls");
        cout<<"ע������\n----------------------------\n";
        cout<<"1.�����ֻ�[����-�˻�]��ɾ��*����*�˻����������Google/С��/��Ϊ��ϵͳ�˺ţ���ɺ�����µ�¼��\n";
        cout<<"2.�����֮ǰ���ù����û����ֻ��Դ��ÿ�ģʽ��Ӧ��˫���ȣ�Ҳ��Ҫһ���رջ�ɾ������ɺ�����´򿪣�\n";
        cout<<"\n�������������밴���������";
        system("pause>nul");
        cout<<"����Success֮��������ͳɹ�����\n";
        system("adb shell dpm set-device-owner me.yourbay.airfrozen/.main.core.mgmt.MDeviceAdminReceiver");
        cout<<"\n���ʧ�ܣ�����ϸ������������Ƿ�ȱ©��\n����յ���Ȩ�ޣ��ⶳ����Ӧ�ã�Ȼ�󵽿յ�����������ж�أ�ȷ�Ϻ󼴿ɽ��";
    }
    if (tmp == 3)
    {
        //
        system("cls");
        cout<<"ע������\n----------------------------\n";
        cout<<"1.����ADB���ԣ����ֻ�����������\n";
        cout<<"2.�������豸ϵͳ��Android 8.0��Oreo�������ϣ��뽫�ֻ���USBѡ���豸Ϊ������硰����������ڰε�������֮���Զ�ֹͣ\n";
        cout<<"\n�������������밴���������";
        system("pause>nul");
        cout<<"����Success֮��������ͳɹ�����\n";
        system("adb -d shell sh /sdcard/Android/data/web1n.stopapp/files/demon.sh");
        cout<<"\n���ʧ�ܣ�����ϸ������������Ƿ�ȱ©�����С����Ȩ�ޣ��ⶳ����Ӧ�ã�Ȼ��С������������ж�أ�ȷ�Ϻ󼴿ɽ��";
    }
    if (tmp == 4)
    {
        system("cls");
        adb();
    }
}

void adb4()//hy
{
	//
	system("cls");
	cout<<"���ڿ�����ѡ���д�USB���Թ��ܣ�USBѡ��ѡ�񡰽���硱\n";
	cout<<"Android 8������ֻҪ�ر�USB���Ի����USBѡ����оͻ�ʧЧ\n";
	cout<<"����ε�������֮����о�ʧЧ���볢������USBѡ��\n׼���ú��밴�������ʼ����\n";
	system("pause>nul");
	system("adb -d shell sh /data/data/me.piebridge.brevent/brevent.sh");
	cout<<"\n���ʧ�ܣ�����ϸ������������Ƿ�ȱ©��\n�������Ȩ�ޣ��ⶳ����Ӧ�ã�Ȼ�󵽺�����������ж�أ�ȷ�Ϻ󼴿ɽ��";
}

void adb5()
{
	//��ַconnect.rom.miui.com/generate_204
	system("cls");
	cout<<"���USB���ԣ�������������\n׼���ú��밴�������ʼ\n";
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
    cout<<"�뽫�ļ�����Ϊsideload.zip����ͬ�ļ�����\n���ֻ�����TWRP���ڡ��߼���ѡ����ѡ��ADB Sideload��ѡ����������飬׼���ú��밴�����\n";
    system("pause>nul");
    system("adb sideload sideload.zip");
}

void fsb()//
{
	//
	system("cls");
	system("title Fastboot Mode");
	cout<<"��ע���Ƿ����xxxxxxx fastboot����ʾ\n���û�У������²�������߻�һ���ӿ�\n�����߿����ǲ��Ǹո�ѡ����\n";
	system("fastboot devices");
	cout<<"\n------------------\n";
	system("pause");
	cout<<"\n��ѡ���ܣ�\n1.ˢ��recovery\n2.ˢ�뾵��boot/system��\n3.����Bootloader\n4.������һ���˵�\n";
	cin>>tmp;
	switch(tmp)
	{
		default : cout<<"����һ��ѡ����~";fsb();break;
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
	cout<<"�뽫��Ҫˢ���Recovery�ļ�����Ϊrecovery.img���ƶ���ͬһĿ¼��\n��������ʱ��֧��A/B�����豸����Google Pixel��һ��6�ȣ�\n��ɲ����밴�����\n----------------------------\n\n";
	system("pause");
	cout<<"��ʼˢ��recovery~\nˢ���Զ�����recovery\n\n";
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
		cout<<"\n���������һ��ѡ�";
	}
}

void fsb3()//bl
{
	//
	system("cls");
	cout<<"�ٴ����ѣ���С�׺ͻ�Ϊ�������Ƶ���������������Ҳ�������233\n\n��ô��׼�������𣿰�����������ɣ�\n";
	system("pause");
	cout<<"\n��ô��ʼ�����ȵ�����Bootloader Lock State : UNLOCKED���ǳɹ�����\n�������»��Ƴ�BL�������ܣ������ڴ�~\n\n";
	system("fastboot flashing unlock");
}


void color()
{
    //
    system("cls");
    cout<<"������ѡ��������ѡ��ɣ�"<<endl;
    cout<<"1.����ڿͷ磨�ڵ�����0a��\n";
    cout<<"2.��ɬ�껪����װ���3f��\n\n";
    cin>>tmp;
	switch(tmp)
	{
		default : cout<<"����һ��ѡ����~";
		case 1 : system("color 0a");system("cls");main();break;
		case 2 : system("color 3f");system("cls");main();break;
	}
}

void fx2p()
{
	/*ǰһ���汾�Ĵ���
	system("cls");
	cout << "��ȷ�����Ѿ��������ݱ��ݣ�����ͨ������Ȳ�����ˡ�\nȷ�Ϻ�";
	system("pause");
	cout << "��ô���ڣ����ϸ���ָʾ������\n\n�����Ȳ���APP��ġ���ʼ��Ȳ��ԡ���ť���ֻ����Զ�������fastboot\n";
	cout << "����fastboot��";
	system("pause");
	cout << "���ڿ�ʼ����BL...";
	system("cls");
	system("fastboot flashing unlock");
	cout << "\n��������ֻ�Ӧ�û���ʾһ��Ӣ�ģ�������һ��ѡ���ǡ�UNLOCK THE BOOTLOADER��\n����������ѡ������Ȼ���Դ��ȷ��\n\n";
	cout << "Ȼ������ֻ����Զ�����������ݣ������Զ�������ϵͳ���뿪��������ѡ�������Ժ�";
	system("pause");
	cout << "\n��������ˢ��Magisk���������Ҫ������1�������Զ��˳���";
	cin >> tmp;
	if (tmp == 1)
	{
		system("cls");
		cout << "��лʹ�ã��ټ���";
	}
	else
	{
		system("cls");
		cout << "��������Ҫ������fastbootģʽ����ˢ��Magisk\n\n";
		system("adb reboot bootloader");
		cout << "������fastboot��";
		system("pause");
		system("fastboot flash boot Magisk_A15.img");
		system("fastboot --disable-verity --disable-verification flash vbmeta vbmeta.img");
		cout << "Magiskˢд��ϣ������Զ���������װMagisk Manager\n\n";
		system("fastboot reboot");
		cout << "������";
		system("pause");
		cout << "\n��ʼ��װMagisk Manager\n";
		system("adb install MagiskManager-v7.5.1.apk");
		cout << "��װ��ϣ�ף�������죡";
		system("pause");
	}
	*/
	system("cls");
	cout << "���������\n\n1.�����ˣ�ˢMagisk\n2.û�����������һ��������\n\n";
	cout << "����������ѡ��";
	cin >> tmp;
	switch (tmp)
	{
		default : cout << "��������ѡ��"; fx2p(); break;
		case 1: fx2p1(); break;
		case 2: fx2p2(); break;
	}
}

void fx2p1()//�����ˣ�ֻˢMagisk
{
	//
	system("cls");
	cout << "Ŀǰ�ù��ܽ�֧��A15�汾�������汾ˢ�����ʣ����޽ӽ�100%����Ҫ��ʽ��\n\n";
	//
	cout << "������ʼˢ��Magisk���뽫����ֻ�������fastboot\n��ɺ�";
	system("pause");
	system("fastboot devices");
	cout << "\n�����ʾ��xxxxxxxxxx  fastboot˵������ֻ��Ѿ���������\n";
	system("pause");
	system("fastboot flash boot .\A15\Magisk_A15.img");
	system("fastboot --disable-verity --disable-verification flash vbmeta vbmeta.img");
	cout << "Magiskˢд��ϣ������Զ���������װMagisk Manager\n\n";
	system("fastboot reboot");
	cout << "������";
	system("pause");
	cout << "\n��ʼ��װMagisk Manager\n";
	system("adb install MagiskManager-v7.5.1.apk");
	cout << "��װ��ϣ�ף�������죡";
	system("pause");


	/*cout << "������ʼˢ��Magisk���뽫����ֻ�������fastboot\n��ɺ�";
	system("pause");
	system("fastboot devices");
	cout << "\n�����ʾ��xxxxxxxxxx  fastboot˵������ֻ��Ѿ���������\n";
	system("pause");
	system("fastboot flash boot Magisk_A15.img");
	system("fastboot --disable-verity --disable-verification flash vbmeta vbmeta.img");
	cout << "Magiskˢд��ϣ������Զ���������װMagisk Manager\n\n";
	system("fastboot reboot");
	cout << "������";
	system("pause");
	cout << "\n��ʼ��װMagisk Manager\n";
	system("adb install MagiskManager-v7.5.1.apk");
	cout << "��װ��ϣ�ף�������죡";
	system("pause");*/
}

void fx2p2()//һ����
{
	//
	system("cls");
	cout << "��ȷ�����Ѿ��������ݱ��ݣ�����ͨ������Ȳ�����ˡ�\nȷ�Ϻ�";
	system("pause");
	cout << "��ô���ڣ����ϸ���ָʾ������\n\n�����Ȳ���APP��ġ���ʼ��Ȳ��ԡ���ť���ֻ����Զ�������fastboot\n";
	cout << "����fastboot��";
	system("pause");
	cout << "���ڿ�ʼ����BL...";
	system("cls");
	system("fastboot flashing unlock");
	cout << "\n��������ֻ�Ӧ�û���ʾһ��Ӣ�ģ�������һ��ѡ���ǡ�UNLOCK THE BOOTLOADER��\n����������ѡ������Ȼ���Դ��ȷ��\n\n";
	cout << "Ȼ������ֻ����Զ�����������ݣ������Զ�������ϵͳ���뿪��������ѡ�������Ժ�";
	system("pause");
	system("cls");
	cout << "��������Ҫ������fastbootģʽ����ˢ��Magisk\nĿǰ�ù��ܽ�֧��A15�汾�������汾ˢ�����ʣ����޽ӽ�100%����Ҫ��ʽ��\n\n";
	system("pause");
	//
	system("adb reboot bootloader");
	cout << "������fastboot��";
	system("pause");
	system("fastboot flash boot .\A15\Magisk_A15.img");
	system("fastboot --disable-verity --disable-verification flash vbmeta vbmeta.img");
	cout << "Magiskˢд��ϣ������Զ���������װMagisk Manager\n\n";
	system("fastboot reboot");
	cout << "������";
	system("pause");
	cout << "\n��ʼ��װMagisk Manager\n";
	system("adb install MagiskManager-v7.5.1.apk");
	cout << "��װ��ϣ�ף�������죡";
	system("pause");




	/*system("adb reboot bootloader");
	cout << "������fastboot��";
	system("pause");
	system("fastboot flash boot Magisk_A15.img");
	system("fastboot --disable-verity --disable-verification flash vbmeta vbmeta.img");
	cout << "Magiskˢд��ϣ������Զ���������װMagisk Manager\n\n";
	system("fastboot reboot");
	cout << "������";
	system("pause");
	cout << "\n��ʼ��װMagisk Manager\n";
	system("adb install MagiskManager-v7.5.1.apk");
	cout << "��װ��ϣ�ף�������죡";
	system("pause");*/
}

/*void fx2p3()
{
	//
	system("cls");
	cout << "��ȷ�����Ѿ��������ݱ��ݣ�����ͨ������Ȳ�����ˡ�\nȷ�Ϻ�";
	system("pause");
	cout << "��ô���ڣ����ϸ���ָʾ������\n\n�����Ȳ���APP��ġ���ʼ��Ȳ��ԡ���ť���ֻ����Զ�������fastboot\n";
	cout << "����fastboot��";
	system("pause");
	cout << "���ڿ�ʼ����BL...";
	system("cls");
	system("fastboot flashing unlock");
	cout << "\n��������ֻ�Ӧ�û���ʾһ��Ӣ�ģ�������һ��ѡ���ǡ�UNLOCK THE BOOTLOADER��\n����������ѡ������Ȼ���Դ��ȷ��\n\n";
	cout << "Ȼ������ֻ����Զ�����������ݣ������Զ�������ϵͳ�����ǽ��������";
	system("pause");
}*/









