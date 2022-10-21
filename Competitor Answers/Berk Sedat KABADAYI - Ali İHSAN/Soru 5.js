let matris1 = [[1],[5],
               [8],[9]];

let matris2 = [[10],[12],
               [7],[3]];

let output = [[],[],
              [],[]];


let a = matris1[0];
let b = matris1[1];
let c = matris1[2];
let d = matris1[3];

let e = matris2[0];
let f = matris2[1];
let g = matris2[2];
let h = matris2[3];

output[0] = (a + d)*(e + h) + d*(g - e) - h*(a + b) + (b - d)*(g + h)
output[1] = a*(f - h) +  h*(a + b)
output[2] = e*(c + d) + d*(g - e)
output[3] = a*(f - h) + (a + d)*(e + h) - e*(c + d) - (a - c)*(e + f)

console.log(output)
