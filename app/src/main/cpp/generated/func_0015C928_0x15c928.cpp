#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0015C928
// Address: 0x15c928 - 0x15cd20
void func_0015C928_0x15c928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015C928_0x15c928");
#endif

    switch (ctx->pc) {
        case 0x15c9c8u: goto label_15c9c8;
        case 0x15ca08u: goto label_15ca08;
        case 0x15ca68u: goto label_15ca68;
        case 0x15caa4u: goto label_15caa4;
        case 0x15cadcu: goto label_15cadc;
        case 0x15cb14u: goto label_15cb14;
        case 0x15ccd4u: goto label_15ccd4;
        default: break;
    }

    ctx->pc = 0x15c928u;

    // 0x15c928: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x15c928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x15c92c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15c930: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x15c930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x15c934: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x15c934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c938: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x15c938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x15c93c: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x15c93cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15c940: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x15c940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x15c944: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x15c944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15c948: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x15c948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x15c94c: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x15c94cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15c950: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x15c950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x15c954: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x15c954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15c958: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x15c958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x15c95c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x15c95cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c960: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x15c960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x15c964: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x15c964u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15c968: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x15c968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x15c96c: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x15c96cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15c970: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x15c970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x15c974: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x15c974u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15c978: 0xe7b901a8  swc1        $f25, 0x1A8($sp)
    ctx->pc = 0x15c978u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x15c97c: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x15c97cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15c980: 0xe7b801a0  swc1        $f24, 0x1A0($sp)
    ctx->pc = 0x15c980u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x15c984: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x15c984u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x15c988: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x15c988u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x15c98c: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x15c98cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x15c990: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x15c990u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x15c994: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x15c994u;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
    // 0x15c998: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x15c998u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x15c99c: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x15c99cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x15c9a0: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x15c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x15c9a4: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x15c9a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x15c9a8: 0xafa700dc  sw          $a3, 0xDC($sp)
    ctx->pc = 0x15c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 7));
    // 0x15c9ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c9b0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x15c9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x15c9b4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15c9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15c9b8: 0xe7b70198  swc1        $f23, 0x198($sp)
    ctx->pc = 0x15c9b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x15c9bc: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x15c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x15c9c0: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x15c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x15c9c4: 0x0  nop
    ctx->pc = 0x15c9c4u;
    // NOP
label_15c9c8:
    // 0x15c9c8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x15c9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15c9cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15c9d0: 0x0  nop
    ctx->pc = 0x15c9d0u;
    // NOP
    // 0x15c9d4: 0x0  nop
    ctx->pc = 0x15c9d4u;
    // NOP
    // 0x15c9d8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15C9D8u;
    {
        const bool branch_taken_0x15c9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x15C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9D8u;
        // 0x15c9dc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c9d8) {
            ctx->pc = 0x15C9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c9c8;
        }
    }
    ctx->pc = 0x15C9E0u;
    // 0x15c9e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15c9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15c9e4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x15c9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x15c9e8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x15c9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9ec: 0xe7b10048  swc1        $f17, 0x48($sp)
    ctx->pc = 0x15c9ecu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15c9f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9f4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x15c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x15c9f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c9f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c9fc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x15c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x15ca00: 0xc051dca  jal         func_147728
    ctx->pc = 0x15CA00u;
    SET_GPR_U32(ctx, 31, 0x15CA08u);
    ctx->pc = 0x15CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA00u;
    // 0x15ca04: 0xe4f7000c  swc1        $f23, 0xC($a3) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x15CA00u, 0x15CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA08u;
label_15ca08:
    // 0x15ca08: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x15ca08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x15ca0c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x15ca0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15ca10: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x15ca10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
    // 0x15ca14: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x15ca14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15ca18: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x15ca18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15ca1c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x15ca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x15ca20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x15ca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15ca24: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15ca24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15ca28: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15ca28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15ca2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15ca2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15ca30: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x15ca30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15ca34: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x15ca34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15ca38: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x15ca38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15ca3c: 0xe7b60024  swc1        $f22, 0x24($sp)
    ctx->pc = 0x15ca3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15ca40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CA40u;
    {
        const bool branch_taken_0x15ca40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA40u;
        // 0x15ca44: 0xe7b40028  swc1        $f20, 0x28($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca40) {
            ctx->pc = 0x15CA50u;
            goto label_15ca50;
        }
    }
    ctx->pc = 0x15CA48u;
    // 0x15ca48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x15ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x15ca4c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x15ca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_15ca50:
    // 0x15ca50: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x15ca50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca54: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x15ca54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15ca58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ca58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ca5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca60: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15CA60u;
    SET_GPR_U32(ctx, 31, 0x15CA68u);
    ctx->pc = 0x15CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA60u;
    // 0x15ca64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15CA60u, 0x15CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA68u;
