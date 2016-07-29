@interface PSSpecifier {
@public
  id target;
  SEL getter;
  SEL setter;
}
-(void)setValues:(NSArray*)values titles:(NSArray*)titles;
-(void)setValues:(NSArray*)values titles:(NSArray*)titles shortTitles:(NSArray*)shortTitles;
-(id)propertyForKey:(NSString*)key;
@end
