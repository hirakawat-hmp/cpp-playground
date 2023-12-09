# monte-carlo

## Xoshiro について
C++ ではデフォルトの疑似乱数生成エンジンとして、[メルセンヌ・ツイスター](https://cpprefjp.github.io/reference/random/mt19937.html)とか色々使える。  
普通に使用する場合には全くこちらで問題ないが、  
研究等で実験を行う際には1秒でも処理を早くしたいのが本音。  
特にモンテカルロのように乱数を多用するような実験では速度で大きく差が出る。  

ということで、排他的論理和とビットシフトのみで疑似乱数生成を実現している`Xorshift`を使用したりする。  
（メルセンヌ・ツイスタほどの乱数の周期性を持つ訳では無いが、実用上は問題ない程度）  
[https://github.com/Reputeless/Xoshiro-cpp](https://github.com/Reputeless/Xoshiro-cpp) からsubmoduleしておく。  

```bash
git submodule add https://github.com/Reputeless/Xoshiro-cpp.git Xoshiro 
```

#### Reference
* xoshiro / xoroshiro generators and the PRNG shootout: https://prng.di.unimi.it/
* Xorshift から派生した擬似乱数生成器: https://qiita.com/Nabetani/items/f8357e736f989633a2c0
* 乱数アルゴリズムXorshiftの弱点と改善案: https://qiita.com/Shinoda_Naoki/items/5208b295d633df0aab47