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

// Function: func_0038A660
// Address: 0x38a660 - 0x38a698
void func_0038A660_0x38a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038A660_0x38a660");
#endif

    switch (ctx->pc) {
        case 0x38a684u: goto label_38a684;
        default: break;
    }

    ctx->pc = 0x38a660u;

    // 0x38a660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38a664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38a668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a66c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a670: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x38a670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x38a674: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a678: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x38a678u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x38a67c: 0xc0e3aca  jal         func_38EB28
    ctx->pc = 0x38A67Cu;
    SET_GPR_U32(ctx, 31, 0x38A684u);
    ctx->pc = 0x38A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A67Cu;
    // 0x38a680: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x38A67Cu, 0x38A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A684u;
label_38a684:
    // 0x38a684: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a68c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38a68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a690: 0x3e00008  jr          $ra
    ctx->pc = 0x38A690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A690u;
        // 0x38a694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A698u;
}
