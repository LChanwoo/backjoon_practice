const fs = require('fs') 
const inputData = fs.readFileSync('dev/stdin').toString().split(' ').map(e=>+e)
const [A,B,C] = inputData
console.log(Math.pow(A,B)%C)