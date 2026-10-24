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

// Function: func_0035CE60
// Address: 0x35ce60 - 0x35cf70
void func_0035CE60_0x35ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035CE60_0x35ce60");
#endif

    switch (ctx->pc) {
        case 0x35ce98u: goto label_35ce98;
        case 0x35cf34u: goto label_35cf34;
        case 0x35cf48u: goto label_35cf48;
        default: break;
    }

    ctx->pc = 0x35ce60u;

    // 0x35ce60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ce64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ce64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ce68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ce68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35ce6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35ce6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35ce70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35ce74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35ce74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35ce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35ce7c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x35ce7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce80: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x35ce80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35ce84: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x35ce84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35ce8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35ce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35ce90: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x35CE90u;
    SET_GPR_U32(ctx, 31, 0x35CE98u);
    ctx->pc = 0x35CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CE90u;
    // 0x35ce94: 0x26302150  addiu       $s0, $s1, 0x2150 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x35CE90u, 0x35CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE98u;
label_35ce98:
    // 0x35ce98: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35ce98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35ce9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35ce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cea0: 0x34a50191  ori         $a1, $a1, 0x191
    ctx->pc = 0x35cea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)401);
    // 0x35cea4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35CEA4u;
    {
        const bool branch_taken_0x35cea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CEA4u;
        // 0x35cea8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cea4) {
            ctx->pc = 0x35CED0u;
            goto label_35ced0;
        }
    }
    ctx->pc = 0x35CEACu;
    // 0x35ceac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ceacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ceb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ceb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ceb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ceb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ceb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35ceb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35cebc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35cebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cec0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35cec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35cec4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35cec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cec8: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35CEC8u;
    ctx->pc = 0x35CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CEC8u;
    // 0x35cecc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35CEC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35CED0u;
label_35ced0:
    // 0x35ced0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x35ced0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35ced4: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35CED4u;
    {
        const bool branch_taken_0x35ced4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x35CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CED4u;
        // 0x35ced8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ced4) {
            ctx->pc = 0x35CF10u;
            goto label_35cf10;
        }
    }
    ctx->pc = 0x35CEDCu;
    // 0x35cedc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35cedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35cee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35cee4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35cee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35cee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ceec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ceecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cef0: 0x34a50602  ori         $a1, $a1, 0x602
    ctx->pc = 0x35cef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1538);
    // 0x35cef4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35cef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35cef8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35cef8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cefc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35cefcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35cf00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35cf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cf04: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35CF04u;
    ctx->pc = 0x35CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF04u;
    // 0x35cf08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35CF04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35CF0Cu;
    // 0x35cf0c: 0x0  nop
    ctx->pc = 0x35cf0cu;
    // NOP
label_35cf10:
    // 0x35cf10: 0x158100  sll         $s0, $s5, 4
    ctx->pc = 0x35cf10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x35cf14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35cf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf18: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x35cf18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35cf1c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35cf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf20: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x35cf20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x35cf24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35cf24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf2c: 0xc0d746c  jal         func_35D1B0
    ctx->pc = 0x35CF2Cu;
    SET_GPR_U32(ctx, 31, 0x35CF34u);
    ctx->pc = 0x35CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF2Cu;
    // 0x35cf30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1B0u, 0x35CF2Cu, 0x35CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF34u;
label_35cf34:
    // 0x35cf34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35cf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35cf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf3c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x35cf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf40: 0xc0d3082  jal         func_34C208
    ctx->pc = 0x35CF40u;
    SET_GPR_U32(ctx, 31, 0x35CF48u);
    ctx->pc = 0x35CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF40u;
    // 0x35cf44: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C208u, 0x35CF40u, 0x35CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF48u;
label_35cf48:
    // 0x35cf48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35cf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35cf4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cf50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35cf50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35cf54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35cf54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cf58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35cf58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35cf5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35cf5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cf60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35cf60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35cf64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35cf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cf68: 0x3e00008  jr          $ra
    ctx->pc = 0x35CF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF68u;
        // 0x35cf6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CF70u;
}
