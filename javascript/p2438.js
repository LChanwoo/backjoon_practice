const fs = require('fs')
const inputData = +fs.readFileSync('dev/stdin').toString()

for(let i=1 ; i<=inputData;i++){
    let stars = ''
    for(let j=0;j<i;j++){
        stars +='*';
    }
    console.log(stars)
}
