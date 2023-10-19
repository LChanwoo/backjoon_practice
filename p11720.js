// const fs = require('fs') 
// const inputData = fs.readFileSync('dev/stdin').toString().split('\n')
// console.log(inputData[1].split('').reduce((acc,cur)=>acc+ +cur,0));
console.log(require('fs').readFileSync('dev/stdin').toString().split('\n')[1].split('').reduce((acc,cur)=>acc+ +cur,0));