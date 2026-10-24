#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_00799A30
// Address: 0x799a30 - 0x799ab8
void func_00799A30_0x799a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799A30_0x799a30");
#endif

    switch (ctx->pc) {
        case 0x799a68u: goto label_799a68;
        case 0x799a80u: goto label_799a80;
        case 0x799a94u: goto label_799a94;
        case 0x799a9cu: goto label_799a9c;
        case 0x799aa8u: goto label_799aa8;
        default: break;
    }

    ctx->pc = 0x799a30u;

    // 0x799a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799a34: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799a38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799a3c: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x799a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799a44: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799a48: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799a4c: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x799a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a54: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799a58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799a5c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799a60: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799A60u;
    SET_GPR_U32(ctx, 31, 0x799A68u);
    ctx->pc = 0x799A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A60u;
    // 0x799a64: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799A60u, 0x799A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A68u;
label_799a68:
    // 0x799a68: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799a6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a70: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a78: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799A78u;
    SET_GPR_U32(ctx, 31, 0x799A80u);
    ctx->pc = 0x799A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A78u;
    // 0x799a7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799A78u, 0x799A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799a84: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799a88: 0x24a5a178  addiu       $a1, $a1, -0x5E88
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943096));
    // 0x799a8c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799A8Cu;
    SET_GPR_U32(ctx, 31, 0x799A94u);
    ctx->pc = 0x799A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A8Cu;
    // 0x799a90: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799A8Cu, 0x799A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A94u;
label_799a94:
    // 0x799a94: 0xc1e6710  jal         func_799C40
    ctx->pc = 0x799A94u;
    SET_GPR_U32(ctx, 31, 0x799A9Cu);
    ctx->pc = 0x799C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799C40u, 0x799A94u, 0x799A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A9Cu;
label_799a9c:
    // 0x799a9c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799aa0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799AA0u;
    SET_GPR_U32(ctx, 31, 0x799AA8u);
    ctx->pc = 0x799AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA0u;
    // 0x799aa4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799AA0u, 0x799AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA8u;
label_799aa8:
    // 0x799aa8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x799AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB0u;
        // 0x799ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799AB8u;
}
} // namespace gh_r100
