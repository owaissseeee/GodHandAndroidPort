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

// Function: func_002BB020
// Address: 0x2bb020 - 0x2bb040
void func_002BB020_0x2bb020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB020_0x2bb020");
#endif

    switch (ctx->pc) {
        case 0x2bb034u: goto label_2bb034;
        default: break;
    }

    ctx->pc = 0x2bb020u;

    // 0x2bb020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bb020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bb024: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bb024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bb02c: 0xc0ae90a  jal         func_2BA428
    ctx->pc = 0x2BB02Cu;
    SET_GPR_U32(ctx, 31, 0x2BB034u);
    ctx->pc = 0x2BB030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB02Cu;
    // 0x2bb030: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA428u, 0x2BB02Cu, 0x2BB034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB034u;
label_2bb034:
    // 0x2bb034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb038: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB038u;
        // 0x2bb03c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB040u;
}
