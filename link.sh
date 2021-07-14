#!/bin/bash

BASEDIR=$(dirname $0)

ln -sf ${PWD}/${BASEDIR}/apps ${PWD}/${BASEDIR}/common_source/
ln -sf ${PWD}/${BASEDIR}/framework/* ${PWD}/${BASEDIR}/common_source/framework
