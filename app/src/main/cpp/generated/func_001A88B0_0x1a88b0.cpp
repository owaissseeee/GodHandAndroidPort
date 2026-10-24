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

// Function: func_001A88B0
// Address: 0x1a88b0 - 0x1a8930
void func_001A88B0_0x1a88b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A88B0_0x1a88b0");
#endif

    switch (ctx->pc) {
        case 0x1a88c4u: goto label_1a88c4;
        case 0x1a88e0u: goto label_1a88e0;
        case 0x1a8918u: goto label_1a8918;
        default: break;
    }

    ctx->pc = 0x1a88b0u;

    // 0x1a88b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a88b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a88b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a88b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a88b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a88b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a88bc: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A88BCu;
    SET_GPR_U32(ctx, 31, 0x1A88C4u);
    ctx->pc = 0x1A88C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A88BCu;
    // 0x1a88c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A88BCu, 0x1A88C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88C4u;
label_1a88c4:
    // 0x1a88c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a88c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a88c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a88cc: 0x24427a58  addiu       $v0, $v0, 0x7A58
    ctx->pc = 0x1a88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31320));
    // 0x1a88d0: 0x26030600  addiu       $v1, $s0, 0x600
    ctx->pc = 0x1a88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1a88d4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1a88d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1a88d8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1a88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a88dc: 0x0  nop
    ctx->pc = 0x1a88dcu;
    // NOP
label_1a88e0:
    // 0x1a88e0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1a88e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a88e4: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x1a88e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a88e8: 0xf8600020  sqc2        $vf0, 0x20($v1)
    ctx->pc = 0x1a88e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a88ec: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x1a88ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a88f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a88f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a88f4: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A88F4u;
    {
        const bool branch_taken_0x1a88f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A88F4u;
        // 0x1a88f8: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88f4) {
            ctx->pc = 0x1A88E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a88e0;
        }
    }
    ctx->pc = 0x1A88FCu;
    // 0x1a88fc: 0x26040e40  addiu       $a0, $s0, 0xE40
    ctx->pc = 0x1a88fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3648));
    // 0x1a8900: 0x26070600  addiu       $a3, $s0, 0x600
    ctx->pc = 0x1a8900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1a8904: 0x26080ab0  addiu       $t0, $s0, 0xAB0
    ctx->pc = 0x1a8904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x1a8908: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a8908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a890c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a890cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a8910: 0xc0ab48e  jal         func_2AD238
    ctx->pc = 0x1A8910u;
    SET_GPR_U32(ctx, 31, 0x1A8918u);
    ctx->pc = 0x1A8914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8910u;
    // 0x1a8914: 0x24090026  addiu       $t1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD238u, 0x1A8910u, 0x1A8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8918u;
label_1a8918:
    // 0x1a8918: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a8918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a891c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a891cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8920: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a8920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8924: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8924u;
        // 0x1a8928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A892Cu;
    // 0x1a892c: 0x0  nop
    ctx->pc = 0x1a892cu;
    // NOP
    ctx->pc = 0x1a8930u;
}
