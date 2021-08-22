#./gen_data 88 404 > game10.in
#./std < game10.in > 
for i in {1..10}
do
    echo $i
    ./std < data/game$i.in > data/game$i.out

done
