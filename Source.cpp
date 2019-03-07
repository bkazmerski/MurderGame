#include <string>
#include <iostream>
#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
#include <dos.h>
#include <windows.h>
#include <setjmp.h>
using namespace std;
bool haskey = false;
bool hasmovedrug = false;
bool hasunlockedtrap = false;
bool ccheat = false;
bool scheat = false;
bool frontroom = false;
bool kitchen = false;
bool livingroom = false;
bool bedroom = false;
bool computer = false;
bool basement = false;
bool correctaccusek = false;
bool correctaccuseh = false;
bool correctaccusew = false;
bool NoInt = false;
string Name;
string masterPassword;
string killerName;
string WhyUKill;
string killerfname;
string killMethod;
string killMethodHint;
string AccusedKiller;
int safepass;
string killerNameA;
string killMethodA;
string WhyUKillS;
int Killer;
int HowKill;
int PassNumber;
int Safe1;
int Safe2;
int Safe3;
int WhyKill;
int WhyKillC;
void FrontRoom();
void Computer();
void Bedroom();
void Basement();
void LivingRoom();
void Kitchen();
void Accuse();
void Accuse() {
		int accusek;
	AccuseM:
		cout << "Who do you accuse of being the murderer?" << endl;
		cout << "Options: 1: Si-Woo Ofra 2: Athaulf Jarmila 3: Chrysanthos Giorgina 4: Hinrik Ansgar 5: Eadberht Svanhildr" << endl;
		cin >> accusek;
		switch (accusek) {
		case 1:
			killerNameA = "Si-Woo Ofra";
			break;
		case 2:
			killerNameA = "Athaulf Jarmila";
			break;
		case 3:
			killerNameA = "Chrysanthos Giorgina";
			break;
		case 4:
			killerNameA = "Hinrik Ansgar";
			break;
		case 5:
			killerNameA = "Eadberht Svanhildr";
			break;
		default:
			cout << "Must be number between 1 and 5. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto AccuseM;
			break;
		}
		if (accusek == Killer) {
			correctaccusek = true;
			goto AccuseH;
		}
		else {
			correctaccusek = false;
			goto AccuseH;
		}
		system("CLS");
	AccuseH:
		int accuseh;
		cout << "How do you accuse that he killed Mr. Madison?" << endl;
		cout << "Options: 1: Stabbing 2: Drowning 3: Strangling 4: Electrocution 5: Poisoning" << endl;
		cin >> accuseh;
		switch (accuseh) {
		case 1:
			killMethodA = "stabbed";
			break;
		case 2:
			killMethodA = "drowned";
			break;
		case 3:
			killMethodA = "strangled";
			break;
		case 4:
			killMethodA = "electrocuted";
			break;
		case 5:
			killMethodA = "poisoned";
			break;
		default:
			cout << "Must be number between 1 and 5. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto AccuseH;
			break;
		}
		if (accuseh == HowKill) {
			correctaccuseh = true;
			goto AccuseW;
		}
		else {
			correctaccuseh = false;
			goto AccuseW;
		}
		system("CLS");
	AccuseW:
		int accusew;
		cout << "How do you accuse why he killed Mr. Madison?" << endl;
		cout << "Options: 1: Secrets 2: Pokemon 3: Got Him Fired 4: Loan 5: Money" << endl;
		cin >> accusew;
		switch (accusew) {
		case 1:
			WhyUKill = "knew something " + (killerfname)+"didn't want him to.";
			WhyUKillS = "knew something you didn't want him to.";
			break;
		case 2:
			WhyUKill = "traded in " + (killerfname)+"'s best pokemon.";
			WhyUKillS = "traded in your best pokemon.";
			break;
		case 3:
			WhyUKill = "got " + (killerfname)+" fired from their job.";
			WhyUKillS = "got you fired from your job.";
			break;
		case 4:
			WhyUKill = "didn't pay back a loan.";
			WhyUKillS = "didn't pay back a loan.";
			break;
		case 5:
			WhyUKill = "has a lot of money that " + (killerfname)+" wants.";
			WhyUKillS = "had a lot of money that you wanted.";
			break;
		default:
			cout << "Must be number between 1 and 5. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto AccuseW;
			break;
		}
		if (accusew == WhyKill) {
			correctaccusew = true;
			goto Court;
		}
		else {
			correctaccusew = false;
			goto Court;
		}
	Court:
		system("CLS");
		cout << "A few weeks later..." << endl;
		Sleep(2000);
		system("CLS");
		cout << "You " << killerNameA << " have been accused of having " << killMethodA << " Mr. Madison because he " << WhyUKillS << endl;
		Sleep(5000);
		system("CLS");
		if (correctaccusek && correctaccuseh && correctaccusew) {
			cout << "Your verdict is...." << endl;
			Sleep(3000);
			cout << "Guilty" << endl;
			Sleep(2000);
			system("CLS");
			cout << "Thank you so much Detective " << Name << ". You helped out the police department of Oatmeal, Texas more than you can imagine." << endl;
			Sleep(5000);
			system("CLS");
			cout << "Thank you so much for playing my game!" << endl;
			Sleep(2000);
			exit(0);
		}
		else {
			cout << "Your verdict is...." << endl;
			Sleep(2000);
			cout << "Innocent" << endl;
			Sleep(2000);
			system("CLS");
			cout << "Nice job \"detective\" Now not only is the real criminal on the loose we have lost a lot of respect from everybody in Oatmeal." << endl;
			Sleep(4000);
			cout << "I think we will just hire somebody else to do this job since you are clearly incapable." << endl;
			Sleep(3000);
			system("CLS");
			cout << "Thank you so much for playing my game!" << endl;
			Sleep(2000);
			exit(0);
		}
	}
