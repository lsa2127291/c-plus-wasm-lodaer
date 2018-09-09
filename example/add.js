const wasm = require("./add.c");
wasm.init().then(function(mod) {
    const memory = mod.memoryManager
    const arr = memory.malloc(20, 'i32')
    for (let i = 0; i < 10; i++) {
        memory.set(arr[i], 20 + i, 'i32')
    }
    for (let i = 0; i < 10; i++) {
        console.log(mod.exports.get(arr[i]))
    }
});