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

// Function: func_0013DF70
// Address: 0x13df70 - 0x13e010
void func_0013DF70_0x13df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013DF70_0x13df70");
#endif

    switch (ctx->pc) {
        case 0x13dfb0u: goto label_13dfb0;
        case 0x13dfc8u: goto label_13dfc8;
        default: break;
    }

    ctx->pc = 0x13df70u;

    // 0x13df70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13df74: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x13df74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x13df78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13df78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x13df7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13df80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13df80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df84: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13df84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x13df88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13df88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df8c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x13df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x13df90: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x13df90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13df94: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13df94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13df98: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x13df98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x13df9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13df9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13dfa0: 0x3c013bed  lui         $at, 0x3BED
    ctx->pc = 0x13dfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15341 << 16));
    // 0x13dfa4: 0x342172ca  ori         $at, $at, 0x72CA
    ctx->pc = 0x13dfa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29386);
    // 0x13dfa8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13dfa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13dfac: 0x0  nop
    ctx->pc = 0x13dfacu;
    // NOP
label_13dfb0:
    // 0x13dfb0: 0x2348018  mult        $s0, $s1, $s4
    ctx->pc = 0x13dfb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x13dfb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13dfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dfb8: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x13dfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x13dfbc: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x13dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x13dfc0: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x13DFC0u;
    SET_GPR_U32(ctx, 31, 0x13DFC8u);
    ctx->pc = 0x13DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFC0u;
    // 0x13dfc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x13DFC0u, 0x13DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFC8u;
label_13dfc8:
    // 0x13dfc8: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x13dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x13dfcc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x13dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13dfd0: 0xe45400d0  swc1        $f20, 0xD0($v0)
    ctx->pc = 0x13dfd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x13dfd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13dfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dfd8: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x13dfd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13dfdc: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x13dfdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x13dfe0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x13DFE0u;
    {
        const bool branch_taken_0x13dfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFE0u;
        // 0x13dfe4: 0xa61300d4  sh          $s3, 0xD4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 212), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfe0) {
            ctx->pc = 0x13DFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dfb0;
        }
    }
    ctx->pc = 0x13DFE8u;
    // 0x13dfe8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13dfe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13dfec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13dfecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13dff0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13dff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13dff4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13dff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dff8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x13dff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13dffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e000: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x13e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13e004: 0x3e00008  jr          $ra
    ctx->pc = 0x13E004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E004u;
        // 0x13e008: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E00Cu;
    // 0x13e00c: 0x0  nop
    ctx->pc = 0x13e00cu;
    // NOP
    ctx->pc = 0x13e010u;
}