void Bedroom() {
Bedroom:
	bedroom = true;
	cout << "You are now in the Bedroom. You heard from Pablinez that the bed is where Mr. Madison was murdered." << endl;
	string Bedroom;
	cout << "Type what you want to do: Interact, Move" << endl;
	cin >> Bedroom;
	system("CLS");
	if (Bedroom == "Interact") {
	BedroomInt:
		string BedroomI;
		cout << "What would you like to interact with?" << endl;
		cout << "Options: Bed, UnderBed, Safe, Back" << endl;
		cin >> BedroomI;
		if (BedroomI == "Back") {
		BBack:
			system("CLS");
			goto Bedroom;
		}
		if (BedroomI == "back") {
			system("CLS");
			goto BBack;
		}
		if (BedroomI == "Safe") {
		BSafe:
			if (scheat == true) {
				cout << "Bypassing password." << endl;
				Sleep(1000);
				system("CLS");
				goto Sbypass;
			}
			else {
			safe:
				cout << "Type in the password." << endl;
				cin >> safepass;
				if (safepass == Safe1) {
				Sbypass:
					system("CLS");
					cout << "The safe cracks open." << endl;
					Sleep(2000);
					cout << "You take the key that is inside." << endl;
					haskey = true;
					Sleep(2000);
					system("CLS");
					goto BedroomInt;
				}
				else if (safepass == 0) {
					goto BedroomInt;
				}
				else {
					cout << "Incorrect password. Try again or type 0 to go back." << endl;
					system("pause");
					goto safe;
				}
			}
		}
		if (BedroomI == "safe") {
			system("CLS");
			goto BSafe;
		}
		if (BedroomI == "Bed") {
		BBed:
			cout << "You approach the bed." << endl;
			Sleep(2000);
			cout << killMethodHint << endl;
			system("pause");
			system("CLS");
			goto BedroomInt;
		}
		if (BedroomI == "bed") {
			system("CLS");
			goto BBed;
		}
		if (BedroomI == "UnderBed") {
		BUnderBed:
			cout << "You look under the bed." << endl;
			Sleep(2000);
			cout << "There is a small slip of paper it reads MMadison" << PassNumber << "." << endl;
			system("pause");
			system("CLS");
			goto BedroomInt;
		}
		if (BedroomI == "underbed") {
			system("CLS");
			goto BUnderBed;
		}
		else {
			cout << "Incorrect syntax try again." << endl;
			Sleep(2000);
			system("CLS");
			goto BedroomInt;
		}
	}
	if (Bedroom == "interact") {
		system("CLS");
		goto BedroomInt;
	}
	if (Bedroom == "Move") {
	BedroomM:
		string BedroomM;
		cout << "Where do you want to go?" << endl;
		if (hasunlockedtrap == false) {
			cout << "Options: FrontRoom, Kitchen, LivingRoom, Back" << endl;
			cin >> BedroomM;
		}
		else if (hasunlockedtrap == true) {
			cout << "Options: FrontRoom, Basement, Kitchen, LivingRoom, Back" << endl;
			cin >> BedroomM;
		}
		if (BedroomM == "Back") {
		BMBack:
			system("CLS");
			goto Bedroom;
		}
		if (BedroomM == "back") {
			system("CLS");
			goto BMBack;
		}
		if (BedroomM == "FrontRoom") {
			system("CLS");
			FrontRoom();
		}
		if (BedroomM == "frontroom") {
			system("CLS");
			FrontRoom();
		}
		if (BedroomM == "Basement") {
			system("CLS");
			Basement();
		}
		if (BedroomM == "basement") {
			system("CLS");
			Basement();
		}
		if (BedroomM == "Kitchen") {
			system("CLS");
			Kitchen();
		}
		if (BedroomM == "kitchen") {
			system("CLS");
			Kitchen();
		}
		if (BedroomM == "LivingRoom") {
			system("CLS");
			LivingRoom();

		}
		if (BedroomM == "livingroom") {
			system("CLS");
			LivingRoom();
		}
		else
		{
			cout << "Incorrect syntax. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto BedroomM;
		}
	}
	if (Bedroom == "move") {
		system("CLS");
		goto BedroomM;
	}
	else
	{
		cout << "Incorrect syntax. Try again." << endl;
		Sleep(2000);
		system("CLS");
		goto Bedroom;
	}
}
void Kitchen() {
	kitchen = true;
Kitchen:
	cout << "You are now in the Kitchen. You hope you might find come clues here about what happened." << endl;
	string Kitchen;
	cout << "Type what you want to do: Interact, Move" << endl;
	cin >> Kitchen;
	system("CLS");
	if (Kitchen == "Interact") {
	KitchenInt:
		string KitchenI;
		cout << "What would you like to interact with?" << endl;
		cout << "Options: KnifeRack, Sink, Closet, Fusebox, MedicineCabinet, Back." << endl;
		cin >> KitchenI;
		if (KitchenI == "Back") {
		KIBack:
			system("CLS");
			goto Kitchen;
		}
		if (KitchenI == "back") {
			system("CLS");
			goto KIBack;
		}
		if (KitchenI == "KnifeRack") {
		KnifeRack:
			if (killMethod == "stabbed") {
				cout << "You approach the knife rack." << endl;
				Sleep(2000);
				cout << "There is a knife missing." << endl;
				system("pause");
				system("CLS");
				goto KitchenInt;
			}
			else {
				cout << "You approach the knife rack." << endl;
				Sleep(2000);
				cout << "Nothing appears to be weird about the knife rack." << endl;
				system("pause");
				system("CLS");
				goto KitchenInt;
			}
		}
		if (KitchenI == "kniferack") {
			system("CLS");
			goto KnifeRack;
		}
		if (KitchenI == "Sink") {
		Sink:
			if (killMethod == "drowned") {
				cout << "You approach the sink." << endl;
				Sleep(2000);
				cout << "The sink was left on." << endl;
				system("pause");
				system("CLS");
				goto KitchenInt;
			}
			else {
				cout << "You approach the sink." << endl;
				Sleep(2000);
				cout << "Nothing appears to be weird about the sink." << endl;
				system("pause");
				system("CLS");
				goto KitchenInt;
			}
		}
		if (KitchenI == "sink") {
			system("CLS");
			goto Sink;
		}
		if (KitchenI == "Closet") {
		Closet:
			if (killMethod == "strangled") {
				cout << "You open the closet." << endl;
				Sleep(2000);
				cout << "There is a package on the floor with pieces of rope inside." << endl;
				system("pause");
				system("CLS");
				goto KitchenInt;
			}
			else {
				cout << "You open the closet." << endl;
				Sleep(2000);
				cout << "Nothing appears to be weird in the closet." << endl;
				system("pause");
				system("CLS");
				goto KitchenInt;
			}
		}
		if (KitchenI == "closet") {
			system("CLS");
			goto Closet;
		}
		if (KitchenI == "Fusebox") {
		Fusebox:
			if (killMethod == "electrocuted") {
				cout << "You open up the fusebox." << endl;
				Sleep(2000);
				cout << "There is missing parts inside." << endl;
				system("pause");
				system("CLS");
				goto KitchenInt;
			}
			else {
				cout << "You open the fusebox." << endl;
				Sleep(2000);
				cout << "Everything looks normal with the fuxebox." << endl;
				system("pause");
				system("CLS");
				goto KitchenInt;
			}
		}
		if (KitchenI == "fuxebox") {
			system("CLS");
			goto Fusebox;
		}
		if (KitchenI == "MedicineCabinet") {
		Medicine:
			if (killMethod == "poisoned") {
				cout << "You open the medicine cabinet." << endl;
				Sleep(2000);
				cout << "There is a bottle missing." << endl;
				system("pause");
				system("CLS");
				goto KitchenInt;
			}
			else {
				cout << "You open the medicine cabinet." << endl;
				Sleep(2000);
				cout << "Everything is in its place in the medicine cabinet." << endl;
				system("pause");
				system("CLS");
				goto KitchenInt;
			}
		}
		if (KitchenI == "medicinecabinet") {
			system("CLS");
			goto Medicine;
		}
		else
		{
			cout << "Incorrect syntax. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto KitchenInt;
		}
	}
	if (Kitchen == "interact") {
		system("CLS");
		goto KitchenInt;
	}
	if (Kitchen == "Move") {
	KitchenM:
		string KitchenM;
		cout << "Where do you want to go?" << endl;
		if (hasunlockedtrap == false) {
			cout << "Options: FrontRoom, Bedroom, LivingRoom, Back" << endl;
			cin >> KitchenM;
		}
		else if (hasunlockedtrap == true) {
			cout << "Options: Bedroom, Basement, FrontRoom, LivingRoom, Back" << endl;
			cin >> KitchenM;
		}
		if (KitchenM == "Back") {
		KBack:
			system("CLS");
			goto Kitchen;
		}
		if (KitchenM == "back") {
			system("CLS");
			goto KBack;
		}
		if (KitchenM == "FrontRoom") {
			system("CLS");
			FrontRoom();
		}
		if (KitchenM == "frontroom") {
			system("CLS");
			FrontRoom();
		}
		if (KitchenM == "Basement") {
			system("CLS");
			Basement();
		}
		if (KitchenM == "basement") {
			system("CLS");
			Basement();
		}
		if (KitchenM == "LivingRoom") {
			system("CLS");
			LivingRoom();

		}
		if (KitchenM == "livingroom") {
			system("CLS");
			LivingRoom();
		}
		if (KitchenM == "Bedroom") {
			Bedroom:
			system("CLS");
			goto Bedroom;
		}
		if (KitchenM == "bedroom") {
			system("CLS");
			Bedroom();
		}
		else
		{
			cout << "Incorrect syntax. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto KitchenM;
		}

	}
	if (Kitchen == "move") {
		system("CLS");
		goto KitchenM;
	}
	else {
		cout << "Incorrect syntax try again." << endl;
		Sleep(2000);
		system("CLS");
		goto Kitchen;

	}
}
void LivingRoom() {
	livingroom = true;
LivingRoom:
	cout << "You are now in the Living Room. There is a desk with a computer on it." << endl;
	string LivingRoom;
	cout << "Type what you want to do: Interact, Move" << endl;
	cin >> LivingRoom;
	system("CLS");
	if (LivingRoom == "Interact") {
	LivingRoomInt:
		string LivingRoomI;
		cout << "What would you like to interact with?" << endl;
		cout << "Options: Computer, Back" << endl;
		cin >> LivingRoomI;
		if (LivingRoomI == "Back") {
			system("CLS");
			goto LivingRoom;
		}
		if (LivingRoomI == "back") {
			system("CLS");
		}
		if (LivingRoomI == "Computer") {
			system("CLS");
			Computer();
			goto LivingRoom;
		}
		if (LivingRoomI == "computer") {
			system("CLS");
			Computer();
			goto LivingRoom;
		}
		else
		{
			cout << "Incorrect syntax. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto LivingRoomInt;
		}

	}
	if (LivingRoom == "interact") {
		system("CLS");
		goto LivingRoomInt;
	}
	if (LivingRoom == "Move") {
		LivingRoomM:
		string LivingRoomM;
		cout << "Where do you want to go?" << endl;
		if (hasunlockedtrap == false) {
			cout << "Options: Bedroom, Kitchen, FrontRoom, Back" << endl;
			cin >> LivingRoomM;
		}
		else if (hasunlockedtrap == true) {
			cout << "Options: Bedroom, Basement, Kitchen, FrontRoom, Back" << endl;
			cin >> LivingRoomM;
		}
		if (LivingRoomM == "Back") {
		LVBack:
			system("CLS");
			goto LivingRoom;
		}
		if (LivingRoomM == "back") {
			system("CLS");
			goto LVBack;
		}
		if (LivingRoomM == "FrontRoom") {
			system("CLS");
			FrontRoom();
		}
		if (LivingRoomM == "frontroom") {
			system("CLS");
			FrontRoom();
		}
		if (LivingRoomM == "Basement") {
			system("CLS");
			Basement();
		}
		if (LivingRoomM == "basement") {
			system("CLS");
			Basement();
		}
		if (LivingRoomM == "Kitchen") {
			system("CLS");
			Kitchen();

		}
		if (LivingRoomM == "kitchen") {
			system("CLS");
			Kitchen();
		}
		if (LivingRoomM == "Bedroom") {
			system("CLS");
			Bedroom();
		}
		if (LivingRoomM == "bedroom") {
			system("CLS");
			Bedroom();
		}
		else
		{
			cout << "Incorrect syntax. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto LivingRoomM;
		}

	}
	if (LivingRoom == "move") {
		system("CLS");
		goto LivingRoomM;
	}
	else
	{
		cout << "Incorrect syntax. Try again." << endl;
		Sleep(2000);
		system("CLS");
		goto LivingRoom;
	}

}
void Basement() {
	basement = true;
Basement:
	cout << "You are now in the Basement. You are hoping you might find some more evidence here." << endl;
	string Basement;
	cout << "Type what you want to do: Interact, Move" << endl;
	cin >> Basement;
	system("CLS");
	if (Basement == "Interact") {
	BasementInt:
		string BasementI;
		cout << "What would you like to interact with?" << endl;
		cout << "Options: Notepad, Tablet, Phone, Contract, Safe, Back." << endl;
		cin >> BasementI;
		if (BasementI == "Back") {
			system("CLS");
			goto Basement;
		}
		if (BasementI == "back") {
			system("CLS");
			goto Basement;
		}
		if (BasementI == "Notepad") {
			Notepad:
			if (WhyKillC == 1) {
				cout << "You approach the notepad." << endl;
				Sleep(2000);
				cout << "On the notepad there is a note it reads: " << killerfname << " cheated on his wife." << endl;
				system("pause");
				system("CLS");
				goto BasementInt;
			}
			else {
				cout << "You approach the notepad." << endl;
				Sleep(2000);
				cout << "The notepad is blank." << endl;
				system("pause");
				system("CLS");
				goto BasementInt;
			}
		}
		if (BasementI == "notepad") {
			system("CLS");
			goto Notepad;
		}
		if (BasementI == "Tablet") {
			Tablet:
			if (WhyKillC == 2) {
				cout << "You pick up the tablet." << endl;
				Sleep(2000);
				cout << "Pokemon Go was left on." << endl;
				system("pause");
				system("CLS");
				goto BasementInt;
			}
			else {
				cout << "You pick up the tablet." << endl;
				Sleep(2000);
				cout << "It is dead." << endl;
				system("pause");
				system("CLS");
				goto BasementInt;
			}
		}
		if (BasementI == "tablet") {
			system("CLS");
			goto Tablet;
		}
		if (BasementI == "Phone") {
			Phone:
			if (WhyKillC == 3) {
				cout << "You pick up the phone." << endl;
				Sleep(2000);
				cout << "There is a new voicemail. You play it." << endl;
				Sleep(1000);
				system("CLS");
				cout << "Thank you Mr. Madison for letting me know about " << killerfname << "'s actions. I will be taking action against him." << endl;
				system("pause");
				system("CLS");
				goto BasementInt;
			}
			else {
				cout << "You pick up the phone." << endl;
				Sleep(2000);
				cout << "There is nothing interesting about the phone." << endl;
				system("pause");
				system("CLS");
				goto BasementInt;
			}
		}
		if (BasementI == "phone") {
			system("CLS");
			goto Phone;
		}
		if (BasementI == "Contract") {
			Contract:
			if (WhyKillC == 4) {
				cout << "You pick up the contract." << endl;
				Sleep(2000);
				cout << "It is a loan contract between Mr. Madison and " << killerfname << ". It was due 2 weeks ago." << endl;
				system("pause");
				system("CLS");
				goto BasementInt;
			}
			else {
				cout << "You pick up the contract." << endl;
				Sleep(2000);
				cout << "It is not filled out." << endl;
				system("pause");
				system("CLS");
				goto BasementInt;
			}
		}
		if (BasementI == "contract") {
			system("CLS");
			goto Contract;
		}
		if (BasementI == "Safe") {
			SafeB:
			if (WhyKillC == 5) {
				cout << "You approach the safe." << endl;
				Sleep(2000);
				cout << "It is cracked open and there is nothing left inside." << endl;
				system("pause");
				system("CLS");
				goto BasementInt;
			}
			else {
				cout << "You approach the safe." << endl;
				Sleep(2000);
				cout << "It seems to be welded shut." << endl;
				system("pause");
				system("CLS");
				goto BasementInt;
			}
		}
		if (BasementI == "safe") {
			system("CLS");
			goto SafeB;
		}
		else
		{
			cout << "Incorrect syntax. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto BasementInt;
		}
	}
	if (Basement == "interact") {
		system("CLS");
		goto BasementInt;
	}
	if (Basement == "Move") {
		BasementM:
		string BasementM;
		cout << "Where do you want to go?" << endl;
		cout << "Options: FrontRoom, Bedroom, Kitchen, LivingRoom, Back" << endl;
		cin >> BasementM;
		if (BasementM == "Back") {
		BBack:
			system("CLS");
			goto Basement;
		}
		if (BasementM == "back") {
			system("CLS");
			goto BBack;
		}
		if (BasementM == "FrontRoom") {
			system("CLS");
			FrontRoom();
		}
		if (BasementM == "frontroom") {
			system("CLS");
			FrontRoom();
		}
		if (BasementM == "Kitchen") {
			system("CLS");
			Kitchen();
		}
		if (BasementM == "kitchen") {
			system("CLS");
			Kitchen();
		}
		if (BasementM == "LivingRoom") {
			system("CLS");
			LivingRoom();

		}
		if (BasementM == "livingroom") {
			system("CLS");
			LivingRoom();
		}
		if (BasementM == "Bedroom") {
		Bedroom:
			system("CLS");
			goto Bedroom;
		}
		if (BasementM == "bedroom") {
			system("CLS");
			Bedroom();
		}
		else
		{
			cout << "Incorrect syntax. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto BasementM;
		}

	}
	if (Basement == "move") {
		system("CLS");
		goto BasementM;
	}
	else
	{
		cout << "Incorrect syntax. Try again." << endl;
		Sleep(2000);
		system("CLS");
		goto Basement;
	}
}
void FrontRoom()
{
	frontroom = true;
FrontRoom:
	cout << "You are now in the Front Room. The only thing even remotely interesting in this room is the rug on the floor. It appears to be tilted." << endl;
	string FrontRoom;
	if (NoInt == false) {
		cout << "Type what you want to do: Interact, Accuse, Move" << endl;
		cin >> FrontRoom;
		system("CLS");
		if (FrontRoom == "Interact") {
		FrontRoomInt:
			string FrontRoomI;
			cout << "What would you like to interact with?" << endl;
			if (hasmovedrug == false) {
				cout << "Options: Rug, Back" << endl;
				cin >> FrontRoomI;
			}
			else if (hasmovedrug == true) {
				cout << "Options: Trapdoor, Back" << endl;
				cin >> FrontRoomI;
			}
			if (FrontRoomI == "Back") {
				FRIB:
				system("CLS");
				goto FrontRoom;
			}
			if (FrontRoomI == "back") {
				system("CLS");
				goto FRIB;
			}
			if (FrontRoomI == "Rug") {
				Rug:
				cout << "You move the rug." << endl;
				Sleep(2000);
				cout << "There is a trapdoor under the rug." << endl;
				Sleep(2000);
				hasmovedrug = true;
				system("CLS");
				goto FrontRoomInt;
			}
			if (FrontRoomI == "rug") {
				system("CLS");
				goto Rug;
			}
			if (FrontRoomI == "Trapdoor") {
				Trapdoor:
				if (haskey == true) {
					cout << "You unlock the door." << endl;
					Sleep(2000);
					NoInt = true;
					hasunlockedtrap = true;
					system("CLS");
					goto FrontRoom;
				}
				else {
					cout << "You do not have a key." << endl;
					Sleep(2000);
					system("CLS");
					goto FrontRoomInt;
				}
			}
			if (FrontRoomI == "trapdoor") {
				system("CLS");
				goto Trapdoor;
			}
			else
			{
				cout << "Incorrect syntax. Try again." << endl;
				Sleep(2000);
				system("CLS");
				goto FrontRoomInt;
			}
		}
		if (FrontRoom == "interact") {
			system("CLS");
			goto FrontRoomInt;
		}
		if (FrontRoom == "Move") {
		FrontRoomM:
			string FrontRoomM;
			cout << "Where do you want to go?" << endl;
			if (hasunlockedtrap == false) {
				cout << "Options: Bedroom, Kitchen, LivingRoom, Back" << endl;
				cin >> FrontRoomM;
			}
			else if (hasunlockedtrap == true) {
				cout << "Options: Bedroom, Basement, Kitchen, LivingRoom, Back" << endl;
				cin >> FrontRoomM;
			}
			if (FrontRoomM == "Back") {
			FrontBack:
				system("CLS");
				goto FrontRoom;
			}
			if (FrontRoomM == "back") {
				system("CLS");
				goto FrontBack;
			}
			if (FrontRoomM == "Kitchen") {
				system("CLS");
				Kitchen();
			}
			if (FrontRoomM == "kitchen") {
				system("CLS");
				Kitchen();
			}
			if (FrontRoomM == "Basement") {
				system("CLS");
				Basement();
			}
			if (FrontRoomM == "basement") {
				system("CLS");
				Basement();
			}
			if (FrontRoomM == "LivingRoom") {
				system("CLS");
				LivingRoom();

			}
			if (FrontRoomM == "livingroom") {
				system("CLS");
				LivingRoom();
			}
			if (FrontRoomM == "Bedroom") {
			Bedroom:
				system("CLS");
				goto Bedroom;
			}
			if (FrontRoomM == "bedroom") {
				system("CLS");
				Bedroom();
			}
			else
			{
				cout << "Incorrect syntax. Try again." << endl;
				Sleep(2000);
				system("CLS");
				goto FrontRoomM;
			}

		}
		if (FrontRoom == "move") {
			system("CLS");
			goto FrontRoomM;
		}
		if (FrontRoom == "Accuse") {
			Accuse:
			if (frontroom && bedroom && kitchen && bedroom && computer && basement) {
				system("CLS");
				Accuse();
			}
			else {
				cout << "You cannot accuse yet. You need to visit all rooms and interact with the computer." << endl;
				Sleep(2000);
				system("CLS");
				goto FrontRoom;
			}
		}
		if (FrontRoom == "accuse") {
			system("CLS");
			goto Accuse;
		}
		else
		{
			cout << "Incorrect syntax. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto FrontRoom;
		}
	}
	else if (NoInt == true) {
		cout << "Type what you want to do: Accuse, Move" << endl;
		cin >> FrontRoom;
		system("CLS");
		if (FrontRoom == "Move") {
		FrontRoomM1:
			string FrontRoomM;
			cout << "Where do you want to go?" << endl;
			if (hasunlockedtrap == false) {
				cout << "Options: Bedroom, Kitchen, LivingRoom, Back" << endl;
				cin >> FrontRoomM;
			}
			else if (hasunlockedtrap == true) {
				cout << "Options: Bedroom, Basement, Kitchen, LivingRoom, Back" << endl;
				cin >> FrontRoomM;
			}
			if (FrontRoomM == "Kitchen") {
				system("CLS");
				Kitchen();
			}
			if (FrontRoomM == "kitchen") {
				system("CLS");
				Kitchen();
			}
			if (FrontRoomM == "Basement") {
				system("CLS");
				Basement();
			}
			if (FrontRoomM == "basement") {
				system("CLS");
				Basement();
			}
			if (FrontRoomM == "LivingRoom") {
				system("CLS");
				LivingRoom();

			}
			if (FrontRoomM == "livingroom") {
				system("CLS");
				LivingRoom();
			}
			if (FrontRoomM == "Bedroom") {
				system("CLS");
				Bedroom();
			}
			if (FrontRoomM == "bedroom") {
				system("CLS");
				Bedroom();
			}
			else
			{
				cout << "Incorrect syntax. Try again." << endl;
				Sleep(2000);
				system("CLS");
				goto FrontRoomM1;
			}

		}
		if (FrontRoom == "move") {
			system("CLS");
			goto FrontRoomM1;
		}
		if (FrontRoom == "Accuse") {
			Accuse1:
			if (frontroom && bedroom && kitchen && bedroom && computer && basement) {
				system("CLS");
				Accuse();
			}
			else {
				cout << "You cannot accuse yet. You need to visit all rooms and interact with the computer." << endl;
				Sleep(2000);
				system("CLS");
				goto FrontRoom;
			}
		}
		if (FrontRoom == "accuse") {
			system("CLS");
			goto Accuse1;
		}
		else
		{
			cout << "Incorrect syntax. Try again." << endl;
			Sleep(2000);
			system("CLS");
			goto FrontRoom;
		}
	}
		}
