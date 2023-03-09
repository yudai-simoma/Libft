
# Libft

#### 概要
  * C言語の関数を自作する課題

#### 使用言語
  * C

#### 作成ファイル
  * 全43関数

  * c言語と全く同じ関数：23
    * ```
      atoi, bzero, calloc, isalnum, isalpha, isascii, isdigit, isprint
      , memchr, memcmp, memcpy, memmove, memset, strchr, strdup, strlcat
      , strlcpy, strlen, strncmp, strnstr, strrchr, tolower, toupper
      ```

  * 作成しておくと便利な関数：11
    * ```
      itoa, putchar_fd, putendl, putnbr, putstr_fd, split, striteri, strjoin
      , strmapi, strtrim, substr, 
      ```

  * 連結リストを使用した関数：9
    * ```
       lstadd_back, lstadd_front, lstclear, lstdelone, lstiter, lstlast
       , lstmap, lstnew, lstsize
      ```

#### ライブラリの作成方法
  * ```
    ライブラリ作成
      make all
    オブジェクトファイル削除
      make clean
    オブジェクトファイルおよび、ライブラリ削除
      make fclean
    オブジェクトファイルおよび、ライブラリの再作成
      make re
    ```
