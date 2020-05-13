#!/bin/bash
declare -a arr
arr=(1 -22 3 4 10)
i=arr

echo "Original Numbers in array:"
for (( i = 0; i <= 4; i++ ))
    do
      echo ${arr[$i]}
    done

for (( i = 0; i <= 4 ; i++ ))
do
   for (( j = $i; j <= 4; j++ ))
   do
      if [ ${arr[$i]} -gt ${arr[$j]}  ]; then
       t=${arr[$i]}
       arr[$i]=${arr[$j]}
       arr[$j]=$t
      fi
   done
done

echo -e "\nSorted Numbers in Ascending Order:"
for (( i=0; i <= 4; i++ )) 
do
  echo ${arr[$i]}
done
