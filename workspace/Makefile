.PHONY: clean a b c d
a:
	g++ -o out a.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt
b:
	g++ -o out b.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt
c:
	g++ -o out c.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt
d:
	g++ -o out d.cpp && ./out < in1.txt && echo "********************" && ./out < in2.txt && echo "********************" && ./out < in3.txt

clean:
	rm -f *~ *.out out
	cp template/a.cpp a.cpp
	cp template/a.cpp b.cpp
	cp template/a.cpp c.cpp
	cp template/a.cpp d.cpp
	cp template/in.txt in1.txt
	cp template/in.txt in2.txt
	cp template/in.txt in3.txt
