

Pod::Spec.new do |spec|


  spec.name         = "aiwuyu_OC_sdk"
  spec.version      = "1.0.4"
  spec.summary      = "爱无语SDK OC aiwuyu_OC_sdk."
  spec.description  = <<-DESC
爱无语SDK OC
                   DESC

  spec.homepage     = "https://github.com/aiwuyu-sdk/aiwuyu_OC_sdk"

  spec.license      = "MIT"

  spec.author             = { "yhl" => "yuhongli@aiwuyu.com" }

  # spec.platform     = :ios
  spec.platform     = :ios, "8.0"

  spec.source       = { :git => "https://github.com/aiwuyu-sdk/aiwuyu_OC_sdk.git", :tag => "#{spec.version}" }

spec.source_files = 'aiwuyu_OC_sdkDemo/aiwuyu_OC_sdk/aiwuyu_OC_sdk.framework/**/aiwuyu_OC_sdk.h'
 spec.vendored_frameworks = 'aiwuyu_OC_sdkDemo/aiwuyu_OC_sdk/aiwuyu_OC_sdk.framework'
#spec.resource_bundle = { 'awySDK' => 'aiwuyu_OC_sdkDemo/Resources/**/*.{png}' }
#spec.public_header_files = "aiwuyu_OC_sdkDemo/aiwuyu_OC_sdk/**/*.h"
 spec.resources = "aiwuyu_OC_sdkDemo/aiwuyu_OC_sdk/awySDK.bundle"
  spec.frameworks = "Foundation","UIKit"
  spec.requires_arc = true

end
