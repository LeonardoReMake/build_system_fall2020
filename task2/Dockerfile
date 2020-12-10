FROM ubuntu:bionic
ENV VMIME_SENDMAIL_PATH=/usr/sbin/sendmail
ENV LD_LIBRARY_PATH=/build_system_task2/build/external/lib
ADD . /build_system_task2
WORKDIR /build_system_task2
RUN apt-get -y update && apt-get -y install build-essential cmake
RUN apt-get -y install libboost-dev libboost-system-dev
RUN apt-get install libssl-dev
RUN apt-get install zlib1g-dev
RUN apt-get install -y git curl libcurl4-openssl-dev
RUN apt-get -y install libvmime-dev sendmail

