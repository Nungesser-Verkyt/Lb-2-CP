FROM alpine

COPY ./nee-LB2-COPY.s .
COPY ./nee-LB2-C.cpp .

RUN apk update
RUN apk add build-base musl-dev libc-dev gdb  

# RUN gcc -m32 -fno-pie -no-pie nee-LB2.s -o nee-LB2 –g
# RUN g++ nee-LB2-C.cpp -static -o nee-LB2-C

CMD ["/bin/sh"]

