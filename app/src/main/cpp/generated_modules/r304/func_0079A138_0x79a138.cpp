#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_0079A138
// Address: 0x79a138 - 0x79a220
void func_0079A138_0x79a138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A138_0x79a138");
#endif

    switch (ctx->pc) {
        case 0x79a170u: goto label_79a170;
        case 0x79a180u: goto label_79a180;
        case 0x79a190u: goto label_79a190;
        case 0x79a1acu: goto label_79a1ac;
        case 0x79a1b4u: goto label_79a1b4;
        case 0x79a1d8u: goto label_79a1d8;
        case 0x79a1e0u: goto label_79a1e0;
        case 0x79a1fcu: goto label_79a1fc;
        default: break;
    }

    ctx->pc = 0x79a138u;

    // 0x79a138: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x79a138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x79a13c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79a13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79a140: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79a140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79a144: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79a144u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79a148: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79a148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79a14c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79a150: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79a150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79a154: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79a154u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x79a158: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79a15c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a160: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79a164: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A164u;
    {
        const bool branch_taken_0x79a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A164u;
        // 0x79a168: 0x3c140058  lui         $s4, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a164) {
            ctx->pc = 0x79A180u;
            goto label_79a180;
        }
    }
    ctx->pc = 0x79A16Cu;
    // 0x79a16c: 0x0  nop
    ctx->pc = 0x79a16cu;
    // NOP
label_79a170:
    // 0x79a170: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a174: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a178: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A178u;
    SET_GPR_U32(ctx, 31, 0x79A180u);
    ctx->pc = 0x79A17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A178u;
    // 0x79a17c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A178u, 0x79A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A180u;
label_79a180:
    // 0x79a180: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79a184: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a188: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79A188u;
    SET_GPR_U32(ctx, 31, 0x79A190u);
    ctx->pc = 0x79A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A188u;
    // 0x79a18c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A188u, 0x79A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A190u;
label_79a190:
    // 0x79a190: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A190u;
    {
        const bool branch_taken_0x79a190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A190u;
        // 0x79a194: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a190) {
            ctx->pc = 0x79A170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a170;
        }
    }
    ctx->pc = 0x79A198u;
    // 0x79a198: 0x26906ab0  addiu       $s0, $s4, 0x6AB0
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x79a19c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a19cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a1a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a1a4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A1A4u;
    SET_GPR_U32(ctx, 31, 0x79A1ACu);
    ctx->pc = 0x79A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A4u;
    // 0x79a1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A1A4u, 0x79A1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1ACu;
label_79a1ac:
    // 0x79a1ac: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A1ACu;
    SET_GPR_U32(ctx, 31, 0x79A1B4u);
    ctx->pc = 0x79A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1ACu;
    // 0x79a1b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A1ACu, 0x79A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B4u;
label_79a1b4:
    // 0x79a1b4: 0x8e43ad00  lw          $v1, -0x5300($s2)
    ctx->pc = 0x79a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946048)));
    // 0x79a1b8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x79a1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a1c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a1c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a1cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79a1d0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A1D0u;
    SET_GPR_U32(ctx, 31, 0x79A1D8u);
    ctx->pc = 0x79A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1D0u;
    // 0x79a1d4: 0xa3a60010  sb          $a2, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A1D0u, 0x79A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1D8u;
label_79a1d8:
    // 0x79a1d8: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A1D8u;
    SET_GPR_U32(ctx, 31, 0x79A1E0u);
    ctx->pc = 0x79A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1D8u;
    // 0x79a1dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A1D8u, 0x79A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E0u;
label_79a1e0:
    // 0x79a1e0: 0x8e44ad00  lw          $a0, -0x5300($s2)
    ctx->pc = 0x79a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946048)));
    // 0x79a1e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79a1e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a1ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79a1f0: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a1f4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A1F4u;
    SET_GPR_U32(ctx, 31, 0x79A1FCu);
    ctx->pc = 0x79A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F4u;
    // 0x79a1f8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A1F4u, 0x79A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1FCu;
label_79a1fc:
    // 0x79a1fc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79a1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a200: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79a200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a204: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79a204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a208: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79a208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a20c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79a20cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a214: 0x3e00008  jr          $ra
    ctx->pc = 0x79A214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A214u;
        // 0x79a218: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A21Cu;
    // 0x79a21c: 0x0  nop
    ctx->pc = 0x79a21cu;
    // NOP
    ctx->pc = 0x79a220u;
}
} // namespace gh_r304
