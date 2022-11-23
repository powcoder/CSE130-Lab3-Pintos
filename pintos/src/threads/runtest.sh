https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#!/bin/bash

if [ "$#" -ne 1 ]
then
  echo "Usage: $0 test-to-run" >&2
  exit 1
fi

../utils/pintos -v -k -T 20 --qemu  -- -q  run $1
