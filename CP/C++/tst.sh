time g++ -ggdb3 --std=c++17 -pipe -Wall -Wextra -pedantic -O2 -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wshift-overflow=2 -Wduplicated-cond -Wcast-qual -Wcast-align -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -D_FORTIFY_SOURCE=2 -fsanitize=undefined,address,float-divide-by-zero,float-cast-overflow -fno-omit-frame-pointer -fno-optimize-sibling-calls -fstack-protector-all -fno-sanitize-recover=all -fstack-protector  -Wno-char-subscripts -Wformat-signedness -Wvla -Wredundant-decls -o $1 $1.cpp && echo "Successfully Compiled, Ashiq! " && time ./$1 < in