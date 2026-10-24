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
// Function: func_0079B230
// Address: 0x79b230 - 0x79b320
void func_0079B230_0x79b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B230_0x79b230");
#endif

    switch (ctx->pc) {
        case 0x79b25cu: goto label_79b25c;
        case 0x79b270u: goto label_79b270;
        case 0x79b280u: goto label_79b280;
        case 0x79b288u: goto label_79b288;
        case 0x79b2acu: goto label_79b2ac;
        case 0x79b2b8u: goto label_79b2b8;
        case 0x79b2c4u: goto label_79b2c4;
        case 0x79b2d0u: goto label_79b2d0;
        case 0x79b2d8u: goto label_79b2d8;
        case 0x79b2e0u: goto label_79b2e0;
        case 0x79b2fcu: goto label_79b2fc;
        default: break;
    }

    ctx->pc = 0x79b230u;

    // 0x79b230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b234: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79b238: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79b238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79b23c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79b240: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79b240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79b244: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79b244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79b248: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79b248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79b24c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x79b24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79b250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b254: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79B254u;
    SET_GPR_U32(ctx, 31, 0x79B25Cu);
    ctx->pc = 0x79B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B254u;
    // 0x79b258: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79B254u, 0x79B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B25Cu;
label_79b25c:
    // 0x79b25c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79b25cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79b260: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x79b260u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x79b264: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x79b264u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x79b268: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B268u;
    {
        const bool branch_taken_0x79b268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B268u;
        // 0x79b26c: 0x3c14007a  lui         $s4, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b268) {
            ctx->pc = 0x79B280u;
            goto label_79b280;
        }
    }
    ctx->pc = 0x79B270u;
label_79b270:
    // 0x79b270: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b274: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b278: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B278u;
    SET_GPR_U32(ctx, 31, 0x79B280u);
    ctx->pc = 0x79B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B278u;
    // 0x79b27c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B278u, 0x79B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B280u;
label_79b280:
    // 0x79b280: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79B280u;
    SET_GPR_U32(ctx, 31, 0x79B288u);
    ctx->pc = 0x79B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B280u;
    // 0x79b284: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79B280u, 0x79B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B288u;
label_79b288:
    // 0x79b288: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79B288u;
    {
        const bool branch_taken_0x79b288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B288u;
        // 0x79b28c: 0x8e238658  lw          $v1, -0x79A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b288) {
            ctx->pc = 0x79B270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b270;
        }
    }
    ctx->pc = 0x79B290u;
    // 0x79b290: 0x3c120100  lui         $s2, 0x100
    ctx->pc = 0x79b290u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)256 << 16));
    // 0x79b294: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79b298: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x79b298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x79b29c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B29Cu;
    {
        const bool branch_taken_0x79b29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B29Cu;
        // 0x79b2a0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b29c) {
            ctx->pc = 0x79B2ACu;
            goto label_79b2ac;
        }
    }
    ctx->pc = 0x79B2A4u;
    // 0x79b2a4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B2A4u;
    SET_GPR_U32(ctx, 31, 0x79B2ACu);
    ctx->pc = 0x79B2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2A4u;
    // 0x79b2a8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B2A4u, 0x79B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2ACu;
label_79b2ac:
    // 0x79b2ac: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b2b0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79B2B0u;
    SET_GPR_U32(ctx, 31, 0x79B2B8u);
    ctx->pc = 0x79B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2B0u;
    // 0x79b2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B2B0u, 0x79B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2B8u;
label_79b2b8:
    // 0x79b2b8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b2bc: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79B2BCu;
    SET_GPR_U32(ctx, 31, 0x79B2C4u);
    ctx->pc = 0x79B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2BCu;
    // 0x79b2c0: 0x2665bcd0  addiu       $a1, $s3, -0x4330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79B2BCu, 0x79B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2C4u;
label_79b2c4:
    // 0x79b2c4: 0x8e83bd80  lw          $v1, -0x4280($s4)
    ctx->pc = 0x79b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950272)));
    // 0x79b2c8: 0xc06b63a  jal         func_1AD8E8
    ctx->pc = 0x79B2C8u;
    SET_GPR_U32(ctx, 31, 0x79B2D0u);
    ctx->pc = 0x79B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2C8u;
    // 0x79b2cc: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD8E8u, 0x79B2C8u, 0x79B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2D0u;
label_79b2d0:
    // 0x79b2d0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79B2D0u;
    SET_GPR_U32(ctx, 31, 0x79B2D8u);
    ctx->pc = 0x79B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2D0u;
    // 0x79b2d4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79B2D0u, 0x79B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2D8u;
label_79b2d8:
    // 0x79b2d8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B2D8u;
    SET_GPR_U32(ctx, 31, 0x79B2E0u);
    ctx->pc = 0x79B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2D8u;
    // 0x79b2dc: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B2D8u, 0x79B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2E0u;
label_79b2e0:
    // 0x79b2e0: 0x8e248658  lw          $a0, -0x79A8($s1)
    ctx->pc = 0x79b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x79b2e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79b2e8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x79b2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x79b2ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79b2f0: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b2f4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B2F4u;
    SET_GPR_U32(ctx, 31, 0x79B2FCu);
    ctx->pc = 0x79B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2F4u;
    // 0x79b2f8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B2F4u, 0x79B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2FCu;
label_79b2fc:
    // 0x79b2fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79b2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b300: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79b300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b304: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79b304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b308: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79b308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b30c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79b30cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b314: 0x3e00008  jr          $ra
    ctx->pc = 0x79B314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B314u;
        // 0x79b318: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B31Cu;
    // 0x79b31c: 0x0  nop
    ctx->pc = 0x79b31cu;
    // NOP
    ctx->pc = 0x79b320u;
}
} // namespace gh_r201
