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

// Function: func_0038A698
// Address: 0x38a698 - 0x38a6d0
void func_0038A698_0x38a698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038A698_0x38a698");
#endif

    switch (ctx->pc) {
        case 0x38a6bcu: goto label_38a6bc;
        default: break;
    }

    ctx->pc = 0x38a698u;

    // 0x38a698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a69c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38a69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38a6a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a6a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a6a8: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x38a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x38a6ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a6b0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x38a6b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x38a6b4: 0xc0e3aca  jal         func_38EB28
    ctx->pc = 0x38A6B4u;
    SET_GPR_U32(ctx, 31, 0x38A6BCu);
    ctx->pc = 0x38A6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A6B4u;
    // 0x38a6b8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x38A6B4u, 0x38A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A6BCu;
label_38a6bc:
    // 0x38a6bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a6bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a6c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a6c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38a6c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6C8u;
        // 0x38a6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A6D0u;
}
