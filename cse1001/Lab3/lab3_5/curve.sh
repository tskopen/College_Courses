fraction=$1
count=0
sum=0

for old_grade in $(cat grades.txt) ; do \
    echo $(( 100 - (100 - old_grade)*10/fraction )) ; \
done \
 | \
  ( \
for grade in $(cat -) ; do \
  sum=$(( sum + grade)); \
  count=$(( count + 1 )); \
done ; \
echo $((sum / count )) \
)
