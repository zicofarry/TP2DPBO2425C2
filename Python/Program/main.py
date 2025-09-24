from SmartDevice import SmartDevice
from tabulate import tabulate
import time

# ANSI brand
RESET = "\033[0m"
BRIGHT_RED = "\033[91m"
BRIGHT_BLUE = "\033[94m"
BRIGHT_YELLOW = "\033[93m"
GREEN = "\033[92m"
PINK = "\033[95m"
CYAN = "\033[96m"
RED = "\033[31m"
BLUE = "\033[34m"


# Procedure to print the intro
def intro():
    print("\n=================================================")
    print("||         Welcome to Electronic Shop!         ||")
    print("=================================================\n")

def delay():
    time.sleep(0.1)

def outro():
    print((BRIGHT_RED + "+" + BRIGHT_BLUE + "~") * 29 + BRIGHT_RED + "+")
    delay()

    print(" " + (BRIGHT_YELLOW + "-" + GREEN + "-") * 28 + BRIGHT_YELLOW + "-")
    delay()

    print(PINK + "  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^")
    delay()
    print("   \\\\        " + BRIGHT_YELLOW + "SELAMAT TINGGAL DI ELECTRONIC SHOP" + PINK + "       //")
    delay()
    print("    \\\\         " + BRIGHT_YELLOW + "TUGAS PRAKTIKUM 2 (TP2) DESAIN" + PINK + "        //")
    delay()
    print("     \\\\           " + BRIGHT_YELLOW + "PEMROGRAMAN BERORIENTASI" + PINK + "          //")
    delay()
    print("      \\\\            " + BRIGHT_YELLOW + "OBJEK (DPBO), GACOR!!" + PINK + "          //")
    delay()
    print("       \\\\                 " + BRIGHT_YELLOW + "MANTAP!!" + PINK + "                // ")
    delay()
    print(PINK + "        vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv" + RESET)
    delay()

    print(CYAN + "         -----------------------------------------")
    delay()
    print(RED + "          ~+~+~+~~+~ " + BRIGHT_YELLOW + "SEMOGA KITA SEMUA" + RED + " +~+~+~+~+~")
    delay()
    print(GREEN + "           ~+~+~+~+~+~+ " + BRIGHT_YELLOW + "MASUK SURGA" + GREEN + " +~+~+~+~+~+~")
    delay()
    print(BLUE + "            ~+~+~+~+~+~+~+ " + BRIGHT_YELLOW + "AAMIIN" + BLUE + " ~+~+~+~+~+~+~")
    delay()
    print(CYAN + "              --------------------------------")
    delay()
    print(BRIGHT_YELLOW + "                vvvvvvvvvvvvvvvvvvvvvvvvvvvv")
    delay()
    print("                  \\\\\\\\\\\\\\\\\\\\\\\\////////////")
    delay()
    print("                             \\/")
    delay()
    print("                               " + RED)
    delay()
    print("                             ❤" + RESET)

def help():
    print("============================================================================")
    print("|+------------------------------------------------------------------------+|")
    print("||                                                                        ||")
    print("||     <<<<<<<<<<<<<  BUKU PANDUAN MENGGUNAKAN KODE  >>>>>>>>>>>>>        ||")
    print("||                                                                        ||")
    print("||     Pilih Masukan Perintah Dengan Format Seperti Di Bawah.             ||")
    print("||     (TIDAK CASE SENSITIVE!!!!)                                         ||")
    print("||     1. Jika Anda Memilih INSERT. Maka Tulis Name, Price, Stock,        ||")
    print("||        Brand, Warranty, Power, OS, Storage, dan RAM (String Wajib      ||")
    print("||        Diapit Dengan Tanda Petik Dua, CTH: \"Handphone\")                ||")
    print("||        a. Format query untuk cpp, java, dan python:                    ||")
    print("||          INSERT \"[Name]\" [Price] [Stock] \"[Brand]\" [Warranty]          ||")
    print("||          [Power] \"[OS]\" [Storage] [RAM]                                ||")
    print("||        b. Format query untuk php:                                      ||")
    print("||          INSERT \"[Name]\" [Price] [Stock] \"[Photo]\" \"[Brand]\"           ||")
    print("||          [Warranty] [Power] \"[OS]\" [Storage] [RAM]                     ||")
    print("||                                                                        ||")
    print("||     2. Perintah Langsung:                                              ||")
    print("||        HELP                                                            ||")
    print("||        -Berfungsi Untuk Menampilkan Buku Panduan.                      ||")
    print("||        SHOW                                                            ||")
    print("||        -Berfungsi Untuk Menampilkan Data Saat Ini.                     ||")
    print("||        EXIT                                                            ||")
    print("||        -Berfungsi Untuk Mengakhiri Program.                            ||")
    print("||                                                                        ||")
    print("||                                                                        ||")
    print("|+------------------------------------------------------------------------+|")
    print("============================================================================\n")

# Main function of the program
def main():
    idx = 6
    v = [
        SmartDevice(1, "Galaxy S24", 15000000, 21, "Samsung", 24, 25, "Android 14", 256, 12),
        SmartDevice(2, "iPhone 15 Pro", 20000000, 22, "Apple", 12, 20, "iOS 17", 512, 8),
        SmartDevice(3, "ThinkPad X1", 25000000, 23, "Lenovo", 36, 65, "Windows 11", 1024, 32),
        SmartDevice(4, "iPad Air 5", 12000000, 24, "Apple", 18, 30, "iPadOS 17", 256, 8),
        SmartDevice(5, "LG OLED CX", 18000000, 25, "LG", 24, 150, "webOS", 512, 16)
    ]
    help()
    intro()

    stop = False
    while not stop:
        user = input("Electro Shop >> ").strip().split(maxsplit=1)
        in_cmd = user[0].upper()
        str = user[1] if len(user) > 1 else ""

        if in_cmd == "EXIT":
            stop = True
            outro()
        
        elif in_cmd == "INSERT":
            parts = str.split('"')
            name = parts[1].strip()
            brand = parts[3].strip()
            os = parts[5].strip()

            numbers = parts[0].split() + parts[2].split() + parts[4].split() + parts[6].split()
            numbers = [n for n in numbers if n.isdigit()]

            price   = int(numbers[0])
            stock   = int(numbers[1])
            warranty= int(numbers[2])
            power   = int(numbers[3])
            storage = int(numbers[4])
            ram     = int(numbers[5])

            data = SmartDevice(idx, name, price, stock, brand, warranty, power, os, storage, ram)
            v.append(data); idx += 1
            print("SUCCESS: A new data has been added, lalala yeyeyeye~\n")

        elif in_cmd == "SHOW":
            if not v:
                print("Data is empty!\n")
            else:
                data = []
                for row in v:
                    data.append([row.getId(), row.getName(), row.getPrice(), row.getStock(), row.getBrand(), row.getWarranty(), row.getPower(), row.getOS(), row.getStorage(), row.getRAM()])
                print(tabulate(data, headers=["ID", "NAME", "PRICE", "STOCK", "BRAND", "WARRANTY", "POWER", "OS", "STORAGE", "RAM"], tablefmt="grid"))
                print(f"Displaying {len(v)} record(s).\n")

        elif in_cmd == "HELP":
            help()

        else:
            print("ERROR: Command not found!\n")

if __name__ == "__main__":
    main()    