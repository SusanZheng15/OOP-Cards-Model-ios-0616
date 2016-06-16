//  FISAppDelegate.m

#import "FISAppDelegate.h"
#import "FISCard.h"

@implementation FISAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    FISCard *card = [[FISCard alloc] init];
    NSLog(@"card: %@",card);
    
    FISCardDeck *cards = [[FISCardDeck alloc]init];
    NSLog(@"%@", cards.description);
    return YES;
}

@end
