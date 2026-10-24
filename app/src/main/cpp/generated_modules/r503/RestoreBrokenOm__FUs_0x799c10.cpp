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
// Function: RestoreBrokenOm__FUs
// Address: 0x799c10 - 0x799cf0
void RestoreBrokenOm__FUs_0x799c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RestoreBrokenOm__FUs_0x799c10");
#endif

    switch (ctx->pc) {
        case 0x799c48u: goto label_799c48;
        case 0x799c58u: goto label_799c58;
        case 0x799c70u: goto label_799c70;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cb8u: goto label_799cb8;
        default: break;
    }

    ctx->pc = 0x799c10u;

    // 0x799c10: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x799c14: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x799c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x799c18: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x799c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x799c1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c20: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x799c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x799c24: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799c28: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x799c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x799c2c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x799c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c30: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x799c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x799c34: 0x3094ffff  andi        $s4, $a0, 0xFFFF
    ctx->pc = 0x799c34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x799c38: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x799c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x799c3c: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x799c40: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x799c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x799c44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x799c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799c48:
    // 0x799c48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c4c: 0x26a59f28  addiu       $a1, $s5, -0x60D8
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942504));
    // 0x799c50: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x799C50u;
    SET_GPR_U32(ctx, 31, 0x799C58u);
    ctx->pc = 0x799C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C50u;
    // 0x799c54: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x799C50u, 0x799C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C58u;
label_799c58:
    // 0x799c58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c5c: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799c60: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799C60u;
    {
        const bool branch_taken_0x799c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C60u;
        // 0x799c64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c60) {
            ctx->pc = 0x799C98u;
            goto label_799c98;
        }
    }
    ctx->pc = 0x799C68u;
    // 0x799c68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x799c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c6c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_799c70:
    // 0x799c70: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x799c74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799c78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799c7c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799c80: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799c80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799c84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799C84u;
    {
        const bool branch_taken_0x799c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C84u;
        // 0x799c88: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c84) {
            ctx->pc = 0x799C98u;
            goto label_799c98;
        }
    }
    ctx->pc = 0x799C8Cu;
    // 0x799c8c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799c90: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799C90u;
    {
        const bool branch_taken_0x799c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c90) {
            ctx->pc = 0x799C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C90u;
            // 0x799c94: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c70;
        }
    }
    ctx->pc = 0x799C98u;
label_799c98:
    // 0x799c98: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799c9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x799c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ca0: 0xc0b14a2  jal         func_2C5288
    ctx->pc = 0x799CA0u;
    SET_GPR_U32(ctx, 31, 0x799CA8u);
    ctx->pc = 0x799CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CA0u;
    // 0x799ca4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5288u, 0x799CA0u, 0x799CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA8u;
label_799ca8:
    // 0x799ca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799CA8u;
    {
        const bool branch_taken_0x799ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA8u;
        // 0x799cac: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ca8) {
            ctx->pc = 0x799CB8u;
            goto label_799cb8;
        }
    }
    ctx->pc = 0x799CB0u;
    // 0x799cb0: 0xc0b14c6  jal         func_2C5318
    ctx->pc = 0x799CB0u;
    SET_GPR_U32(ctx, 31, 0x799CB8u);
    ctx->pc = 0x799CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CB0u;
    // 0x799cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5318u, 0x799CB0u, 0x799CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CB8u;
label_799cb8:
    // 0x799cb8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x799cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cbc: 0x2a02001c  slti        $v0, $s0, 0x1C
    ctx->pc = 0x799cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x799cc0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x799CC0u;
    {
        const bool branch_taken_0x799cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC0u;
        // 0x799cc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cc0) {
            ctx->pc = 0x799C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c48;
        }
    }
    ctx->pc = 0x799CC8u;
    // 0x799cc8: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x799cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x799ccc: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x799cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x799cd0: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x799cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x799cd4: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x799cd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x799cd8: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x799cd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x799cdc: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x799cdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x799ce0: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x799ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x799ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x799CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CE4u;
        // 0x799ce8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799CECu;
    // 0x799cec: 0x0  nop
    ctx->pc = 0x799cecu;
    // NOP
    ctx->pc = 0x799cf0u;
}
} // namespace gh_r503
