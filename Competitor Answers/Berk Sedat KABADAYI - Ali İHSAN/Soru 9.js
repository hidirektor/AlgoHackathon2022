let arr = ["129", "218", "110", "227", "120", "199", "400", "371", "237"];
let a = ""
let b = ""
let c = ""

for (let i=0; i < arr.length; i++) {
    let num = arr[i]

    if (parseInt(num/100) > a) a = parseInt(num/100)
    num = num - (parseInt(num/100)*100)

    if (parseInt(num/10) > b) b = parseInt(num/10)
    num = num - ((parseInt(num/100)*100)+(parseInt(num/10)*10))
    if (num > c) c = num
}

console.log(a*100+b*10+c);