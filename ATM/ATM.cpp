//password: 22281227
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	long So_tien_ban_dau = 100000000;
	int Lua_chon;
	int so_lan_nhap_mk = 0;
	cout << "\t\t\tATM XIN KINH CHAO QUY KHACH!\n\n";
	cout << "ID nguoi dung: Duc_Hoa&&Viet_Duc\n\n";
	int PassWord;
	cout << "Vui long nhap mat khau: ";
	cin >> PassWord;
	if (PassWord == 22281227) {
		system("cls");
		cout << "Dang nhap thanh cong! \n\n";
		cout << "\t\t\tLUA CHON CUA BAN \n\n";
		cout << setfill('*');
		cout << setw(50) << left << "1.Gui tien ";
		cout << setfill('*');
		cout << " 2.Rut tien" << endl << endl;
		cout << setw(50) << left << "3.Kiem tra so tien con lai ";
		cout << " 4.Thoat" << endl << endl;
		cout << "Lua Chon Cua ban la: ";
		cin >> Lua_chon;
		cout << endl;
		system("cls");
		while (1) {
			if (Lua_chon == 1) {
				long Gui_tien;
				cout << "\t\t\tGUI TIEN VAO TAI KHOAN\n " << endl;
				cout << "Nhap so tien ban muon gui: ";
				cin >> Gui_tien;
				long So_tien_sau_khi_gui = So_tien_ban_dau + Gui_tien;
				break;
			}
			else if (Lua_chon == 2) {
				long Rut_tien;
				cout << "\t\t\tRUT TIEN\n " << endl;
				cout << "Nhap so tien ban muon rut: ";
				cin >> Rut_tien;
				if (Rut_tien % 10000 != 0) {
					cout << "Khong hop le!";
					break;
				}
				else {
					if (So_tien_ban_dau - Rut_tien <= 50000) {
						cout << "Khong hop le, thu lai voi so khac!";
						break;
					}
					else {
						cout << "Vui long nhan:\n";
						long du1, du2, du3, du4, du5;
						if (Rut_tien >= 500000)
							cout << Rut_tien / 500000 << " to tien 500000vnd\n";
						du1 = Rut_tien % 500000;
						if (du1 >= 200000)
							cout << du1 / 200000 << " to tien 200000vnd\n";
						du2 = du1 % 200000;
						if (du2 >= 100000)
							cout << du2 / 100000 << " to tien 100000vnd\n";
						du3 = du2 % 100000;
						if (du3 >= 50000)
							cout << du3 / 50000 << " to tien 50000vnd\n";
						du4 = du3 % 50000;
						if (du4 >= 20000)
							cout << du4 / 20000 << " to tien 20000vnd\n";
						du5 = du4 % 20000;
						if (du5 >= 10000)
							cout << du5 / 10000 << " to tien 10000vnd\n";
						long so_tien_sau_khi_rut = So_tien_ban_dau - Rut_tien;
						cout << "So tien con lai la: " << so_tien_sau_khi_rut << "vnd" << endl;
					}
				}
				break;
			}
			else if (Lua_chon == 3) {
				cout << "\t\t\tKIEM TRA SO TIEN CON LAI\n " << endl;
				cout << "So tien con lai la: " << So_tien_ban_dau<<"vnd";
				break;
			}
			else if (Lua_chon == 4) {
				cout << "\t\t\tTHOAT!\n\n";
				cout << "Hen gap lai quy khach!\n";
				break;
			}
			else {
				cout << "Hien tai cua co chuc nang nay!";
				break;
			}
		}
	}
	else while (PassWord != 22281227) {
		so_lan_nhap_mk++;
		system("cls");
		cout << "Mat khau sai, vui long nhap lai!\n";
		cout << "Mat khua cua ban: ";
		cin >> PassWord;
		if (PassWord == 22281227) {
			system("cls");
			cout << "Dang nhap thanh cong! \n\n";
			cout << "\t\t\tLUA CHON CUA BAN \n\n";
			cout << setfill('*');
			cout << setw(50) << left << "1.Gui tien ";
			cout << setfill('*');
			cout << " 2.Rut tien" << endl << endl;
			cout << setw(50) << left << "3.Kiem tra so tien con lai ";
			cout << " 4.Thoat" << endl << endl;
			cout << "Lua Chon Cua ban la: ";
			cin >> Lua_chon;
			cout << endl;
			system("cls");
			while (1) {
				if (Lua_chon == 1) {
					long Gui_tien;
					cout << "\t\t\tGUI TIEN VAO TAI KHOAN\n" << endl;
					cout << "Nhap so tien ban muon gui: ";
					cin >> Gui_tien;
					long So_tien_sau_khi_gui = So_tien_ban_dau + Gui_tien;
					break;
				}
				else if (Lua_chon == 2) {
					long Rut_tien;
					cout << "Rut tien: " << endl;
					cout << "Nhap so tien ban muon rut: ";
					cin >> Rut_tien;
					if (Rut_tien % 10000 != 0) {
						cout << "Khong hop le!";
						break;
					}
					else {
						if (So_tien_ban_dau - Rut_tien <= 50000) {
							cout << "Khong hop le, thu lai voi so khac!";
							break;
						}
						else {
							cout << "Vui long nhan:\n";
							long du1, du2, du3, du4, du5;
							if (Rut_tien >= 500000)
								cout << Rut_tien / 500000 << " to tien 500000vnd\n";
							du1 = Rut_tien % 500000;
							if (du1 >= 200000)
								cout << du1 / 200000 << " to tien 200000vnd\n";
							du2 = du1 % 200000;
							if (du2 >= 100000)
								cout << du2 / 100000 << " to tien 100000vnd\n";
							du3 = du2 % 100000;
							if (du3 >= 50000)
								cout << du3 / 50000 << " to tien 50000vnd\n";
							du4 = du3 % 50000;
							if (du4 >= 20000)
								cout << du4 / 20000 << " to tien 20000vnd\n";
							du5 = du4 % 20000;
							if (du5 >= 10000)
								cout << du5 / 10000 << " to tien 10000vnd\n";
							long so_tien_sau_khi_rut = So_tien_ban_dau - Rut_tien;
							cout << "So tien con lai la: " << so_tien_sau_khi_rut << "vnd" << endl;
						}
					}
					break;
				}
				else if (Lua_chon == 3) {
					cout << "Kiem tra so tien con lai: " << endl;
					cout << "So tien con lai la: " << So_tien_ban_dau<<"vnd";
					break;
				}
				else if (Lua_chon == 4) {
					cout << "Thoat!\n";
					cout << "Hen gap lai quy khach!\n";
					break;
				}
				else {
					cout << endl;
					cout << "Hien tai cua co chuc nang nay!";
					break;
				}
			}
		}
		if (so_lan_nhap_mk == 2) {
			cout << "Da sai mat khau qua 3 lan, thoat!\n\n";
			break;
		}
	}
	system("pause");
	return 0;
}
