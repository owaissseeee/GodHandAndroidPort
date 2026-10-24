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

// Function: func_0032AB70
// Address: 0x32ab70 - 0x32abb0
void func_0032AB70_0x32ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AB70_0x32ab70");
#endif

    switch (ctx->pc) {
        case 0x32ab8cu: goto label_32ab8c;
        case 0x32ab98u: goto label_32ab98;
        default: break;
    }

    ctx->pc = 0x32ab70u;

    // 0x32ab70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ab74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ab78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ab78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ab7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32ab80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32ab84: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32AB84u;
    SET_GPR_U32(ctx, 31, 0x32AB8Cu);
    ctx->pc = 0x32AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB84u;
    // 0x32ab88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32AB84u, 0x32AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB8Cu;
label_32ab8c:
    // 0x32ab8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ab8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ab90: 0xc0caaec  jal         func_32ABB0
    ctx->pc = 0x32AB90u;
    SET_GPR_U32(ctx, 31, 0x32AB98u);
    ctx->pc = 0x32AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AB90u;
    // 0x32ab94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ABB0u, 0x32AB90u, 0x32AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AB98u;
label_32ab98:
    // 0x32ab98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ab98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ab9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32ab9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32aba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32aba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32aba4: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32ABA4u;
    ctx->pc = 0x32ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ABA4u;
    // 0x32aba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32ABA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32ABACu;
    // 0x32abac: 0x0  nop
    ctx->pc = 0x32abacu;
    // NOP
    ctx->pc = 0x32abb0u;
}
