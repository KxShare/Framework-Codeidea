/*
 * 不知名开发者 - 该模块将系统化学习, 后续「坚持新增文章, 替换、补充文章内容」
 */

#import <Foundation/Foundation.h>

@interface NSTimer (LNTimer)

#pragma mark - 创建Timer
+ (id)scheduledTimerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^)())inBlock repeats:(BOOL)inRepeats;

+ (id)timerWithTimeInterval:(NSTimeInterval)inTimeInterval block:(void (^)())inBlock repeats:(BOOL)inRepeats;

#pragma mark - 暂停NSTimer
- (void)pauseTimer;

#pragma mark - 开始NSTimer
- (void)resumeTimer;

#pragma mark - 延迟开始NSTimer
- (void)resumeTimerAfterTimeInterval:(NSTimeInterval)interval;


@end

