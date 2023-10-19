const fs = require('fs') 
const inputData = fs.readFileSync('dev/stdin').toString().split(' ').map(e=>+e)

const [a,b] = inputData
console.log(a/b)