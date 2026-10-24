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

// Function: func_0035AEE0
// Address: 0x35aee0 - 0x35af68
void func_0035AEE0_0x35aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035AEE0_0x35aee0");
#endif

    switch (ctx->pc) {
        case 0x35aefcu: goto label_35aefc;
        case 0x35af34u: goto label_35af34;
        case 0x35af4cu: goto label_35af4c;
        default: break;
    }

    ctx->pc = 0x35aee0u;

    // 0x35aee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35aee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35aee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35aee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aeec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35aeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35aef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35aef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35aef4: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x35AEF4u;
    SET_GPR_U32(ctx, 31, 0x35AEFCu);
    ctx->pc = 0x35AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEF4u;
    // 0x35aef8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x35AEF4u, 0x35AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEFCu;
label_35aefc:
    // 0x35aefc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35aefcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35af00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35af00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x35af04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35af08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35AF08u;
    {
        const bool branch_taken_0x35af08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF08u;
        // 0x35af0c: 0x34a50123  ori         $a1, $a1, 0x123 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)291);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35af08) {
            ctx->pc = 0x35AF28u;
            goto label_35af28;
        }
    }
    ctx->pc = 0x35AF10u;
    // 0x35af10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35af10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35af14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35af14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35af18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35af18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35af1c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35AF1Cu;
    ctx->pc = 0x35AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF1Cu;
    // 0x35af20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35AF1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35AF24u;
    // 0x35af24: 0x0  nop
    ctx->pc = 0x35af24u;
    // NOP
label_35af28:
    // 0x35af28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35af28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af2c: 0xc0d6c36  jal         func_35B0D8
    ctx->pc = 0x35AF2Cu;
    SET_GPR_U32(ctx, 31, 0x35AF34u);
    ctx->pc = 0x35AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF2Cu;
    // 0x35af30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0D8u, 0x35AF2Cu, 0x35AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF34u;
label_35af34:
    // 0x35af34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af38: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x35af38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35af3c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35AF3Cu;
    {
        const bool branch_taken_0x35af3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF3Cu;
        // 0x35af40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35af3c) {
            ctx->pc = 0x35AF4Cu;
            goto label_35af4c;
        }
    }
    ctx->pc = 0x35AF44u;
    // 0x35af44: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x35AF44u;
    SET_GPR_U32(ctx, 31, 0x35AF4Cu);
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x35AF44u, 0x35AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF4Cu;
label_35af4c:
    // 0x35af4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35af4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35af50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35af50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35af54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35af58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35af58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35af5c: 0x3e00008  jr          $ra
    ctx->pc = 0x35AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF5Cu;
        // 0x35af60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AF64u;
    // 0x35af64: 0x0  nop
    ctx->pc = 0x35af64u;
    // NOP
    ctx->pc = 0x35af68u;
}
