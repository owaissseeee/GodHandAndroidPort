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
// Function: func_0079B218
// Address: 0x79b218 - 0x79b308
void func_0079B218_0x79b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B218_0x79b218");
#endif

    switch (ctx->pc) {
        case 0x79b244u: goto label_79b244;
        case 0x79b250u: goto label_79b250;
        case 0x79b25cu: goto label_79b25c;
        case 0x79b264u: goto label_79b264;
        case 0x79b288u: goto label_79b288;
        case 0x79b29cu: goto label_79b29c;
        case 0x79b2b4u: goto label_79b2b4;
        case 0x79b2bcu: goto label_79b2bc;
        case 0x79b2dcu: goto label_79b2dc;
        case 0x79b2e8u: goto label_79b2e8;
        default: break;
    }

    ctx->pc = 0x79b218u;

    // 0x79b218: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b21c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b220: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79b220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79b224: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79b224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79b228: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79b228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79b22c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79b22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79b230: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79b230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79b234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79b238: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b238u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b23c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B23Cu;
    SET_GPR_U32(ctx, 31, 0x79B244u);
    ctx->pc = 0x79B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B23Cu;
    // 0x79b240: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B23Cu, 0x79B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B244u;
label_79b244:
    // 0x79b244: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x79b244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b248: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79B248u;
    {
        const bool branch_taken_0x79b248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B248u;
        // 0x79b24c: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b248) {
            ctx->pc = 0x79B25Cu;
            goto label_79b25c;
        }
    }
    ctx->pc = 0x79B250u;
label_79b250:
    // 0x79b250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b254: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B254u;
    SET_GPR_U32(ctx, 31, 0x79B25Cu);
    ctx->pc = 0x79B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B254u;
    // 0x79b258: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B254u, 0x79B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B25Cu;
label_79b25c:
    // 0x79b25c: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79B25Cu;
    SET_GPR_U32(ctx, 31, 0x79B264u);
    ctx->pc = 0x79B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B25Cu;
    // 0x79b260: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79B25Cu, 0x79B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B264u;
label_79b264:
    // 0x79b264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79b264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b26c: 0x1602fff8  bne         $s0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79B26Cu;
    {
        const bool branch_taken_0x79b26c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x79B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B26Cu;
        // 0x79b270: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b26c) {
            ctx->pc = 0x79B250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b250;
        }
    }
    ctx->pc = 0x79B274u;
    // 0x79b274: 0x2671ea60  addiu       $s1, $s3, -0x15A0
    ctx->pc = 0x79b274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x79b278: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79b278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79b27c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79b27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b280: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B280u;
    SET_GPR_U32(ctx, 31, 0x79B288u);
    ctx->pc = 0x79B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B280u;
    // 0x79b284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B280u, 0x79B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B288u;
label_79b288:
    // 0x79b288: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B288u;
    {
        const bool branch_taken_0x79b288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B288u;
        // 0x79b28c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b288) {
            ctx->pc = 0x79B2A4u;
            goto label_79b2a4;
        }
    }
    ctx->pc = 0x79B290u;
    // 0x79b290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79b290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b294: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B294u;
    SET_GPR_U32(ctx, 31, 0x79B29Cu);
    ctx->pc = 0x79B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B294u;
    // 0x79b298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B294u, 0x79B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B29Cu;
label_79b29c:
    // 0x79b29c: 0x1450ffec  bne         $v0, $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x79B29Cu;
    {
        const bool branch_taken_0x79b29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B29Cu;
        // 0x79b2a0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b29c) {
            ctx->pc = 0x79B250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b250;
        }
    }
    ctx->pc = 0x79B2A4u;
label_79b2a4:
    // 0x79b2a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x79b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79b2a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2ac: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B2ACu;
    SET_GPR_U32(ctx, 31, 0x79B2B4u);
    ctx->pc = 0x79B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2ACu;
    // 0x79b2b0: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B2ACu, 0x79B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2B4u;
label_79b2b4:
    // 0x79b2b4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B2B4u;
    SET_GPR_U32(ctx, 31, 0x79B2BCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B2B4u, 0x79B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2BCu;
label_79b2bc:
    // 0x79b2bc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x79b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b2c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2c4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79b2c8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b2c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79b2cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b2d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b2d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2d4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B2D4u;
    SET_GPR_U32(ctx, 31, 0x79B2DCu);
    ctx->pc = 0x79B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2D4u;
    // 0x79b2d8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B2D4u, 0x79B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2DCu;
label_79b2dc:
    // 0x79b2dc: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79b2e0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B2E0u;
    SET_GPR_U32(ctx, 31, 0x79B2E8u);
    ctx->pc = 0x79B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2E0u;
    // 0x79b2e4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B2E0u, 0x79B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2E8u;
label_79b2e8:
    // 0x79b2e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79b2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b2ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79b2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b2f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79b2f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b2f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79b2f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b2f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2FCu;
        // 0x79b300: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B304u;
    // 0x79b304: 0x0  nop
    ctx->pc = 0x79b304u;
    // NOP
    ctx->pc = 0x79b308u;
}
} // namespace gh_r100
