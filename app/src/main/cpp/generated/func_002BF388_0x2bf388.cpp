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

// Function: func_002BF388
// Address: 0x2bf388 - 0x2bf3d0
void func_002BF388_0x2bf388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF388_0x2bf388");
#endif

    switch (ctx->pc) {
        case 0x2bf3b4u: goto label_2bf3b4;
        case 0x2bf3c4u: goto label_2bf3c4;
        default: break;
    }

    ctx->pc = 0x2bf388u;

    // 0x2bf388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf38c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf390: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x2bf390u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2bf394: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF394u;
    {
        const bool branch_taken_0x2bf394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF394u;
        // 0x2bf398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf394) {
            ctx->pc = 0x2BF3ACu;
            goto label_2bf3ac;
        }
    }
    ctx->pc = 0x2BF39Cu;
    // 0x2bf39c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF39Cu;
    {
        const bool branch_taken_0x2bf39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF39Cu;
        // 0x2bf3a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf39c) {
            ctx->pc = 0x2BF3BCu;
            goto label_2bf3bc;
        }
    }
    ctx->pc = 0x2BF3A4u;
    // 0x2bf3a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF3A4u;
    {
        const bool branch_taken_0x2bf3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf3a4) {
            ctx->pc = 0x2BF3C8u;
            goto label_2bf3c8;
        }
    }
    ctx->pc = 0x2BF3ACu;
label_2bf3ac:
    // 0x2bf3ac: 0xc0afcf4  jal         func_2BF3D0
    ctx->pc = 0x2BF3ACu;
    SET_GPR_U32(ctx, 31, 0x2BF3B4u);
    ctx->pc = 0x2BF3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF3D0u, 0x2BF3ACu, 0x2BF3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3B4u;
label_2bf3b4:
    // 0x2bf3b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF3B4u;
    {
        const bool branch_taken_0x2bf3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3B4u;
        // 0x2bf3b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3b4) {
            ctx->pc = 0x2BF3C8u;
            goto label_2bf3c8;
        }
    }
    ctx->pc = 0x2BF3BCu;
label_2bf3bc:
    // 0x2bf3bc: 0xc0afd08  jal         func_2BF420
    ctx->pc = 0x2BF3BCu;
    SET_GPR_U32(ctx, 31, 0x2BF3C4u);
    ctx->pc = 0x2BF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF420u, 0x2BF3BCu, 0x2BF3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF3C4u;
label_2bf3c4:
    // 0x2bf3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf3c8:
    // 0x2bf3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3C8u;
        // 0x2bf3cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF3D0u;
}
