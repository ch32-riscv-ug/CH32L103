#!/bin/bash

cd `dirname $0`

git pull

# https://www.wch-ic.com/products/CH32L103.html
cd datasheet_en
# https://www.wch-ic.com/downloads/CH32L103DS0_PDF.html
wget --continue https://www.wch-ic.com/downloads/file/386.html -O CH32L103DS0.PDF
# https://www.wch-ic.com/downloads/CH32L103RM_PDF.html
wget --continue https://www.wch-ic.com/downloads/file/387.html -O CH32L103RM.PDF
cd ..

# https://www.wch.cn/products/CH32L103.html
cd datasheet_zh
# https://www.wch.cn/downloads/CH32L103DS0_PDF.html
wget --continue https://www.wch.cn/downloads/file/452.html -O CH32L103DS0.PDF
# https://www.wch.cn/downloads/CH32L103RM_PDF.html
wget --continue https://www.wch.cn/downloads/file/453.html -O CH32L103RM.PDF
cd ..

# https://www.wch.cn/downloads/CH32L103EVT_ZIP.html
wget --continue https://www.wch.cn/downloads/file/455.html -O CH32L103EVT.ZIP
rm -rfv EVT
unzip *.ZIP

git add . --all
git commit -m "update"
git push origin main
