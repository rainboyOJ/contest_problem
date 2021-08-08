for i in {4..10}
do 
    echo $i
    ./data_gen > ./data/data$i.in
    ./std < ./data/data$i.in > ./data/data$i.out
done
