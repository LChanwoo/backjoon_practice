const fs = require('fs') 
const inputData = fs.readFileSync('dev/stdin').toString().split('\n').map(e=>+e)
const [A,B] = inputData
const arr = String(B).split('').reverse()
let result = 0
arr.forEach((e,index)=>{
    const rest = parseInt(e)*A
    console.log(rest)
    result = result + rest * Math.pow(10,index)
})
console.log(result)