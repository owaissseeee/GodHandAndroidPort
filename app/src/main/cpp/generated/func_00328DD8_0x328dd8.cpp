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

// Function: func_00328DD8
// Address: 0x328dd8 - 0x328e18
void func_00328DD8_0x328dd8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328DD8_0x328dd8");
#endif

    if (__builtin_expect(ctx->pc != 0x328dd8u, 0)) {
        switch (ctx->pc) {
            case 0x328df4u: goto label_328df4;
            case 0x328e00u: goto label_328e00;
            default: break;
        }
    }


    // 0x328dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328de0: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328de4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x328de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x328de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328dec: 0xc0ca41c  jal         func_329070
    SET_GPR_U32(ctx, 31, 0x328DF4u);
    ctx->pc = 0x328DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DECu;
    // 0x328df0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj3290_Tramp_0033E6A8_9070_0x329070, 0x329070u, 0x328df4u)) {
        return;
    }
label_328df4:
    // 0x328df4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328df8: 0xc0ca386  jal         func_328E18
    SET_GPR_U32(ctx, 31, 0x328E00u);
    ctx->pc = 0x328DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DF8u;
    // 0x328dfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00328E18_0x328e18, 0x328e18u, 0x328e00u)) {
        return;
    }
label_328e00:
    // 0x328e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328e04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328e08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328e0c: 0x80ca422  j           func_329088
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E0Cu;
    // 0x328e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x328E0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x328e14: 0x0  nop
    // NOP
    ctx->pc = 0x328e18u;
}