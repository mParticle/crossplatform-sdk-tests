Pod::Spec.new do |spec|
    spec.name                     = 'Tests'
    spec.version                  = '1.0'
    spec.homepage                 = '.'
    spec.source                   = { :http=> ''}
    spec.authors                  = ''
    spec.license                  = ''
    spec.summary                  = 'Cross Platform Testing'
    spec.vendored_frameworks      = 'build/cocoapods/framework/mParticle_Multiplatform_Tests.framework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.3'
    spec.dependency 'mParticle-Apple-Media-SDK'
    spec.dependency 'mParticle-Apple-SDK/mParticle'
                
    spec.pod_target_xcconfig = {
        'KOTLIN_PROJECT_PATH' => ':Tests',
        'PRODUCT_MODULE_NAME' => 'mParticle_Multiplatform_Tests',
    }
                
    spec.script_phases = [
        {
            :name => 'Build Tests',
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