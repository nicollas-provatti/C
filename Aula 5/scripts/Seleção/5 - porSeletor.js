// querySelector(): retorna um único elemento
let titulo = document.querySelector("#titulo");
console.log(titulo);

let texto = document.querySelector(".texto");
console.log(texto);

// querySelectorAll(): retorna um NodeList
let textos = document.querySelectorAll(".texto"); 
console.log(textos);
console.log(textos[0]);

let itensPorTag = document.querySelectorAll("li");
console.log(itensPorTag);

let itensPorName = document.querySelectorAll("[name='item']");
console.log(itensPorName);