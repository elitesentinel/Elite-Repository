#include<iostream>
using namespace std;
#include<locale.h>
#include<math.h>
#include<string.h>
#include<windows.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int a[10],tkf,b[5],ain,yal[5],ort[5],kar[5],say[5],top,i,j,dil;
	float in,t,ss,k;
	double A=2.4,B=1.05,C=2.5,D=0.38;

	cout<<"olcum Parametresi";
	cout<<"\n";
cout<<"---------------------------------------";
	cout<<"Kullanici girdi sayisi icin";cout<<"\n";
	cout<<"Sayi"<<"\t";cin>>say[0];
	cout<<"Yalin"<<"\t";cin>>yal[0];
	cout<<"Orta"<<"\t";cin>>ort[0];
	cout<<"Karmasik"<<"\t";cin>>kar[0];
cout<<"\n";
cout<<"---------------------------------------";	
	cout<<"Kullanici cikti sayisi icin";cout<<"\n";
	cout<<"Sayi"<<"\t";cin>>say[1];
	cout<<"Yalin"<<"\t";cin>>yal[1];
	cout<<"Orta"<<"\t";cin>>ort[1];
	cout<<"Karmasik"<<"\t";cin>>kar[1];
cout<<"\n";
cout<<"---------------------------------------";
	cout<<"Kullanici sorgu sayisi icin";cout<<"\n";
	cout<<"Sayi"<<"\t";cin>>say[2];
	cout<<"Yalin"<<"\t";cin>>yal[2];
	cout<<"Orta"<<"\t";cin>>ort[2];
	cout<<"Karmasik"<<"\t";cin>>kar[2];
cout<<"\n";
cout<<"---------------------------------------";
cout<<"Kutuk icin";cout<<"\n";
	cout<<"Sayi"<<"\t";cin>>say[3];
	cout<<"Yalin"<<"\t";cin>>yal[3];
	cout<<"Orta"<<"\t";cin>>ort[3];
	cout<<"Karmasik"<<"\t";cin>>kar[3];
cout<<"\n";
cout<<"---------------------------------------";
cout<<"Dissal arayuz sayisi icin";cout<<"\n";
	cout<<"Sayi"<<"\t";cin>>say[4];
	cout<<"Yalin"<<"\t";cin>>yal[4];
	cout<<"Orta"<<"\t";cin>>ort[4];
	cout<<"Karmasik"<<"\t";cin>>kar[4];
cout<<"\n";
cout<<"---------------------------------------";

	system("cls");

	
		cout<<"olcum Parametresi"<<"\t"<<"|"<<"\t"<<"sayi"<<"\t  "<<"|"<<"\t  "<<"Aðirlik Faktoru";
cout<<"\n";
cout<<"-------------------------------";
    	cout<<"\t\t\t"<<"|"<<"\t\t  "<<"|"<<"\t"<<"yalin"<<"   "<<"|"<<"   "<<"orta"<<"   "<<"|"<<"   "<<"karmasik";
cout<<"\n";
cout<<"-------------------------------";
		cout<<"Kullanici girdi sayisi"<<"\t"<<"|"<<"\t"<<say[0]<<"\t  "<<"|"<<"    "<<yal[0]<<"   "<<"|"<<"     "<<ort[0]<<"      "<<"|"<<kar[0];
cout<<"\n";
cout<<"-------------------------------";
		cout<<"Kullanici cikti sayisi"<<"\t"<<"|"<<"\t"<<say[1]<<"\t  "<<"|"<<"    "<<yal[1]<<"   "<<"|"<<"     "<<ort[1]<<"      "<<"|"<<kar[1];
cout<<"\n";
cout<<"-------------------------------";
		cout<<"Kullanici sorgu sayisi"<<"\t"<<"|"<<"\t"<<say[2]<<"\t  "<<"|"<<"    "<<yal[2]<<"   "<<"|"<<"     "<<ort[2]<<"      "<<"|"<<kar[2];
cout<<"\n";
cout<<"-------------------------------";
		cout<<"Kutuk sayisi          "<<"\t"<<"|"<<"\t"<<say[3]<<"\t  "<<"|"<<"    "<<yal[3]<<"   "<<"|"<<"     "<<ort[3]<<"      "<<"|"<<kar[3];
