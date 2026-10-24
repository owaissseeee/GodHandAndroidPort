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

// Function: func_0032A160
// Address: 0x32a160 - 0x32a1b0
void func_0032A160_0x32a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A160_0x32a160");
#endif

    switch (ctx->pc) {
        case 0x32a184u: goto label_32a184;
        case 0x32a194u: goto label_32a194;
        default: break;
    }

    ctx->pc = 0x32a160u;

    // 0x32a160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a16c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32a170: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32a170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a174: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32a174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32a178: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32a178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32a17c: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32A17Cu;
    SET_GPR_U32(ctx, 31, 0x32A184u);
    ctx->pc = 0x32A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A17Cu;
    // 0x32a180: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32A17Cu, 0x32A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A184u;
label_32a184:
    // 0x32a184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a18c: 0xc0ca86c  jal         func_32A1B0
    ctx->pc = 0x32A18Cu;
    SET_GPR_U32(ctx, 31, 0x32A194u);
    ctx->pc = 0x32A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A18Cu;
    // 0x32a190: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A1B0u, 0x32A18Cu, 0x32A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A194u;
label_32a194:
    // 0x32a194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32a198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a19c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32a19cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a1a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32a1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32a1a4: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32A1A4u;
    ctx->pc = 0x32A1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1A4u;
    // 0x32a1a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32A1A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32A1ACu;
    // 0x32a1ac: 0x0  nop
    ctx->pc = 0x32a1acu;
    // NOP
    ctx->pc = 0x32a1b0u;
}
