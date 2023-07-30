FILES="*.c"
for f in $FILES
do
  echo "Processing $f file..."
  sed -i '1,11d' $f
  sed -i "1i/* $f by alban kerloc'h */" $f
  sed -i "1i/* updated: 11/10/2019 */" $f
  # take action on each file. $f store current file name
done