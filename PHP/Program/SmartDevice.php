<?php
require_once 'Device.php';

class SmartDevice extends Device {
    private $os = '';
    private $storage = 0;
    private $ram = 0;

    public function __construct($id = 0, $name = '', $price = 0, $stock = 0, $photo = '', $brand = '', $warranty = 0, $power = 0, $os = '', $storage = 0, $ram = 0) {
        parent::__construct($id, $name, $price, $stock, $photo, $brand, $warranty, $power);
        $this->os = $os;
        $this->storage = $storage;
        $this->ram = $ram;
    }

    public function setOS ($os) { $this->os = $os; }
    public function getOS () { return $this->os; }

    public function setStorage ($storage) { $this->storage = $storage; }
    public function getStorage () { return $this->storage; }

    public function setRAM ($ram) { $this->ram = $ram; }
    public function getRAM () { return $this->ram; }
}
?>