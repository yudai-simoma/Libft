# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/15 13:28:00 by yshimoma          #+#    #+#              #
#    Updated: 2023/01/15 14:22:08 by yshimoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# コンパイル対象としたいプログラム
SRCS    = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c\
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
		ft_strrchr.c ft_tolower.c ft_toupper.c
# 生成したいオブジェクトファイル名
# SRCSで定義されている.cファイルから.oファイルを生成する
OBJS    = ${SRCS:.c=.o}
# 生成したい静的ライブラリ名
NAME	= libft.a
# コンパイラの指定
CC      = cc
# コンパイルオプション
CFLAGS  = -Wall -Wextra -Werror

# clean fclean reを実行する(ビルドを実行)
all:        ${NAME}

# .cファイルを.oファイルに変換
.c.o:
	    ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# ${NAME}が依存関係にあると実行される
# oファイルを.aファイルにコンパイルされる
${NAME}:    ${OBJS}
	    ${CC} ${CFLAGS} -o ${NAME} ${OBJS}

# 全てのオブジェクトファイルを削除
clean:
		${RM} ${OBJS}

# 全てのオブジェクトファイルと静的ライブラリを削除
fclean:     clean
		${RM} ${NAME}

# fclean→allを実行(コンパイルのやり直し)
re:         fclean all

.PHONY:		all clean fclean re