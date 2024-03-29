#import <UIKit/UIKit.h>
#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import "../PreferenceKeys.h"
#import <rootless.h>

@interface LiddellRootListController : PSListController
@end

@interface NSTask : NSObject
@property(copy)NSArray* arguments;
@property(copy)NSString* launchPath;
- (void)launch;
@end
