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

// Function: func_003261A8
// Address: 0x3261a8 - 0x3261f0
void func_003261A8_0x3261a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003261A8_0x3261a8");
#endif

    if (__builtin_expect(ctx->pc != 0x3261a8u, 0)) {
        switch (ctx->pc) {
            case 0x3261ccu: goto label_3261cc;
            default: break;
        }
    }


    // 0x3261a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3261ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3261acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3261b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3261b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3261b4: 0x52080  sll         $a0, $a1, 2
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3261b8: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3261bc: 0x441021  addu        $v0, $v0, $a0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3261c0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3261c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3261c4: 0xc0cebdc  jal         func_33AF70
    SET_GPR_U32(ctx, 31, 0x3261CCu);
    ctx->pc = 0x3261C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261C4u;
    // 0x3261c8: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SJRMT_GetNumData_0x33af70, 0x33af70u, 0x3261ccu)) {
        return;
    }
    ctx->pc = 0x3261CCu;
label_3261cc:
    // 0x3261cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3261ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3261d0: 0x21042  srl         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3261d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3261D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3261D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261D4u;
        // 0x3261d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3261D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x3261dc: 0x0  nop
    // NOP
    // 0x3261e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3261e4: 0x0  nop
    // NOP
    // 0x3261e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3261ec: 0x0  nop
    // NOP
    ctx->pc = 0x3261f0u;
}