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

// Function: InitTLB
// Address: 0x3b7c18 - 0x3b7c58
void InitTLB_0x3b7c18(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTLB_0x3b7c18");
#endif

    if (__builtin_expect(ctx->pc != 0x3b7c18u, 0)) {
        switch (ctx->pc) {
            case 0x3b7c28u: goto label_3b7c28;
            case 0x3b7c3cu: goto label_3b7c3c;
            case 0x3b7c4cu: goto label_3b7c4c;
            default: break;
        }
    }


    // 0x3b7c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b7c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b7c20: 0xc0ec040  jal         func_3B0100
    ctx->pc = 0x3B7C20u;
    SET_GPR_U32(ctx, 31, 0x3B7C28u);
    if (!runtime->callDirectStatic(rdram, ctx, &GetMemorySize_0x3b0100, 0x3b0100u, 0x3b7c28u)) {
        return;
    }
label_3b7c28:
    // 0x3b7c28: 0x3c030200  lui         $v1, 0x200
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x3b7c2c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B7C2Cu;
    {
        const bool branch_taken_0x3b7c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b7c2c) {
            ctx->pc = 0x3B7C44u;
            goto label_3b7c44;
        }
    }
    // 0x3b7c34: 0xc0edf16  jal         func_3B7C58
    ctx->pc = 0x3B7C34u;
    SET_GPR_U32(ctx, 31, 0x3B7C3Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &InitTLB32MB_0x3b7c58, 0x3b7c58u, 0x3b7c3cu)) {
        return;
    }
label_3b7c3c:
    // 0x3b7c3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7C3Cu;
    {
        const bool branch_taken_0x3b7c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C3Cu;
        // 0x3b7c40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7c3c) {
            ctx->pc = 0x3B7C50u;
            goto label_3b7c50;
        }
    }
label_3b7c44:
    // 0x3b7c44: 0xc0ec044  jal         func_3B0110
    ctx->pc = 0x3B7C44u;
    SET_GPR_U32(ctx, 31, 0x3B7C4Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &InitTLB_0x3b0110, 0x3b0110u, 0x3b7c4cu)) {
        return;
    }
label_3b7c4c:
    // 0x3b7c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b7c50:
    // 0x3b7c50: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7C50u;
        // 0x3b7c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7C58u;
}