#
# Be sure to run `pod lib lint VietIdSDK-iOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'VietIdSDK-iOS'
  s.version          = '1.0.5'
  s.summary          = 'Everything about this project under our ownership'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = "Everything about this project under our ownership in VietIdSDK-iOS"

  s.homepage         = 'https://github.com/songoku20/VietIdSDK-iOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'songoku20' => 'sonleminh@vccorp.vn' }
  # s.source           = { :git => 'https://github.com/songoku20/VietIdSDK-iOS.git', :tag => s.version.to_s }
  s.source           = { :http => "https://github.com/songoku20/VietIdSDK-iOS/releases/download/1.0.5/VietIdSDK-1.0.5.zip" }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  # s.ios.deployment_target = '8.0'

  s.source_files = 'VietIdSDK-iOS/Classes/**/*'
  s.frameworks          = ["SystemConfiguration", "QuartzCore", "WebKit"]
  s.library             = "z", "System", "xml2", "xml2.2", "c++"
  s.requires_arc        = true
  
  s.platform            = :ios, '8.0'
  s.preserve_paths      = 'VietIdSDK-iOS.framework'
  s.public_header_files = 'VietIdSDK-iOS.framework/Versions/A/Headers/VietIdSDKController.h'
  s.source_files        = 'VietIdSDK-iOS.framework/Versions/A/Headers/VietIdSDKController.h'
  s.resource            = 'VietIdSDK-iOS.bundle'
  s.vendored_frameworks = 'VietIdSDK-iOS.framework'

end
