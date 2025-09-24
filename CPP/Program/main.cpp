#include "SmartDevice.cpp"
// DEKLARASI MAKRO (maap kalo campur indo soalnya bekas dasprog hehe)
#define RESET               "\033[0m"      // Reset warna ke default
#define BLACK               "\033[30m"     // Teks hitam
#define RED                 "\033[31m"     // Teks merah
#define GREEN               "\033[32m"     // Teks hijau
#define YELLOW              "\033[33m"     // Teks kuning
#define BLUE                "\033[34m"     // Teks biru
#define MAGENTA             "\033[35m"     // Teks magenta
#define PINK                "\033[1;35m"   // Teks pink
#define CYAN                "\033[36m"     // Teks cyan
#define WHITE               "\033[37m"     // Teks putih
#define BOLD                "\033[1m"      // Membuat teks tebal
#define BRIGHT_RED          "\033[91m"     // Merah Terang
#define BRIGHT_GREEN        "\033[92m"     // Hijau Terang
#define BRIGHT_YELLOW       "\033[93m"     // Kuning Terang
#define BRIGHT_BLUE         "\033[94m"     // Biru Terang
#define BRIGHT_CYAN         "\033[96m"     // Cyan Terang

// Declare global variable for set the length of the column
// int colId = 2, colName = 4, colCategory = 8, colPrice = 5;
int _cols[] = {2, 4, 5, 5, 5, 8, 5, 2, 7, 3};

// Procedure to show the intro
void intro(){
    cout << "\n=================================================\n";
    cout << "||         Welcome to Electronic Shop!         ||\n";
    cout << "=================================================\n\n";
}

// Procedure to delay
void delay() {
    this_thread::sleep_for(chrono::milliseconds(500));
}

// Procedure to show the outro
void outro() {
    cout << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~" 
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~" 
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+" << BRIGHT_BLUE "~"
         << BRIGHT_RED "+" << BRIGHT_BLUE "~" << BRIGHT_RED "+\n";
    delay();

    cout << " " << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-" << GREEN "-" << BRIGHT_YELLOW "-" << GREEN "-"
         << BRIGHT_YELLOW "-\n";
    delay();

    cout << PINK "  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"; delay();
    cout << "   \\\\        " << BRIGHT_YELLOW "SELAMAT TINGGAL DI ELECTRONIC SHOP" << PINK "       //\n"; delay();
    cout << "    \\\\         " << BRIGHT_YELLOW "TUGAS PRAKTIKUM 2 (TP2) DESAIN" << PINK "        //\n"; delay();
    cout << "     \\\\           " << BRIGHT_YELLOW "PEMROGRAMAN BERORIENTASI" << PINK "          //\n"; delay();
    cout << "      \\\\            " << BRIGHT_YELLOW "OBJEK (DPBO), GACOR!!" << PINK "          //\n"; delay();
    cout << "       \\\\                 " << BRIGHT_YELLOW "MANTAP!!" << PINK "                // \n"; delay();
    cout << PINK "        vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv\n" RESET; delay();

    cout << CYAN "         -----------------------------------------\n"; delay();
    cout << RED "          ~+~+~+~~+~ " << BRIGHT_YELLOW "SEMOGA KITA SEMUA" << RED " +~+~+~+~+~\n"; delay();
    cout << GREEN "           ~+~+~+~+~+~+ " << BRIGHT_YELLOW "MASUK SURGA" << GREEN " +~+~+~+~+~+~\n"; delay();
    cout << BLUE "            ~+~+~+~+~+~+~+ " << BRIGHT_YELLOW "AAMIIN" << BLUE " ~+~+~+~+~+~+~\n"; delay();
    cout << CYAN "              --------------------------------\n"; delay();
    cout << BRIGHT_YELLOW "                vvvvvvvvvvvvvvvvvvvvvvvvvvvv\n"; delay();
    cout << "                  \\\\\\\\\\\\\\\\\\\\\\\\////////////\n"; delay();
    cout << "                             \\/\n"; delay();
    cout << "                               \n" RED; delay();
    cout << "                             ❤\n" RESET;
}

