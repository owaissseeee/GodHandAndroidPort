#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: modeInit__7cMcLoad
// Address: 0x7c13f8 - 0x7c1448
void modeInit__7cMcLoad_0x7c13f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modeInit__7cMcLoad_0x7c13f8");
#endif

    switch (ctx->pc) {
        case 0x7c142cu: goto label_7c142c;
        default: break;
    }

    ctx->pc = 0x7c13f8u;

    // 0x7c13f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c13f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c13fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c13fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1400: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c1400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c1404: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7c1404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c1408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c1408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c140c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c1410: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7c1410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7c1414: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7c1414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1418: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7c1418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x7c141c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c141cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1420: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7c1420u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x7c1424: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7C1424u;
    SET_GPR_U32(ctx, 31, 0x7C142Cu);
    ctx->pc = 0x7C1428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1424u;
    // 0x7c1428: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7C1424u, 0x7C142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C142Cu;
label_7c142c:
    // 0x7c142c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c1430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c1430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1434: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x7c1434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x7c1438: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c1438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c143c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C143Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C1440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C143Cu;
        // 0x7c1440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C143Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C1444u;
    // 0x7c1444: 0x0  nop
    ctx->pc = 0x7c1444u;
    // NOP
    ctx->pc = 0x7c1448u;
}
} // namespace gh_mcport
