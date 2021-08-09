for i in {1..10}
do
    #./data_gen > data/data$i.in
    ./std < data/data$i.in > data/data$i.out
done
