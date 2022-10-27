# N の入力、指数が増えると計算量は10倍
N = 10^7

# 総和を表す変数
res = 0

# range(0, N) は 0 以上 N 未満の範囲を表す
# つまり変数 i は、i = 0, 1, ..., N - 1 を動く
for i in range(0, N):
    res += i
print(res)
