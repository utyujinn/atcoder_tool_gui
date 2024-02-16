
## 宣言
```
vector v(n,a);
```
n:要素数、a:値
## ソート
```
sort(v.begin(),v.end());
```

## 値の場所を取得(lower_bound,upper_bound)
```
lower_bound(v.begin(),v.end(),key);
upper_bound(v.begin(),v.end(),key);
```
lower_bound:指定した値以上の値の中で一番小さいイテレータ(左に挿入)
upper_bound:指定した値以下の値の中で一番大きいイテレータ(右に挿入)
{2, 2, 5, 5, 9}の場合

| key | lower_bound | upper_bound |
| ---- | ---- | ---- |
| 2 | 0 | 2 |
| 4 | 2 | 2 |
| 5 | 2 | 4 |
| 7 | 4 | 4 |
| 10 | 5 | 5 |

## 参考
lower_bound,upper_bound: https://qiita.com/ganyariya/items/33f1326154b85db465c3