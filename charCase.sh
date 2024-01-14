echo "Enter a character:"
read mychar
prefix="You have entered "
case $mychar in
	[a-z])
		echo "$prefix Lower caste";;
	[A-Z])
		echo "$prefix bade log";;
	[0-9])
		echo "$prefix a digit";;
	?)
		echo "$prefix special character";;
	*)
		echo "$prefix more than one character"
esac
