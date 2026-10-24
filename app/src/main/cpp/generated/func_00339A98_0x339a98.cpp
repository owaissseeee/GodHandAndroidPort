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

// Function: func_00339A98
// Address: 0x339a98 - 0x339ae8
void func_00339A98_0x339a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339A98_0x339a98");
#endif

    switch (ctx->pc) {
        case 0x339abcu: goto label_339abc;
        case 0x339accu: goto label_339acc;
        default: break;
    }

    ctx->pc = 0x339a98u;

    // 0x339a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x339aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339aa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x339aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x339aa8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x339aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339aac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x339aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x339ab0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x339ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x339ab4: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x339AB4u;
    SET_GPR_U32(ctx, 31, 0x339ABCu);
    ctx->pc = 0x339AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339AB4u;
    // 0x339ab8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x339AB4u, 0x339ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339ABCu;
label_339abc:
    // 0x339abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x339abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ac0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ac4: 0xc0ce6ba  jal         func_339AE8
    ctx->pc = 0x339AC4u;
    SET_GPR_U32(ctx, 31, 0x339ACCu);
    ctx->pc = 0x339AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339AC4u;
    // 0x339ac8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339AE8u, 0x339AC4u, 0x339ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339ACCu;
label_339acc:
    // 0x339acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x339ad4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x339ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339ad8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x339ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339adc: 0x80ce284  j           func_338A10
    ctx->pc = 0x339ADCu;
    ctx->pc = 0x339AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339ADCu;
    // 0x339ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x339ADCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339AE4u;
    // 0x339ae4: 0x0  nop
    ctx->pc = 0x339ae4u;
    // NOP
    ctx->pc = 0x339ae8u;
}
