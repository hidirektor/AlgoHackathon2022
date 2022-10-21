let dizi1 = [8,10,19,6,17,14,15,2]
let dizi2 = [17,18,11,2,10,4,15,3]
let dizi3 = [11,2,9,19,20,10,12,14]

dizi2.forEach(a => {
    dizi1.push(a)
})

dizi3.forEach(a => {
    dizi1.push(a)
})

let temp = 0;

for (let i=0; i < dizi1.length; i++) {
    for (let j=0; j < dizi1.length - i - 1; j++) {
        if (dizi1[j + 1] < dizi1[j]) {
            temp = dizi1[j]
            dizi1[j] = dizi1[j + 1]
            dizi1[j + 1] = temp
        }
    }
}

for (let i = 0; i< dizi1.length; i++) {
    for (let j = 0; j < dizi1.length; j++) {
        if (dizi1[i] == dizi1[j] && i != j) dizi1.splice(j,1)
    }
}

console.log(dizi1)