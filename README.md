# stairQuestion
十级台阶，一次可以上一层或两层 列出所有的走法

同事离职在交接代码 有了思路一直没写

递归版，没走一步都有两种走法，循环两种走法，并把当前已走过得路程作为参数向下递归拼接，c++数字和字符串转换没有js那么方便，写了一个js版写着写着就忘了= =

1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 2
1 1 1 1 1 1 1 2 1
1 1 1 1 1 1 2 1 1
1 1 1 1 1 1 2 2
1 1 1 1 1 2 1 1 1
1 1 1 1 1 2 1 2
1 1 1 1 1 2 2 1
1 1 1 1 2 1 1 1 1
1 1 1 1 2 1 1 2
1 1 1 1 2 1 2 1
1 1 1 1 2 2 1 1
1 1 1 1 2 2 2
1 1 1 2 1 1 1 1 1
1 1 1 2 1 1 1 2
1 1 1 2 1 1 2 1
1 1 1 2 1 2 1 1
1 1 1 2 1 2 2
1 1 1 2 2 1 1 1
1 1 1 2 2 1 2
1 1 1 2 2 2 1
1 1 2 1 1 1 1 1 1
1 1 2 1 1 1 1 2
1 1 2 1 1 1 2 1
1 1 2 1 1 2 1 1
1 1 2 1 1 2 2
1 1 2 1 2 1 1 1
1 1 2 1 2 1 2
1 1 2 1 2 2 1
1 1 2 2 1 1 1 1
1 1 2 2 1 1 2
1 1 2 2 1 2 1
1 1 2 2 2 1 1
1 1 2 2 2 2
1 2 1 1 1 1 1 1 1
1 2 1 1 1 1 1 2
1 2 1 1 1 1 2 1
1 2 1 1 1 2 1 1
1 2 1 1 1 2 2
1 2 1 1 2 1 1 1
1 2 1 1 2 1 2
1 2 1 1 2 2 1
1 2 1 2 1 1 1 1
1 2 1 2 1 1 2
1 2 1 2 1 2 1
1 2 1 2 2 1 1
1 2 1 2 2 2
1 2 2 1 1 1 1 1
1 2 2 1 1 1 2
1 2 2 1 1 2 1
1 2 2 1 2 1 1
1 2 2 1 2 2
1 2 2 2 1 1 1
1 2 2 2 1 2
1 2 2 2 2 1
2 1 1 1 1 1 1 1 1
2 1 1 1 1 1 1 2
2 1 1 1 1 1 2 1
2 1 1 1 1 2 1 1
2 1 1 1 1 2 2
2 1 1 1 2 1 1 1
2 1 1 1 2 1 2
2 1 1 1 2 2 1
2 1 1 2 1 1 1 1
2 1 1 2 1 1 2
2 1 1 2 1 2 1
2 1 1 2 2 1 1
2 1 1 2 2 2
2 1 2 1 1 1 1 1
2 1 2 1 1 1 2
2 1 2 1 1 2 1
2 1 2 1 2 1 1
2 1 2 1 2 2
2 1 2 2 1 1 1
2 1 2 2 1 2
2 1 2 2 2 1
2 2 1 1 1 1 1 1
2 2 1 1 1 1 2
2 2 1 1 1 2 1
2 2 1 1 2 1 1
2 2 1 1 2 2
2 2 1 2 1 1 1
2 2 1 2 1 2
2 2 1 2 2 1
2 2 2 1 1 1 1
2 2 2 1 1 2
2 2 2 1 2 1
2 2 2 2 1 1
2 2 2 2 2
