var names = ["Lucas", "Matheus", "João", "Pedro", "Gabriel" ];

var inverse = names.map((name) => {return name.split('').reverse().join('')});

console.log(inverse);