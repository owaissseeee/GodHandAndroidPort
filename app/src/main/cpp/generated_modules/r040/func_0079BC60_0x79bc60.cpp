#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079BC60
// Address: 0x79bc60 - 0x79bcf8
void func_0079BC60_0x79bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BC60_0x79bc60");
#endif

    switch (ctx->pc) {
        case 0x79bc98u: goto label_79bc98;
        case 0x79bca8u: goto label_79bca8;
        default: break;
    }

    ctx->pc = 0x79bc60u;

    // 0x79bc60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79bc64: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79bc68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79bc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79bc6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79bc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79bc70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79bc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79bc74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79bc74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc78: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79bc78u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79bc7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79bc7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bc80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79bc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79bc84: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x79bc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79bc88: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x79BC88u;
    {
        const bool branch_taken_0x79bc88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BC88u;
        // 0x79bc8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bc88) {
            ctx->pc = 0x79BCD4u;
            goto label_79bcd4;
        }
    }
    ctx->pc = 0x79BC90u;
    // 0x79bc90: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x79bc90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bc94: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79bc94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79bc98:
    // 0x79bc98: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x79BC98u;
    {
        const bool branch_taken_0x79bc98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bc98) {
            ctx->pc = 0x79BC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BC98u;
            // 0x79bc9c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BCCCu;
            goto label_79bccc;
        }
    }
    ctx->pc = 0x79BCA0u;
    // 0x79bca0: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79BCA0u;
    SET_GPR_U32(ctx, 31, 0x79BCA8u);
    ctx->pc = 0x79BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BCA0u;
    // 0x79bca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79BCA0u, 0x79BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BCA8u;
label_79bca8:
    // 0x79bca8: 0x50540008  beql        $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x79BCA8u;
    {
        const bool branch_taken_0x79bca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x79bca8) {
            ctx->pc = 0x79BCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BCA8u;
            // 0x79bcac: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BCCCu;
            goto label_79bccc;
        }
    }
    ctx->pc = 0x79BCB0u;
    // 0x79bcb0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x79bcb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x79bcb4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BCB4u;
    {
        const bool branch_taken_0x79bcb4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x79BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCB4u;
        // 0x79bcb8: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcb4) {
            ctx->pc = 0x79BCC8u;
            goto label_79bcc8;
        }
    }
    ctx->pc = 0x79BCBCu;
    // 0x79bcbc: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x79bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x79bcc0: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x79bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
    // 0x79bcc4: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x79bcc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_79bcc8:
    // 0x79bcc8: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79bcc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79bccc:
    // 0x79bccc: 0x5620fff2  bnel        $s1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x79BCCCu;
    {
        const bool branch_taken_0x79bccc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bccc) {
            ctx->pc = 0x79BCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BCCCu;
            // 0x79bcd0: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bc98;
        }
    }
    ctx->pc = 0x79BCD4u;
label_79bcd4:
    // 0x79bcd4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79bcd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bcd8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79bcd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79bcdc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79bcdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79bce0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79bce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79bce4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79bce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bce8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79bce8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bcec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCF0u;
        // 0x79bcf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BCF8u;
}
} // namespace gh_r040
