const fs = require('fs') 
const inputData = +fs.readFileSync('dev/stdin').toString()

const solution = year => ( year%4===0 && year%100 !==0 ) || year % 400 ===0 ?  1:0
console.log(solution(inputData))
