; ModuleID = '        ���<|U      '
source_filename = "test/if-statement.pas"

@x = global i32 undef
@0 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@1 = private unnamed_addr constant [31 x i8] c"You inputed a positive number.\00", align 1
@2 = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1
@3 = private unnamed_addr constant [31 x i8] c"You inputed a negative number.\00", align 1
@4 = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1
@5 = private unnamed_addr constant [18 x i8] c"You inputed zero.\00", align 1
@6 = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1
@7 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1

define i32 @main() {
entry:
  %0 = load i32, i32* @x, align 4
  call void (i8*, ...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i32 0, i32 0), i32* @x)
  %1 = load i32, i32* @x, align 4
  %2 = icmp sgt i32 %1, 0
  br i1 %2, label %then, label %else

then:                                             ; preds = %entry
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @2, i32 0, i32 0), i8* getelementptr inbounds ([31 x i8], [31 x i8]* @1, i32 0, i32 0))
  br label %if_end

if_end:                                           ; preds = %if_end2, %then
  call void (i8*, ...) @scanf(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @7, i32 0, i32 0))
  ret i32 0

else:                                             ; preds = %entry
  %3 = load i32, i32* @x, align 4
  %4 = icmp slt i32 %3, 0
  br i1 %4, label %then1, label %else3

then1:                                            ; preds = %else
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @4, i32 0, i32 0), i8* getelementptr inbounds ([31 x i8], [31 x i8]* @3, i32 0, i32 0))
  br label %if_end2

if_end2:                                          ; preds = %else3, %then1
  br label %if_end

else3:                                            ; preds = %else
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @6, i32 0, i32 0), i8* getelementptr inbounds ([18 x i8], [18 x i8]* @5, i32 0, i32 0))
  br label %if_end2
}

declare void @scanf(i8* noalias, ...)

declare void @printf(i8* noalias, ...)
