echo "Enter two floating point nums:"
read float1 float2
echo -e "Addition: $(echo "$float1+$float2" | bc)\nSubtraction: $(echo "$float1-$float2" | bc)\nDivision: $(echo "$float1/$float2" | bc -l)"