label_15ca68:
    // 0x15ca68: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15ca68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ca6c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x15ca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15ca70: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CA70u;
    {
        const bool branch_taken_0x15ca70 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x15CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA70u;
        // 0x15ca74: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca70) {
            ctx->pc = 0x15CA8Cu;
            goto label_15ca8c;
        }
    }
    ctx->pc = 0x15CA78u;
    // 0x15ca78: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x15ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ca7c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x15ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ca80: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15ca80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15ca84: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15ca84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15ca88: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x15ca88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15ca8c:
    // 0x15ca8c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x15ca8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15ca90: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x15ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15ca94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ca94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15ca98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca9c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15CA9Cu;
    SET_GPR_U32(ctx, 31, 0x15CAA4u);
    ctx->pc = 0x15CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA9Cu;
    // 0x15caa0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15CA9Cu, 0x15CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CAA4u;
label_15caa4:
    // 0x15caa4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15caa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15caa8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x15caa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15caac: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x15caacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cab0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x15cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cab4: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x15cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15cab8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15cab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15cabc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15cabcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15cac0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x15cac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15cac4: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x15cac4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x15cac8: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x15cac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15caccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cad0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15cad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cad4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15CAD4u;
    SET_GPR_U32(ctx, 31, 0x15CADCu);
    ctx->pc = 0x15CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CAD4u;
    // 0x15cad8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15CAD4u, 0x15CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CADCu;
label_15cadc:
    // 0x15cadc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15cadcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15cae0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x15cae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cae4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x15cae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cae8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x15cae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15caec: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x15caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15caf0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x15caf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15caf4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x15caf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15caf8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x15caf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15cafc: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x15cafcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x15cb00: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x15cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cb04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb0c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15CB0Cu;
    SET_GPR_U32(ctx, 31, 0x15CB14u);
    ctx->pc = 0x15CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB0Cu;
    // 0x15cb10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15CB0Cu, 0x15CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB14u;
