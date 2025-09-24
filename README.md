# Janji
Saya Muhammad 'Azmi Salam dengan NIM 2406010 mengerjakan Tugas Praktikum 1 pada Mata Kuliah Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Struktur File
```
Main
├── CPP/
│   ├── Program/
│   │   ├── Electronic.cpp
│   │   ├── Device.cpp
│   │   ├── SmartDevice.cpp
│   │   └── main.cpp
│   │
│   └── Dokumentasi/
│       ├── cpp1.png
│       ├── cpp2.png
│       └── cpp3.png
│
├── Java/
│   ├── Program/
│   │   ├── Electronic.java
│   │   ├── Device.java
│   │   ├── SmartDevice.java
│   │   └── Main.java
│   │
│   └── Dokumentasi/
│       ├── java1.png
│       ├── java2.png
│       └── java3.png
│
├── Python/
│   ├── Program/
│   │   ├── Electronic.py
│   │   ├── Device.py
│   │   ├── SmartDevice.py
│   │   └── main.py
│   │
│   └── Dokumentasi
│       ├── py1.png
│       ├── py2.png
│       └── py3.png
│
├── PHP/
│   ├── Program/
│   │   ├── Electronic.php
│   │   ├── Device.php
│   │   ├── SmartDevice.php
│   │   ├── index.php
│   │   └── images/
│   │       └── *.jpg
│   │
│   └── Dokumentasi/
│       └── php.mp4
│
└── README.md
```

# Diagram
<img src="Diagram.png" style="width: 100%;">

# Desain
Program terdiri dari __3__ class, yaitu __Electronic__, __Device__, dan __SmartDevice__. Program menggunakan Multilevel Inheritance, dengan __Electronic__ sebagai class induk, dilanjutkan dengan __Device__, dan __SmartDevice__ sebagai class paling bawah. Urutan inheritance ini dibuat karena class Electronic memiliki atribut paling general di antara ketiganya dan class SmartDevice yang memiliki atribut paling spesifik pula. Berikut masing-masing atribut class:
- Electronic:
  - ID
  - Name
  - Stock
  - Price
  - Photo (khusus PHP)
- Device
  - Brand
  - Warranty
  - Power
- SmartDevice
  - OS
  - Storage
  - RAM

# Flow Code & Panduan Penggunaan
```
============================================================================
|+------------------------------------------------------------------------+|
||                                                                        ||
||     <<<<<<<<<<<<<  BUKU PANDUAN MENGGUNAKAN KODE  >>>>>>>>>>>>>        ||
||                                                                        ||
||     Pilih Masukan Perintah Dengan Format Seperti Di Bawah.             ||
||     (TIDAK CASE SENSITIVE!!!!)                                         ||
||     1. Jika Anda Memilih INSERT. Maka Tulis Name, Price, Stock,        ||
||        Brand, Warranty, Power, OS, Storage, dan RAM (String Wajib      ||
||        Diapit Dengan Tanda Petik Dua, CTH: "Handphone")                ||
||        a. Format query untuk cpp, java, dan python:                    ||
||          INSERT "[Name]" [Price] [Stock] "[Brand]" [Warranty]          ||
||          [Power] "[OS]" [Storage] [RAM]                                ||
||        b. Format query untuk php:                                      ||
||          INSERT "[Name]" [Price] [Stock] "[Photo]" "[Brand]"           ||
||          [Warranty] [Power] "[OS]" [Storage] [RAM]                     ||
||                                                                        ||
||     2. Perintah Langsung:                                              ||
||        HELP                                                            ||
||        -Berfungsi Untuk Menampilkan Buku Panduan.                      ||
||        SHOW                                                            ||
||        -Berfungsi Untuk Menampilkan Data Saat Ini.                     ||
||        EXIT                                                            ||
||        -Berfungsi Untuk Mengakhiri Program.                            ||
||                                                                        ||
||                                                                        ||
|+------------------------------------------------------------------------+|
============================================================================
```

# Dokumentasi

## C++
<div>
    <img src="CPP/Dokumentasi/cpp1.png" style="width: 49%;">
    <img src="CPP/Dokumentasi/cpp2.png" style="width: 49%;">
    <img src="CPP/Dokumentasi/cpp3.png" style="width: 49%;">
</div>

## JAVA
<div>
    <img src="Java/Dokumentasi/java1.png" style="width: 49%;">
    <img src="Java/Dokumentasi/java2.png" style="width: 49%;">
    <img src="Java/Dokumentasi/java3.png" style="width: 49%;">
</div>

## PYTHON
<div>
    <img src="Python/Dokumentasi/py1.png" style="width: 49%;">
    <img src="Python/Dokumentasi/py2.png" style="width: 49%;">
    <img src="Python/Dokumentasi/py3.png" style="width: 49%;">
</div>

## PHP
<div>
    <img src="PHP/Dokumentasi/php1.png" style="width: 49%;">
    <img src="PHP/Dokumentasi/php2.png" style="width: 49%;">
    <img src="PHP/Dokumentasi/php3.png" style="width: 49%;">
    <img src="PHP/Dokumentasi/php4.png" style="width: 49%;">
</div>