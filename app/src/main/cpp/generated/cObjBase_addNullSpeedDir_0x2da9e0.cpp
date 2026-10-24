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

// Function: cObjBase_addNullSpeedDir
// Address: 0x2da9e0 - 0x2daa40
void cObjBase_addNullSpeedDir_0x2da9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_addNullSpeedDir_0x2da9e0");
#endif

    switch (ctx->pc) {
        case 0x2daa18u: goto label_2daa18;
        case 0x2daa28u: goto label_2daa28;
        default: break;
    }

    ctx->pc = 0x2da9e0u;

    // 0x2da9e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2da9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2da9e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2da9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2da9e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2da9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da9ec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2da9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2da9f0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2da9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2da9f4: 0x92080140  lbu         $t0, 0x140($s0)
    ctx->pc = 0x2da9f4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2da9f8: 0x26070110  addiu       $a3, $s0, 0x110
    ctx->pc = 0x2da9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2da9fc: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x2da9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2daa00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2daa00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daa04: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2daa04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2daa08: 0xe7ac0044  swc1        $f12, 0x44($sp)
    ctx->pc = 0x2daa08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2daa0c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2daa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2daa10: 0xc051e92  jal         func_147A48
    ctx->pc = 0x2DAA10u;
    SET_GPR_U32(ctx, 31, 0x2DAA18u);
    ctx->pc = 0x2DAA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAA10u;
    // 0x2daa14: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A48u, 0x2DAA10u, 0x2DAA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAA18u;
label_2daa18:
    // 0x2daa18: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2daa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2daa1c: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x2daa1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x2daa20: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2DAA20u;
    SET_GPR_U32(ctx, 31, 0x2DAA28u);
    ctx->pc = 0x2DAA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAA20u;
    // 0x2daa24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2DAA20u, 0x2DAA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAA28u;
label_2daa28:
    // 0x2daa28: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2daa28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2daa2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2daa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2daa30: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA30u;
        // 0x2daa34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAA38u;
    // 0x2daa38: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2daa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2daa3c: 0x0  nop
    ctx->pc = 0x2daa3cu;
    // NOP
    ctx->pc = 0x2daa40u;
}
