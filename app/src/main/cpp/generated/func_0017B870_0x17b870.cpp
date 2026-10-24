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

// Function: func_0017B870
// Address: 0x17b870 - 0x17b8f0
void func_0017B870_0x17b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017B870_0x17b870");
#endif

    switch (ctx->pc) {
        case 0x17b884u: goto label_17b884;
        case 0x17b8a0u: goto label_17b8a0;
        case 0x17b8d8u: goto label_17b8d8;
        default: break;
    }

    ctx->pc = 0x17b870u;

    // 0x17b870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b874: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17b874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17b878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b87c: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x17B87Cu;
    SET_GPR_U32(ctx, 31, 0x17B884u);
    ctx->pc = 0x17B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B87Cu;
    // 0x17b880: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x17B87Cu, 0x17B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B884u;
label_17b884:
    // 0x17b884: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17b884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17b888: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17b888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17b88c: 0x24421bb8  addiu       $v0, $v0, 0x1BB8
    ctx->pc = 0x17b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7096));
    // 0x17b890: 0x26030600  addiu       $v1, $s0, 0x600
    ctx->pc = 0x17b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x17b894: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x17b894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x17b898: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x17b898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17b89c: 0x0  nop
    ctx->pc = 0x17b89cu;
    // NOP
label_17b8a0:
    // 0x17b8a0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x17b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17b8a4: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x17b8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17b8a8: 0xf8600020  sqc2        $vf0, 0x20($v1)
    ctx->pc = 0x17b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17b8ac: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x17b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17b8b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17b8b4: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17B8B4u;
    {
        const bool branch_taken_0x17b8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x17B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8B4u;
        // 0x17b8b8: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b8b4) {
            ctx->pc = 0x17B8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b8a0;
        }
    }
    ctx->pc = 0x17B8BCu;
    // 0x17b8bc: 0x26040d80  addiu       $a0, $s0, 0xD80
    ctx->pc = 0x17b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3456));
    // 0x17b8c0: 0x26070600  addiu       $a3, $s0, 0x600
    ctx->pc = 0x17b8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x17b8c4: 0x26080ab0  addiu       $t0, $s0, 0xAB0
    ctx->pc = 0x17b8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    // 0x17b8c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17b8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b8cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17b8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b8d0: 0xc0ab48e  jal         func_2AD238
    ctx->pc = 0x17B8D0u;
    SET_GPR_U32(ctx, 31, 0x17B8D8u);
    ctx->pc = 0x17B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8D0u;
    // 0x17b8d4: 0x2409001e  addiu       $t1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD238u, 0x17B8D0u, 0x17B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B8D8u;
label_17b8d8:
    // 0x17b8d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b8e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17b8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8E4u;
        // 0x17b8e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B8ECu;
    // 0x17b8ec: 0x0  nop
    ctx->pc = 0x17b8ecu;
    // NOP
    ctx->pc = 0x17b8f0u;
}
