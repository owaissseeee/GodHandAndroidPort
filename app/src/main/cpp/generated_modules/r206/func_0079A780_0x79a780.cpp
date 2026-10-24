#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_0079A780
// Address: 0x79a780 - 0x79a898
void func_0079A780_0x79a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A780_0x79a780");
#endif

    switch (ctx->pc) {
        case 0x79a79cu: goto label_79a79c;
        case 0x79a7b0u: goto label_79a7b0;
        case 0x79a7c4u: goto label_79a7c4;
        case 0x79a7f0u: goto label_79a7f0;
        case 0x79a82cu: goto label_79a82c;
        case 0x79a834u: goto label_79a834;
        case 0x79a85cu: goto label_79a85c;
        default: break;
    }

    ctx->pc = 0x79a780u;

    // 0x79a780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a784: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a788: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79a78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a790: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79a794: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A794u;
    SET_GPR_U32(ctx, 31, 0x79A79Cu);
    ctx->pc = 0x79A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A794u;
    // 0x79a798: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A794u, 0x79A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A79Cu;
label_79a79c:
    // 0x79a79c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x79a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a7a0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79a7a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a7a4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a7a8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A7A8u;
    SET_GPR_U32(ctx, 31, 0x79A7B0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A7A8u, 0x79A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7B0u;
label_79a7b0:
    // 0x79a7b0: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x79a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x79a7b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a7b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a7b8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79a7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a7bc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A7BCu;
    SET_GPR_U32(ctx, 31, 0x79A7C4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A7BCu, 0x79A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7C4u;
label_79a7c4:
    // 0x79a7c4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a7c8: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A7C8u;
    {
        const bool branch_taken_0x79a7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x79a7c8) {
            ctx->pc = 0x79A7E8u;
            goto label_79a7e8;
        }
    }
    ctx->pc = 0x79A7D0u;
    // 0x79a7d0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x79a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a7d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79a7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a7d8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x79a7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a7dc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a7e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x79a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a7e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a7e8:
    // 0x79a7e8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A7E8u;
    SET_GPR_U32(ctx, 31, 0x79A7F0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A7E8u, 0x79A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7F0u;
label_79a7f0:
    // 0x79a7f0: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x79a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x79a7f4: 0x50710008  beql        $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A7F4u;
    {
        const bool branch_taken_0x79a7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x79a7f4) {
            ctx->pc = 0x79A7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A7F4u;
            // 0x79a7f8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A818u;
            goto label_79a818;
        }
    }
    ctx->pc = 0x79A7FCu;
    // 0x79a7fc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x79a7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a800: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x79a800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x79a804: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x79a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a808: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79a808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79a80c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x79a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a810: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79a810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x79a814: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79a818:
    // 0x79a818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a81c: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    // 0x79a820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a824: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79A824u;
    SET_GPR_U32(ctx, 31, 0x79A82Cu);
    ctx->pc = 0x79A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A824u;
    // 0x79a828: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79A824u, 0x79A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A82Cu;
label_79a82c:
    // 0x79a82c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A82Cu;
    SET_GPR_U32(ctx, 31, 0x79A834u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A82Cu, 0x79A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A834u;
label_79a834:
    // 0x79a834: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a838: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A838u;
    {
        const bool branch_taken_0x79a838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A838u;
        // 0x79a83c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a838) {
            ctx->pc = 0x79A854u;
            goto label_79a854;
        }
    }
    ctx->pc = 0x79A840u;
    // 0x79a840: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79a840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79a844: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x79a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a848: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79a848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a84c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x79a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a850: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79a850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79a854:
    // 0x79a854: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A854u;
    SET_GPR_U32(ctx, 31, 0x79A85Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A854u, 0x79A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A85Cu;
label_79a85c:
    // 0x79a85c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a860: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a864: 0x24830100  addiu       $v1, $a0, 0x100
    ctx->pc = 0x79a864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x79a868: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A868u;
    {
        const bool branch_taken_0x79a868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A868u;
        // 0x79a86c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a868) {
            ctx->pc = 0x79A884u;
            goto label_79a884;
        }
    }
    ctx->pc = 0x79A870u;
    // 0x79a870: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x79a870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x79a874: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a878: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79a878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79a87c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a880: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79a880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_79a884:
    // 0x79a884: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a888: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a88c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a890: 0x3e00008  jr          $ra
    ctx->pc = 0x79A890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A890u;
        // 0x79a894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A898u;
}
} // namespace gh_r206
