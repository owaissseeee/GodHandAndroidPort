#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: modeInit__7cMcSave
// Address: 0x7c3dc8 - 0x7c3e18
void modeInit__7cMcSave_0x7c3dc8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modeInit__7cMcSave_0x7c3dc8");
#endif

    if (__builtin_expect(ctx->pc != 0x7c3dc8u, 0)) {
        switch (ctx->pc) {
            case 0x7c3dfcu: goto label_7c3dfc;
            default: break;
        }
    }



    // 0x7c3dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c3dcc: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3dd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c3dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c3dd4: 0x2406000a  addiu       $a2, $zero, 0xA
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c3dd8: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3de0: 0x3c040074  lui         $a0, 0x74
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7c3de4: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3de8: 0x24847470  addiu       $a0, $a0, 0x7470
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x7c3dec: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3df0: 0x3c09ff00  lui         $t1, 0xFF00
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x7c3df4: 0xc0c1c82  jal         func_307208
    SET_GPR_U32(ctx, 31, 0x7C3DFCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3DF4u;
    // 0x7c3df8: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->callDirectStatic(rdram, ctx, &classFADE_start_0x307208, 0x307208u, 0x7C3DFCu)) {
        return;
    }
label_7c3dfc:
    // 0x7c3dfc: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c3e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3e04: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x7c3e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x7c3e08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c3e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c3e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3E0Cu;
        // 0x7c3e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x7c3e14: 0x0  nop
    // NOP
    ctx->pc = 0x7c3e18u;
}
} // namespace gh_mcport
