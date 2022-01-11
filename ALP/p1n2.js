var names = ["Ben", "Jafar", "Matthews", "Priya", "Brian"];

var inverse = names.map((name) => {return name.split('').reverse().join('')});

var maior = names.reduce((at, prox) => Math.max(at, prox));

console.log(names);
console.log("O inverso: ", inverse);
console.log("O maior nome: ", maior);