# Установка окружения разработчика
Для того чтобы проект собирался на любом устройстве, будем создавать окружение в докер контейнере. За основу возьмем образ ubuntu:bionic.
Создадим конфигурацию образа в Dockerfile, для того чтобы сразу запустить готовый к работе контейнер.

Прежде всего обновим укажем какой образ взять за основу `FROM ubuntu:bionic`. 
Объявим глобальные переменные `VMIME_SENDMAIL_PATH` для того чтобы сделать видимым библиотеку `sendmail`, а так же определим `LD_LIBRARY_PATH` чтобы Decorator увидел динамическую библиотеку. 

Создадим новую директорию и укажем, что она является нашей рабочей.
```
ADD . /build_system_task2
WORKDIR /build_system_task2
```

Затем добавим необходимы зависимости в проект.
Прежде всего добавим cmake, make, необходимые компиляторы
```
RUN apt-get update && apt-get install -y build-essential cmake
```

Установим остальные библиотеки `libboost-dev`, `libboost-system-dev`, `libssl-dev`, `zlib1g-dev`, `git`, `curl`, `libcurl4-openssl-dev`, `libvmime-dev`, `sendmail`

Создадим образ по нашему Dockerfile:
```shell
docker build -t build_system:1.0 .
docker run -it --entrypoint /bin/sh build_system:1.0
```

После запуска контейнера можно склонировать проект через `git clone`.
Чтобы собрать проект:
```shell
mkdir build && cd build
cmake ..
make
```
