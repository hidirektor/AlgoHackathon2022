let char = "uasjuhar843222afee"

for (let i = 0; i< char.length; i++) {
    for (let j = 0; j< char.length; j++) {
        if (char[i] == char[j] && i != j) {
            char = char.replace(String(char[i]),"")
        }
    }
}

console.log(char)