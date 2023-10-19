const fs = require('fs') 
const inputData = fs.readFileSync('dev/stdin').toString().split(' ').map(e=>+e)

const solution = dice => {
    const [ A,B,C] =dice.sort((a,b)=>a-b)
    if(A===B && B===C) return 10000 + A*1000
    else if(A===B && B!==C || A!==B && B==C){
        return 1000+ B*100
    }else{
        return C*100
    }
}
console.log(solution(inputData))
