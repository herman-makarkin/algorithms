const hanoi = (height, from, to) => {
  if (height === 1) {
    console.log("Move disk 1 from peg %d to peg %d", from, to);
    return;
  }
 
  const temporary = 6 - from - to;
  hanoi(height - 1, from, temporary);
  console.log("Move disk %d from peg %d to peg %d", height, from, to);
  hanoi(height - 1, temporary, to);
};


hanoi(20, 1, 3);