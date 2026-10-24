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

// Function: func_00340920
// Address: 0x340920 - 0x340970
void func_00340920_0x340920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340920_0x340920");
#endif

    switch (ctx->pc) {
        case 0x340944u: goto label_340944;
        case 0x340954u: goto label_340954;
        default: break;
    }

    ctx->pc = 0x340920u;

    // 0x340920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34092c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340930: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x340930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340934: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x340934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x340938: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x340938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34093c: 0xc0d00f2  jal         func_3403C8
    ctx->pc = 0x34093Cu;
    SET_GPR_U32(ctx, 31, 0x340944u);
    ctx->pc = 0x340940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34093Cu;
    // 0x340940: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403C8u, 0x34093Cu, 0x340944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340944u;
label_340944:
    // 0x340944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340948: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x340948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34094c: 0xc0d025c  jal         func_340970
    ctx->pc = 0x34094Cu;
    SET_GPR_U32(ctx, 31, 0x340954u);
    ctx->pc = 0x340950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34094Cu;
    // 0x340950: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340970u, 0x34094Cu, 0x340954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340954u;
label_340954:
    // 0x340954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340958: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34095c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34095cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340960: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x340960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x340964: 0x80d00f8  j           func_3403E0
    ctx->pc = 0x340964u;
    ctx->pc = 0x340968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340964u;
    // 0x340968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3403E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3403E0u, 0x340964u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34096Cu;
    // 0x34096c: 0x0  nop
    ctx->pc = 0x34096cu;
    // NOP
    ctx->pc = 0x340970u;
}
