var names = ["Ben", "Jafar", "Matthews", "Priya", "Brian"];

//letra a
var inverse = names.map((name) => {return name.split('').reverse().join('')});
console.log("O inverso: ", inverse);

//letra b
var longest = names.reduce(
    function (n1, n2) {
        return n1.length >= n2.length ? n1 : n2;
    }
);
console.log("O maior nome: ", longest);