

#import "ImageViewPlugin.h"
@implementation ImageViewPlugin

@synthesize imgView;

- (void)showView:(NSArray*)arguments withDict:(NSDictionary*)options
{
//	CGRect rect = CGRectZero;
//	rect.size.width = 320;
//	rect.size.height = 320;
//	rect.origin.y = 120;
	
    nRows = [options count];
	NSURL *imgURL = [ NSURL URLWithString:@"http://community.deqq.com/files/community/davidusher.avatar.1234219030.jpeg" ];
	NSData *imageData = [ NSData dataWithContentsOfURL:imgURL];
	
	imgView = [[UIImageView alloc] initWithImage:[UIImage imageWithData:imageData]];
	imgView.userInteractionEnabled = YES;
	[self.webView.superview addSubview:imgView];
}

- (void)hideView:(NSArray*)arguments withDict:(NSDictionary*)options{
    
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
     return [[[UITableViewCell alloc]init] autorelease];
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return nRows; 
};
	
@end