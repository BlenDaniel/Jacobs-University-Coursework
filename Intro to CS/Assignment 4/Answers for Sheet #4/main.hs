isPrime :: Integer -> Bool
isPrime n = null [ x | x <- [2..n `div` 2], n `mod` x == 0 ]

primes :: Integer -> Integer -> [Integer]
primes a b = filter isPrime [a+1 .. b-1] 

gappies :: Integer -> Integer -> Integer -> [(Integer,Integer)]
-- [(x, y)| x <- (primes a b), y <- (primes a b), y - x == g]
gappies g a b = filter (\(x,y) -> isPrime x && isPrime y) $ zip [a..b] [a+g..b]


twins = gappies 2
cousins = gappies 4
sexies = gappies 6