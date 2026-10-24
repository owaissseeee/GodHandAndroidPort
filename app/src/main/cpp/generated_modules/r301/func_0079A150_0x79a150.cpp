#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_0079A150
// Address: 0x79a150 - 0x79a248
void func_0079A150_0x79a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A150_0x79a150");
#endif

    switch (ctx->pc) {
        case 0x79a180u: goto label_79a180;
        case 0x79a198u: goto label_79a198;
        case 0x79a1a8u: goto label_79a1a8;
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1c0u: goto label_79a1c0;
        case 0x79a1ccu: goto label_79a1cc;
        case 0x79a1dcu: goto label_79a1dc;
        case 0x79a1e8u: goto label_79a1e8;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a1f8u: goto label_79a1f8;
        case 0x79a21cu: goto label_79a21c;
        case 0x79a228u: goto label_79a228;
        default: break;
    }

    ctx->pc = 0x79a150u;

    // 0x79a150: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79a154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a158: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79a15c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a160: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79a164: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79a168: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79a16c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x79a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79a170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a174: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
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
    // 0x79a180: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x79a184: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x79a188: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x79a18c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A18Cu;
    {
        const bool branch_taken_0x79a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A18Cu;
        // 0x79a190: 0x3c14007a  lui         $s4, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a18c) {
            ctx->pc = 0x79A1A8u;
            goto label_79a1a8;
        }
    }
    ctx->pc = 0x79A194u;
    // 0x79a194: 0x0  nop
    ctx->pc = 0x79a194u;
    // NOP
label_79a198:
    // 0x79a198: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a19c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1a0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A1A0u;
    SET_GPR_U32(ctx, 31, 0x79A1A8u);
    ctx->pc = 0x79A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A0u;
    // 0x79a1a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A1A0u, 0x79A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A8u;
label_79a1a8:
    // 0x79a1a8: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x79A1A8u;
    SET_GPR_U32(ctx, 31, 0x79A1B0u);
    ctx->pc = 0x79A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A8u;
    // 0x79a1ac: 0x26249b70  addiu       $a0, $s1, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x79A1A8u, 0x79A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B0u;
label_79a1b0:
    // 0x79a1b0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A1B0u;
    {
        const bool branch_taken_0x79a1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B0u;
        // 0x79a1b4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1b0) {
            ctx->pc = 0x79A198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a198;
        }
    }
    ctx->pc = 0x79A1B8u;
    // 0x79a1b8: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A1B8u;
    SET_GPR_U32(ctx, 31, 0x79A1C0u);
    ctx->pc = 0x79A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1B8u;
    // 0x79a1bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A1B8u, 0x79A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C0u;
label_79a1c0:
    // 0x79a1c0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a1c4: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A1C4u;
    SET_GPR_U32(ctx, 31, 0x79A1CCu);
    ctx->pc = 0x79A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1C4u;
    // 0x79a1c8: 0x2645dd38  addiu       $a1, $s2, -0x22C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A1C4u, 0x79A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1CCu;
label_79a1cc:
    // 0x79a1cc: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a1d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a1d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A1D4u;
    SET_GPR_U32(ctx, 31, 0x79A1DCu);
    ctx->pc = 0x79A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1D4u;
    // 0x79a1d8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A1D4u, 0x79A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1DCu;
label_79a1dc:
    // 0x79a1dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1e0: 0xc1e6ad2  jal         func_79AB48
    ctx->pc = 0x79A1E0u;
    SET_GPR_U32(ctx, 31, 0x79A1E8u);
    ctx->pc = 0x79A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1E0u;
    // 0x79a1e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB48u, 0x79A1E0u, 0x79A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E8u;
label_79a1e8:
    // 0x79a1e8: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A1E8u;
    SET_GPR_U32(ctx, 31, 0x79A1F0u);
    ctx->pc = 0x79A1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1E8u;
    // 0x79a1ec: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A1E8u, 0x79A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1F0u;
label_79a1f0:
    // 0x79a1f0: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A1F0u;
    SET_GPR_U32(ctx, 31, 0x79A1F8u);
    ctx->pc = 0x79A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1F0u;
    // 0x79a1f4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A1F0u, 0x79A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1F8u;
label_79a1f8:
    // 0x79a1f8: 0x8e648658  lw          $a0, -0x79A8($s3)
    ctx->pc = 0x79a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x79a1fc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x79a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x79a200: 0x2685a248  addiu       $a1, $s4, -0x5DB8
    ctx->pc = 0x79a200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943304));
    // 0x79a204: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a208: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79a20c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a210: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79a210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79a214: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A214u;
    SET_GPR_U32(ctx, 31, 0x79A21Cu);
    ctx->pc = 0x79A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A214u;
    // 0x79a218: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A214u, 0x79A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A21Cu;
label_79a21c:
    // 0x79a21c: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a220: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A220u;
    SET_GPR_U32(ctx, 31, 0x79A228u);
    ctx->pc = 0x79A224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A220u;
    // 0x79a224: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A220u, 0x79A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A228u;
label_79a228:
    // 0x79a228: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a22c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a230: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a234: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79a234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a238: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79a238u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a240: 0x3e00008  jr          $ra
    ctx->pc = 0x79A240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A240u;
        // 0x79a244: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A248u;
}
} // namespace gh_r301
