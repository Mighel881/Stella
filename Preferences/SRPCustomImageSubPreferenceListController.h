#import <Preferences/PSListController.h>
#import <Preferences/PSListItemsController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>


@interface SRPAppearanceSettings : HBAppearanceSettings
@end

@interface SRPCustomImageSubPreferenceListController : HBListController
@property(nonatomic, retain)SRPAppearanceSettings* appearanceSettings;
@end