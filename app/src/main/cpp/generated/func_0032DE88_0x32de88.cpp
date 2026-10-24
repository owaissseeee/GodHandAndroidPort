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

// Function: func_0032DE88
// Address: 0x32de88 - 0x32dec8
void func_0032DE88_0x32de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DE88_0x32de88");
#endif

    switch (ctx->pc) {
        case 0x32dea4u: goto label_32dea4;
        case 0x32deb0u: goto label_32deb0;
        default: break;
    }

    ctx->pc = 0x32de88u;

    // 0x32de88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32de88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32de8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32de8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32de90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32de90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32de94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32de94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32de98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32de98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32de9c: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32DE9Cu;
    SET_GPR_U32(ctx, 31, 0x32DEA4u);
    ctx->pc = 0x32DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE9Cu;
    // 0x32dea0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32DE9Cu, 0x32DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DEA4u;
label_32dea4:
    // 0x32dea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32dea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dea8: 0xc0cb7b2  jal         func_32DEC8
    ctx->pc = 0x32DEA8u;
    SET_GPR_U32(ctx, 31, 0x32DEB0u);
    ctx->pc = 0x32DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DEA8u;
    // 0x32deac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEC8u, 0x32DEA8u, 0x32DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DEB0u;
label_32deb0:
    // 0x32deb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32deb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32deb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32deb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32deb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32deb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32debc: 0x80cff2a  j           func_33FCA8
    ctx->pc = 0x32DEBCu;
    ctx->pc = 0x32DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DEBCu;
    // 0x32dec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32DEBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DEC4u;
    // 0x32dec4: 0x0  nop
    ctx->pc = 0x32dec4u;
    // NOP
    ctx->pc = 0x32dec8u;
}
