#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00319CC0
// Address: 0x319cc0 - 0x319d60
void func_00319CC0_0x319cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00319CC0_0x319cc0");
#endif

    switch (ctx->pc) {
        case 0x319cecu: goto label_319cec;
        case 0x319d00u: goto label_319d00;
        case 0x319d08u: goto label_319d08;
        case 0x319d18u: goto label_319d18;
        case 0x319d40u: goto label_319d40;
        default: break;
    }

    ctx->pc = 0x319cc0u;

    // 0x319cc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x319cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x319cc4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x319cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x319cc8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x319cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x319ccc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x319cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319cd0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x319cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x319cd4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x319cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319cd8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x319cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x319cdc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x319cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x319ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319ce4: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x319CE4u;
    SET_GPR_U32(ctx, 31, 0x319CECu);
    ctx->pc = 0x319CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319CE4u;
    // 0x319ce8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x319CE4u, 0x319CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319CECu;
label_319cec:
    // 0x319cec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x319cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319cf0: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x319CF0u;
    {
        const bool branch_taken_0x319cf0 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x319CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CF0u;
        // 0x319cf4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319cf0) {
            ctx->pc = 0x319D28u;
            goto label_319d28;
        }
    }
    ctx->pc = 0x319CF8u;
    // 0x319cf8: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x319cf8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x319cfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319d00:
    // 0x319d00: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x319D00u;
    SET_GPR_U32(ctx, 31, 0x319D08u);
    ctx->pc = 0x319D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D00u;
    // 0x319d04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319D00u, 0x319D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D08u;
label_319d08:
    // 0x319d08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x319d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d10: 0xc0523c0  jal         func_148F00
    ctx->pc = 0x319D10u;
    SET_GPR_U32(ctx, 31, 0x319D18u);
    ctx->pc = 0x319D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D10u;
    // 0x319d14: 0x2742825  or          $a1, $s3, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F00u, 0x319D10u, 0x319D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D18u;
label_319d18:
    // 0x319d18: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x319d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x319d1c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x319D1Cu;
    {
        const bool branch_taken_0x319d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D1Cu;
        // 0x319d20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d1c) {
            ctx->pc = 0x319D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319d00;
        }
    }
    ctx->pc = 0x319D24u;
    // 0x319d24: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x319d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_319d28:
    // 0x319d28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x319d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d2c: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x319d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x319d30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x319d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d34: 0x8c460210  lw          $a2, 0x210($v0)
    ctx->pc = 0x319d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x319d38: 0xc0556fa  jal         func_155BE8
    ctx->pc = 0x319D38u;
    SET_GPR_U32(ctx, 31, 0x319D40u);
    ctx->pc = 0x319D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D38u;
    // 0x319d3c: 0x30c60001  andi        $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x155BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BE8u, 0x319D38u, 0x319D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D40u;
label_319d40:
    // 0x319d40: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x319d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x319d44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x319d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x319d48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x319d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319d4c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x319d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319d50: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x319d50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319d58: 0x3e00008  jr          $ra
    ctx->pc = 0x319D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D58u;
        // 0x319d5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319D60u;
}
