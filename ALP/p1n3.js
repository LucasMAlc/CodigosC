var filmes = 
    [
        {"id": 70111470,"title": "Die Hard","rating": [4.0]}, 
        {"id": 654356453,"title": "Bad Boys","rating": [5.0]}, 
        {"id": 65432445,"title": "The Chamber","rating": [3.0]}
    ]; 


var ratingFour = (filme) => filme.rating >= 4;
var maiorQ = filmes.filter(ratingFour);
console.log(maiorQ);

var idTiltle = (filme) => filme.id +' '+ filme.title;
var Nomes = filmes.filter(ratingFour).map(idTiltle);
console.log(Nomes);