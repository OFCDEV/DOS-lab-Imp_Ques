n=$1
m=$2
filename=$3
echo -e "First n line are:\n$(head -$n $filename)\n"
echo -e "Last m lines are:\n$(tail -$m $filename)"
