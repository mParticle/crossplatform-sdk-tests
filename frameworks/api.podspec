Pod::Spec.new do |spec|
    spec.name                     = 'api'
    spec.version                  = '1.3.0'
    spec.homepage                 = '.'
    spec.source                   = { :http=> ''}
    spec.authors                  = ''
    spec.license                  = ''
    spec.summary                  = 'MParticle Unified Api'
    spec.vendored_frameworks      = 'mParticle-Api.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target = '14.3'
    spec.dependency 'mParticle-Apple-SDK/mParticle'
                
                
                
end