FROM ubuntu:bionic
ADD . /build_system_task2
WORKDIR /build_system_task2
RUN apt-get update && apt-get install -y build-essential cmake
RUN apt-get install -y libboost-dev libboost-system-dev
RUN apt-get install libssl-dev
RUN apt-get install zlib1g-dev
RUN apt-get install -y libvmime-dev && apt install sendmail
RUN export VMIME_SENDMAIL_PATH=/usr/sbin/sendmail
RUN export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/data/build/external/lib