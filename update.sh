#!/bin/bash

cd `dirname $0`

git pull

# https://www.wch-ic.com/products/CH32L103.html
cd datasheet_en
# https://www.wch-ic.com/downloads/CH32L103DS0_PDF.html
curl -z CH32L103DS0.PDF -o CH32L103DS0.PDF https://www.wch-ic.com/downloads/file/386.html
# https://www.wch-ic.com/downloads/CH32L103RM_PDF.html
curl -z CH32L103RM.PDF -o CH32L103RM.PDF https://www.wch-ic.com/downloads/file/387.html
cd ..

# https://www.wch.cn/products/CH32L103.html
cd datasheet_zh
# https://www.wch.cn/downloads/CH32L103DS0_PDF.html
curl -z CH32L103DS0.PDF -o CH32L103DS0.PDF https://www.wch.cn/download/file?id=452
# https://www.wch.cn/downloads/CH32L103RM_PDF.html
curl -z CH32L103RM.PDF -o CH32L103RM.PDF https://www.wch.cn/download/file?id=453
cd ..

# https://www.wch.cn/downloads/CH32L103EVT_ZIP.html
curl -z CH32L103EVT.ZIP -o CH32L103EVT.ZIP https://www.wch.cn/download/file?id=455
rm -rfv EVT
unzip -O GB2312 *.ZIP

git add . --all
git commit -m "update"
git push origin main
