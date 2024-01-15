echo "Enter the first file name:"
read file1
echo "Enter the second file name:"
read file2
if cmp -s "$file1" "$file2";
then
	echo "Both the files are same, deleting one of them"
	rm "$file1"
else
	echo "Both the files are diff"
fi
