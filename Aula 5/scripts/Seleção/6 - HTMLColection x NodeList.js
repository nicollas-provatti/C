// HTMLColection (não é um array)
let textos = document.getElementsByClassName("texto");
console.log(textos); //HTMLColection (não é um array)
//textos.forEach(texto => console.log(texto));
for (let texto of textos) {
    console.log(texto);
}

// NodeList (não é um array, mas aceita forEach())
let itens = document.querySelectorAll("li");
console.log(itens);
itens.forEach(item => console.log(item));
//itens.map(item => console.log(item));

// Array.from()
const textosArray = Array.from(textos);
textosArray.forEach(texto => console.log(texto));
textosArray.map(texto => console.log(texto));

const itensArray = Array.from(itens);
itensArray.map(item => console.log(item));