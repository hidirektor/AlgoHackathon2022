let yil = "2023"

if (mod(yil,4) == 0) {
    return console.log(`${yil} Yılı Artık Yıldır.`);
} else {
    return console.log(`${yil} Yılı Artık Yıl Değildir!!`);

}

function mod(a,b) {
    tam = parseInt(a / b);
    f = tam * b;
    return a - f;
}