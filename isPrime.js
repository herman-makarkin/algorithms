const isPrime = (n) => {
  for (let i = 2; i < Math.log(n); i++)
    if (n % i == 0) 
      return false;
  return true;
}