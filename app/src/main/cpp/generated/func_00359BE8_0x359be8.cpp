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

// Function: func_00359BE8
// Address: 0x359be8 - 0x359c58
void func_00359BE8_0x359be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359BE8_0x359be8");
#endif

    switch (ctx->pc) {
        case 0x359c04u: goto label_359c04;
        case 0x359c40u: goto label_359c40;
        default: break;
    }

    ctx->pc = 0x359be8u;

    // 0x359be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359bf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x359bfc: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x359BFCu;
    SET_GPR_U32(ctx, 31, 0x359C04u);
    ctx->pc = 0x359C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BFCu;
    // 0x359c00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x359BFCu, 0x359C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359C04u;
label_359c04:
    // 0x359c04: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x359c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x359c08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x359C08u;
    {
        const bool branch_taken_0x359c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359C08u;
        // 0x359c0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359c08) {
            ctx->pc = 0x359C28u;
            goto label_359c28;
        }
    }
    ctx->pc = 0x359C10u;
    // 0x359c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359c14: 0x34a5015b  ori         $a1, $a1, 0x15B
    ctx->pc = 0x359c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)347);
    // 0x359c18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359c20: 0x80d375c  j           func_34DD70
    ctx->pc = 0x359C20u;
    ctx->pc = 0x359C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C20u;
    // 0x359c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x359C20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359C28u;
label_359c28:
    // 0x359c28: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x359c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x359c2c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x359C2Cu;
    {
        const bool branch_taken_0x359c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x359c2c) {
            ctx->pc = 0x359C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359C2Cu;
            // 0x359c30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359C48u;
            goto label_359c48;
        }
    }
    ctx->pc = 0x359C34u;
    // 0x359c34: 0xac710dd0  sw          $s1, 0xDD0($v1)
    ctx->pc = 0x359c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3536), GPR_U32(ctx, 17));
    // 0x359c38: 0xc0d677c  jal         func_359DF0
    ctx->pc = 0x359C38u;
    SET_GPR_U32(ctx, 31, 0x359C40u);
    ctx->pc = 0x359C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C38u;
    // 0x359c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359DF0u, 0x359C38u, 0x359C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359C40u;
label_359c40:
    // 0x359c40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_359c48:
    // 0x359c48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359c48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359c50: 0x3e00008  jr          $ra
    ctx->pc = 0x359C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359C50u;
        // 0x359c54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359C58u;
}
