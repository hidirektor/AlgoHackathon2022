//Fonksiyonun girdisi sıralı olmalıdır, a köşesi b ve d ile kenarı olacak şekilde.
//       a
//       _
//     d| |b
//       -
//       c
function kareDik(a,b,c,d) {
    if (a == b && b == c && c == d && d == a) return console.log("Bu şekil Karedir!");
    if (a == c && d == b) return console.log("Bu şekil Dikdörtgendir!");
    return console.log("Bu şekil hiçbiri değildir!")
}

kareDik(3,3,3,3);