void Computer() {
	computer = true;
Computer:
	string ComputerPassword;
	if (ccheat == true) {
		cout << "Bypassing password." << endl;
		Sleep(1000);
		goto ccheat;
	}
	cout << "Please enter the password." << endl;
	cin >> ComputerPassword;
	if (ComputerPassword == masterPassword) {
	ccheat:
		system("CLS");
		cout << "Logging in..." << endl;
		Sleep(2000);
		system("CLS");
		cout << "Login successful." << endl;
		Sleep(500);
		cout << "Welcome Mr. Madison." << endl;
		system("pause");
		system("CLS");
	ComputerI:
		cout << "What would you like to do?" << endl;
		string Computer;
		cout << "Options: FileExplorer, Email, Escape" << endl;
		cin >> Computer;
		if (Computer == "FileExplorer") {
		files:
			string files;
			system("CLS");
			cout << "You have 2 files on your computer." << endl;
			cout << "Type which file you would like to access." << endl;
			cout << "Options: GroceryList, SafeCombo, Back" << endl;
			cin >> files;
			if (files == "GroceryList") {
				grocery:
				system("CLS");
				cout << "Bagels" << endl;
				cout << "Oranges" << endl;
				cout << "Sour Patch Kids" << endl;
				cout << "Plastic Bags" << endl;
				cout << "Sponges" << endl;
				cout << "Batteries" << endl;
				cout << "Plastic Cups" << endl;
				cout << "Rubber Gloves" << endl;
				system("pause");
				system("CLS");
				goto files;
			}
			else if (files == "grocerylist") {
				system("CLS");
				goto grocery;
			}
			else if (files == "SafeCombo") {
				safec:
				system("CLS");
				cout << Safe1 << endl;
				system("pause");
				system("CLS");
				goto files;
			}
			else if (files == "safecombo") {
				system("CLS");
				goto safec;
			}
			else if (files == "Back") {
				CompBack:
				system("CLS");
				goto ComputerI;
			}
			else if (files == "back") {
				system("CLS");
				goto CompBack;
			}
			else
			{
				cout << "Incorrect syntax. Try again." << endl;
				Sleep(2000);
				system("CLS");
				goto files;
			}
		}
		if (Computer == "fileexplorer") {
			system("CLS");
			goto files;
		}
		else if (Computer == "Email") {
		email:
			string mail;
			system("CLS");
			cout << "You have 3 emails." << endl;
			cout << "Type which email you would like to read." << endl;
			cout << "Options: CompleteYourRegistration, OrderConfirmation, NotHappyWithYouMadison, Back" << endl;
			cin >> mail;
			if (mail == "CompleteYourRegistration") {
				regis:
				system("CLS");
				cout << "From: NoReply@RichMen.com" << endl;
				cout << "To: MMadison@gmail.com" << endl;
				cout << "Hello Mr. Madison! Please visit the following link to complete your registration for RichMen.com!" << endl;
				cout << "www.freeram.com" << endl;
				cout << "We hope you enjoy talking with other Rich Men in your area!" << endl;
				system("pause");
				system("CLS");
				goto email;
			}
			else if (mail == "completeyourregistration") {
				system("CLS");
				goto regis;
			}
			else if (mail == "OrderConfirmation") {
				order:
				system("CLS");
				cout << "From: EbayTeam@ebay.com" << endl;
				cout << "To: MMadison@gmail.com" << endl;
				cout << "Hello this is a automated email from ebay.com confirming your purchase of 1000x High Powered Laser Pointers." << endl;
				cout << "The estimated delivery date is between August 25 and August 29." << endl;
				cout << "You can also take the time to review the seller of this product if you would like." << endl;
				cout << "-Ebay Team" << endl;
				system("pause");
				system("CLS");
				goto email;
			}
			else if (mail == "orderconfirmation") {
				system("CLS");
				goto order;
			}
			else if (mail == "NotHappyWithYouMadison") {
				hate:
				system("CLS");
				cout << "From: " << killerfname << "@yahoo.com" << endl;
				cout << "To: MMadison@gmail.com" << endl;
				cout << "Hello Mr. Madison. This is " << killerfname << "." << endl;
				cout << "I am just letting you know that I am unhappy with you right now." << endl;
				if (WhyKillC == 1) {
					cout << "Knowing you I am sure that that little conversation you overheard is not going to stay secret." << endl;
				}
				else if (WhyKillC == 2) {

					cout << "Trading in my 1800 CP Vaporeon? Now that is something that you could say is worth killing over." << endl;
				}
				else if (WhyKillC == 3) {
					cout << "Getting me fired from my job? Really? If thats the way you want to be then fine." << endl;
				}
				else if (WhyKillC == 4) {
					cout << "I trusted you with a loan and you just ignored me. The lawyers wont help so I guess I am taking matters into my own hands." << endl;
				}
				else if (WhyKillC == 5) {
					cout << "You have so much money why cant you just give me a little bit! Thats all I want! But I guess if you wont give it to me I will get it myself." << endl;
				}
				cout << "You better just keep an eye out Mr. Madison" << endl;
				system("pause");
				goto email;

			}
			else if (mail == "nothappywithyoumadison") {
				system("CLS");
				goto hate;
			}
			else if (mail == "Back") {
				CompMailBack:
				system("CLS");
				goto ComputerI;
			}
			else if (mail == "back") {
				system("CLS");
				goto CompMailBack;
			}
			else
			{
				cout << "Incorrect syntax. Try again." << endl;
				Sleep(2000);
				system("CLS");
				goto email;
			}
		}
		else if (Computer == "email") {
			system("CLS");
			goto email;
		}
		else if (Computer == "escape") {
			system("CLS");
			LivingRoom();
		}
		else if (Computer == "Escape") {
			system("CLS");
			LivingRoom();
		}
		else {
			cout << "Incorrect syntax. Please try again" << endl;
			system("pause");
			goto ComputerI;
		}
	}
		else if (ComputerPassword == "escape") {
			LivingRoom();
		}
		else if (ComputerPassword == "Escape") {
			LivingRoom();
		}
	else {
		cout << "Incorrect password." << endl;
		cout << "Try again or type escape." << endl;
		system("pause");
		goto Computer;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	Killer = rand() % 5 + 1;
	HowKill = rand() % 5 + 1;
	WhyKill = rand() % 5 + 1;
	PassNumber = rand() % 90 + 10;
	Safe1 = rand() % 90000 + 10000;
	masterPassword = "MMadison";
	masterPassword += to_string(PassNumber);
	switch (Killer) {
	case 1:
		killerName = "Si-Woo Ofra";
		killerfname = "Si-Woo";
		break;
	case 2:
		killerName = "Athaulf Jarmila";
		killerfname = "Athaulf";
		break;
	case 3:
		killerName = "Chrysanthos Giorgina";
		killerfname = "Chrysanthos";
		break;
	case 4:
		killerName = "Hinrik Ansgar";
		killerfname = "Hinrik";
		break;
	case 5:
		killerName = "Eadberht Svanhildr";
		killerfname = "Eadberht";
		break;
	default:
		cout << "If you are somehow seeing this then you broke the game SO hard." << endl;
		killerName = "ERROR";
		break;
	}
	switch (HowKill) {
	case 1:
		killMethod = "stabbed";
		killMethodHint = "There is blood on the bed. There is also a bloody knife on the dresser.";
		break;
	case 2:
		killMethod = "drowned";
		killMethodHint = "The bed is wet.";
		break;
	case 3:
		killMethod = "strangled";
		killMethodHint = "There is a roll of rope sitting on the floor next to the bed.";
		break;
	case 4:
		killMethod = "electrocuted";
		killMethodHint = "There is soot on the bed. Along with a device on the floor which appears to be homemade with wires extruding from it.";
		break;
	case 5:
		killMethod = "poisoned";
		killMethodHint = "There is a empty syringe on the dresser along with a bottle with some liquid in it.";
		break;
	default:
		cout << "If you are somehow seeing this then you broke the game SO hard." << endl;
		killMethod = "ERROR";
		killMethodHint = "ERROR";
		break;


	}
	switch (WhyKill) {
	case 1:
		WhyUKill = "knew something " + (killerfname) + " didn't want him to.";
		WhyKillC = 1;
		break;
	case 2:
		WhyUKill = "traded in " + (killerfname) + "'s best pokemon.";
		WhyKillC = 2;
		break;
	case 3:
		WhyUKill = "got " +(killerfname) + " fired from their job.";
		WhyKillC = 3;
		break;
	case 4:
		WhyUKill = "didn't pay back a loan.";
		WhyKillC = 4;
		break;
	case 5:
		WhyUKill = "has a lot of money that " + (killerfname) + " wants.";
		WhyKillC = 5;
		break;
	default:
		cout << "If you are somehow seeing this then you broke the game SO hard." << endl;
		WhyUKill = "ERROR";
		break;
	}
	cout << "Hello and welcome to the Madison Mansion Murder Mystery!" << endl;
	Sleep(2000);
	cout << "Made by Ben K" << endl;
	Sleep(2000);
	cout << "I hope you enjoy!" << endl;
	Sleep(2000);
	system("CLS");
start:
	cout << "Enter your name" << endl;
	cin >> Name;
	system("CLS");
	if (Name == "DevConsole") {
		system("CLS");
		goto DevOpt;
	}
	if (Name == "devconsole") {
		system("CLS");
		goto DevOpt;
	}
	else {
		cout << "Hello Detective " << Name << "." << endl;
		system("pause");
		system("CLS");
		cout << "I am the Chief of Police here in Oatmeal, Texas, Esteban Enrique Nunez Garcia Ramirez Vasquez Rodriguez Hernandez Cortes Martinez Roberto Smith but since we are friends you can call me Pablinez." << endl;
		system("pause");
		system("CLS");
		cout << "You must know about the Madisons. The richest family here in Oatmeal. They live in the mansion up on Garbage-Monkey Hill." << endl;
		system("pause");
		system("CLS");
		cout << "Some time last night Mr. Madison was murdered in cold blood." << endl;
		system("pause");
		system("CLS");
		cout << "It is your job to solve who killed them, why, and how." << endl;
		system("pause");
		system("CLS");
		cout << "Lets head to the mansion." << endl;
		system("pause");
		system("CLS");
		FrontRoom();
	}
	DevOpt:
		string DevCheat;
		cout << "What would you like to do?" << endl;
		cout << "Type help for options." << endl;
		cin >> DevCheat;
		if (DevCheat == "help") {
			cout << "goto_<room>: Goes to specified room. Options: frontroom, bedroom, kitchen, livingroom, basement, computer." << endl;
			cout << "cheats: Allows bypassing of passwords." << endl;
			cout << "khw: Shows the killer, how they killed, and why they killed." << endl;
			cout << "kchan: Changes the killer." << endl;
			cout << "hchan: Changes method of murder." << endl;
			cout << "wchan: Changes the reason of murder." << endl;
			cout << "start: Begins game." << endl;
			cout << "testitems: Tests whether the user does or does not have items." << endl;
			cout << "visitall: Flags all rooms as being visited." << endl;
			cout << "help: Displays all available commands." << endl;
			goto DevOpt;
		}
		else if (DevCheat == "goto_frontroom") {
			system("CLS");
			FrontRoom();
		}
		else if (DevCheat == "goto_bedroom") {
			system("CLS");
			Bedroom();
		}
		else if (DevCheat == "goto_kitchen") {
			system("CLS");
			Kitchen();
		}
		else if (DevCheat == "goto_livingroom") {
			system("CLS");
			LivingRoom();
		}
		else if (DevCheat == "goto_basement") {
			system("CLS");
			Basement();
		}
		else if (DevCheat == "goto_computer") {
			ccheat = true;
			system("CLS");
			Computer();
		}
		else if (DevCheat == "visitall") {
			bedroom = true;
			basement = true;
			frontroom = true;
			kitchen = true;
			computer = true;
			livingroom = true;
			cout << "You have visited all rooms." << endl;
				goto DevOpt;
		}
		else if (DevCheat == "cheats")
		{
			
			ccheat = true;
			scheat = true;
			cout << "You can now bypass all passwords." << endl;
			goto DevOpt;
		}
		else if (DevCheat == "kchan") {
			string KChan;
			cout << "Who do you want to change the murderer to?" << endl;
			cout << "Options: 1: Si-Woo Ofra, 2: Athaulf Jarmila 3: Chrysanthos Giorgina 4: Hinrik Ansgar 5: Eadberht Svanhildr" << endl;
			cin >> KChan;
			if (KChan == "1") {
				Killer = 1;
				killerName = "Si-Woo Ofra";
				killerfname = "Si-Woo";
				cout << "Killer has been set to " << killerName << endl;
				goto DevOpt;
			}
			else if (KChan == "2") {
				Killer = 2;
				killerName = "Athaulf Jarmila";
				killerfname = "Athaulf";
				cout << "Killer has been set to " << killerName << endl;
				goto DevOpt;
			}
			else if (KChan == "3") {
				Killer = 3;
				killerName = "Chrysanthos Giorgina";
				killerfname = "Chrysanthos";
				cout << "Killer has been set to " << killerName << endl;
				goto DevOpt;
			}
			else if (KChan == "4") {
				Killer = 4;
				killerName = "Hinrik Ansgar";
				killerfname = "Hinrik";
				cout << "Killer has been set to " << killerName << endl;
				goto DevOpt;
			}
			else if (KChan == "5") {
				Killer = 5;
				killerName = "Eadberht Svanhildr";
				killerfname = "Eadberht";
				cout << "Killer has been set to " << killerName << endl;
				goto DevOpt;
			}
		}
		else if (DevCheat == "hchan") {
			string HChan;
			cout << "What do you want to change the cause of death to?" << endl;
			cout << "Options: 1: Stabbing, 2: Drowning 3: Strangling  4: Electrocution 5: Poisoning" << endl;
			cin >> HChan;
			if (HChan == "1") {
				HowKill = 1;
				killMethod = "stabbed";
				cout << "Kill Method has been set to stabbing." << endl;
				goto DevOpt;
			}
			else if (HChan == "2") {
				HowKill = 2;
				killMethod = "drowned";
				cout << "Kill Method has been set to drowning." << endl;
				goto DevOpt;
			}
			else if (HChan == "3") {
				HowKill = 3;
				killMethod = "strangled";
				cout << "Kill Method has been set to strangling." << endl;
				goto DevOpt;
			}
			else if (HChan == "4") {
				HowKill = 4;
				killMethod = "electrocuted";
				cout << "Kill Method has been set to electrocution." << endl;
				goto DevOpt;
			}
			else if (HChan == "5") {
				HowKill = 5;
				killMethod = "poisoned";
				cout << "Kill Method has been set to poisoning." << endl;
				goto DevOpt;
			}
		}
		else if (DevCheat == "wchan") {
			string WChan;
			cout << "What do you want to change the reason of murder to?" << endl;
			cout << "Options: 1: Knew something they didn't want him to. 2: Traded in their best pokemon. 3: Got them fired from their job.  4: Didn't pay back a loan. 5: Has a lot of money that they want." << endl;
			cin >> WChan;
			if (WChan == "1") {
				WhyUKill = "knew something " + (killerfname)+"didn't want him to.";
				WhyKillC = 1;
				cout << "Kill reason has been set to secrets." << endl;
				goto DevOpt;
			}
			else if (WChan == "2") {
				WhyUKill = "traded in " + (killerfname)+"'s best pokemon.";
				WhyKillC = 2;
				cout << "Kill reason has been set to pokemon." << endl;
				goto DevOpt;
			}
			else if (WChan == "3") {
				WhyUKill = "got " + (killerfname)+" fired from their job.";
				WhyKillC = 3;
				cout << "Kill reason has been set to job." << endl;
				goto DevOpt;
			}
			else if (WChan == "4") {
				WhyUKill = "didn't pay back a loan.";
				WhyKillC = 4;
				cout << "Kill reason has been set to loan." << endl;
				goto DevOpt;
			}
			else if (WChan == "5") {
				WhyUKill = "has a lot of money that " + (killerfname)+" wants.";
				WhyKillC = 5;
				cout << "Kill reason has been set to money." << endl;
				goto DevOpt;
			}
		}
		else if (DevCheat == "start")
		{
			system("CLS");
			goto start;
		}
		else if (DevCheat == "testitems") {
			if (haskey == true) {
				cout << "haskey true" << endl;
			}
			if (haskey == false) {
				cout << "haskey false" << endl;
			}
			if (hasmovedrug == true) {
				cout << "hasmovedrug true" << endl;
			}
			if (hasmovedrug == false) {
				cout << "hasmovedrug false" << endl;
			}
			if (hasunlockedtrap == true) {
				cout << "hasunlockedtrap true" << endl;
			}
			if (hasunlockedtrap == false) {
				cout << "hasunlockedtrap false" << endl;
			}
			if (ccheat == true) {
				cout << "ccheat true" << endl;
			}
			if (ccheat == false) {
				cout << "ccheat false" << endl;
			}
			if (scheat == true) {
				cout << "scheat true" << endl;
			}
			if (scheat == false) {
				cout << "scheat false" << endl;
			}
			goto DevOpt;
		}
		else if (DevCheat == "khw")
		{
			cout << "The killer is " << killerName << "." << endl;
			cout << "They " << killMethod << " Mr. Madison." << endl;
			cout << "They killed Mr. Madison because he " << WhyUKill << endl;
			goto DevOpt;
		}
		else
		{
			cout << "Incorrect syntax. Type help for options." << endl;
			goto DevOpt;
		}
	}





	