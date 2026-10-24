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

// Function: func_00170188
// Address: 0x170188 - 0x170200
void func_00170188_0x170188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00170188_0x170188");
#endif

    switch (ctx->pc) {
        case 0x1701c8u: goto label_1701c8;
        case 0x1701ecu: goto label_1701ec;
        default: break;
    }

    ctx->pc = 0x170188u;

    // 0x170188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17018c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170190: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17019c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x17019cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1701a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1701a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701a4: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1701a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1701a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1701a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1701ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1701acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1701b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1701b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1701b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1701bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701c0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1701C0u;
    SET_GPR_U32(ctx, 31, 0x1701C8u);
    ctx->pc = 0x1701C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1701C0u;
    // 0x1701c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1701C0u, 0x1701C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701C8u;
label_1701c8:
    // 0x1701c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1701c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1701ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1701d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1701d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1701d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1701d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1701d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1701dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1701e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1701e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1701E4u;
    SET_GPR_U32(ctx, 31, 0x1701ECu);
    ctx->pc = 0x1701E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1701E4u;
    // 0x1701e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1701E4u, 0x1701ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1701ECu;
label_1701ec:
    // 0x1701ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1701ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1701f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1701f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1701f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1701f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1701f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1701F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1701FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701F8u;
        // 0x1701fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1701F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170200u;
}
