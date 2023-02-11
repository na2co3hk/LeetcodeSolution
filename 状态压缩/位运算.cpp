//求n的第k位数字: 
n >> k & 1
//返回n的最后一位1：
lowbit(n) = n & -n
//消去最低位的1：
a & (a-1)
//判断奇偶：
a & 1 //a & 1 == 1奇数，a & 1 != 1偶数
//交换两个数：
a = a^b;
b = b^a;
a = a^b;//两个数不能相等
//判断是否是2的幂方：
a & (a - 1) == 0;//消去最低位的1，所有的位数都是0
//把x最后一个1变成0
x = x & (x - 1)
//把x最后一个0变成1
x = x | (x + 1)
//取出整数n 在二进制下表示下的第k位	
(n>>k) &1
//取出整数n 在二进制下表示下的第0 ~k-1 位置(后k位) 	
n & ( ( 1 << k ) - 1 )
//把整数 n 在二进制下表示下的第k位取反  	
n xor (1 << k)
//对整数 n 在二进制表示下的第 k 位赋值1	
n | ( 1 << k)
//对整数n 在二进制表示下的第k 位赋值 0	
n & (~(1 << k))
