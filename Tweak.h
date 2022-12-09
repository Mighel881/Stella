#import <UIKit/UIKit.h>
#import <Cephei/HBPreferences.h>
#import "GcUniversal/GcColorPickerUtils.h"
#import "GcUniversal/GcImagePickerUtils.h"

#define snowflakePath @"/Library/PreferenceBundles/stellarprefs.bundle/snowflake.png"
HBPreferences *prefs;

BOOL enabled;
NSString *customColor = @"FFFFFF";
NSInteger defaultY = 30;
NSInteger lsspeed;
NSInteger lsBirthrate;
BOOL enableLSAnimation;
NSInteger hsspeed;
NSInteger hsBirthrate;
BOOL enableHSAnimation;
NSInteger customImageSize;
BOOL enableCustomImage;
BOOL enableSnowGroundLayer;

CAEmitterLayer *homeEmitterLayer;
CAEmitterLayer *lockscreenEmitterLayer;
CAEmitterLayer *notificationEmitterLayer;
CAEmitterLayer *nowplayingEmitterLayer;

@interface CSMainPageContentViewController : UIViewController
- (void)letItSnow;
@end

@interface NCNotificationShortLookViewController : UIViewController
@end

@interface CSAdjunctItemView : UIView
@property(nonatomic, retain) UIView* musicSnowView;
@end

@interface CSMainPageView : UIView
@property(nonatomic, retain)UIView* snowView;
@end

@interface SBIconController : UIViewController
@end

@interface UIImage (Resize)
- (UIImage *)convert;
@end

@interface CAEmitterLayer (Animation)
- (void)resume;
- (void)pause;
@end