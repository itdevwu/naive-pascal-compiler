@str = private constant [6 x i8] c"hello\00"

declare i32 @printf(i8*, ...)

define i32 @main() {
  %ptr = getelementptr [6 x i8], [6 x i8]* @str, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* %ptr)
  ret i32 0
}