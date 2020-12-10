FROM ubuntu:bionic
ADD . /build_system_task2
WORKDIR /build_system_task2
RUN apt update && apt install build-essential && apt install cmake
RUN apt install libboost-dev && apt install libboost-system-dev
RUN apt install libssl-dev
RUN apt install zlib1g-dev
RUN apt install libvmime-dev && apt install libvmime-sendmail
RUN export VMIME_SENDMAIL_PATH=/usr/sbin/sendmail
RUN export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/data/build/external/lib