var comodos = 
    [
        { label: "sala"     , largura: 4.5, comprimento:5 }, 
        { label: "quarto1"  , largura: 3.5, comprimento:2 }, 
        { label: "quarto2"  , largura: 2.7, comprimento:2 }, 
        { label: "banheiro" , largura: 1.5, comprimento:2 }
    ]; 
// letra a
var qualMaior = (maior, atual) => {
    if ((atual.largura*atual.comprimento) > (maior.largura*maior.comprimento)) {
        return atual;
    } else {
        return maior;
    }
};

var maiorM2 = comodos.reduce(qualMaior);
var maiorComodo = Object.assign({label: maiorM2.label, m2: maiorM2.largura*maiorM2.comprimento});
console.log(maiorComodo);

//letra b
var total = comodos.map((t) => t.largura*t.comprimento).reduce((a, b) => a + b);
console.log("m2 total do apartamento: ", total);

//letra c
var isQuarto1 = comodos.filter((t) => t.label == 'quarto1').map((x) => x.largura*x.comprimento).reduce((a, b) => a + b);
var isQuarto2 = comodos.filter((t) => t.label == 'quarto2').map((x) => x.largura*x.comprimento).reduce((a, b) => a + b);
console.log("m2 total dos quartos: ", isQuarto1 + isQuarto2);