// Procudure to print help
void help() {
    cout << "============================================================================\n";
    cout << "|+------------------------------------------------------------------------+|\n";
    cout << "||                                                                        ||\n";
    cout << "||     <<<<<<<<<<<<<  BUKU PANDUAN MENGGUNAKAN KODE  >>>>>>>>>>>>>        ||\n";
    cout << "||                                                                        ||\n";
    cout << "||     Pilih Masukan Perintah Dengan Format Seperti Di Bawah.             ||\n";
    cout << "||     (TIDAK CASE SENSITIVE!!!!)                                         ||\n";
    cout << "||     1. Jika Anda Memilih INSERT. Maka Tulis Name, Price, Stock,        ||\n";
    cout << "||        Brand, Warranty, Power, OS, Storage, dan RAM (String Wajib      ||\n";
    cout << "||        Diapit Dengan Tanda Petik Dua, CTH: \"Handphone\")                ||\n";
    cout << "||        a. Format query untuk cpp, java, dan python:                    ||\n";
    cout << "||          INSERT \"[Name]\" [Price] [Stock] \"[Brand]\" [Warranty]          ||\n";
    cout << "||          [Power] \"[OS]\" [Storage] [RAM]                                ||\n";
    cout << "||        b. Format query untuk php:                                      ||\n";
    cout << "||          INSERT \"[Name]\" [Price] [Stock] \"[Photo]\" \"[Brand]\"           ||\n";
    cout << "||          [Warranty] [Power] \"[OS]\" [Storage] [RAM]                     ||\n";
    cout << "||                                                                        ||\n";
    cout << "||     2. Perintah Langsung:                                              ||\n";
    cout << "||        HELP                                                            ||\n";
    cout << "||        -Berfungsi Untuk Menampilkan Buku Panduan.                      ||\n";
    cout << "||        SHOW                                                            ||\n";
    cout << "||        -Berfungsi Untuk Menampilkan Data Saat Ini.                     ||\n";
    cout << "||        EXIT                                                            ||\n";
    cout << "||        -Berfungsi Untuk Mengakhiri Program.                            ||\n";
    cout << "||                                                                        ||\n";
    cout << "||                                                                        ||\n";
    cout << "|+------------------------------------------------------------------------+|\n";
    cout << "============================================================================\n";
}

// Procedure to print the header
void head(int cols[]){
    cout << "+-"; for (int i = 0; i < cols[0]; i++) cout << "-";
    for (int i = 1; i < 10; i++) {
        cout << "-+-"; for (int j = 0; j < cols[i]; j++) cout << "-";
    } cout << "-+" << endl;
    cout << "| "; for (int i = 0; i < cols[0] - 2; i+=2) cout << " ";
    cout << "ID"; for (int i = 0; i < cols[0] - 2; i+=2) cout << " ";
    cout << " | "; for (int i = 0; i < cols[1] - 4; i+=2) cout << " ";
    cout << "NAME"; for (int i = 0; i < cols[1] - 4; i+=2) cout << " ";
    cout << " | "; for (int i = 0; i < cols[2] - 5; i+=2) cout << " ";
    cout << "PRICE"; for (int i = 0; i < cols[2] - 5; i+=2) cout << " ";
    cout << " | "; for (int i = 0; i < cols[3] - 5; i+=2) cout << " ";
    cout << "STOCK"; for (int i = 0; i < cols[3] - 5; i+=2) cout << " ";
    cout << " | "; for (int i = 0; i < cols[4] - 5; i+=2) cout << " ";
    cout << "BRAND"; for (int i = 0; i < cols[4] - 5; i+=2) cout << " ";
    cout << " | "; for (int i = 0; i < cols[5] - 8; i+=2) cout << " ";
    cout << "WARRANTY"; for (int i = 0; i < cols[5] - 8; i+=2) cout << " ";
    cout << " | "; for (int i = 0; i < cols[6] - 5; i+=2) cout << " ";
    cout << "POWER"; for (int i = 0; i < cols[6] - 5; i+=2) cout << " ";
    cout << "| "; for (int i = 0; i < cols[7] - 2; i+=2) cout << " ";
    cout << "OS"; for (int i = 0; i < cols[7] - 2; i+=2) cout << " ";
    cout << " | "; for (int i = 0; i < cols[8] - 7; i+=2) cout << " ";
    cout << "STORAGE"; for (int i = 0; i < cols[8]- 7; i+=2) cout << " ";
    cout << "| "; for (int i = 0; i < cols[9] - 3; i+=2) cout << " ";
    cout << "RAM"; for (int i = 0; i < cols[9] - 3; i+=2) cout << " ";
    cout << " |" << endl;
    cout << "+-"; for (int i = 0; i < cols[0]; i++) cout << "-";
    for (int i = 1; i < 10; i++) {
        cout << "-+-"; for (int j = 0; j < cols[i]; j++) cout << "-";
    } cout << "-+" << endl;
}

