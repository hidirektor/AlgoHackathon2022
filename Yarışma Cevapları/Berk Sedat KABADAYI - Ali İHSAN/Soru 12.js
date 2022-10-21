let ilk3 = "123"

function rnd() {
    return Math.floor(Math.random()*1000)
    //Floor kullanmamın sebebi floor yapmadan tam sayı bir random number alamıyorum
}

//Eğer 100 den küçükse tekrar al
let a = rnd()
while (a < 100) {
    a = rnd()
}

console.log(ilk3 + String(a))