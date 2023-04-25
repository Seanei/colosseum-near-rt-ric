#!/bin/bash
docker kill sample-xapp-24
docker rm sample-xapp-24
docker rmi sample-xapp:latest
./setup-sample-xapp.sh ns-o-ran
code-server --bind-addr=10.0.2.24:8080 --auth=none --disable-telemetry
#docker exec -it sample-xapp-24 bash

