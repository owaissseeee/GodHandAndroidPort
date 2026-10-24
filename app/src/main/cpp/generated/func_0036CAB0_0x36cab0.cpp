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

// Function: func_0036CAB0
// Address: 0x36cab0 - 0x36cb08
void func_0036CAB0_0x36cab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CAB0_0x36cab0");
#endif

    switch (ctx->pc) {
        case 0x36cac4u: goto label_36cac4;
        case 0x36cad8u: goto label_36cad8;
        default: break;
    }

    ctx->pc = 0x36cab0u;

    // 0x36cab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36cab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36cabc: 0xc0db2c2  jal         func_36CB08
    ctx->pc = 0x36CABCu;
    SET_GPR_U32(ctx, 31, 0x36CAC4u);
    ctx->pc = 0x36CB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CB08u, 0x36CABCu, 0x36CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAC4u;
label_36cac4:
    // 0x36cac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36cac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cac8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x36CAC8u;
    {
        const bool branch_taken_0x36cac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CAC8u;
        // 0x36cacc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cac8) {
            ctx->pc = 0x36CAF8u;
            goto label_36caf8;
        }
    }
    ctx->pc = 0x36CAD0u;
    // 0x36cad0: 0xc0db2d6  jal         func_36CB58
    ctx->pc = 0x36CAD0u;
    SET_GPR_U32(ctx, 31, 0x36CAD8u);
    ctx->pc = 0x36CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CB58u, 0x36CAD0u, 0x36CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CAD8u;
label_36cad8:
    // 0x36cad8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x36cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x36cadc: 0x24631ec8  addiu       $v1, $v1, 0x1EC8
    ctx->pc = 0x36cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7880));
    // 0x36cae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36cae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cae4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F1EC8u));
    // 0x36cae8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36cae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36caec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36caecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36caf0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36caf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3F1EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F1EC8u, _value); } while (0);
    // 0x36caf4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x36caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_36caf8:
    // 0x36caf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36caf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cafc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36cafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cb00: 0x3e00008  jr          $ra
    ctx->pc = 0x36CB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB00u;
        // 0x36cb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CB08u;
}
