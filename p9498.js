const fs = require('fs') 
const inputData = +fs.readFileSync('dev/stdin').toString()

const solution = input =>{
    if(input>=90){
        return "A"
    }else if(input>=80){
        return "B"
    }else if(input>=70){
        return "C"
    }else if(input>=60){
        return "D"
    }else{
        return "F"
    }
}
console.log(solution(inputData))