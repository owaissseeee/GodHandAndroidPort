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

// Function: func_001DF7D0
// Address: 0x1df7d0 - 0x1df820
void func_001DF7D0_0x1df7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DF7D0_0x1df7d0");
#endif

    switch (ctx->pc) {
        case 0x1df814u: goto label_1df814;
        default: break;
    }

    ctx->pc = 0x1df7d0u;

    // 0x1df7d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1df7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1df7d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df7d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df7d8: 0x8c427a0c  lw          $v0, 0x7A0C($v0)
    ctx->pc = 0x1df7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x1df7dc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1df7dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF7E0u;
    {
        const bool branch_taken_0x1df7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7E0u;
        // 0x1df7e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7e0) {
            ctx->pc = 0x1DF7F8u;
            goto label_1df7f8;
        }
    }
    ctx->pc = 0x1DF7E8u;
    // 0x1df7e8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF7E8u;
    {
        const bool branch_taken_0x1df7e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7E8u;
        // 0x1df7ec: 0x28420007  slti        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7e8) {
            ctx->pc = 0x1DF7F8u;
            goto label_1df7f8;
        }
    }
    ctx->pc = 0x1DF7F0u;
    // 0x1df7f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF7F0u;
    {
        const bool branch_taken_0x1df7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7F0u;
        // 0x1df7f4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7f0) {
            ctx->pc = 0x1DF804u;
            goto label_1df804;
        }
    }
    ctx->pc = 0x1DF7F8u;
label_1df7f8:
    // 0x1df7f8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1df7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1df7fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF7FCu;
    {
        const bool branch_taken_0x1df7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7FCu;
        // 0x1df800: 0x2402ff9f  addiu       $v0, $zero, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7fc) {
            ctx->pc = 0x1DF808u;
            goto label_1df808;
        }
    }
    ctx->pc = 0x1DF804u;
label_1df804:
    // 0x1df804: 0x2402ffb1  addiu       $v0, $zero, -0x4F
    ctx->pc = 0x1df804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967217));
label_1df808:
    // 0x1df808: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1df808u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1df80c: 0xc0b598c  jal         func_2D6630
    ctx->pc = 0x1DF80Cu;
    SET_GPR_U32(ctx, 31, 0x1DF814u);
    ctx->pc = 0x1DF810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF80Cu;
    // 0x1df810: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6630u, 0x1DF80Cu, 0x1DF814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF814u;
label_1df814:
    // 0x1df814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df818: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF818u;
        // 0x1df81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF820u;
}
