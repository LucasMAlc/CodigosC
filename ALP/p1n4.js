var medidas = 
    [
        { label: "sala"     , largura: 4.5, comprimento:5 }, 
        { label: "quarto1"  , largura: 3.5, comprimento:2 }, 
        { label: "quarto2"  , largura: 2.7, comprimento:2 }, 
        { label: "banheiro" , largura: 1.5, comprimento:2 }
    ]; 

var maiorC = medidas.map(l => {return {label: l.label, m2: l.largura*l.comprimento}});

console.log(maiorC);