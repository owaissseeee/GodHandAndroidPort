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

// Function: func_0032EC78
// Address: 0x32ec78 - 0x32ecd8
void func_0032EC78_0x32ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032EC78_0x32ec78");
#endif

    switch (ctx->pc) {
        case 0x32ec9cu: goto label_32ec9c;
        case 0x32eca4u: goto label_32eca4;
        case 0x32ecb4u: goto label_32ecb4;
        case 0x32ecbcu: goto label_32ecbc;
        default: break;
    }

    ctx->pc = 0x32ec78u;

    // 0x32ec78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ec78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ec7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ec80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ec80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ec84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32ec88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32ec88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32ec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32ec90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32ec94: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32EC94u;
    SET_GPR_U32(ctx, 31, 0x32EC9Cu);
    ctx->pc = 0x32EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC94u;
    // 0x32ec98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32EC94u, 0x32EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC9Cu;
label_32ec9c:
    // 0x32ec9c: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32EC9Cu;
    SET_GPR_U32(ctx, 31, 0x32ECA4u);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32EC9Cu, 0x32ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ECA4u;
label_32eca4:
    // 0x32eca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32eca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ecac: 0xc0cbb36  jal         func_32ECD8
    ctx->pc = 0x32ECACu;
    SET_GPR_U32(ctx, 31, 0x32ECB4u);
    ctx->pc = 0x32ECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ECACu;
    // 0x32ecb0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ECD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ECD8u, 0x32ECACu, 0x32ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ECB4u;
label_32ecb4:
    // 0x32ecb4: 0xc0cff22  jal         func_33FC88
    ctx->pc = 0x32ECB4u;
    SET_GPR_U32(ctx, 31, 0x32ECBCu);
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32ECB4u, 0x32ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ECBCu;
label_32ecbc:
    // 0x32ecbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ecbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ecc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32ecc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ecc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32ecc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ecc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32ecc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32eccc: 0x80cff2a  j           func_33FCA8
    ctx->pc = 0x32ECCCu;
    ctx->pc = 0x32ECD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ECCCu;
    // 0x32ecd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32ECCCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32ECD4u;
    // 0x32ecd4: 0x0  nop
    ctx->pc = 0x32ecd4u;
    // NOP
    ctx->pc = 0x32ecd8u;
}
