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

// Function: isEffectiveVer
// Address: 0x35d7b8 - 0x35d800
void isEffectiveVer_0x35d7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isEffectiveVer_0x35d7b8");
#endif

    switch (ctx->pc) {
        case 0x35d7ccu: goto label_35d7cc;
        default: break;
    }

    ctx->pc = 0x35d7b8u;

    // 0x35d7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d7c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35d7c4: 0xc0d7600  jal         func_35D800
    ctx->pc = 0x35D7C4u;
    SET_GPR_U32(ctx, 31, 0x35D7CCu);
    ctx->pc = 0x35D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D7C4u;
    // 0x35d7c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D800u, 0x35D7C4u, 0x35D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D7CCu;
label_35d7cc:
    // 0x35d7cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D7CCu;
    {
        const bool branch_taken_0x35d7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7CCu;
        // 0x35d7d0: 0x2404006b  addiu       $a0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d7cc) {
            ctx->pc = 0x35D7ECu;
            goto label_35d7ec;
        }
    }
    ctx->pc = 0x35D7D4u;
    // 0x35d7d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35d7d8: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D7D8u;
    {
        const bool branch_taken_0x35d7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x35D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7D8u;
        // 0x35d7dc: 0x2843006e  slti        $v1, $v0, 0x6E (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)110) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d7d8) {
            ctx->pc = 0x35D7E8u;
            goto label_35d7e8;
        }
    }
    ctx->pc = 0x35D7E0u;
    // 0x35d7e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35D7E0u;
    {
        const bool branch_taken_0x35d7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7E0u;
        // 0x35d7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d7e0) {
            ctx->pc = 0x35D7ECu;
            goto label_35d7ec;
        }
    }
    ctx->pc = 0x35D7E8u;
label_35d7e8:
    // 0x35d7e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35d7ec:
    // 0x35d7ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d7f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35d7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x35D7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7F4u;
        // 0x35d7f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D7FCu;
    // 0x35d7fc: 0x0  nop
    ctx->pc = 0x35d7fcu;
    // NOP
    ctx->pc = 0x35d800u;
}
