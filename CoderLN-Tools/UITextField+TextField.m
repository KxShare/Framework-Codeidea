/*
 * 不知名开发者 - 该模块将系统化学习, 后续「坚持新增文章, 替换、补充文章内容」
 */

#import "UITextField+TextField.h"

@implementation UITextField (TextField)

#pragma mark -设置占位文字的颜色
- (void)setPlaceholderColor:(UIColor *)placeholderColor
{
    // runtime给系统的类,添加成员属性(关联属性),保存属性
    objc_setAssociatedObject(self, @"placeholderColor", placeholderColor, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
    // 使用KVC获取占位文字label控件
    UILabel *placeholderLabel = [self valueForKey:@"placeholderLabel"];

    // 设置占位文字颜色
    placeholderLabel.textColor = placeholderColor;
}

- (UIColor *)placeholderColor
{
    // 获取类成员属性
    return objc_getAssociatedObject(self, @"placeholderColor");
}


#pragma mark -设置占位文字（设置文字和文字颜色是没有先后顺序的）
- (void)setLN_Placeholder:(NSString *)placeholder {
    [self setLN_Placeholder:placeholder];
    
    self.placeholderColor = self.placeholderColor;
}


// runtime 交换方法(一次)
+ (void)load
{
    // class_getInstanceMethod 获取方法
    Method setPlaceholderMethod = class_getInstanceMethod(self, @selector(setPlaceholder:));
    Method setLN_PlaceholderMethod = class_getInstanceMethod(self, @selector(setLN_Placeholder:));
    
    // 交换方法
    method_exchangeImplementations(setPlaceholderMethod, setLN_PlaceholderMethod);
}


@end
