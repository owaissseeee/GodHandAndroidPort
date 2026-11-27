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

// Function: func_0032AF40
// Address: 0x32af40 - 0x32af80
void func_0032AF40_0x32af40(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AF40_0x32af40");
#endif

    if (__builtin_expect(ctx->pc != 0x32af40u, 0)) {
        switch (ctx->pc) {
            case 0x32af5cu: goto label_32af5c;
            case 0x32af68u: goto label_32af68;
            default: break;
        }
    }


    // 0x32af40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32af44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32af44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32af48: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32af4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32af50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32af50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32af54: 0xc0cf9aa  jal         func_33E6A8
    SET_GPR_U32(ctx, 31, 0x32AF5Cu);
    ctx->pc = 0x32AF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF54u;
    // 0x32af58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &NoOp_33E6A8_0x33e6a8, 0x33e6a8u, 0x32af5cu)) {
        return;
    }
label_32af5c:
    // 0x32af5c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32af60: 0xc0cabe0  jal         func_32AF80
    SET_GPR_U32(ctx, 31, 0x32AF68u);
    ctx->pc = 0x32AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF60u;
    // 0x32af64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032AF80_0x32af80, 0x32af80u, 0x32af68u)) {
        return;
    }
label_32af68:
    // 0x32af68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32af68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32af6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32af6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32af70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32af70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32af74: 0x80cf9ac  j           func_33E6B0
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF74u;
    // 0x32af78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32AF74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x32af7c: 0x0  nop
    // NOP
    ctx->pc = 0x32af80u;
}