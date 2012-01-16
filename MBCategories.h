#import "NSArray+mxcl.h"
#import "NSObject+mxcl.h"
#import "NSNumber+mxcl.h"
#import "NSString+mxcl.h"
#import "NSURLConnection+mxcl.h"
#import "NSThread+mxcl.H"

#ifdef __IPHONE_OS_VERSION_MIN_REQUIRED
#import "MBActionSheet.h"
#import "UIAlertView+mxcl.h"
#import "UIAlertView+mxcl.h"
#import "UIApplication+mxcl.h"
#import "UIColor+mxcl.h"
#import "UIImage+mxcl.h"
#import "UITableView+mxcl.h"
#import "UITextView+mxcl.h"
#import "UIView+mxcl.h"
#import "UIWebView+mxcl.h"

static inline CGPoint MBRectGetCenter(CGRect rect) {
    return CGPointMake(rect.origin.x + rect.size.width / 2, rect.origin.y + rect.size.height / 2);
}

#endif
