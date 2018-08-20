#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (image)

+ (UIImage *)rcBundleImageWithName:(NSString *)name;

@end

@interface NSBundle (boundle)

+ (NSBundle *)currentBundleWithtarget:(nullable id)target;

@end
NS_ASSUME_NONNULL_END