cout<<"\n";
cout<<"-------------------------------";
		cout<<"Dissal arayuz sayisi"<<"\t"<<"|"<<"\t"<<say[4]<<"\t  "<<"|"<<"     "<<yal[4]<<"   "<<"|"<<"     "<<ort[4]<<"      "<<"|"<<kar[4];
cout<<"\n";
cout<<"-------------------------------";

	top=say[0]+say[1]+say[2]+say[3]+say[4];
	
	cout<<"toplam"<<"\t\t\t"<<"|"<<"\t"<<top<<"\t"<<"|"<<"\t"<<"     "<<"   "<<"|"<<"   "<<"    "<<"   "<<"|"<<"   "<<"       ";
cout<<"-------------------------------";
cout<<"\n";
	for(i=0;i<=4;i++)
	{
		b[i]=say[i]*yal[i];
		ain+=b[i];
	}
	cout<<"AÝN = "<<ain;
	
cout<<"\n\n";

		
	cout<<"Deðerlendirme";
	cout<<"\n";
cout<<"-----------------";cout<<"\n";
cout<<"0 = hicbir etkisi yok 	1 = cok az etkisi var		2 = etkisi var" ;cout<<"\n";
cout<<"3 = ortalama ektisi var 	4 = cok etkisi var 		5 = mutlaka olmali";
cout<<"\n";
cout<<"-------------------------------";
	cout<<"1.Uygulama,guvenilir yedekleme ve kurtarma gerektiriyor mu? "<<"  =>";cin>>a[0];
	cout<<"2.Veri iletisimi gerekiyor mu? "<<"  =>";cin>>a[1];
	cout<<"3.Daðitik islem islevleri var mi? "<<"  =>";cin>>a[2];
	cout<<"4.Perfonmans kritik mi?"<<"  =>";cin>>a[3];
	cout<<"5.Ýcsel islemler karisik mi ? "<<"  =>";cin>>a[4];
	cout<<"6.Sistem, cevrim ici veri girisi gerektiriyor mu ? "<<"  =>";cin>>a[5];
	cout<<"7.Ana kultur cevrimici olarak mi guncelleniyor ?  "<<"  =>";cin>>a[6];
	cout<<"8.Tasarlanacak kod, yeniden kullanilabilir mi olacak ?"<<"  =>";cin>>a[7];
	cout<<"9.Sistem birden cok yerde yerlesik farkli kurumlar icin mi gelistiriliyor ? "<<"=>";cin>>a[8];
	cout<<"10.Sistem mevcut ve aðir yuklu olan bir isletim ortaminda mi calisacak ?  "<<"  =>";cin>>a[9];
	cout<<"\n";
cout<<"-------------------------------";
	tkf=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9];
	cout<<"TKF = "<<tkf;
	
	cout<<"\n\n";
	
	in=ain*(0.65*0.01*tkf)	;
	cout<<"ÝN = "<<in ;
	cout<<"\n\n";
	cout<<"HANGÝ DÝLLE YAZDINIZ ?";	cout<<"\n";
	cout<<"------------------------";	cout<<"\n";
	cout<<"1-COBOL  (105)";	cout<<"\n";
	cout<<"2-PASCAL  (90)";cout<<"\n";
	cout<<"3-DERLEME (320)";cout<<"\n";
	cout<<"4-NESNE TABANLI DÝLLER (30)";cout<<"\n";
	cout<<"5-KOD uRETÝCÝLER (15)";cout<<"\n";
	cout<<"-----------------";cout<<"\n";
	cout<<"SEcENEK =>";cin>>dil;
	
	switch(dil)
	{
		case 1:	ss=in*105; break;
		case 2:	ss=in*90; break;
		case 3:	ss=in*320; break;
		case 4:	ss=in*30; break;
		case 5:	ss=in*15; break;
	}
	cout<<"\n\n";
	cout<<"SATIR SAYISI = "<<ss;
	cout<<"\n";
	cout<<"AYRIK PROJE ÝCÝN ;";
	cout<<"\n";
	k=A*(pow(ss,B));
	cout<<"Ýs GuCu = "<<k; cout<<"\n";
	t=C*(pow(k,D));
	cout<<"ZAMAN =	"<<t;	
	cout<<"\n";
	cout<<"\n\n";system("pause");
}
