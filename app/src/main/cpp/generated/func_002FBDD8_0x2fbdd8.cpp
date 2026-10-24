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

// Function: func_002FBDD8
// Address: 0x2fbdd8 - 0x2fbe08
void func_002FBDD8_0x2fbdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FBDD8_0x2fbdd8");
#endif

    switch (ctx->pc) {
        case 0x2fbdfcu: goto label_2fbdfc;
        default: break;
    }

    ctx->pc = 0x2fbdd8u;

    // 0x2fbdd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fbdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fbddc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2fbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2fbde0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fbde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fbde4: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x2fbde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x2fbde8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2fbde8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2fbdec: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBDECu;
    {
        const bool branch_taken_0x2fbdec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDECu;
        // 0x2fbdf0: 0xac8200f0  sw          $v0, 0xF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbdec) {
            ctx->pc = 0x2FBDFCu;
            goto label_2fbdfc;
        }
    }
    ctx->pc = 0x2FBDF4u;
    // 0x2fbdf4: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2FBDF4u;
    SET_GPR_U32(ctx, 31, 0x2FBDFCu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2FBDF4u, 0x2FBDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBDFCu;
label_2fbdfc:
    // 0x2fbdfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fbdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbe00: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBE00u;
        // 0x2fbe04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBE08u;
}
