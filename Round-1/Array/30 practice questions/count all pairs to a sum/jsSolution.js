const vet = [8, 7, 2, 5, 3, 1, 9];
const sum = 10;
let result = [];
const coll = [];

for(let i = 0; i < vet.length; i++) {
    for(let j = i + 1; j < vet.length; j++) {
        if(vet[i] + vet[j] === sum) {
            result.push(vet[i]);
            result.push(vet[j]);
        }
    }
    if(result.length) {
        coll.push(result)
        result = [];
    }
}

console.log(coll)