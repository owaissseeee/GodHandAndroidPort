#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_0079B8F8
// Address: 0x79b8f8 - 0x79ba10
void func_0079B8F8_0x79b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B8F8_0x79b8f8");
#endif

    switch (ctx->pc) {
        case 0x79b914u: goto label_79b914;
        case 0x79b928u: goto label_79b928;
        case 0x79b93cu: goto label_79b93c;
        case 0x79b968u: goto label_79b968;
        case 0x79b9a4u: goto label_79b9a4;
        case 0x79b9acu: goto label_79b9ac;
        case 0x79b9d4u: goto label_79b9d4;
        default: break;
    }

    ctx->pc = 0x79b8f8u;

    // 0x79b8f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79b8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79b8fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79b8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79b900: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79b904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79b904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b908: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b90c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B90Cu;
    SET_GPR_U32(ctx, 31, 0x79B914u);
    ctx->pc = 0x79B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B90Cu;
    // 0x79b910: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B90Cu, 0x79B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B914u;
label_79b914:
    // 0x79b914: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x79b914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b918: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79b918u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b91c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b920: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B920u;
    SET_GPR_U32(ctx, 31, 0x79B928u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B920u, 0x79B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B928u;
label_79b928:
    // 0x79b928: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x79b928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x79b92c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79b92cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b930: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b934: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B934u;
    SET_GPR_U32(ctx, 31, 0x79B93Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B934u, 0x79B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B93Cu;
label_79b93c:
    // 0x79b93c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b940: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B940u;
    {
        const bool branch_taken_0x79b940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x79b940) {
            ctx->pc = 0x79B960u;
            goto label_79b960;
        }
    }
    ctx->pc = 0x79B948u;
    // 0x79b948: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x79b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b94c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79b94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b950: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x79b950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b954: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79b954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b958: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x79b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b95c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79b95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b960:
    // 0x79b960: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B960u;
    SET_GPR_U32(ctx, 31, 0x79B968u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B960u, 0x79B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B968u;
label_79b968:
    // 0x79b968: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x79b968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x79b96c: 0x50710008  beql        $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B96Cu;
    {
        const bool branch_taken_0x79b96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x79b96c) {
            ctx->pc = 0x79B970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B96Cu;
            // 0x79b970: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B990u;
            goto label_79b990;
        }
    }
    ctx->pc = 0x79B974u;
    // 0x79b974: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x79b974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b978: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x79b978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x79b97c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x79b97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b980: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79b980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79b984: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x79b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b988: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79b988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x79b98c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79b990:
    // 0x79b990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b994: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79b994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    // 0x79b998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b99c: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79B99Cu;
    SET_GPR_U32(ctx, 31, 0x79B9A4u);
    ctx->pc = 0x79B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B99Cu;
    // 0x79b9a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79B99Cu, 0x79B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9A4u;
label_79b9a4:
    // 0x79b9a4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B9A4u;
    SET_GPR_U32(ctx, 31, 0x79B9ACu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B9A4u, 0x79B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9ACu;
label_79b9ac:
    // 0x79b9ac: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b9b0: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B9B0u;
    {
        const bool branch_taken_0x79b9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9B0u;
        // 0x79b9b4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9b0) {
            ctx->pc = 0x79B9CCu;
            goto label_79b9cc;
        }
    }
    ctx->pc = 0x79B9B8u;
    // 0x79b9b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79b9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79b9bc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x79b9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b9c0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79b9c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b9c4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x79b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b9c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79b9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b9cc:
    // 0x79b9cc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B9CCu;
    SET_GPR_U32(ctx, 31, 0x79B9D4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B9CCu, 0x79B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9D4u;
label_79b9d4:
    // 0x79b9d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79b9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b9d8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b9dc: 0x24830100  addiu       $v1, $a0, 0x100
    ctx->pc = 0x79b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x79b9e0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B9E0u;
    {
        const bool branch_taken_0x79b9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9E0u;
        // 0x79b9e4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9e0) {
            ctx->pc = 0x79B9FCu;
            goto label_79b9fc;
        }
    }
    ctx->pc = 0x79B9E8u;
    // 0x79b9e8: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x79b9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x79b9ec: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b9f0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79b9f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79b9f4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79b9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b9f8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79b9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_79b9fc:
    // 0x79b9fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79b9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ba00: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79ba00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ba04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79ba04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ba08: 0x3e00008  jr          $ra
    ctx->pc = 0x79BA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA08u;
        // 0x79ba0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BA10u;
}
} // namespace gh_r201
