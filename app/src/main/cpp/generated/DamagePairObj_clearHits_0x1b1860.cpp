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

// Function: DamagePairObj_clearHits
// Address: 0x1b1860 - 0x1b18b8
void DamagePairObj_clearHits_0x1b1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamagePairObj_clearHits_0x1b1860");
#endif

    switch (ctx->pc) {
        case 0x1b188cu: goto label_1b188c;
        case 0x1b18a8u: goto label_1b18a8;
        default: break;
    }

    ctx->pc = 0x1b1860u;

    // 0x1b1860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1868: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b1868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b186c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b186cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1874: 0x8e02066c  lw          $v0, 0x66C($s0)
    ctx->pc = 0x1b1874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
    // 0x1b1878: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x1b1878u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b187c: 0x8e03066c  lw          $v1, 0x66C($s0)
    ctx->pc = 0x1b187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
    // 0x1b1880: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x1b1880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x1b1884: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B1884u;
    SET_GPR_U32(ctx, 31, 0x1B188Cu);
    ctx->pc = 0x1B1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1884u;
    // 0x1b1888: 0x8e04066c  lw          $a0, 0x66C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B1884u, 0x1B188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B188Cu;
label_1b188c:
    // 0x1b188c: 0x8e030670  lw          $v1, 0x670($s0)
    ctx->pc = 0x1b188cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x1b1890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1894: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x1b1894u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b1898: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x1b1898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x1b189c: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1b189cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x1b18a0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B18A0u;
    SET_GPR_U32(ctx, 31, 0x1B18A8u);
    ctx->pc = 0x1B18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18A0u;
    // 0x1b18a4: 0x8e040670  lw          $a0, 0x670($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B18A0u, 0x1B18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18A8u;
label_1b18a8:
    // 0x1b18a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b18a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b18ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b18acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b18b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B18B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B18B0u;
        // 0x1b18b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B18B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B18B8u;
}
