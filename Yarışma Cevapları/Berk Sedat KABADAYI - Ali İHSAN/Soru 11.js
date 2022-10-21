let arr = [50, 43, 987, 123, 67, 84, 176, 341, 674, 121, 243, 305, 192, 1203]
//Yer tutması için büyük bir sayı verdim
let a = 10000
let b = 10000

for (let i = 0; i< arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
        if (arr[i] < arr[j] && arr[i] < a) a = arr[i]
    }
}

arr.splice(arr.indexOf(a),1)

for (let i = 0; i< arr.length; i++) {
    for (let j = 0; j < arr.length; j++) {
        if (arr[i] < arr[j] && arr[i] < b) b = arr[i]
    }
}

arr.splice(arr.indexOf(b),1)

function mintoplam() {
    let temp = 10000
    for (let i = 0; i< arr.length; i++) {
        for (let j = 0; j < arr.length; j++) {
            if (arr[i] < arr[j] && arr[i] < temp) temp = arr[i]
        }
    }
    arr.splice(arr.indexOf(temp),1)
    return temp
}

console.log(a+b+mintoplam())
console.log(a+b+mintoplam())
console.log(a+b+mintoplam())