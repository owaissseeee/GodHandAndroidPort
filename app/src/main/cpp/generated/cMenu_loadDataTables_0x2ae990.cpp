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

// Function: cMenu_loadDataTables
// Address: 0x2ae990 - 0x2aea18
void cMenu_loadDataTables_0x2ae990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMenu_loadDataTables_0x2ae990");
#endif

    switch (ctx->pc) {
        case 0x2ae9d0u: goto label_2ae9d0;
        case 0x2ae9e8u: goto label_2ae9e8;
        default: break;
    }

    ctx->pc = 0x2ae990u;

    // 0x2ae990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ae990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ae994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae998: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ae998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ae99c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ae99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ae9a0: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x2ae9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x2ae9a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ae9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ae9a8: 0x263174a0  addiu       $s1, $s1, 0x74A0
    ctx->pc = 0x2ae9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x2ae9ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ae9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ae9b0: 0x3c100045  lui         $s0, 0x45
    ctx->pc = 0x2ae9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    // 0x2ae9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae9b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ae9b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae9bc: 0x2610b100  addiu       $s0, $s0, -0x4F00
    ctx->pc = 0x2ae9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947072));
    // 0x2ae9c0: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x2ae9c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x2ae9c4: 0x8e240558  lw          $a0, 0x558($s1)
    ctx->pc = 0x2ae9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7479F8u));
    // 0x2ae9c8: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2AE9C8u;
    SET_GPR_U32(ctx, 31, 0x2AE9D0u);
    ctx->pc = 0x2AE9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE9C8u;
    // 0x2ae9cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2AE9C8u, 0x2AE9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE9D0u;
label_2ae9d0:
    // 0x2ae9d0: 0x8e4323a4  lw          $v1, 0x23A4($s2)
    ctx->pc = 0x2ae9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9124)));
    // 0x2ae9d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ae9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae9d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ae9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae9dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ae9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ae9e0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2AE9E0u;
    SET_GPR_U32(ctx, 31, 0x2AE9E8u);
    ctx->pc = 0x2AE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE9E0u;
    // 0x2ae9e4: 0x8e240558  lw          $a0, 0x558($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2AE9E0u, 0x2AE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE9E8u;
label_2ae9e8:
    // 0x2ae9e8: 0x8e4323a4  lw          $v1, 0x23A4($s2)
    ctx->pc = 0x2ae9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9124)));
    // 0x2ae9ec: 0x24040384  addiu       $a0, $zero, 0x384
    ctx->pc = 0x2ae9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x2ae9f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ae9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae9f4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2ae9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2ae9f8: 0xa6640bda  sh          $a0, 0xBDA($s3)
    ctx->pc = 0x2ae9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ae9fc: 0xa2600bf0  sb          $zero, 0xBF0($s3)
    ctx->pc = 0x2ae9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3056), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aea00: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2aea00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aea04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aea04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aea08: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2aea08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aea0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aea0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aea10: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA10u;
        // 0x2aea14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEA18u;
}
