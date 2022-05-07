#! /usr/bin/env gawk -f

BEGIN {	
   wins=0
   score=0
   avg=0
   FS=","
$3>200 && $3<2000 || $4>200 && $4<2000 {print $0
       	count++
	}
	{array[$2]+=$5}

END {print "Avg GVSU soccer score = "avg
     print "Count GVSU home wins = "wins
}
