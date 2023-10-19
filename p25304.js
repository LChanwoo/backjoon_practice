const fs = require('fs') 
const inputData = fs.readFileSync('dev/stdin').toString().split('\n')


let sum = 0
for(let i=2;i<=+inputData[1]+1;i++){
    const splited = inputData[i].split(' ').map(e=>+e)  
    sum += splited[0] * splited[1]
}
+inputData[0] === sum ? "Yes" :"No"


console.log(+inputData[0] === sum ? "Yes" :"No")
