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
var quartos = (c1, c2) => {
    if (c1.label == 'quarto1' || 'quarto2' && c2.label == 'quarto1' || 'quarto2') {
        l = (c1.largura+c2.largura) 
        c =  (c2.comprimento+c1.comprimento);
    }
};

var quartosM2 = comodos.reduce(quartos);
var somaQ = Object.assign({label: 'quartos', m2: quartos.l*quartos.c});
console.log(somaQ);