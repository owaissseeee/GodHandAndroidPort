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

// Function: func_00327E18
// Address: 0x327e18 - 0x327e88
void func_00327E18_0x327e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327E18_0x327e18");
#endif

    switch (ctx->pc) {
        case 0x327e4cu: goto label_327e4c;
        case 0x327e64u: goto label_327e64;
        default: break;
    }

    ctx->pc = 0x327e18u;

    // 0x327e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x327e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x327e28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x327e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x327e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x327e30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x327e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x327e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x327e38: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x327e38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x327e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x327e40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x327e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x327e44: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x327E44u;
    SET_GPR_U32(ctx, 31, 0x327E4Cu);
    ctx->pc = 0x327E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E44u;
    // 0x327e48: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x327E44u, 0x327E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E4Cu;
label_327e4c:
    // 0x327e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x327e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x327e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e58: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x327e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e5c: 0xc0c9fa2  jal         func_327E88
    ctx->pc = 0x327E5Cu;
    SET_GPR_U32(ctx, 31, 0x327E64u);
    ctx->pc = 0x327E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E5Cu;
    // 0x327e60: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327E88u, 0x327E5Cu, 0x327E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E64u;
label_327e64:
    // 0x327e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327e6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x327e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327e70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x327e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x327e74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x327e74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327e78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x327e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x327e7c: 0x80ca422  j           func_329088
    ctx->pc = 0x327E7Cu;
    ctx->pc = 0x327E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E7Cu;
    // 0x327e80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x327E7Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327E84u;
    // 0x327e84: 0x0  nop
    ctx->pc = 0x327e84u;
    // NOP
    ctx->pc = 0x327e88u;
}
