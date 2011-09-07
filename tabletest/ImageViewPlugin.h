

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>
#ifdef PHONEGAP_FRAMEWORK
#import <PhoneGap/PGPlugin.h>
#else
#import "PGPlugin.h"
#endif

@interface ImageViewPlugin : PGPlugin <UITableViewDelegate, UITableViewDataSource> 
{
	UIImageView* imgView;
    int nRows; 
}

@property (nonatomic, retain) UIImageView* imgView;

- (void)showView:(NSArray*)arguments withDict:(NSDictionary*)options;

@end
