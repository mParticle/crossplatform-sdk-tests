#!/usr/bin/env bash
: ${1?"Version missing - usage: $0 x.y.z"}

#update build.gradle
sed -i '.bak' "s/version=.*/version=$1/g" gradle.properties

#update README.md
sed -i '.bak' "s/\"com.mparticle:api:.*\"/\"com.mparticle:api:$1\"/g" README.md
sed -i '.bak' "s/\"com.mparticle:models:.*\"/\"com.mparticle:models:$1\"/g" README.md
sed -i '.bak' "s/\"com.mparticle:testing:.*\"/\"com.mparticle:testing:$1\"/g" README.md

#commit the version bump, tag, and push to private and public
git add gradle.properties
git add README.md