; ModuleID = '        � �ɈU         ler/test/wrong/if_statement.pas'
source_filename = "/root/naive-pascal-compiler/test/wrong/if_statement.pas"

@x = global i32 undef
@0 = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@1 = private unnamed_addr constant [31 x i8] c"You inputed a positive number.\00", align 1
@2 = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1

define i32 @main() {
entry:
  %0 = load i32, i32* @x, align 4
  call void (i8*, ...) @scanf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @0, i32 0, i32 0), i32* @x)
  %1 = load i32, i32* @x, align 4
  %2 = icmp sgt i32 %1, 0
  br i1 %2, label %then, label %if_end

then:                                             ; preds = %entry
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @2, i32 0, i32 0), i8* getelementptr inbounds ([31 x i8], [31 x i8]* @1, i32 0, i32 0))
  br label %if_end

if_end:                                           ; preds = %then, %entry
  ret i32 0
}

declare void @scanf(i8* noalias, ...)

declare void @printf(i8* noalias, ...)
