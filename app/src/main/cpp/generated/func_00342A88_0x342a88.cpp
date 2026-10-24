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

// Function: func_00342A88
// Address: 0x342a88 - 0x342af0
void func_00342A88_0x342a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342A88_0x342a88");
#endif

    switch (ctx->pc) {
        case 0x342a98u: goto label_342a98;
        default: break;
    }

    ctx->pc = 0x342a88u;

    // 0x342a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342a8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342a90: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x342A90u;
    SET_GPR_U32(ctx, 31, 0x342A98u);
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x342A90u, 0x342A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A98u;
label_342a98:
    // 0x342a98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x342a98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a9c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x342a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x342aa0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x342AA0u;
    {
        const bool branch_taken_0x342aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AA0u;
        // 0x342aa4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342aa0) {
            ctx->pc = 0x342AE4u;
            goto label_342ae4;
        }
    }
    ctx->pc = 0x342AA8u;
    // 0x342aa8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x342aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x342aac: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x342aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x342ab0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x342ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342ab4: 0x8c6370a0  lw          $v1, 0x70A0($v1)
    ctx->pc = 0x342ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28832)));
    // 0x342ab8: 0x600008  jr          $v1
    ctx->pc = 0x342AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x342AC0u: goto label_342ac0;
            case 0x342AC8u: goto label_342ac8;
            case 0x342AD0u: goto label_342ad0;
            case 0x342AD8u: goto label_342ad8;
            case 0x342AE0u: goto label_342ae0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342AB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x342AC0u;
label_342ac0:
    // 0x342ac0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x342AC0u;
    {
        const bool branch_taken_0x342ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AC0u;
        // 0x342ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ac0) {
            ctx->pc = 0x342AE4u;
            goto label_342ae4;
        }
    }
    ctx->pc = 0x342AC8u;
label_342ac8:
    // 0x342ac8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x342AC8u;
    {
        const bool branch_taken_0x342ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AC8u;
        // 0x342acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ac8) {
            ctx->pc = 0x342AE4u;
            goto label_342ae4;
        }
    }
    ctx->pc = 0x342AD0u;
label_342ad0:
    // 0x342ad0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x342AD0u;
    {
        const bool branch_taken_0x342ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AD0u;
        // 0x342ad4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ad0) {
            ctx->pc = 0x342AE4u;
            goto label_342ae4;
        }
    }
    ctx->pc = 0x342AD8u;
label_342ad8:
    // 0x342ad8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x342AD8u;
    {
        const bool branch_taken_0x342ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AD8u;
        // 0x342adc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342ad8) {
            ctx->pc = 0x342AE4u;
            goto label_342ae4;
        }
    }
    ctx->pc = 0x342AE0u;
label_342ae0:
    // 0x342ae0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x342ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_342ae4:
    // 0x342ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x342AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342AE8u;
        // 0x342aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342AF0u;
}
