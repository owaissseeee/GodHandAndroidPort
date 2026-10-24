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

// Function: func_0032DF70
// Address: 0x32df70 - 0x32dfc0
void func_0032DF70_0x32df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DF70_0x32df70");
#endif

    switch (ctx->pc) {
        case 0x32df94u: goto label_32df94;
        case 0x32dfa4u: goto label_32dfa4;
        default: break;
    }

    ctx->pc = 0x32df70u;

    // 0x32df70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32df74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32df78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32df78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32df7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32df80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32df80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32df88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32df8c: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32DF8Cu;
    SET_GPR_U32(ctx, 31, 0x32DF94u);
    ctx->pc = 0x32DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF8Cu;
    // 0x32df90: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32DF8Cu, 0x32DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF94u;
label_32df94:
    // 0x32df94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32df94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32df98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df9c: 0xc0cb7f0  jal         func_32DFC0
    ctx->pc = 0x32DF9Cu;
    SET_GPR_U32(ctx, 31, 0x32DFA4u);
    ctx->pc = 0x32DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF9Cu;
    // 0x32dfa0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DFC0u, 0x32DF9Cu, 0x32DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DFA4u;
label_32dfa4:
    // 0x32dfa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32dfa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dfa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32dfa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32dfac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32dfacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dfb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32dfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32dfb4: 0x80cff2a  j           func_33FCA8
    ctx->pc = 0x32DFB4u;
    ctx->pc = 0x32DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DFB4u;
    // 0x32dfb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32DFB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DFBCu;
    // 0x32dfbc: 0x0  nop
    ctx->pc = 0x32dfbcu;
    // NOP
    ctx->pc = 0x32dfc0u;
}
