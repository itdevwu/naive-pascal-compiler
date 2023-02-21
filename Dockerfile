# Copyright (c) 2022 Zhenglong WU

FROM ubuntu:22.04

ENV XMAKE_ROOT=y

COPY ./googletest/ /root/googletest/

COPY ./pac.lua /root/.xmake/

RUN apt update \
    && apt install -y apt-utils software-properties-common \
    && apt-add-repository ppa:fish-shell/release-3 \
    && add-apt-repository ppa:xmake-io/xmake \
    && apt update \
    && apt install -y fish vim wget curl tldr unzip git gcc g++ xmake cmake build-essential openssl libcurl4-openssl-dev python3 python3-pip \
    && apt dist-upgrade -y \
    && cd ~ \
    # && git clone https://github.com/google/googletest.git \
    && cd googletest \
    && mkdir build \
    && cd build \
    && cmake -DCMAKE_CXX_FLAGS='-D_GLIBCXX_USE_CXX11_ABI=0' .. \
    && make \
    && make install \
    && pip install conan

WORKDIR /root