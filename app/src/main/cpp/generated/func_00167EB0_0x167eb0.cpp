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

// Function: func_00167EB0
// Address: 0x167eb0 - 0x167ee8
void func_00167EB0_0x167eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00167EB0_0x167eb0");
#endif

    switch (ctx->pc) {
        case 0x167ec4u: goto label_167ec4;
        case 0x167eccu: goto label_167ecc;
        default: break;
    }

    ctx->pc = 0x167eb0u;

    // 0x167eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167eb4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x167eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x167eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167ebc: 0xc07f1b2  jal         func_1FC6C8
    ctx->pc = 0x167EBCu;
    SET_GPR_U32(ctx, 31, 0x167EC4u);
    ctx->pc = 0x167EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167EBCu;
    // 0x167ec0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC6C8u, 0x167EBCu, 0x167EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167EC4u;
label_167ec4:
    // 0x167ec4: 0xc0dd5c0  jal         func_375700
    ctx->pc = 0x167EC4u;
    SET_GPR_U32(ctx, 31, 0x167ECCu);
    ctx->pc = 0x167EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167EC4u;
    // 0x167ec8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375700u, 0x167EC4u, 0x167ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167ECCu;
label_167ecc:
    // 0x167ecc: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x167eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x167ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167ed8: 0xa06285f8  sb          $v0, -0x7A08($v1)
    ctx->pc = 0x167ed8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5E85F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5E85F8u, _value); } while (0);
    // 0x167edc: 0x3e00008  jr          $ra
    ctx->pc = 0x167EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EDCu;
        // 0x167ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167EE4u;
    // 0x167ee4: 0x0  nop
    ctx->pc = 0x167ee4u;
    // NOP
    ctx->pc = 0x167ee8u;
}
