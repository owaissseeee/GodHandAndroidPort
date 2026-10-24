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

// Function: func_002BF478
// Address: 0x2bf478 - 0x2bf4c8
void func_002BF478_0x2bf478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF478_0x2bf478");
#endif

    switch (ctx->pc) {
        case 0x2bf4a8u: goto label_2bf4a8;
        case 0x2bf4b8u: goto label_2bf4b8;
        default: break;
    }

    ctx->pc = 0x2bf478u;

    // 0x2bf478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf47c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf484: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x2bf484u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2bf488: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF488u;
    {
        const bool branch_taken_0x2bf488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF488u;
        // 0x2bf48c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf488) {
            ctx->pc = 0x2BF4A0u;
            goto label_2bf4a0;
        }
    }
    ctx->pc = 0x2BF490u;
    // 0x2bf490: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF490u;
    {
        const bool branch_taken_0x2bf490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF490u;
        // 0x2bf494: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf490) {
            ctx->pc = 0x2BF4B0u;
            goto label_2bf4b0;
        }
    }
    ctx->pc = 0x2BF498u;
    // 0x2bf498: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF498u;
    {
        const bool branch_taken_0x2bf498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf498) {
            ctx->pc = 0x2BF4BCu;
            goto label_2bf4bc;
        }
    }
    ctx->pc = 0x2BF4A0u;
label_2bf4a0:
    // 0x2bf4a0: 0xc0afd32  jal         func_2BF4C8
    ctx->pc = 0x2BF4A0u;
    SET_GPR_U32(ctx, 31, 0x2BF4A8u);
    ctx->pc = 0x2BF4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF4C8u, 0x2BF4A0u, 0x2BF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4A8u;
label_2bf4a8:
    // 0x2bf4a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF4A8u;
    {
        const bool branch_taken_0x2bf4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4A8u;
        // 0x2bf4ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4a8) {
            ctx->pc = 0x2BF4BCu;
            goto label_2bf4bc;
        }
    }
    ctx->pc = 0x2BF4B0u;
label_2bf4b0:
    // 0x2bf4b0: 0xc0afd46  jal         func_2BF518
    ctx->pc = 0x2BF4B0u;
    SET_GPR_U32(ctx, 31, 0x2BF4B8u);
    ctx->pc = 0x2BF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF518u, 0x2BF4B0u, 0x2BF4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4B8u;
label_2bf4b8:
    // 0x2bf4b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf4bc:
    // 0x2bf4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4BCu;
        // 0x2bf4c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF4C4u;
    // 0x2bf4c4: 0x0  nop
    ctx->pc = 0x2bf4c4u;
    // NOP
    ctx->pc = 0x2bf4c8u;
}
