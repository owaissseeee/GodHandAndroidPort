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

// Function: func_0033BA10
// Address: 0x33ba10 - 0x33ba80
void func_0033BA10_0x33ba10(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033BA10_0x33ba10");
#endif

    if (__builtin_expect(ctx->pc != 0x33ba10u, 0)) {
        switch (ctx->pc) {
            case 0x33ba44u: goto label_33ba44;
            case 0x33ba5cu: goto label_33ba5c;
            default: break;
        }
    }


    // 0x33ba10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33ba14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33ba18: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33ba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33ba20: 0xa0882d  daddu       $s1, $a1, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33ba28: 0xc0902d  daddu       $s2, $a2, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33ba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33ba30: 0xe0982d  daddu       $s3, $a3, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33ba34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33ba38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x33ba3c: 0xc0ced96  jal         func_33B658
    SET_GPR_U32(ctx, 31, 0x33BA44u);
    ctx->pc = 0x33BA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA3Cu;
    // 0x33ba40: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33B568_33B658_0x33b658, 0x33b658u, 0x33ba44u)) {
        return;
    }
label_33ba44:
    // 0x33ba44: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba48: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba4c: 0x240302d  daddu       $a2, $s2, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba50: 0x260382d  daddu       $a3, $s3, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba54: 0xc0ceea0  jal         func_33BA80
    SET_GPR_U32(ctx, 31, 0x33BA5Cu);
    ctx->pc = 0x33BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA54u;
    // 0x33ba58: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033BA80_0x33ba80, 0x33ba80u, 0x33ba5cu)) {
        return;
    }
label_33ba5c:
    // 0x33ba5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ba5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ba60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33ba60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ba64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ba64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ba68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33ba68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ba6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33ba6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ba70: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33ba70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33ba74: 0x80ced9c  j           func_33B670
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA74u;
    // 0x33ba78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x33BA74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x33ba7c: 0x0  nop
    // NOP
    ctx->pc = 0x33ba80u;
}