// Procedure to print rows
void row(SmartDevice data){
    cout << "| "; for (int i = 0; i < _cols[0] - to_string(data.getId()).length(); i++) cout << " ";
    cout << data.getId() << " | " << data.getName(); for (int i = 0; i < _cols[1] - data.getName().length(); i++) cout << " ";
    cout << " | "; for (int i = 0; i < _cols[2] - to_string(data.getPrice()).length(); i++) cout << " ";
    cout << data.getPrice() << " | "; for (int i = 0; i < _cols[3] - to_string(data.getStock()) .length(); i++) cout << " ";
    cout << data.getStock(); 
    cout << " | " << data.getBrand(); for (int i = 0; i < _cols[4] - data.getBrand().length(); i++) cout << " ";
    cout << " | "; for (int i = 0; i < _cols[5] - to_string(data.getWarranty()).length(); i++) cout << " ";
    cout << data.getWarranty() << " | "; for (int i = 0; i < _cols[6] - to_string(data.getPower()).length(); i++) cout << " ";
    cout << data.getPower(); 
    cout << " | " << data.getOS(); for (int i = 0; i < _cols[7] - data.getOS().length(); i++) cout << " ";
    cout << " | "; for (int i = 0; i < _cols[8] - to_string(data.getStorage()).length(); i++) cout << " ";
    cout << data.getStorage() << " | "; for (int i = 0; i < _cols[9] - to_string(data.getRAM()).length(); i++) cout << " ";
    cout << data.getRAM() << " |" << endl;
}

// Procedure to print footer
void foot(int cols[]){
    cout << "+-"; for (int i = 0; i < _cols[0]; i++) cout << "-";
    for (int i = 1; i < 10; i++) {
        cout << "-+-"; for (int j = 0; j < _cols[i]; j++) cout << "-";
    } cout << "-+" << endl;
}

// Procedure to count the length of the column
void cLeng(vector<SmartDevice> v){
    // 2 4 5 5 5 8 5 2 7 3 
    _cols[0] = 2, _cols[1] = 4, _cols[2] = 5, _cols[3] = 5, _cols[4] = 5,
    _cols[5] = 8, _cols[6] = 5, _cols[7] = 2, _cols[8] = 7, _cols[9] = 3;
    for (auto& i : v) {
        _cols[0] = max(_cols[0], static_cast<int>(to_string(i.getId()).length())); if (_cols[0] % 2 == 1) _cols[0]++;
        _cols[1] = max(_cols[1], static_cast<int>(i.getName().length())); if (_cols[1] % 2 == 1) _cols[1]++;
        _cols[2] = max(_cols[2], static_cast<int>(to_string(i.getPrice()).length())); if (_cols[2] % 2 == 0) _cols[2]++;
        _cols[3] = max(_cols[3], static_cast<int>(to_string(i.getStock()).length())); if (_cols[3] % 2 == 0) _cols[3]++;
        _cols[4] = max(_cols[4], static_cast<int>(i.getBrand().length())); if (_cols[4] % 2 == 0) _cols[4]++;
        _cols[5] = max(_cols[5], static_cast<int>(to_string(i.getWarranty()).length())); if (_cols[5] % 2 == 1) _cols[5]++;
        _cols[6] = max(_cols[6], static_cast<int>(to_string(i.getPower()).length())); if (_cols[6] % 2 == 1) _cols[6]++;
        _cols[7] = max(_cols[7], static_cast<int>(i.getOS().length())); if (_cols[7] % 2 == 1) _cols[7]++;
        _cols[8] = max(_cols[8], static_cast<int>(to_string(i.getStorage()).length())); if (_cols[8] % 2 == 1) _cols[8]++;
        _cols[9] = max(_cols[9], static_cast<int>(to_string(i.getRAM()).length())); if (_cols[9] % 2 == 0) _cols[9]++;
    }
}

