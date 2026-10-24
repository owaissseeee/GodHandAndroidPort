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

// Function: cOm71_SetMotionKokeru
// Address: 0x1b2050 - 0x1b20a8
void cOm71_SetMotionKokeru_0x1b2050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm71_SetMotionKokeru_0x1b2050");
#endif

    switch (ctx->pc) {
        case 0x1b2088u: goto label_1b2088;
        default: break;
    }

    ctx->pc = 0x1b2050u;

    // 0x1b2050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2054: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2058: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b2058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b205c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b205cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b2060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2068: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b2068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b206c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1b206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1b2070: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b2070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2074: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x1b2074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1b2078: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x1b2078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1b207c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b207cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b2080: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1B2080u;
    SET_GPR_U32(ctx, 31, 0x1B2088u);
    ctx->pc = 0x1B2084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2080u;
    // 0x1b2084: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1B2080u, 0x1B2088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2088u;
label_1b2088:
    // 0x1b2088: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1b2088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b208c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b208cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2090: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1b2090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1b2094: 0xae020600  sw          $v0, 0x600($s0)
    ctx->pc = 0x1b2094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
    // 0x1b2098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b2098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b209c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B209Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B209Cu;
        // 0x1b20a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B209Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B20A4u;
    // 0x1b20a4: 0x0  nop
    ctx->pc = 0x1b20a4u;
    // NOP
    ctx->pc = 0x1b20a8u;
}
