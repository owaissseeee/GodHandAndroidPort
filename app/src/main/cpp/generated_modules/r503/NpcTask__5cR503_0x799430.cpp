#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: NpcTask__5cR503
// Address: 0x799430 - 0x7994e8
void NpcTask__5cR503_0x799430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NpcTask__5cR503_0x799430");
#endif

    switch (ctx->pc) {
        case 0x79946cu: goto label_79946c;
        case 0x799478u: goto label_799478;
        case 0x7994c0u: goto label_7994c0;
        case 0x7994c8u: goto label_7994c8;
        case 0x7994d8u: goto label_7994d8;
        default: break;
    }

    ctx->pc = 0x799430u;

    // 0x799430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799434: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79943c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x799440: 0x8c839b70  lw          $v1, -0x6490($a0)
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x799444: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x799448: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79944c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x79944Cu;
    {
        const bool branch_taken_0x79944c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79944c) {
            ctx->pc = 0x7994CCu;
            goto label_7994cc;
        }
    }
    ctx->pc = 0x799454u;
    // 0x799454: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x799458: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79945c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79945cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799460: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x799464: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799470: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799470u;
    SET_GPR_U32(ctx, 31, 0x799478u);
    ctx->pc = 0x799474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799470u;
    // 0x799474: 0x240503d0  addiu       $a1, $zero, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799470u, 0x799478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799478u;
label_799478:
    // 0x799478: 0x3c01c1d2  lui         $at, 0xC1D2
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49618 << 16));
    // 0x79947c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799480: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799484: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799488: 0x3c013f88  lui         $at, 0x3F88
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16264 << 16));
    // 0x79948c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x799490: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799494: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799498: 0x3c01c2a4  lui         $at, 0xC2A4
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49828 << 16));
    // 0x79949c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79949cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7994a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7994a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7994a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7994a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7994ac: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x7994acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x7994b0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x7994b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x7994b4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x7994b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x7994b8: 0xc0a5874  jal         func_2961D0
    ctx->pc = 0x7994B8u;
    SET_GPR_U32(ctx, 31, 0x7994C0u);
    ctx->pc = 0x7994BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B8u;
    // 0x7994bc: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961D0u, 0x7994B8u, 0x7994C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C0u;
label_7994c0:
    // 0x7994c0: 0xc0a5860  jal         func_296180
    ctx->pc = 0x7994C0u;
    SET_GPR_U32(ctx, 31, 0x7994C8u);
    ctx->pc = 0x7994C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C0u;
    // 0x7994c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296180u, 0x7994C0u, 0x7994C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C8u;
label_7994c8:
    // 0x7994c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7994cc:
    // 0x7994cc: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x7994d0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7994D0u;
    SET_GPR_U32(ctx, 31, 0x7994D8u);
    ctx->pc = 0x7994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D0u;
    // 0x7994d4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7994D0u, 0x7994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D8u;
label_7994d8:
    // 0x7994d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7994dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7994DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994E4u;
    // 0x7994e4: 0x0  nop
    ctx->pc = 0x7994e4u;
    // NOP
    ctx->pc = 0x7994e8u;
}
} // namespace gh_r503
