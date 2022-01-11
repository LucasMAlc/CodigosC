let notas = [8.0, 7.0, 8.3, 9.0, 4.5, 6.0, 3.7, 5.0, 7.1, 9.5, 6.0]; 

var media = notas.reduce((n, prox) => n+prox);
var aprovado = notas.filter(n => n >= 6.0);
var msg = notas.map((n) => {if (n >= 6.0) return 'Aprovado'; else return 'Reprovado' });

media = media/11;

console.log(notas);
console.log("a média foi: ", media);
console.log("as notas aprovadas foram: ", aprovado);
console.log(msg);