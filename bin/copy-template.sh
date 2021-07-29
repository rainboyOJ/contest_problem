i=$1
j=$2

for((; i<=j; i++))
do
    echo "cp -r template_problem $i"
    cp -r template_problem/ $i
done
