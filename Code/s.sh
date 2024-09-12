for((i = 1; ; ++i)); do
    echo $i
    ./gen.exe $i > int
    # ./a < int > out1
    # ./brute < int > out2
    # diff -w out1 out2 || break
    diff -w <(./solution.exe < int) <(./brute.exe < int) || break
done