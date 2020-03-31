#!/bin/bash

set -e
set -x

for x in 1024 512 256 192 128 96 64 48 32 24 16; do
    # Generate from the PNG.  The SVG is fake (it just has an embedded png inside it).
    mkdir -p debian/icons/${x}x${x}
    convert -verbose -filter Catrom -resize ${x}x${x} icons/ricochet_refresh.png debian/icons/${x}x${x}/ricochet-refresh.png
done
