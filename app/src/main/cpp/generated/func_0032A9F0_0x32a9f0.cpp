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

// Function: func_0032A9F0
// Address: 0x32a9f0 - 0x32aa30
void func_0032A9F0_0x32a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A9F0_0x32a9f0");
#endif

    switch (ctx->pc) {
        case 0x32aa0cu: goto label_32aa0c;
        case 0x32aa18u: goto label_32aa18;
        default: break;
    }

    ctx->pc = 0x32a9f0u;

    // 0x32a9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a9f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a9fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32a9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32aa00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32aa04: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32AA04u;
    SET_GPR_U32(ctx, 31, 0x32AA0Cu);
    ctx->pc = 0x32AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA04u;
    // 0x32aa08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32AA04u, 0x32AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA0Cu;
label_32aa0c:
    // 0x32aa0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32aa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa10: 0xc0caa8c  jal         func_32AA30
    ctx->pc = 0x32AA10u;
    SET_GPR_U32(ctx, 31, 0x32AA18u);
    ctx->pc = 0x32AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA10u;
    // 0x32aa14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AA30u, 0x32AA10u, 0x32AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA18u;
label_32aa18:
    // 0x32aa18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32aa18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aa1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32aa1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32aa20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32aa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32aa24: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32AA24u;
    ctx->pc = 0x32AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA24u;
    // 0x32aa28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32AA24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32AA2Cu;
    // 0x32aa2c: 0x0  nop
    ctx->pc = 0x32aa2cu;
    // NOP
    ctx->pc = 0x32aa30u;
}
