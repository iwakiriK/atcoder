.PHONY: clean a b c d
a:
	g++ -o out a.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt
b:
	g++ -o out b.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt
c:
	g++ -o out c.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt
d:
	g++ -o out d.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt
e:
	g++ -o out e.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt
f:
	g++ -o out f.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt

ap:
	python a.py < in1.txt && echo "********************" && python a.py < in2.txt && echo "********************" && python a.py < in3.txt
bp:
	python b.py < in1.txt && echo "********************" && python b.py < in2.txt && echo "********************" && python b.py < in3.txt
cp:
	python c.py < in1.txt && echo "********************" && python c.py < in2.txt && echo "********************" && python c.py < in3.txt
dp:
	python d.py < in1.txt && echo "********************" && python d.py < in2.txt && echo "********************" && python d.py < in3.txt
ep:
	python e.py < in1.txt && echo "********************" && python e.py < in2.txt && echo "********************" && python e.py < in3.txt
fp:
	python f.py < in1.txt && echo "********************" && python f.py < in2.txt && echo "********************" && python f.py < in3.txt

clean:
	rm -f *~ *.out out
	cp template/a.cpp a.cpp
	cp template/a.cpp b.cpp
	cp template/a.cpp c.cpp
	cp template/a.cpp d.cpp
	cp template/a.cpp e.cpp
	cp template/a.cpp f.cpp
	cp template/a.py a.py
	cp template/a.py b.py
	cp template/a.py c.py
	cp template/a.py d.py
	cp template/a.py e.py
	cp template/a.py f.py
	cp template/in.txt in1.txt
	cp template/in.txt in2.txt
	cp template/in.txt in3.txt
