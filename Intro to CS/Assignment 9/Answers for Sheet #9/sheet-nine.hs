{- |
Module: BoolExpr.hs
-}

module BoolExpr (Variable,BoolExpr(..), evaluate) where

import Data.List 

type Variable = Char
data BoolExpr
    = T
    | F
    | Var   Variable
    | Not   BoolExpr
    | And   BoolExpr BoolExpr
    | Or    BoolExpr BoolExpr
    deriving(Show)

-- evaluates an expression


evaluate :: BoolExpr -> [Variable] -> Bool
evaluate T _            = True
evaluate F _            = False
evaluate (Var v) vs     = v `elem` vs
evaluate (Not e) vs     = not (evaluate e vs)
evaluate (And e1 e2) vs = evaluate e1 vs && evaluate e2 vs
evaluate (Or e1 e2) vs  = evaluate e1 vs || evaluate e2 vs

-- This is the function implementation for 3a

variables :: BoolExpr -> [Variable]
variables T              = []
variables F              = []
variables (Var v)        = [v]
variables (And e1 e2)    = sort ((variables e1) `union` (variables e2))
variables (Or e1 e2)     = sort ((variables e1) `union` (variables e2))

-- This is the function implementation for 3b

subsets :: [Variable] -> [[Variable]]
subsets []              = [[]]
subsets (x:xs)          = [zs | ys <- subsets xs, zs <- [ys, (x:ys)]]



--truthtable :: BoolExpr -> [([Variable], Bool)]
--truthtable (Var v)      = map (evaluate v) (subsets v)
