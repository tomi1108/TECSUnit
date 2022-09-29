BASEDIR=$PWD    # This line is to be changed if you put the contents into your rc file.

echo $PATH | grep "$BASEDIR/tecsgen" > /dev/null
if [ $? = 0 ]; then
	echo "PATH: unchanged !!"
else
	PATH=$BASEDIR/tecsgen:$PATH
fi
echo "test end"