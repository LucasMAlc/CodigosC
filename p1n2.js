var names = ["Ben", "Jafar", "Matthews", "Priya", "Brian"];

var inverse = names.map((name) => {return name.split('').reverse().join('')});

console.log(names);
console.log(inverse);