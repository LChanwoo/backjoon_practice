const fs = require('fs') 
const inputData = fs.readFileSync('dev/stdin').toString().split('\n')
const solution = (inputData)=>{
    const [ N, Line, v] = inputData
    const Lines = Line.split(' ')
    return Lines.filter(e=>e===v).length
}
console.log(solution(inputData))