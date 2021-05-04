Pod::Spec.new do |spec|
    spec.name                     = 'api_media'
    spec.version                  = '0.1'
    spec.homepage                 = '.'
    spec.source                   = { :http=> ''}
    spec.authors                  = ''
    spec.license                  = ''
    spec.summary                  = 'MParticle Unified Media Api'
    spec.vendored_frameworks      = 'build/cocoapods/framework/mParticle-Media-Api.framework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.3'
    spec.dependency 'mParticle-Apple-Media-SDK'
                
    spec.pod_target_xcconfig = {
        'KOTLIN_PROJECT_PATH' => ':api-media',
        'PRODUCT_MODULE_NAME' => 'mParticle-Media-Api',
    }
                
    spec.script_phases = [
        {
            :name => 'Build api_media',
            :execution_position => :before_compile,
            :shell_path => '/bin/sh',
            :script => <<-SCRIPT
                if [ "YES" = "$COCOAPODS_SKIP_KOTLIN_BUILD" ]; then
                  echo "Skipping Gradle build task invocation due to COCOAPODS_SKIP_KOTLIN_BUILD environment variable set to \"YES\""
                  exit 0
                fi
                set -ev
                REPO_ROOT="$PODS_TARGET_SRCROOT"
                "$REPO_ROOT/../gradlew" -p "$REPO_ROOT" $KOTLIN_PROJECT_PATH:syncFramework \
                    -Pkotlin.native.cocoapods.platform=$PLATFORM_NAME \
                    -Pkotlin.native.cocoapods.archs="$ARCHS" \
                    -Pkotlin.native.cocoapods.configuration="$CONFIGURATION"
            SCRIPT
        }
    ]
                
end