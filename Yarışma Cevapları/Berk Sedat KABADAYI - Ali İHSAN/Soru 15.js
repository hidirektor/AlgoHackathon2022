let char1 = "Hello World"
let byteArray1 = []

let char2= "Halil İbrahim Direktör"
let byteArray2 = []

let char3= "Orhun Ege Yılmazoğlu"
let byteArray3 = []

let char4 = "Heil YTK"
let byteArray4 = []

function byteSort(char) {
    char = String(char)
    let arr = []
    for (let i=0; i < char.length; i++) {
        arr.push(char.charCodeAt(i))
    }

    let temp = 0;

    for (let i=0; i < arr.length; i++) {
        for (let j=0; j < arr.length - i - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp
            }
        }
    }

    console.log(arr)
}

byteSort(char1)
byteSort(char2)
byteSort(char3)
byteSort(char4)