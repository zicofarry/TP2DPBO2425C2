<?php
require_once 'Electronic.php';

class Device extends Electronic {
    private $brand = '';
    private $warranty = 0;
    private $power = 0;

    public function __construct($id = 0, $nama = '', $price = 0, $stock = 0, $photo = '', $brand = '', $warranty = 0, $power = 0) {
        parent::__construct($id, $nama, $price, $stock, $photo);
        $this->brand = $brand;
        $this->warranty = $warranty;
        $this->power = $power;
    }

    public function setBrand ($brand) { $this->brand = $brand; }
    public function getBrand () { return $this->brand; }

    public function setWarranty ($warranty) { $this->warranty = $warranty; }
    public function getWarranty () { return $this->warranty; }

    public function setPower ($power) { $this->power = $power; }
    public function getPower () { return $this->power; }
}
?>