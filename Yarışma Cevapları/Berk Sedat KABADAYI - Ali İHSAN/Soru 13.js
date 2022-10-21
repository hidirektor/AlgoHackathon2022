let sesli = "euüiuaöıEUÜİUAÖI"

let kelime = "Ali İhsannnnİ ve Berk Sedat Kabadayı"

for (let i=0; i< kelime.length; i++) {
    for (let j=0; j<sesli.length; j++) {
        console.log(kelime[i] == sesli[j])
        if (kelime[i] == sesli[j]) {
            kelime = kelime.replace(kelime[i],"")
        }
    }
}

console.log(kelime)