label_15cb14:
    // 0x15cb14: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15cb14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15cb18: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x15cb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cb1c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x15cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x15cb20: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x15cb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x15cb24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15cb24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15cb28: 0xc4401180  lwc1        $f0, 0x1180($v0)
    ctx->pc = 0x15cb28u;
    { uint32_t bits = FAST_READ32(0x3C1180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cb2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15cb2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15cb30: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x15cb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x15cb34: 0x3421eeef  ori         $at, $at, 0xEEEF
    ctx->pc = 0x15cb34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61167);
    // 0x15cb38: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x15cb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15cb3c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x15cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x15cb40: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x15cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cb44: 0xc4446b88  lwc1        $f4, 0x6B88($v0)
    ctx->pc = 0x15cb44u;
    { uint32_t bits = FAST_READ32(0x586B88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15cb48: 0x0  nop
    ctx->pc = 0x15cb48u;
    // NOP
    // 0x15cb4c: 0x0  nop
    ctx->pc = 0x15cb4cu;
    // NOP
    // 0x15cb50: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x15cb50u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x15cb54: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x15cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15cb58: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x15cb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15cb5c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x15cb5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15cb60: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x15cb60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15cb64: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x15cb64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15cb68: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x15cb68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x15cb6c: 0x0  nop
    ctx->pc = 0x15cb6cu;
    // NOP
    // 0x15cb70: 0x0  nop
    ctx->pc = 0x15cb70u;
    // NOP
    // 0x15cb74: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x15cb74u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[5]);
    // 0x15cb78: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x15cb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x15cb7c: 0xe6370008  swc1        $f23, 0x8($s1)
    ctx->pc = 0x15cb7cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x15cb80: 0xe637000c  swc1        $f23, 0xC($s1)
    ctx->pc = 0x15cb80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x15cb84: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x15cb84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb88: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x15cb88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15cb8c: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15cb8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15cb90: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x15cb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cb94: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x15cb94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cb98: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x15cb98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15cb9c: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15cb9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15cba0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x15cba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cba4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15cba4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cba8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x15cba8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15cbac: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15cbacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15cbb0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15cbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cbb4: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x15cbb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15cbb8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x15cbb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15cbbc: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15cbbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15cbc0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x15cbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cbc4: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x15cbc4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x15cbc8: 0xe7b900a4  swc1        $f25, 0xA4($sp)
    ctx->pc = 0x15cbc8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x15cbcc: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x15cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x15cbd0: 0xe617000c  swc1        $f23, 0xC($s0)
    ctx->pc = 0x15cbd0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x15cbd4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x15cbd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cbd8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cbdc: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cbdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15cbe0: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x15cbe0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15cbe4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15cbe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15cbe8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cbec: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x15cbecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15cbf0: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x15cbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cbf4: 0x13be0006  beq         $sp, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CBF4u;
    {
        const bool branch_taken_0x15cbf4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 30));
        ctx->pc = 0x15CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBF4u;
        // 0x15cbf8: 0xc7a000b0  lwc1        $f0, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbf4) {
            ctx->pc = 0x15CC10u;
            goto label_15cc10;
        }
    }
    ctx->pc = 0x15CBFCu;
    // 0x15cbfc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x15cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cc00: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x15cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15cc04: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15cc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15cc08: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15cc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15cc0c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x15cc0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15cc10:
    // 0x15cc10: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x15cc10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15cc14: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cc18: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cc18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15cc1c: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x15cc1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15cc20: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15cc20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15cc24: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cc28: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x15cc28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15cc2c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x15cc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cc30: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x15cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cc34: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x15cc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cc38: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x15cc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15cc3c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15cc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15cc40: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15cc40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15cc44: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x15cc44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15cc48: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x15cc48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x15cc4c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cc50: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cc50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15cc54: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x15cc54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15cc58: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15cc58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15cc5c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cc60: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x15cc60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15cc64: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x15cc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cc68: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x15cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cc6c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x15cc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cc70: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x15cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15cc74: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x15cc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15cc78: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x15cc78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15cc7c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x15cc7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15cc80: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x15cc80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x15cc84: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cc88: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cc88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15cc8c: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x15cc8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15cc90: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15cc90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15cc94: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x15cc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cc98: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x15cc98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15cc9c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x15cc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15cca0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x15cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15cca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cca8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x15cca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ccac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15ccacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ccb0: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x15ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ccb4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x15ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15ccb8: 0x8fa700d4  lw          $a3, 0xD4($sp)
    ctx->pc = 0x15ccb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x15ccbc: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x15ccbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x15ccc0: 0x8fa900dc  lw          $t1, 0xDC($sp)
    ctx->pc = 0x15ccc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x15ccc4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15ccc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15ccc8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x15ccc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15cccc: 0xc056e20  jal         func_15B880
    ctx->pc = 0x15CCCCu;
    SET_GPR_U32(ctx, 31, 0x15CCD4u);
    ctx->pc = 0x15CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCCCu;
    // 0x15ccd0: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B880u, 0x15CCCCu, 0x15CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CCD4u;
label_15ccd4:
    // 0x15ccd4: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x15ccd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15ccd8: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x15ccd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15ccdc: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x15ccdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15cce0: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x15cce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15cce4: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x15cce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15cce8: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x15cce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15ccec: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x15ccecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15ccf0: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x15ccf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15ccf4: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x15ccf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15ccf8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x15ccf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15ccfc: 0xc7b901a8  lwc1        $f25, 0x1A8($sp)
    ctx->pc = 0x15ccfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x15cd00: 0xc7b801a0  lwc1        $f24, 0x1A0($sp)
    ctx->pc = 0x15cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x15cd04: 0xc7b70198  lwc1        $f23, 0x198($sp)
    ctx->pc = 0x15cd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15cd08: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x15cd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15cd0c: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x15cd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15cd10: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x15cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15cd14: 0x3e00008  jr          $ra
    ctx->pc = 0x15CD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD14u;
        // 0x15cd18: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CD1Cu;
    // 0x15cd1c: 0x0  nop
    ctx->pc = 0x15cd1cu;
    // NOP
    ctx->pc = 0x15cd20u;
}
