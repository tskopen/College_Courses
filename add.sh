#!/usr/bin/env bash

result=$(( $1 + $2 ))
exit $result
@set /A result= "%1 + %2"
@exit /B %result%x

