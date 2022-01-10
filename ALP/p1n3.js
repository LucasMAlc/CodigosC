var filmes = 
    [
        {"id": 70111470,"title": "Die Hard","rating": [4.0]}, 
        {"id": 654356453,"title": "Bad Boys","rating": [5.0]}, 
        {"id": 65432445,"title": "The Chamber","rating": [3.0]}
    ]; 

let filmesRating4 = filmes.filter(x => x.rating >= 4.0);
console.log(filmesRating4)
