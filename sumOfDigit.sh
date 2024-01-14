echo "Enter the number:"
read num
sum=0
while [[ num -ne 0 ]]; do
	sum=$((sum + num % 10))
	num=$((num/10))
done
num=$sum
echo "Sum of digit is:$num"
