//本游戏作者：
//洛谷_Pretharp
//本游戏只在洛谷以及 oier.space 发布！
//且完全免费！！！
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),);
#include<bits/stdc++.h>
#include<windows.h>
#include"stdio.h"
#include"windows.h"
using namespace std;
int xl=100,xls=100,gj=7,hf=4,jd=0,jb=30;
int sfwy,yhrc,ttjh;
int choi;
void Slowsay(string a){
	int l=a.size();
	for(int i=0;i<l;i++){
		cout<<a[i];
		Sleep(20);
	}
	printf("\n");Sleep(40);
}
void say(string a){
	int l=a.size();
	for(int i=0;i<l;i++){
		cout<<a[i];
		Sleep(20);
	}
	Sleep(40);
}
void fight(string name,int dfxl,int sbl,int tpl,int gjl,int hfl,int bjl,int bjll,int zlp){
	system("cls");
	int dfx=dfxl;
	while(1){
		system("cls");
		say("与");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say(name);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		say("战斗！\n\n\n");
		say("对方当前血量: ");
		cout<<dfx;
		say("/");
		cout<<dfxl;
		say("\n\n");
		say("你当前血量： ");
		cout<<xl;
		say("/");
		cout<<xls;
		say("\n\n");
		say("本回合，你要:\n\n");
		say("1、攻击\n\n");
		say("2、恢复\n\n");
		say("3、逃跑\n\n");
		cin>>choi;
		if(choi==1){
			srand((unsigned)time(NULL));
			int temp=rand()%100;
			if(temp>sbl){
				say("你对对方造成了");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
				cout<<gj;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				say("点伤害！\n\n");
				Sleep(3000);
				dfx-=gj;
				if(dfx<=0){
					say("你获胜了！\n\n");
					say("并获得了");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
					cout<<zlp;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
					say("点金币");
					Sleep(3000);
					jb+=zlp;
					return;
				}
			}else{
				say("对方躲避了你的攻击！\n\n");
				Sleep(3000);
			}
		}else if(choi==2){
			say("你为自己恢复了");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
			cout<<hf;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
			say("点血！\n\n");
        xl+=hf;
        if(xl>xls) xl=xls;
			Sleep(3000);
		}else{
			srand((unsigned)time(NULL));
			int temp=rand()%100;
			if(temp>tpl){
				say("你逃跑了...\n\n");
				Sleep(3000);
				return;
			}else{
				say("你想逃跑，但没成功\n\n");
				Sleep(3000);
			}
		}
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say(name);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		say("对你造成了");
		srand((unsigned)time(NULL));
		int temp=rand()%100;
		if(temp>bjl){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
			cout<<gjl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
			say("点伤害！\n\n");
			xl-=gjl;
		}else{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
			cout<<bjll;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
			say("点伤害！\n\n");
			xl-=bjll;
		}
		say("并为自己恢复了");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
		cout<<hfl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		say("点血量\n\n");
		dfx+=hfl;
		if(dfx>dfxl) dfx=dfxl;
		Sleep(3500);
		if(xl<=0){
			Slowsay("你失败了\n");
			Slowsay("你被送到了圣戈芒医院治疗，并花光了所有钱\n");
			jb=0;
			xl=xls/2;
			Sleep(3000);
			return;
		}
	}
}
void fight_jd(){
	int choi;
	srand((unsigned)time(NULL));
	jd=rand()%4;
	system("cls");
	if(jd==1){
		say("你遇到了");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say("嗅嗅");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		Slowsay("攻击--6\n");
		Slowsay("血量--20\n");
		Slowsay("速度--1\n");
		Slowsay("恢复--0\n");
		Slowsay("特殊技能：");
		Slowsay("盗贼-被它命中一次会损失金币\n");
		Slowsay("战利品：");
		Slowsay("30金币\n");
		Slowsay("1、战斗\n");
		Slowsay("2、逃跑\n");
		cin>>choi;
		system("cls");
		if(choi==1){
			fight("嗅嗅",20,0,0,6,0,0,20,30);
			srand((unsigned)time(NULL));
			jb-=rand()%26;
		}
	}else if(jd==2){
		say("你遇到了");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say("康沃尔郡的小精灵");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		Slowsay("攻击--10\n");
		Slowsay("血量--8\n");
		Slowsay("速度--3\n");
		Slowsay("恢复--0\n");
		Slowsay("特殊技能：");
		Slowsay("无\n");
		Slowsay("战利品：");
		Slowsay("10金币\n");
		Slowsay("1、战斗\n");
		Slowsay("2、逃跑\n");
		cin>>choi;
		system("cls");
			if(choi==1){
				fight("康沃尔郡的小精灵",8,0,0,10,0,0,10,10);
			}
	}else if(jd==3){
		say("你遇到了");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say("护树罗锅");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		Slowsay("攻击-7\n");
		Slowsay("血量-12\n");
		Slowsay("速度-3\n");
		Slowsay("恢复--0\n");
		Slowsay("特殊技能：");
		Slowsay("无\n");
		Slowsay("战利品：");
		Slowsay("10金币\n");
		Slowsay("1、战斗\n");
		Slowsay("2、逃跑\n");
		cin>>choi;
		system("cls");
			if(choi==1){
				fight("护树罗锅",12,0,0,7,0,0,7,10);
			}
	}else if(jd==0){
		int df=7;
		say("你遇到了");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say("隐形兽");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		Slowsay("攻击--5\n");
		Slowsay("血量--15\n");
		Slowsay("速度--2\n");
		Slowsay("恢复--0\n");
		Slowsay("特殊技能：");
		Slowsay("预言-它能预判你的攻击，并有概率躲开\n");
		Slowsay("战利品：");
		Slowsay("15币\n");
		Slowsay("1、战斗\n");
		Slowsay("2、逃跑\n");
		cin>>choi;
		system("cls");
			if(choi==1){
				fight("隐形兽",15,44,0,5,0,0,5,15);
			}
	}
}
int pt;
void fight_pt()
{
	srand((unsigned)time(NULL));
	pt=rand()%5;
	if(pt==1){
		system("cls");
		say("你遇到了");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say("蜷尾翼");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		Slowsay("攻击--8~14\n");
		Slowsay("血量--24\n");
		Slowsay("速度--8\n");
		Slowsay("恢复--0\n");
		Slowsay("特殊技能：");
		Slowsay("冲刺-有一定概率对你造成超高伤害\n");
		Slowsay("战利品：");
		Slowsay("25币\n");
		Slowsay("1、战斗\n");
		Slowsay("2、逃跑\n");
		cin>>choi;
		system("cls");
			if(choi==1){
				fight("蜷尾翼",24,9,19,8,0,39,14,25);
			}
	}else if(pt==2){
		system("cls");
		say("你遇到了");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say("火灰蛇");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		Slowsay("攻击--7\n");
		Slowsay("血量--28\n");
		Slowsay("速度--8\n");
		Slowsay("恢复--0\n");
		Slowsay("特殊技能：");
		Slowsay("无\n");
		Slowsay("战利品：");
		Slowsay("15币\n");
		Slowsay("1、战斗\n");
		Slowsay("2、逃跑\n");
		cin>>choi;
		system("cls");
			if(choi==1){
				fight("火灰蛇",21,0,49,7,0,0,7,15);
			}
	}else if(pt==3){
		system("cls");
		say("你遇到了");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say("恶婆鸟");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		Slowsay("攻击--10\n");
		Slowsay("血量--11\n");
		Slowsay("速度--8\n");
		Slowsay("恢复--7\n");
		Slowsay("特殊技能：");
		Slowsay("无\n");
		Slowsay("战利品：");
		Slowsay("20币\n");
		Slowsay("1、战斗\n");
		Slowsay("2、逃跑\n");
		cin>>choi;
		system("cls");
			if(choi==1){
				fight("恶婆鸟",11,0,29,10,7,0,10,20);
			}
	}else if(pt==0){
		system("cls");
		say("你遇到了");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say("灵猫");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		Slowsay("攻击--12\n");
		Slowsay("血量--12\n");
		Slowsay("速度--13\n");
		Slowsay("恢复--7\n");
		Slowsay("特殊技能：");
		Slowsay("闪避-躲开你的攻击\n");
		Slowsay("战利品：");
		Slowsay("20币\n");
		Slowsay("1、战斗\n");
		Slowsay("2、逃跑\n");
		cin>>choi;
		system("cls");
			if(choi==1){
				fight("灵猫",12,69,39,12,0,0,12,20);
			}
	}else if(pt==4){
		system("cls");
		say("你遇到了");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
		say("八眼巨蛛幼体");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		Slowsay("攻击--20\n");
		Slowsay("血量--20\n");
		Slowsay("速度--2\n");
		Slowsay("恢复--1\n");
		Slowsay("特殊技能：");
		Slowsay("无\n");
		Slowsay("战利品：");
		Slowsay("30币\n");
		Slowsay("1、战斗\n");
		Slowsay("2、逃跑\n");
		cin>>choi;
		system("cls");
			if(choi==1){
				fight("八眼巨蛛幼体",20,0,9,20,1,0,20,30);
			}
	}
}
int main()
{
	int choi;
	Slowsay("      哈利·波特：神奇动物在哪里\n");
	Slowsay("制作人员：B站_极地三锋  洛谷_Pretharp\n\n");
	cout<<"按下Enter开始游戏\n";
	getchar();
	system("cls");
	Slowsay("是否跳过剧情？\n");
	Slowsay("1、否\n");
	Slowsay("2、是\n");
	cin>>choi;
	if(choi==1){
		Slowsay("游戏开始！\n");
		system("cls");
		Slowsay("你叫纽特，是一名霍格沃兹的学生\n");
		Slowsay("在这世界上存在着一些神奇生物\n");
		Slowsay("然而它们惨遭人们猎杀\n");
		Slowsay("最终逐渐走向灭亡...\n");
		Sleep(5000);
		system("cls");
		Slowsay("你热爱这些神奇动物，不希望它们灭亡\n");
		Slowsay("于是你决定周游世界，收集这些动物\n");
		Slowsay("然后写一本书，倡导大家保护它们\n");
		Slowsay("邓布利多也很支持你，所以送了你一个无限空间的手提箱\n");
		Slowsay("现在，你踏上保护神奇动物之旅...\n");
		Sleep(5000);
	}
	while(1){
		system("cls");
		Slowsay("保护神奇动物\n");
		cout<<"当前血量:"<<xl<<"/"<<xls<<endl<<"当前金币:"<<jb<<endl<<endl;
		Slowsay("1、开始探索\n");
		Slowsay("2、学习咒语\n");
		Slowsay("3、游戏进度\n");
		Slowsay("4、圣戈芒医院");
		cin>>choi;
		system("cls");
		if(choi==1){
			Slowsay("请选择挑战难度：\n");
			Slowsay("不同难度的奖励也不同\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
			Slowsay("1、简单\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
			Slowsay("2、普通\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
			Slowsay("3、困难\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
			Slowsay("4、BOSS\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
			Slowsay("若想返回上一页输入0\n");
			cin>>choi;
			if(!choi) continue;
			else if(choi==1) fight_jd();
			else if(choi==2) fight_pt();
			//else if(choi==3) fight_kn();
			//else fight_jx;
		}else if(choi==2){
			Slowsay("不同的咒语有不同的用，来试试吧！\n");
			Slowsay("请选择你要购买的咒语：\n\n");
			Slowsay("1、神锋无影\n");
			Slowsay("2、统统加护\n");
			Slowsay("3、愈合如初\n");
			Slowsay("若想返回上一页输入0\n");
			cin>>choi;
			system("cls");
			if(!choi) continue;
			if(choi==1){
				Slowsay("神锋无影：使攻击+5\n");
				say("需要");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
				cout<<"50";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				say("金币，是否购买？\n\n");
				Slowsay("1、是\n");
				Slowsay("2、否\n");
				cin>>choi;
				if(choi==1){
					if(jb<50){
						system("cls");
						Slowsay("您的钱不足！\n");
						Sleep(3000);
						continue;
					}
					if(sfwy>=7){
						system("cls");
						Slowsay("已达到本咒语购买上限\n");
						Sleep(3000);
						continue;
					}
					Slowsay("购买成功！\n");
					gj+=5;
					jb-=50;
					sfwy++;
				}
			}else if(choi==2){
				Slowsay("统统加护：使血量上限增加10\n");
				say("需要");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
				cout<<"50";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				say("金币，是否购买？\n\n");
				Slowsay("1、是\n");
				Slowsay("2、否\n");
				cin>>choi;
				if(choi==1){
					if(jb<50){
						system("cls");
						Slowsay("您的钱不足！\n");
						Sleep(3000);
						continue;
					}
					if(ttjh>=7){
						system("cls");
						Slowsay("已达到本咒语购买上限\n");
						Sleep(3000);
						continue;
					}
					Slowsay("购买成功！\n");
					xls+=10; 
					jb-=50;
					ttjh++;
				}
			}else{
				Slowsay("愈合如初：使恢复能力增加7\n");
				say("需要");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
				cout<<"50";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				say("金币，是否购买？\n\n");
				Slowsay("1、是\n");
				Slowsay("2、否\n");
				cin>>choi;
				if(choi==1){
					if(jb<50){
						system("cls");
						Slowsay("您的钱不足！\n");
						Sleep(3000);
						continue;
					}
					if(yhrc>=7){
						system("cls");
						Slowsay("已达到本咒语购买上限\n");
						Sleep(3000);
						continue;
					}
					Slowsay("购买成功！\n");
					hf+=7; 
					jb-=50;
					yhrc++;
				}
			}
		}else if(choi==4){
			Slowsay("这里是巫师医院，几乎没有病是他们治不了的\n");
			Slowsay("你需要恢复吗？\n");
			Slowsay("1、恢复20点血 10金币\n");
			Slowsay("2、恢复40点血 20金币\n");
			Slowsay("3、恢复血量至上限 50金币\n");
			Slowsay("若想返回上一页输入0\n");
			cin>>choi;
			if(choi==0) continue;
			if(choi==1){
				if(jb<10){
					Slowsay("您的钱不够！\n");
					Sleep(3000);
					continue;
				}
				jb-=10;
				xl+=20;
				if(xl>xls) xl=xls;
			}
			if(choi==2){
				if(jb<20){
					Slowsay("您的钱不够！\n");
					Sleep(3000);
					continue;
				}
				jb-=20;
				xl+=40;
				if(xl>xls) xl=xls;
			}
			if(choi==3){
				if(jb<50){
					Slowsay("您的钱不够！\n");
					Sleep(3000);
					continue;
				}
				jb-=10;
				xl+=99999;
				if(xl>xls) xl=xls;
			}
		}
	}
}

