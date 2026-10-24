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

// Function: sceMpegAddCallback
// Address: 0x39aad8 - 0x39ab20
void sceMpegAddCallback_0x39aad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMpegAddCallback_0x39aad8");
#endif

    ctx->pc = 0x39aad8u;

    // 0x39aad8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x39aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x39aadc: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x39aadcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x39aae0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x39aae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39aae4: 0x2503000c  addiu       $v1, $t0, 0xC
    ctx->pc = 0x39aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x39aae8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39aaec: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x39aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x39aaf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39aaf4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x39aaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x39aaf8: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x39aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x39aafc: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x39aafcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ab00: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x39ab00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ab04: 0x3e00008  jr          $ra
    ctx->pc = 0x39AB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB04u;
        // 0x39ab08: 0xad030014  sw          $v1, 0x14($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AB0Cu;
    // 0x39ab0c: 0x0  nop
    ctx->pc = 0x39ab0cu;
    // NOP
    // 0x39ab10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39ab14: 0x0  nop
    ctx->pc = 0x39ab14u;
    // NOP
    // 0x39ab18: 0x8c62087c  lw          $v0, 0x87C($v1)
    ctx->pc = 0x39ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2172)));
    // 0x39ab1c: 0x0  nop
    ctx->pc = 0x39ab1cu;
    // NOP
    ctx->pc = 0x39ab20u;
}
