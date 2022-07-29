Pod::Spec.new do |spec|
    spec.name                     = 'Tests'
    spec.version                  = '1.4.0'
    spec.homepage                 = '.'
    spec.source                   = { :http=> ''}
    spec.authors                  = ''
    spec.license                  = ''
    spec.summary                  = 'Cross Platform Testing'
    spec.vendored_frameworks      = 'mParticle_Multiplatform_Tests.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.3'
    spec.dependency 'mParticle-Apple-SDK/mParticle'
                
                
                
end