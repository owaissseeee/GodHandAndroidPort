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

// Function: get_column__9streambuf
// Address: 0x38b4a0 - 0x38b4e0
void get_column__9streambuf_0x38b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_column__9streambuf_0x38b4a0");
#endif

    switch (ctx->pc) {
        case 0x38b4ccu: goto label_38b4cc;
        default: break;
    }

    ctx->pc = 0x38b4a0u;

    // 0x38b4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b4a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b4a8: 0x94820048  lhu         $v0, 0x48($a0)
    ctx->pc = 0x38b4a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x38b4ac: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x38B4ACu;
    {
        const bool branch_taken_0x38b4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38b4ac) {
            ctx->pc = 0x38B4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B4ACu;
            // 0x38b4b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B4D4u;
            goto label_38b4d4;
        }
    }
    ctx->pc = 0x38B4B4u;
    // 0x38b4b4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x38b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38b4b8: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x38b4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x38b4bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38b4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b4c0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x38b4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x38b4c4: 0xc0e3384  jal         func_38CE10
    ctx->pc = 0x38B4C4u;
    SET_GPR_U32(ctx, 31, 0x38B4CCu);
    ctx->pc = 0x38B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B4C4u;
    // 0x38b4c8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE10u, 0x38B4C4u, 0x38B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B4CCu;
label_38b4cc:
    // 0x38b4cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38B4CCu;
    {
        const bool branch_taken_0x38b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4CCu;
        // 0x38b4d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b4cc) {
            ctx->pc = 0x38B4D8u;
            goto label_38b4d8;
        }
    }
    ctx->pc = 0x38B4D4u;
label_38b4d4:
    // 0x38b4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38b4d8:
    // 0x38b4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x38B4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B4D8u;
        // 0x38b4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B4E0u;
}
