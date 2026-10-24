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

// Function: func_0016F648
// Address: 0x16f648 - 0x16f698
void func_0016F648_0x16f648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016F648_0x16f648");
#endif

    switch (ctx->pc) {
        case 0x16f66cu: goto label_16f66c;
        case 0x16f684u: goto label_16f684;
        default: break;
    }

    ctx->pc = 0x16f648u;

    // 0x16f648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f64c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x16f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x16f650: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f654: 0x8c625788  lw          $v0, 0x5788($v1)
    ctx->pc = 0x16f654u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785788u));
    // 0x16f658: 0x24705788  addiu       $s0, $v1, 0x5788
    ctx->pc = 0x16f658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22408));
    // 0x16f65c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F65Cu;
    {
        const bool branch_taken_0x16f65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F65Cu;
        // 0x16f660: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f65c) {
            ctx->pc = 0x16F684u;
            goto label_16f684;
        }
    }
    ctx->pc = 0x16F664u;
    // 0x16f664: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x16F664u;
    SET_GPR_U32(ctx, 31, 0x16F66Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x16F664u, 0x16F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F66Cu;
label_16f66c:
    // 0x16f66c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16f670: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x16f670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x16f674: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x16f674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x16f678: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x16f678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x16f67c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x16F67Cu;
    SET_GPR_U32(ctx, 31, 0x16F684u);
    ctx->pc = 0x16F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F67Cu;
    // 0x16f680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x16F67Cu, 0x16F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F684u;
label_16f684:
    // 0x16f684: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16f684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f68c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f690: 0x3e00008  jr          $ra
    ctx->pc = 0x16F690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F690u;
        // 0x16f694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F698u;
}
