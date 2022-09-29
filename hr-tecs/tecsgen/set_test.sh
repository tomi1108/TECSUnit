BASEDIR=$PWD    # This line is to be changed if you put the contents into your rc file.

echo $PATH | grep "$BASEDIR/tecsgen" > /dev/null
echo "test koko"
if [ $? = 0 ]; then
	echo "PATH: unchanged !!"
else
	PATH=$BASEDIR/tecsgen:$PATH
fi
echo "test end"
if [ "$TECSPATH" = ""  ]; then
	export TECSPATH=$BASEDIR/tecsgen/tecs    # actual path
#	export TECSPATH=$BASEDIR/tecs            # symbolic link
else
	echo "TECSPATH: unchanged !! ($TECSPATH)"
fi