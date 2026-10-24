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

// Function: func_00342A30
// Address: 0x342a30 - 0x342a70
void func_00342A30_0x342a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342A30_0x342a30");
#endif

    switch (ctx->pc) {
        case 0x342a50u: goto label_342a50;
        default: break;
    }

    ctx->pc = 0x342a30u;

    // 0x342a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x342a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x342a34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x342a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x342a38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x342a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a3c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x342a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x342a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x342a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x342a48: 0xc0caadc  jal         func_32AB70
    ctx->pc = 0x342A48u;
    SET_GPR_U32(ctx, 31, 0x342A50u);
    ctx->pc = 0x342A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A48u;
    // 0x342a4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AB70u, 0x342A48u, 0x342A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A50u;
label_342a50:
    // 0x342a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x342a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x342a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x342a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x342a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342a64: 0x80ca74e  j           func_329D38
    ctx->pc = 0x342A64u;
    ctx->pc = 0x342A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A64u;
    // 0x342a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329D38u, 0x342A64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x342A6Cu;
    // 0x342a6c: 0x0  nop
    ctx->pc = 0x342a6cu;
    // NOP
    ctx->pc = 0x342a70u;
}
