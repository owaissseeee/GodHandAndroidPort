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

// Function: func_00339C68
// Address: 0x339c68 - 0x339cb8
void func_00339C68_0x339c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339C68_0x339c68");
#endif

    switch (ctx->pc) {
        case 0x339c8cu: goto label_339c8c;
        case 0x339c9cu: goto label_339c9c;
        default: break;
    }

    ctx->pc = 0x339c68u;

    // 0x339c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x339c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x339c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x339c78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x339c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x339c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x339c80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x339c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x339c84: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x339C84u;
    SET_GPR_U32(ctx, 31, 0x339C8Cu);
    ctx->pc = 0x339C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C84u;
    // 0x339c88: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x339C84u, 0x339C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C8Cu;
label_339c8c:
    // 0x339c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x339c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c94: 0xc0ce72e  jal         func_339CB8
    ctx->pc = 0x339C94u;
    SET_GPR_U32(ctx, 31, 0x339C9Cu);
    ctx->pc = 0x339C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C94u;
    // 0x339c98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339CB8u, 0x339C94u, 0x339C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C9Cu;
label_339c9c:
    // 0x339c9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339ca0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x339ca4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x339ca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339ca8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x339ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339cac: 0x80ce284  j           func_338A10
    ctx->pc = 0x339CACu;
    ctx->pc = 0x339CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339CACu;
    // 0x339cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x339CACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339CB4u;
    // 0x339cb4: 0x0  nop
    ctx->pc = 0x339cb4u;
    // NOP
    ctx->pc = 0x339cb8u;
}
