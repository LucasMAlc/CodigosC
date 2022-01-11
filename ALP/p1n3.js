var filmes = 
    [
        {"id": 70111470,"title": "Die Hard","rating": [4.0]}, 
        {"id": 654356453,"title": "Bad Boys","rating": [5.0]}, 
        {"id": 65432445,"title": "The Chamber","rating": [3.0]}
    ]; 

//letra a
var ratingFour = (filme) => filme.rating >= 4;
var Tiltle = (filme) => filme.title;
var maiorQ = filmes.filter(ratingFour).map(Tiltle);
console.log(maiorQ);

//letra b
var idTiltle = (filme) => filme.id +'/'+ filme.title;
var Nomes = filmes.filter(ratingFour).map(idTiltle);
console.log(Nomes);