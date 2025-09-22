<?php

// Class Electronic
class Electronic {
    // Atribut
    public $id = 0;
    public $name = '';
    public $price = 0;
    public $stock = 0;
    public $photo = '';

    // Constructor
    public function __construct($id = 0, $name = '', $price = 0, $stock = 0, $photo = '') {
        $this->id = $id;
        $this->name = $name;
        $this->price = $price;
        $this->stock = $stock;
        $this->photo = $photo;
    }

    // SETTER & GETTER
    public function setId($id) { $this->id = $id; }
    public function getId() { return $this->id; }

    public function setName($name) { $this->name = $name; }
    public function getName() { return $this->name; }
    
    public function setPrice($price) { $this->price = $price; }
    public function getPrice() { return $this->price; }

    public function getStock() { return $this->stock; }
    public function setStock($stock) { $this->stock = $stock; }

    public function setPhoto($photo) { $this->photo = $photo; }
    public function getPhoto() { return $this->photo; }
}

?>