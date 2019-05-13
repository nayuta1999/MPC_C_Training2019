# MPC_C_Training2019

## MPCのC言語講座のLaTeXソースファイルを載せています．
テキストの修正や問題の追加はプルリクエストをしてください．

## ソースのコンパイル
### Texliveがある場合

```
platex "任意のファイル.tex"
dvipdfmx "生成されたファイル.dvi"
```

### ない場合
私は[aruneko/texlive](https://github.com/aruneko/texlive)を使わせてもらいましたのでそれを使えば確実にできるかと思います．

```
docker container run -v $pwd:/texsrc -it --rm aruneko/texlive platex TextC2019_01.tex
docker container run -v $pwd:/texsrc -it --rm aruneko/texlive dvipdfmx TextC2019_01.dvi
```

このような形でできると思います．
