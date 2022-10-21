//!utils

const rand = (x, y) => Math.floor(Math.random() * (y + 1 - x) + x);

function swapArrayElements(arr, x, y) {
    let temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

//!quick sort!***************
function quickSort(nums, left, right) {
    if (left < right) {
        let pvt = givePivot(nums, left, right);
        quickSort(nums, left, pvt - 1);
        quickSort(nums, pvt + 1, right);
    }
}
function givePivot(nums, l, r) {
    j = l - 1;
    i = l;
    let temp;
    while (i < r) {
        if (nums[i] < nums[r]) {
            j++;
            swapArrayElements(nums, i, j);
        }
        i++;
    }
    swapArrayElements(nums, j + 1, r);
    return j + 1;
}

//!*************************************


function soru10(string) {
    //T:O(n) S:O(n)
    let map = {};
    let newString = "";
    for (let i = 0; i < string.length; i++) {
        if (map[string[i]] == undefined) newString += string[i]
        map[string[i]] = true;
    }
    console.log(newString)
    return newString;
}


function soru1(number, pow) {
    if (pow == 1) return number;
    return number * soru1(number, pow - 1);
}

function soru3(num) {
    const numString = `${num}`;
    let left = 0, right = numString.length - 1;
    while (left < right) {
        if (numString[left] != numString[right]) {
            console.log('bu bir palindrom  degil')
            return false;
        }
        left++;
        right--;
    }
    console.log('bu bir palindrom ')
    return true;
}





function soru8(...args) {
    const hashMap = {}
    for (let i = 0; i < 4; i++) {
        if (hashMap[args[i]] == undefined) hashMap[args[i]] = 1;
        else hashMap[args[i]] += 1;
    }
    const keys = Object.keys(hashMap);
    if (keys.length == 1) console.log('karedir')
    else if (keys.length == 2 && hashMap[args[0]] == 2) console.log('dikdortgendir')
    else console.log('kare ya da dikdortgen degildir');
}

function soru13(string) {
    //T:O(n) S: O(n);
    const set1 = new Set(['a', 'e', 'i', 'o', 'u'])
    let newString = "";
    for (let i = 0; i < string.length; i++)
        if (!set1.has(string[i])) newString += string[i];

    console.log(newString);
    return newString;
}




function soru11() {
    //T: O(3n) S: O(1)
    const arr = [50, 43, 987, 123, 67, 84, 176, 341, 674, 121, 243, 305, 192, 1203];
    for (let i = 0; i < 3; i++) {
        for (let j = i; j < arr.length; j++) {
            if (arr[j] < arr[i]) swapArrayElements(arr, i, j);
        }
    }
    console.log(arr[0] + arr[1] + arr[2]);
    return arr[0] + arr[1] + arr[2]
}


function soru2() {
    function mergeTwoArr(arr1, arr2) {
        let i = 0, j = 0;
        const mergedArr = [];
        while (i < arr1.length && j < arr2.length) {
            if (arr1[i] < arr2[j]) {
                mergedArr.push(arr1[i]);
                i++;
            }
            else {
                mergedArr.push(arr2[j]);
                j++;
            }
        }
        if (i == arr1.length) {
            for (let k = j; k < arr2.length; k++) {
                mergedArr.push(arr2[k]);
            }
            return mergedArr;
        }

        for (let k = i; k < arr2.length; k++) {
            mergedArr.push(arr2[k]);
        }
        return mergedArr;
    }

    const arr1 = [8, 10, 19, 6, 17, 14, 15, 2],
        arr2 = [17, 18, 11, 2, 10, 4, 15, 3],
        arr3 = [11, 2, 9, 19, 20, 10, 12, 14];

    //!sort them
    [arr1, arr2, arr3].forEach(arr => quickSort(arr, 0, arr.length - 1));

    //!then merge them
    const mergedArr = mergeTwoArr(mergeTwoArr(arr1, arr2), arr3);
    console.log(mergedArr);
    return mergedArr;

}




function soru9() {
    const digitsMap = {};
    const randomNumbers = [...new Array(9)].map(e => rand(100, 999));

    for (let i = 0; i < randomNumbers.length; i++) {
        for (let j = 1; j <= 3; j++) {
            let digit = randomNumbers[i] % 10;
            if (digitsMap[digit] == undefined) digitsMap[digit] = 1;
            else digitsMap[digit] += 1;
            randomNumbers[i] = Math.floor(randomNumbers[i] / 10);
        }
    }
    let basamak = 2;
    let ans = 0;
    for (let i = 9; i > 0; i--) {
        while (digitsMap[i]) {
            ans += Math.pow(10, basamak) * i
            digitsMap[i]--;
            basamak--;
            if (basamak == -1) { console.log(ans); return }
        }
    }


}


function soru7(yil) {
    //!JS'de integer(tam sayi) deger YOK o yuzden parseInt kullanmak durumunda kaldim.
    let artikSaat = yil * 6;
    if (parseInt(artikSaat / 24) * 24 == artikSaat) {
        console.log('artik yil')
    }
    else {
        console.log('artik yil degil')
    }
}




function soru12() {
    const nums = [];
    for (let i = 0; i < 5; i++) {
        let num = 0;

        //!burada kullanicidan 3 tane random basamak aliniyor
        for (let i = 5; i > 3; i--) {
            if (i == 0) num += rand(1, 9) * Math.pow(10, i);
            else num += rand(0, 9) * Math.pow(10, i);
        }


        for (let i = 2; i > 0; i--) {
            num += rand(0, 9) * Math.pow(10, i);
        }
        nums.push(num);

    }
    console.log(nums)
    return nums
}


function soru5(matris1, matris2) {

    let a = matris1[0][0],
        b = matris1[0][1],
        c = matris1[1][0],
        d = matris1[1][1],
        e = matris2[0][0],
        f = matris2[0][1],
        g = matris2[1][0],
        h = matris2[1][1];

    const p1 = a * (f - h),
        p2 = h * (a + b),
        p3 = e * (c + d),
        p4 = d * (g - e),
        p5 = ((a + d) * (e + h)),
        p6 = ((b - d) * (g + h)),
        p7 = ((a - c) * (e + f))

    const answer = [[(p5 + p4 - p2 + p6), (p1 + p2)], [(p3 + p4), (p1 + p5 - p3 - p7)]];
    console.log(answer)

    return answer;

}

function soru6() {

    function isPrime(num) {
        for (let i = 2; i < num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
    const superNumbers = [];
    for (let i = 2; i < 100; i++) {
        if (isPrime(i) && isPrime((Math.pow(2, i) - 1))) {
            superNumbers.push((Math.pow(2, i - 1)) * (Math.pow(2, i) - 1));
        }
    }
console.log(superNumbers)
}


const matris =
    [
        [3, 5, 7],
        [6, 8, 3],
        [1, 4, 9]
    ]



function soru4(matris) {
    //!create empty matris
    const calculatedMatris = [...new Array(matris.length)].map((e, i) => [...new Array(matris[i].length)])
    for (let i = 0; i < matris.length; i++) {
        for (let j = 0; j < matris[i].length; j++) {
            calculatedMatris[j][i] = matris[i][j];
        }
    }
    console.log(matris)
    console.log(calculatedMatris);
    return calculatedMatris;
}

function soru14() {

    //!kullanicidan 3 elemanli 3 arrray alinidi
    const arr1 = [...new Array(3)].map(val => rand(0, 100));
    const arr2 = [...new Array(3)].map(val => rand(0, 100));
    const arr3 = [...new Array(3)].map(val => rand(0, 100));

    let matris = [];
    matris.push(arr1, arr2, arr3);
    console.log(arr1, arr2, arr3)
    console.log(JSON.stringify(matris))
    matris = soru4(matris);
    console.log(matris)
}




function soru15(string) {
    const byteString = string.split('').map(c => c.charCodeAt(0));
    console.log(byteString);
    const orderedBytrString = quickSort(byteString, 0, byteString.length - 1);
    console.log(orderedBytrString)
}


