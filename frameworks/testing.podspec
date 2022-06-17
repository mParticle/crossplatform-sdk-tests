Pod::Spec.new do |spec|
    spec.name                     = 'testing'
    spec.version                  = '1.2.1'
    spec.homepage                 = '.'
    spec.source                   = { :http=> ''}
    spec.authors                  = ''
    spec.license                  = ''
    spec.summary                  = 'Cross Platform Testing'
    spec.vendored_frameworks      = 'mParticle_Testing.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.3'
    spec.dependency 'mParticle-Apple-SDK/mParticle'
                
                
                
end