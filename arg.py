import serial
import argparse
def main():
    parser = parser = argparse.ArgumentParser()
    parser.add_argument("a", help = "kuch bhi input dede", type = int)
    parser.add_argument("b", help = "kuch bhi input dede", type = int)
    parser.add_argument("c", help = "kuch bhi input dede", type = int)
    parser.add_argument("d", help = "kuch bhi input dede", type = int)
    parser.add_argument("e", help = "kuch bhi input dede", type = int)
    parser.add_argument("f", help = "kuch bhi input dede", type = int)
    args = parser.parse_args()
    ser = serial.Serial('com7',9600)
    ser.flush()
    while True:
    	if ser.in_waiting >0 :
	    	s = '{}_{}_{}_{}_{}_{}_'.format(args.a,args.b,args.c,args.d,args.e,args.f)
	    	bd = s.encode('utf-8')
	    	print(s)
	    	ser.write(bd)
	    	line1 = ser.readline().decode('utf-8').rstrip()
	    	if ('s' in line1) and ('w' in line1) :
	    		print("mil gaya")
	    		print(line1)
	    		break
    print("main loop mein gaya hi nahi")
    ser.close()    
if __name__ == '__main__':

    main()
    
    