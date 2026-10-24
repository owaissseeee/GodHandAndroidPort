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

// Function: SJ_SearchTag
// Address: 0x33adf8 - 0x33aed0
void SJ_SearchTag_0x33adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SJ_SearchTag_0x33adf8");
#endif

    switch (ctx->pc) {
        case 0x33ae40u: goto label_33ae40;
        case 0x33ae50u: goto label_33ae50;
        case 0x33ae60u: goto label_33ae60;
        case 0x33ae84u: goto label_33ae84;
        case 0x33ae9cu: goto label_33ae9c;
        default: break;
    }

    ctx->pc = 0x33adf8u;

    // 0x33adf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33adf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33adfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33adfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33ae00: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33ae00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ae04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33ae08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33ae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33ae0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33ae0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ae10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33ae10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33ae14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x33ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x33ae18: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x33ae18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ae1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33ae20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33ae24: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x33ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x33ae28: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x33ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x33ae2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33ae30: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33ae34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33ae34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ae38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33AE38u;
    {
        const bool branch_taken_0x33ae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE38u;
        // 0x33ae3c: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae38) {
            ctx->pc = 0x33AE68u;
            goto label_33ae68;
        }
    }
    ctx->pc = 0x33AE40u;
label_33ae40:
    // 0x33ae40: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x33AE40u;
    {
        const bool branch_taken_0x33ae40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ae40) {
            ctx->pc = 0x33AE58u;
            goto label_33ae58;
        }
    }
    ctx->pc = 0x33AE48u;
    // 0x33ae48: 0xc0e96f6  jal         func_3A5BD8
    ctx->pc = 0x33AE48u;
    SET_GPR_U32(ctx, 31, 0x33AE50u);
    ctx->pc = 0x3A5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5BD8u, 0x33AE48u, 0x33AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE50u;
label_33ae50:
    // 0x33ae50: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x33AE50u;
    {
        const bool branch_taken_0x33ae50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ae50) {
            ctx->pc = 0x33AE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AE50u;
            // 0x33ae54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AEA8u;
            goto label_33aea8;
        }
    }
    ctx->pc = 0x33AE58u;
label_33ae58:
    // 0x33ae58: 0xc0ceb42  jal         func_33AD08
    ctx->pc = 0x33AE58u;
    SET_GPR_U32(ctx, 31, 0x33AE60u);
    ctx->pc = 0x33AE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE58u;
    // 0x33ae5c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AD08u, 0x33AE58u, 0x33AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE60u;
label_33ae60:
    // 0x33ae60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33ae64: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x33ae64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_33ae68:
    // 0x33ae68: 0x214882b  sltu        $s1, $s0, $s4
    ctx->pc = 0x33ae68u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x33ae6c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x33AE6Cu;
    {
        const bool branch_taken_0x33ae6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE6Cu;
        // 0x33ae70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae6c) {
            ctx->pc = 0x33AEA0u;
            goto label_33aea0;
        }
    }
    ctx->pc = 0x33AE74u;
    // 0x33ae74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ae78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33ae78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ae7c: 0xc0e96f6  jal         func_3A5BD8
    ctx->pc = 0x33AE7Cu;
    SET_GPR_U32(ctx, 31, 0x33AE84u);
    ctx->pc = 0x33AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE7Cu;
    // 0x33ae80: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5BD8u, 0x33AE7Cu, 0x33AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE84u;
label_33ae84:
    // 0x33ae84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ae88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33ae88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ae8c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x33AE8Cu;
    {
        const bool branch_taken_0x33ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE8Cu;
        // 0x33ae90: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae8c) {
            ctx->pc = 0x33AE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ae40;
        }
    }
    ctx->pc = 0x33AE94u;
    // 0x33ae94: 0xc0ceb70  jal         func_33ADC0
    ctx->pc = 0x33AE94u;
    SET_GPR_U32(ctx, 31, 0x33AE9Cu);
    ctx->pc = 0x33AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AE94u;
    // 0x33ae98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ADC0u, 0x33AE94u, 0x33AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE9Cu;
label_33ae9c:
    // 0x33ae9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33ae9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33aea0:
    // 0x33aea0: 0x211100b  movn        $v0, $s0, $s1
    ctx->pc = 0x33aea0u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x33aea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33aea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33aea8:
    // 0x33aea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33aea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33aeac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33aeacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33aeb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33aeb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33aeb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33aeb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33aeb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x33aeb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33aebc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33aebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33aec0: 0x3e00008  jr          $ra
    ctx->pc = 0x33AEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEC0u;
        // 0x33aec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AEC8u;
    // 0x33aec8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33aec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33aecc: 0x0  nop
    ctx->pc = 0x33aeccu;
    // NOP
    ctx->pc = 0x33aed0u;
}
