; ModuleID = '        ���U         ler/test/test_assgin.pas'
source_filename = "/root/naive-pascal-compiler/test/test_assgin.pas"

@test_int = constant i32 27
@test_real = constant float 0x400921CAC0000000
@varInt1 = global i32 undef
@varInt2 = global i32 undef
@varReal1 = global float undef
@varReal2 = global float undef
@a = global [25 x float] undef
@0 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@1 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@2 = private unnamed_addr constant [5 x i8] c"%lf\0A\00", align 1
@3 = private unnamed_addr constant [5 x i8] c"%lf\0A\00", align 1
@4 = private unnamed_addr constant [5 x i8] c"%lf\0A\00", align 1

define i32 @main() {
entry:
  %0 = load i32, i32* @test_int, align 4
  %1 = load i32, i32* @test_int, align 4
  %2 = mul i32 %0, %1
  store i32 %2, i32* @varInt1, align 4
  %3 = load i32, i32* @test_int, align 4
  %4 = mul i32 2, %3
  store i32 %4, i32* @varInt2, align 4
  %5 = load float, float* @test_real, align 4
  %6 = load float, float* @test_real, align 4
  %7 = fmul float %5, %6
  store float %7, float* @varReal1, align 4
  %8 = load float, float* @test_real, align 4
  %9 = load i32, i32* @varInt2, align 4
  %10 = sitofp i32 %9 to float
  %11 = fmul float %8, %10
  store float %11, float* @varReal2, align 4
  %12 = load float, float* @varReal1, align 4
  %13 = load float, float* @varReal2, align 4
  %14 = fmul float %12, %13
  store float %14, float* getelementptr inbounds ([25 x float], [25 x float]* @a, i32 0, i32 7), align 4
  %15 = load i32, i32* @varInt1, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @0, i32 0, i32 0), i32 %15)
  %16 = load i32, i32* @varInt2, align 4
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @1, i32 0, i32 0), i32 %16)
  %17 = load float, float* @varReal1, align 4
  %18 = fpext float %17 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @2, i32 0, i32 0), double %18)
  %19 = load float, float* @varReal2, align 4
  %20 = fpext float %19 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @3, i32 0, i32 0), double %20)
  %21 = load float, float* getelementptr inbounds ([25 x float], [25 x float]* @a, i32 0, i32 7), align 4
  %22 = fpext float %21 to double
  call void (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @4, i32 0, i32 0), double %22)
  ret i32 0
}

declare void @printf(i8* noalias, ...)
