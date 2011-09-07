

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>
#ifdef PHONEGAP_FRAMEWORK
#import <PhoneGap/PGPlugin.h>
#import <PhoneGap/JSON.h>

#else
#import "PGPlugin.h"
#endif

#import "IconDownloader.h"

@interface PGTableView : PGPlugin <UITableViewDelegate, UITableViewDataSource, IconDownloaderDelegate> 
{
	UITableView* tblView;
	NSMutableArray *entries;   // imagePaths per index + icons
	NSMutableDictionary *imageDownloadsInProgress;  // the set of IconDownloader objects for each app
    SBJSON * jsonParser;  
}

@property (nonatomic, retain) UITableView* tblView;
@property (nonatomic, retain) NSMutableDictionary *imageDownloadsInProgress;
@property (nonatomic, retain) NSMutableArray *entries;

- (void)showView:(NSArray*)arguments withDict:(NSDictionary*)options;
- (void)hideView:(NSArray*)arguments withDict:(NSDictionary*)options;

- (void)startIconDownload:(AppRecord *)appRecord forIndexPath:(NSIndexPath *)indexPath;

@end
