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

// Function: before__C9type_infoRC9type_info
// Address: 0x31f4e0 - 0x31f508
void before__C9type_infoRC9type_info_0x31f4e0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("before__C9type_infoRC9type_info_0x31f4e0");
#endif

    if (__builtin_expect(ctx->pc != 0x31f4e0u, 0)) {
        switch (ctx->pc) {
            case 0x31f4f4u: goto label_31f4f4;
            default: break;
        }
    }


    // 0x31f4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f4e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x31f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31f4ec: 0xc0e959e  jal         func_3A5678
    SET_GPR_U32(ctx, 31, 0x31F4F4u);
    ctx->pc = 0x31F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F4ECu;
    // 0x31f4f0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &strcmp_0x3a5678, 0x3a5678u, 0x31f4f4u)) {
        return;
    }
label_31f4f4:
    // 0x31f4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f4f8: 0x217c2  srl         $v0, $v0, 31
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x31f4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x31F4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4FCu;
        // 0x31f500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x31f504: 0x0  nop
    // NOP
    ctx->pc = 0x31f508u;
}