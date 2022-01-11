var names = ["Ben", "Jafar", "Matthews", "Priya", "Brian"];
console.log(names);

//letra a
var inverse = names.map((name) => {return name.split('').reverse().join('')});
console.log("O inverso: ", inverse);

//letra b
var nomeMaior = (acc, nomeTam) => {
    if (acc < nomeTam) {
        return nomeTam;
      }
    return acc;
    };

var maior = names.reduce(nomeMaior)
console.log("O maior nome: ", maior);