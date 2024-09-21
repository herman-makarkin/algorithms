const quicksort = (array, direction="asc") => {
    if (array.length == 0 || array.length == 1)
        return array 
    if (array.length == 2) {
        if (direction == "desc")
            return [Math.max(...array), Math.min(...array)]
        return [Math.min(...array), Math.max(...array)]
    }
    
    const middle = array[Math.floor(Math.random() * array.length)]
    const left = []
    const right = []
    for (let i = 0; i < array.length; i++) {
        if (array[i] >= middle) 
            right.push(array[i])
        else 
            left.push(array[i])
    }
  
    if (direction === "desc")
        return quicksort(right, "desc").concat(quicksort(left, "desc"))
    else
        return quicksort(left).concat(quicksort(right))
}

console.log(quicksort([5, 2, 8, 1, 9, 3, 6, 4, 7])) // [9, 8, 7, 6, 5, 4, 3, 2, 1]