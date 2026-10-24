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

// Function: func_0032DEF8
// Address: 0x32def8 - 0x32df38
void func_0032DEF8_0x32def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DEF8_0x32def8");
#endif

    switch (ctx->pc) {
        case 0x32df14u: goto label_32df14;
        case 0x32df20u: goto label_32df20;
        default: break;
    }

    ctx->pc = 0x32def8u;

    // 0x32def8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32def8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32defc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32defcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32df00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32df00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32df08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32df08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32df0c: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32DF0Cu;
    SET_GPR_U32(ctx, 31, 0x32DF14u);
    ctx->pc = 0x32DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF0Cu;
    // 0x32df10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32DF0Cu, 0x32DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF14u;
label_32df14:
    // 0x32df14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32df14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32df18: 0xc0cb7ce  jal         func_32DF38
    ctx->pc = 0x32DF18u;
    SET_GPR_U32(ctx, 31, 0x32DF20u);
    ctx->pc = 0x32DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF18u;
    // 0x32df1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF38u, 0x32DF18u, 0x32DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF20u;
label_32df20:
    // 0x32df20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32df20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32df24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32df24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32df28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32df28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32df2c: 0x80cff2a  j           func_33FCA8
    ctx->pc = 0x32DF2Cu;
    ctx->pc = 0x32DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF2Cu;
    // 0x32df30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32DF2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DF34u;
    // 0x32df34: 0x0  nop
    ctx->pc = 0x32df34u;
    // NOP
    ctx->pc = 0x32df38u;
}
