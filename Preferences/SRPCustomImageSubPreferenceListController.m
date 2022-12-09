#import "SRPCustomImageSubPreferenceListController.h"

@implementation SRPCustomImageSubPreferenceListController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.appearanceSettings = [SRPAppearanceSettings new];
    self.hb_appearanceSettings = [self appearanceSettings];
}

- (id)specifiers {
    return _specifiers;
}

- (void)loadFromSpecifier:(PSSpecifier *)specifier {
    NSString *sub = [specifier propertyForKey:@"SRPSub"];
    _specifiers = [self loadSpecifiersFromPlistName:sub target:self];
}

- (void)setSpecifier:(PSSpecifier *)specifier {
    [self loadFromSpecifier:specifier];
    [super setSpecifier:specifier];
}

- (BOOL)shouldReloadSpecifiersOnResume {
    return false;
}

- (void)viewWillAppear:(BOOL)animated {
    [self reload];
    [super viewWillAppear:animated];
}
@end