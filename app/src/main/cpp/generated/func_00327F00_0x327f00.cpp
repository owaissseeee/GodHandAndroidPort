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

// Function: func_00327F00
// Address: 0x327f00 - 0x327f70
void func_00327F00_0x327f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327F00_0x327f00");
#endif

    switch (ctx->pc) {
        case 0x327f34u: goto label_327f34;
        case 0x327f4cu: goto label_327f4c;
        default: break;
    }

    ctx->pc = 0x327f00u;

    // 0x327f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x327f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327f08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x327f10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x327f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x327f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x327f18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x327f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x327f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x327f20: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x327f20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x327f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x327f28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x327f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x327f2c: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x327F2Cu;
    SET_GPR_U32(ctx, 31, 0x327F34u);
    ctx->pc = 0x327F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F2Cu;
    // 0x327f30: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x327F2Cu, 0x327F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F34u;
label_327f34:
    // 0x327f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x327f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x327f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f40: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x327f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f44: 0xc0c9fdc  jal         func_327F70
    ctx->pc = 0x327F44u;
    SET_GPR_U32(ctx, 31, 0x327F4Cu);
    ctx->pc = 0x327F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F44u;
    // 0x327f48: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327F70u, 0x327F44u, 0x327F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F4Cu;
label_327f4c:
    // 0x327f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327f54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x327f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327f58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x327f58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x327f5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x327f5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327f60: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x327f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x327f64: 0x80ca422  j           func_329088
    ctx->pc = 0x327F64u;
    ctx->pc = 0x327F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F64u;
    // 0x327f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x327F64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327F6Cu;
    // 0x327f6c: 0x0  nop
    ctx->pc = 0x327f6cu;
    // NOP
    ctx->pc = 0x327f70u;
}
