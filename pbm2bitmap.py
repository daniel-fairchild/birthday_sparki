
infile = open("bcake.pbm", "r")
pixlines = infile.readlines()[3:]

bwpix = []

for pl in pixlines:
	for c in pl:
		if c in ['0', '1']:
			bwpix.append(int(c))

#back in bytes
barray = []
i = 0
while i < len(bwpix):
	b = 0
	for j in range(8):
		b+= bwpix[i+j] << (7-j)
	barray.append(b)
	i+=8

ctrl = ["/*"]
ctrl.extend([str(c) for c in range(8)]*8)
ctrl.append("\n|")
ctrl.extend(['-'*64])
ctrl.append("|\n")
for y in range(64):
	ctrl.append("|")

	for x in range(8):
		c = barray[(y<<3)+x]
		for i in range(8):
			ctrl.append('#' if (c & (1<<(7-i)) ) > 0 else ' ')
	ctrl.append("| "+str(y)+"\n")
ctrl.append("|")
ctrl.extend(['-'*64])
ctrl.append("|*/")
		
print "".join(ctrl)


outstr = ["""#include <avr/pgmspace.h>
PROGMEM prog_uchar bcake[]  = {
"""]
i = 0
for  y in range(64):
	for x in range(8):
		outstr.extend(["0x",format(barray[(y<<3)+x], '02x'), ","])
	outstr.append("\n")
outstr.append("};\n")


print "".join(outstr)
