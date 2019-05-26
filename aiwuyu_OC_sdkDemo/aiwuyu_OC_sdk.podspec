
Pod::Spec.new do |spec|
  spec.name         = "aiwuyu_OC_sdk"
  spec.version      = "1.0.0"
  spec.summary      = "爱物语 JS交互 SDK aiwuyu_OC_sdk."
  spec.description  = <<-DESC

爱物语  JS交互  SDK 
DESC
  spec.homepage     = "http://gitlab.aiwuyu.cn:8080/APP/aiwuyu_ios_sdk"
  spec.ios.deployment_target = "8.0"
  spec.license      = "MIT"
  spec.author             = { "yhl" => "yuhongli@aiwuyu.com"  }
  spec.source       = { :git => "http://gitlab.aiwuyu.cn:8080/APP/aiwuyu_ios_sdk.git", :tag => "#{spec.version}" }
# spec.resources    = "aiwuyu_OC_sdk/**/*.{png,bundle}"
spec.resource_bundle = { 'awySDK' => 'Resources/**/*.{png}' }
  spec.source_files  = "aiwuyu_OC_sdk/**/*.{h,m}"

  spec.frameworks =
"Foundation","UIKit"

  spec.requires_arc = true
  spec.static_framework = true
end
