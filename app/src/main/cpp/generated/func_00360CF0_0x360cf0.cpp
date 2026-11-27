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

// Function: func_00360CF0
// Address: 0x360cf0 - 0x360d18
void func_00360CF0_0x360cf0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360CF0_0x360cf0");
#endif

    if (__builtin_expect(ctx->pc != 0x360cf0u, 0)) {
        switch (ctx->pc) {
            case 0x360d00u: goto label_360d00;
            default: break;
        }
    }


    // 0x360cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360cf8: 0xc0d8346  jal         func_360D18
    ctx->pc = 0x360CF8u;
    SET_GPR_U32(ctx, 31, 0x360D00u);
    if (!runtime->callDirectStatic(rdram, ctx, &GetD003EEA90_360D18_0x360d18, 0x360d18u, 0x360d00u)) {
        return;
    }
label_360d00:
    // 0x360d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360d04: 0x24040080  addiu       $a0, $zero, 0x80
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x360d08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x360d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x360d0c: 0x80d834a  j           func_360D28
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360D0Cu;
    // 0x360d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360D28u, 0x360D0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x360d14: 0x0  nop
    // NOP
    ctx->pc = 0x360d18u;
}