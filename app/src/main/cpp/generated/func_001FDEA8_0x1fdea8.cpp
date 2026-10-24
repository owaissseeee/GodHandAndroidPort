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

// Function: func_001FDEA8
// Address: 0x1fdea8 - 0x1fdf88
void func_001FDEA8_0x1fdea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FDEA8_0x1fdea8");
#endif

    switch (ctx->pc) {
        case 0x1fdec8u: goto label_1fdec8;
        case 0x1fded0u: goto label_1fded0;
        case 0x1fdee8u: goto label_1fdee8;
        case 0x1fdef4u: goto label_1fdef4;
        case 0x1fdf28u: goto label_1fdf28;
        case 0x1fdf30u: goto label_1fdf30;
        case 0x1fdf50u: goto label_1fdf50;
        case 0x1fdf58u: goto label_1fdf58;
        default: break;
    }

    ctx->pc = 0x1fdea8u;

    // 0x1fdea8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fdea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fdeac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fdeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fdeb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fdeb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdeb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fdeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fdeb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fdeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fdebc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1fdebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fdec4: 0x26513c00  addiu       $s1, $s2, 0x3C00
    ctx->pc = 0x1fdec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 15360));
label_1fdec8:
    // 0x1fdec8: 0xc07f36e  jal         func_1FCDB8
    ctx->pc = 0x1FDEC8u;
    SET_GPR_U32(ctx, 31, 0x1FDED0u);
    ctx->pc = 0x1FDECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEC8u;
    // 0x1fdecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCDB8u, 0x1FDEC8u, 0x1FDED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDED0u;
label_1fded0:
    // 0x1fded0: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1fded0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1fded4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1fded4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fded8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FDED8u;
    {
        const bool branch_taken_0x1fded8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fded8) {
            ctx->pc = 0x1FDEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdec8;
        }
    }
    ctx->pc = 0x1FDEE0u;
    // 0x1fdee0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fdee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdee4: 0x26503c00  addiu       $s0, $s2, 0x3C00
    ctx->pc = 0x1fdee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 15360));
label_1fdee8:
    // 0x1fdee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fdee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdeec: 0xc07f37a  jal         func_1FCDE8
    ctx->pc = 0x1FDEECu;
    SET_GPR_U32(ctx, 31, 0x1FDEF4u);
    ctx->pc = 0x1FDEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEECu;
    // 0x1fdef0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCDE8u, 0x1FDEECu, 0x1FDEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEF4u;
label_1fdef4:
    // 0x1fdef4: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x1fdef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1fdef8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FDEF8u;
    {
        const bool branch_taken_0x1fdef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEF8u;
        // 0x1fdefc: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdef8) {
            ctx->pc = 0x1FDEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdee8;
        }
    }
    ctx->pc = 0x1FDF00u;
    // 0x1fdf00: 0x3402ac00  ori         $v0, $zero, 0xAC00
    ctx->pc = 0x1fdf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44032);
    // 0x1fdf04: 0x3403ac60  ori         $v1, $zero, 0xAC60
    ctx->pc = 0x1fdf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44128);
    // 0x1fdf08: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fdf0c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1fdf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1fdf10: 0xa0400049  sb          $zero, 0x49($v0)
    ctx->pc = 0x1fdf10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fdf14: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1fdf14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1fdf18: 0xa0600049  sb          $zero, 0x49($v1)
    ctx->pc = 0x1fdf18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fdf1c: 0x24919b80  addiu       $s1, $a0, -0x6480
    ctx->pc = 0x1fdf1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941568));
    // 0x1fdf20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fdf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf24: 0x0  nop
    ctx->pc = 0x1fdf24u;
    // NOP
label_1fdf28:
    // 0x1fdf28: 0xc07f1fe  jal         func_1FC7F8
    ctx->pc = 0x1FDF28u;
    SET_GPR_U32(ctx, 31, 0x1FDF30u);
    ctx->pc = 0x1FDF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF28u;
    // 0x1fdf2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC7F8u, 0x1FDF28u, 0x1FDF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF30u;
label_1fdf30:
    // 0x1fdf30: 0xa630002c  sh          $s0, 0x2C($s1)
    ctx->pc = 0x1fdf30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 16));
    // 0x1fdf34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fdf34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fdf38: 0x2e0200a0  sltiu       $v0, $s0, 0xA0
    ctx->pc = 0x1fdf38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x1fdf3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FDF3Cu;
    {
        const bool branch_taken_0x1fdf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF3Cu;
        // 0x1fdf40: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf3c) {
            ctx->pc = 0x1FDF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdf28;
        }
    }
    ctx->pc = 0x1FDF44u;
    // 0x1fdf44: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1fdf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1fdf48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fdf48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf4c: 0x2450c380  addiu       $s0, $v0, -0x3C80
    ctx->pc = 0x1fdf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951808));
label_1fdf50:
    // 0x1fdf50: 0xc07f1fe  jal         func_1FC7F8
    ctx->pc = 0x1FDF50u;
    SET_GPR_U32(ctx, 31, 0x1FDF58u);
    ctx->pc = 0x1FDF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF50u;
    // 0x1fdf54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC7F8u, 0x1FDF50u, 0x1FDF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF58u;
label_1fdf58:
    // 0x1fdf58: 0xa611002c  sh          $s1, 0x2C($s0)
    ctx->pc = 0x1fdf58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 17));
    // 0x1fdf5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fdf5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fdf60: 0x2e220200  sltiu       $v0, $s1, 0x200
    ctx->pc = 0x1fdf60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1fdf64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FDF64u;
    {
        const bool branch_taken_0x1fdf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF64u;
        // 0x1fdf68: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf64) {
            ctx->pc = 0x1FDF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdf50;
        }
    }
    ctx->pc = 0x1FDF6Cu;
    // 0x1fdf6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fdf6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fdf70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fdf70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdf74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fdf74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdf78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF7Cu;
        // 0x1fdf80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDF84u;
    // 0x1fdf84: 0x0  nop
    ctx->pc = 0x1fdf84u;
    // NOP
    ctx->pc = 0x1fdf88u;
}
