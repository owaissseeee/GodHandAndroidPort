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

// Function: func_00329D38
// Address: 0x329d38 - 0x329d78
void func_00329D38_0x329d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329D38_0x329d38");
#endif

    switch (ctx->pc) {
        case 0x329d54u: goto label_329d54;
        case 0x329d60u: goto label_329d60;
        default: break;
    }

    ctx->pc = 0x329d38u;

    // 0x329d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329d40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x329d48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x329d4c: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x329D4Cu;
    SET_GPR_U32(ctx, 31, 0x329D54u);
    ctx->pc = 0x329D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D4Cu;
    // 0x329d50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x329D4Cu, 0x329D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D54u;
label_329d54:
    // 0x329d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d58: 0xc0ca75e  jal         func_329D78
    ctx->pc = 0x329D58u;
    SET_GPR_U32(ctx, 31, 0x329D60u);
    ctx->pc = 0x329D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D58u;
    // 0x329d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329D78u, 0x329D58u, 0x329D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D60u;
label_329d60:
    // 0x329d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329d64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329d68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329d6c: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x329D6Cu;
    ctx->pc = 0x329D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D6Cu;
    // 0x329d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x329D6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329D74u;
    // 0x329d74: 0x0  nop
    ctx->pc = 0x329d74u;
    // NOP
    ctx->pc = 0x329d78u;
}
