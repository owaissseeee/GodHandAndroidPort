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

// Function: cCollisionSolid
// Address: 0x133988 - 0x1339c0
void cCollisionSolid_0x133988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionSolid_0x133988");
#endif

    ctx->pc = 0x133988u;

    // 0x133988: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x133988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x13398c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13398cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x133990: 0x2442d808  addiu       $v0, $v0, -0x27F8
    ctx->pc = 0x133990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957064));
    // 0x133994: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x133994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x133998: 0xf8800010  sqc2        $vf0, 0x10($a0)
    ctx->pc = 0x133998u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13399c: 0xf8800020  sqc2        $vf0, 0x20($a0)
    ctx->pc = 0x13399cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1339a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1339a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1339a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1339a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1339a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1339ac: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1339acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1339b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1339b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1339b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1339B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1339B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339B4u;
        // 0x1339b8: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1339B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1339BCu;
    // 0x1339bc: 0x0  nop
    ctx->pc = 0x1339bcu;
    // NOP
    ctx->pc = 0x1339c0u;
}