int main(){
    // // cout << "=== Electronic ===\n";
    // Electronic e1(1, "Laptop", "Computer", 7500000);
    // e1.showInfo();
    // cout << "\n\n";

    // // cout << "=== Device ===\n";
    // Device d1(2, "Smartphone", "Gadget", 5000000, "Samsung", 24, 15);
    // d1.showInfo();
    // cout << "\n\n";

    // // cout << "=== SmartDevice ===\n";
    // SmartDevice s1(3, "Tablet", "Gadget", 6000000, "Apple", 12, 10, "iPadOS", 256, 8);
    // s1.showInfo();
    // cout << "\n\n";

    // // cout << "=== Polymorphism ===\n";
    // Electronic* e2 = new SmartDevice(4, "Smart TV", "Entertainment", 10000000, "LG", 24, 150, "webOS", 512, 16);
    // e2->showInfo(); 
    // cout << "\n";

    int idx = 6;
    vector<SmartDevice> v;
    
    v.push_back(SmartDevice(1, "Galaxy S24", 15000000, 21, "Samsung", 24, 25, "Android 14", 256, 12));
    v.push_back(SmartDevice(2, "iPhone 15 Pro", 20000000, 22, "Apple", 12, 20, "iOS 17", 512, 8));
    v.push_back(SmartDevice(3, "ThinkPad X1", 25000000, 23, "Lenovo", 36, 65, "Windows 11", 1024, 32));
    v.push_back(SmartDevice(4, "iPad Air 5", 12000000, 24, "Apple", 18, 30, "iPadOS 17", 256, 8));
    v.push_back(SmartDevice(5, "LG OLED CX", 18000000, 25, "LG", 24, 150, "webOS", 512, 16));
    string input;
    help(); intro();
    do{
        cout << "Electro Shop >> "; cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::toupper);

        // Condition if its not "EXIT"
        if(input != "EXIT"){
            Electronic now;
            int price;
            string name, category;

            if(input == "INSERT"){
            int price, stock, warranty, power, storage, ram;
            string name, brand, os;
            cin.ignore(); getline(cin, name, '"'); getline(cin, name, '"');
            cin >> price >> stock;
            cin.ignore(); getline(cin, brand, '"'); getline(cin, brand, '"');
            cin >> warranty >> power;
            cin.ignore(); getline(cin, os, '"'); getline(cin, os, '"');
            cin >> storage >> ram;
            SmartDevice data = SmartDevice (idx, name, price, stock, brand, warranty, power, os, storage, ram);
            v.push_back(data); idx++;
                cout << "SUCCESS: A new data has been added, lalala yeyeyeye~\n\n";
            }else if(input == "SHOW"){
                cLeng(v);
                if(v.size() == 0) cout << "Data is empty!\n\n";
                else{
                    head(_cols);
                    for(auto& i : v) row(i);
                    foot(_cols);
                    cout << "Displaying " << v.size() << " record(s).\n\n";
                }
            }else if(input == "HELP"){
                help();
            }else cout << "ERROR: Command not found!\n\n";
        }
    }while(input != "EXIT");
    outro();
    return 0;
}