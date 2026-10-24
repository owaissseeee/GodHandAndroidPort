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

// Function: func_001500C0
// Address: 0x1500c0 - 0x150100
void func_001500C0_0x1500c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001500C0_0x1500c0");
#endif

    switch (ctx->pc) {
        case 0x1500e8u: goto label_1500e8;
        default: break;
    }

    ctx->pc = 0x1500c0u;

    // 0x1500c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1500c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1500c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1500c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1500c8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x1500c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x1500cc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1500ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1500d0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1500d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1500d4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1500D4u;
    {
        const bool branch_taken_0x1500d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1500D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500D4u;
        // 0x1500d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500d4) {
            ctx->pc = 0x1500F0u;
            goto label_1500f0;
        }
    }
    ctx->pc = 0x1500DCu;
    // 0x1500dc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1500dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1500e0: 0xc05414e  jal         func_150538
    ctx->pc = 0x1500E0u;
    SET_GPR_U32(ctx, 31, 0x1500E8u);
    ctx->pc = 0x1500E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500E0u;
    // 0x1500e4: 0x24846470  addiu       $a0, $a0, 0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150538u, 0x1500E0u, 0x1500E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500E8u;
label_1500e8:
    // 0x1500e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1500E8u;
    {
        const bool branch_taken_0x1500e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500E8u;
        // 0x1500ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500e8) {
            ctx->pc = 0x1500F8u;
            goto label_1500f8;
        }
    }
    ctx->pc = 0x1500F0u;
label_1500f0:
    // 0x1500f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1500f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1500f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1500f8:
    // 0x1500f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1500F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1500FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500F8u;
        // 0x1500fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1500F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150100u;
}
