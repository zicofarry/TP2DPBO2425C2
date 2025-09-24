import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

public class Main{
    // ANSI color codes
    public static final String RESET = "\u001B[0m";
    public static final String BRIGHT_RED = "\u001B[91m";
    public static final String BRIGHT_BLUE = "\u001B[94m";
    public static final String BRIGHT_YELLOW = "\u001B[93m";
    public static final String GREEN = "\u001B[32m";
    public static final String PINK = "\u001B[95m";
    public static final String CYAN = "\u001B[36m";
    public static final String RED = "\u001B[31m";
    public static final String BLUE = "\u001B[34m";
    // Declare global variable for set the length of the column
    static int _cols[] = {2, 4, 5, 5, 5, 8, 5, 2, 7, 3};

    // Procedure to show the intro
    public static void intro(){
        System.out.println("\n=================================================");
        System.out.println("||         Welcome to Electronic Shop!         ||");
        System.out.println("=================================================\n");
    }

    // Utility delay
    private static void delay() {
        try {
            Thread.sleep(500); // 500 ms
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }

    // Procedure to show the outro
    public static void outro() {
        System.out.println((BRIGHT_RED + "+" + BRIGHT_BLUE + "~").repeat(29) + BRIGHT_RED + "+");
        delay();

        System.out.println(" " + (BRIGHT_YELLOW + "-" + GREEN + "-").repeat(28) + BRIGHT_YELLOW + "-");
        delay();

        System.out.println(PINK + "  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
        delay();
        System.out.println("   \\\\        " + BRIGHT_YELLOW + "SELAMAT TINGGAL DI ELECTRONIC SHOP" + PINK + "       //");
        delay();
        System.out.println("    \\\\         " + BRIGHT_YELLOW + "TUGAS PRAKTIKUM 2 (TP2) DESAIN" + PINK + "        //");
        delay();
        System.out.println("     \\\\           " + BRIGHT_YELLOW + "PEMROGRAMAN BERORIENTASI" + PINK + "          //");
        delay();
        System.out.println("      \\\\            " + BRIGHT_YELLOW + "OBJEK (DPBO), GACOR!!" + PINK + "          //");
        delay();
        System.out.println("       \\\\                 " + BRIGHT_YELLOW + "MANTAP!!" + PINK + "                // ");
        delay();
        System.out.println(PINK + "        vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv" + RESET);
        delay();

        System.out.println(CYAN + "         -----------------------------------------");
        delay();
        System.out.println(RED + "          ~+~+~+~~+~ " + BRIGHT_YELLOW + "SEMOGA KITA SEMUA" + RED + " +~+~+~+~+~");
        delay();
        System.out.println(GREEN + "           ~+~+~+~+~+~+ " + BRIGHT_YELLOW + "MASUK SURGA" + GREEN + " +~+~+~+~+~+~");
        delay();
        System.out.println(BLUE + "            ~+~+~+~+~+~+~+ " + BRIGHT_YELLOW + "AAMIIN" + BLUE + " ~+~+~+~+~+~+~");
        delay();
        System.out.println(CYAN + "              --------------------------------");
        delay();
        System.out.println(BRIGHT_YELLOW + "                vvvvvvvvvvvvvvvvvvvvvvvvvvvv");
        delay();
        System.out.println("                  \\\\\\\\\\\\\\\\\\\\\\\\////////////");
        delay();
        System.out.println("                             \\/");
        delay();
        System.out.println("                               "+RED);
        delay();
        System.out.println("                             ❤" + RESET);
    }

    // Procedure to print help
    public static void help() {
        System.out.println("============================================================================");
        System.out.println("|+------------------------------------------------------------------------+|");
        System.out.println("||                                                                        ||");
        System.out.println("||     <<<<<<<<<<<<<  BUKU PANDUAN MENGGUNAKAN KODE  >>>>>>>>>>>>>        ||");
        System.out.println("||                                                                        ||");
        System.out.println("||     Pilih Masukan Perintah Dengan Format Seperti Di Bawah.             ||");
        System.out.println("||     (TIDAK CASE SENSITIVE!!!!)                                         ||");
        System.out.println("||     1. Jika Anda Memilih INSERT. Maka Tulis Name, Price, Stock,        ||");
        System.out.println("||        Brand, Warranty, Power, OS, Storage, dan RAM (String Wajib      ||");
        System.out.println("||        Diapit Dengan Tanda Petik Dua, CTH: \"Handphone\")                ||");
        System.out.println("||        a. Format query untuk cpp, java, dan python:                    ||");
        System.out.println("||          INSERT \"[Name]\" [Price] [Stock] \"[Brand]\" [Warranty]          ||");
        System.out.println("||          [Power] \"[OS]\" [Storage] [RAM]                                ||");
        System.out.println("||        b. Format query untuk php:                                      ||");
        System.out.println("||          INSERT \"[Name]\" [Price] [Stock] \"[Photo]\" \"[Brand]\"           ||");
        System.out.println("||          [Warranty] [Power] \"[OS]\" [Storage] [RAM]                     ||");
        System.out.println("||                                                                        ||");
        System.out.println("||     2. Perintah Langsung:                                              ||");
        System.out.println("||        HELP                                                            ||");
        System.out.println("||        -Berfungsi Untuk Menampilkan Buku Panduan.                      ||");
        System.out.println("||        SHOW                                                            ||");
        System.out.println("||        -Berfungsi Untuk Menampilkan Data Saat Ini.                     ||");
        System.out.println("||        EXIT                                                            ||");
        System.out.println("||        -Berfungsi Untuk Mengakhiri Program.                            ||");
        System.out.println("||                                                                        ||");
        System.out.println("||                                                                        ||");
        System.out.println("|+------------------------------------------------------------------------+|");
        System.out.println("============================================================================\n");
    }

    // Procedure to print the header
    public static void head(int cols[]){
        System.out.print("+-"); for (int i = 0; i < cols[0]; i++) System.out.print("-");
        for (int i = 1; i < 10; i++) {
            System.out.print("-+-"); for (int j = 0; j < cols[i]; j++) System.out.print("-");
        } System.out.println("-+");
        System.out.print("| "); for (int i = 0; i < cols[0] - 2; i+=2) System.out.print(" ");
        System.out.print("ID"); for (int i = 0; i < cols[0] - 2; i+=2) System.out.print(" ");
        System.out.print(" | "); for (int i = 0; i < cols[1] - 4; i+=2) System.out.print(" ");
        System.out.print("NAME"); for (int i = 0; i < cols[1] - 4; i+=2) System.out.print(" ");
        System.out.print(" | "); for (int i = 0; i < cols[2] - 5; i+=2) System.out.print(" ");
        System.out.print("PRICE"); for (int i = 0; i < cols[2] - 5; i+=2) System.out.print(" ");
        System.out.print(" | "); for (int i = 0; i < cols[3] - 5; i+=2) System.out.print(" ");
        System.out.print("STOCK"); for (int i = 0; i < cols[3] - 5; i+=2) System.out.print(" ");
        System.out.print(" | "); for (int i = 0; i < cols[4] - 5; i+=2) System.out.print(" ");
        System.out.print("BRAND"); for (int i = 0; i < cols[4] - 5; i+=2) System.out.print(" ");
        System.out.print(" | "); for (int i = 0; i < cols[5] - 8; i+=2) System.out.print(" ");
        System.out.print("WARRANTY"); for (int i = 0; i < cols[5] - 8; i+=2) System.out.print(" ");
        System.out.print(" | "); for (int i = 0; i < cols[6] - 5; i+=2) System.out.print(" ");
        System.out.print("POWER"); for (int i = 0; i < cols[6] - 5; i+=2) System.out.print(" ");
        System.out.print("| "); for (int i = 0; i < cols[7] - 2; i+=2) System.out.print(" ");
        System.out.print("OS"); for (int i = 0; i < cols[7] - 2; i+=2) System.out.print(" ");
        System.out.print(" | "); for (int i = 0; i < cols[8] - 7; i+=2) System.out.print(" ");
        System.out.print("STORAGE"); for (int i = 0; i < cols[8]- 7; i+=2) System.out.print(" ");
        System.out.print("| "); for (int i = 0; i < cols[9] - 3; i+=2) System.out.print(" ");
        System.out.print("RAM"); for (int i = 0; i < cols[9] - 3; i+=2) System.out.print(" ");
        System.out.println(" |");
        System.out.print("+-"); for (int i = 0; i < cols[0]; i++) System.out.print("-");
        for (int i = 1; i < 10; i++) {
            System.out.print("-+-"); for (int j = 0; j < cols[i]; j++) System.out.print("-");
        } System.out.println("-+");
    }

    // Procedure to print rows
    public static void row(SmartDevice data){
        System.out.print("| "); for (int i = 0; i < _cols[0] - String.valueOf(data.getId()).length(); i++) System.out.print(" ");
        System.out.print(data.getId() + " | " + data.getName()); for (int i = 0; i < _cols[1] - data.getName().length(); i++) System.out.print(" ");
        System.out.print(" | "); for (int i = 0; i < _cols[2] - String.valueOf(data.getPrice()).length(); i++) System.out.print(" ");
        System.out.print(data.getPrice() + " | "); for (int i = 0; i < _cols[3] - String.valueOf(data.getStock()) .length(); i++) System.out.print(" ");
        System.out.print(data.getStock()); 
        System.out.print(" | " + data.getBrand()); for (int i = 0; i < _cols[4] - data.getBrand().length(); i++) System.out.print(" ");
        System.out.print(" | "); for (int i = 0; i < _cols[5] - String.valueOf(data.getWarranty()).length(); i++) System.out.print(" ");
        System.out.print(data.getWarranty() + " | "); for (int i = 0; i < _cols[6] - String.valueOf(data.getPower()).length(); i++) System.out.print(" ");
        System.out.print(data.getPower()); 
        System.out.print(" | " + data.getOS()); for (int i = 0; i < _cols[7] - data.getOS().length(); i++) System.out.print(" ");
        System.out.print(" | "); for (int i = 0; i < _cols[8] - String.valueOf(data.getStorage()).length(); i++) System.out.print(" ");
        System.out.print(data.getStorage() + " | "); for (int i = 0; i < _cols[9] - String.valueOf(data.getRAM()).length(); i++) System.out.print(" ");
        System.out.println(data.getRAM() + " |");
    }

    // Procedure to print footer
    public static void foot(int cols[]){
        System.out.print("+-"); for (int i = 0; i < cols[0]; i++) System.out.print("-");
        for (int i = 1; i < 10; i++) {
            System.out.print("-+-"); for (int j = 0; j < cols[i]; j++) System.out.print("-");
        } System.out.println("-+");
    }

    // Procedure to count the length of the column
    public static void cLeng(ArrayList<SmartDevice> v){
        // reset the length of the column
        _cols[0] = 2; _cols[1] = 4; _cols[2] = 5; _cols[3] = 5; _cols[4] = 5;
        _cols[5] = 8; _cols[6] = 5; _cols[7] = 2; _cols[8] = 7; _cols[9] = 3;
        // 2 4 5 5 5 8 5 2 7 3 
        for (SmartDevice i : v) {
            _cols[0] = Math.max(_cols[0], String.valueOf(i.getId()).length()); if (_cols[0] % 2 == 1) _cols[0]++;
            _cols[1] = Math.max(_cols[1], i.getName().length()); if (_cols[1] % 2 == 1) _cols[1]++;
            _cols[2] = Math.max(_cols[2], String.valueOf(i.getPrice()).length()); if (_cols[2] % 2 == 0) _cols[2]++;
            _cols[3] = Math.max(_cols[3], String.valueOf(i.getStock()).length()); if (_cols[3] % 2 == 0) _cols[3]++;
            _cols[4] = Math.max(_cols[4], i.getBrand().length()); if (_cols[4] % 2 == 0) _cols[4]++;
            _cols[5] = Math.max(_cols[5], String.valueOf(i.getWarranty()).length()); if (_cols[5] % 2 == 1) _cols[5]++;
            _cols[6] = Math.max(_cols[6], String.valueOf(i.getPower()).length()); if (_cols[6] % 2 == 1) _cols[6]++;
            _cols[7] = Math.max(_cols[7], i.getOS().length()); if (_cols[7] % 2 == 1) _cols[7]++;
            _cols[8] = Math.max(_cols[8], String.valueOf(i.getStorage()).length()); if (_cols[8] % 2 == 1) _cols[8]++;
            _cols[9] = Math.max(_cols[9], String.valueOf(i.getRAM()).length()); if (_cols[9] % 2 == 0) _cols[9]++;
        }
    }

    public static void main(String[] args){
        int idx = 6;
        ArrayList<SmartDevice> v = new ArrayList<>();
        v.add(new SmartDevice(1, "Galaxy S24", 15000000, 21, "Samsung", 24, 25, "Android 14", 256, 12));
        v.add(new SmartDevice(2, "iPhone 15 Pro", 20000000, 22, "Apple", 12, 20, "iOS 17", 512, 8));
        v.add(new SmartDevice(3, "ThinkPad X1", 25000000, 23, "Lenovo", 36, 65, "Windows 11", 1024, 32));
        v.add(new SmartDevice(4, "iPad Air 5", 12000000, 24, "Apple", 18, 30, "iPadOS 17", 256, 8));
        v.add(new SmartDevice(5, "LG OLED CX", 18000000, 25, "LG", 24, 150, "webOS", 512, 16));
        Scanner sc = new Scanner(System.in);
        help();
        intro();
        boolean stop = false;
        do{
            System.out.print("Electro Shop >> ");
            String input = sc.nextLine().trim();
            String[] userInput = input.split(" ", 2);
            String inputCmd = userInput[0].toUpperCase();
            String str = userInput.length > 1 ? userInput[1] : "";

            // Condition if its not "EXIT"
            if(!inputCmd.equals("EXIT")){
                Electronic now;
                
                if(inputCmd.equals("INSERT")){
                    String[] parts = str.split("\"");

                    // field string
                    String name  = parts[1].trim();
                    String brand = parts[3].trim();
                    String os    = parts[5].trim();

                    // ambil angka dari bagian luar kutip
                    List<Integer> numbers = new ArrayList<>();
                    for (int i = 0; i < parts.length; i += 2) { // hanya bagian luar kutip
                        String[] tokens = parts[i].trim().split("\\s+");
                        for (String tok : tokens) {
                            if (tok.matches("\\d+")) {
                                numbers.add(Integer.parseInt(tok));
                            }
                        }
                    }

                    // mapping angka
                    int price    = numbers.get(0);
                    int stock    = numbers.get(1);
                    int warranty = numbers.get(2);
                    int power    = numbers.get(3);
                    int storage  = numbers.get(4);
                    int ram      = numbers.get(5);

                    // buat objek
                    SmartDevice data = new SmartDevice(idx, name, price, stock, brand, warranty, power, os, storage, ram);
                    v.add(data);
                    idx++;
                    System.out.print("SUCCESS: A new data has been added, lalala yeyeyeye~\n\n");
                }else if(inputCmd.equals("SHOW")){
                    cLeng(v);
                    if(v.isEmpty()) System.out.print("Data is empty!\n\n");
                    else{
                        head(_cols);
                        for(SmartDevice i : v) row(i);
                        foot(_cols);
                        System.out.println("Displaying " + v.size() + " record(s).\n");
                    }
                }else if(inputCmd.equals("HELP")){
                    help();
                }else System.out.print("ERROR: Command not found!\n\n");
            }else{
                stop = true;
                outro();
            }
        }while(!stop);

        sc.close();
    }
}