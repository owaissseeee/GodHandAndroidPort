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

// Function: func_00327E88
// Address: 0x327e88 - 0x327f00
void func_00327E88_0x327e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327E88_0x327e88");
#endif

    switch (ctx->pc) {
        case 0x327ebcu: goto label_327ebc;
        default: break;
    }

    ctx->pc = 0x327e88u;

    // 0x327e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x327e8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x327e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x327e90: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x327e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327e98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327e9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x327ea0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x327ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ea4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x327ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x327ea8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x327ea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327eac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x327eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x327eb0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x327eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x327eb4: 0xc0ca40a  jal         func_329028
    ctx->pc = 0x327EB4u;
    SET_GPR_U32(ctx, 31, 0x327EBCu);
    ctx->pc = 0x327EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327EB4u;
    // 0x327eb8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329028u, 0x327EB4u, 0x327EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327EBCu;
label_327ebc:
    // 0x327ebc: 0x121ac0  sll         $v1, $s2, 11
    ctx->pc = 0x327ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x327ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x327ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327ec4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x327ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x327ec8: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x327ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x327ecc: 0xae130050  sw          $s3, 0x50($s0)
    ctx->pc = 0x327eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 19));
    // 0x327ed0: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x327ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x327ed4: 0xa2020045  sb          $v0, 0x45($s0)
    ctx->pc = 0x327ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x327ed8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x327ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x327edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327ee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x327ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327ee8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x327ee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x327eec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x327eecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327ef0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x327ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x327ef4: 0x80ca410  j           func_329040
    ctx->pc = 0x327EF4u;
    ctx->pc = 0x327EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327EF4u;
    // 0x327ef8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329040u, 0x327EF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327EFCu;
    // 0x327efc: 0x0  nop
    ctx->pc = 0x327efcu;
    // NOP
    ctx->pc = 0x327f00u;
}
