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

// Function: func_00380638
// Address: 0x380638 - 0x380678
void func_00380638_0x380638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380638_0x380638");
#endif

    switch (ctx->pc) {
        case 0x38066cu: goto label_38066c;
        default: break;
    }

    ctx->pc = 0x380638u;

    // 0x380638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x380638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38063c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38063cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x380640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380644: 0x24e7c3e0  addiu       $a3, $a3, -0x3C20
    ctx->pc = 0x380644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951904));
    // 0x380648: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x380648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38064c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x38064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x380650: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x380650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x380654: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x380654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x380658: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x380658u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x38065c: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x38065cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x380660: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x380660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x380664: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x380664u;
    SET_GPR_U32(ctx, 31, 0x38066Cu);
    ctx->pc = 0x380668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380664u;
    // 0x380668: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x380664u, 0x38066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38066Cu;
label_38066c:
    // 0x38066c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38066cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380670: 0x3e00008  jr          $ra
    ctx->pc = 0x380670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380670u;
        // 0x380674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380678u;
}
