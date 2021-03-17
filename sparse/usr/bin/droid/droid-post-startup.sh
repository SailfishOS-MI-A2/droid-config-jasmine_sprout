#!/usr/bin/env bash
rfkill unblock all
sleep 10
systemctl restart bluebinder.service
