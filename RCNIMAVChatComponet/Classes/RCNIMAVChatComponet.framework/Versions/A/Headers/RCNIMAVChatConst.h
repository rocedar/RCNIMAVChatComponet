#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (image)

+ (UIImage *)rcNIMBundleImageWithName:(NSString *)name;

@end

@interface NSBundle (boundle)

+ (NSBundle *)currentNIMBundleWithtarget:(nullable id)target;

@end
NS_ASSUME_NONNULL_END
