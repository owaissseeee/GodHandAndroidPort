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

// Function: func_003283E8
// Address: 0x3283e8 - 0x328438
void func_003283E8_0x3283e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003283E8_0x3283e8");
#endif

    switch (ctx->pc) {
        case 0x32840cu: goto label_32840c;
        case 0x32841cu: goto label_32841c;
        default: break;
    }

    ctx->pc = 0x3283e8u;

    // 0x3283e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3283e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3283ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3283ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3283f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3283f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3283f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3283f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3283f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3283fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x328400: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x328400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x328404: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x328404u;
    SET_GPR_U32(ctx, 31, 0x32840Cu);
    ctx->pc = 0x328408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328404u;
    // 0x328408: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x328404u, 0x32840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32840Cu;
label_32840c:
    // 0x32840c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328414: 0xc0ca10e  jal         func_328438
    ctx->pc = 0x328414u;
    SET_GPR_U32(ctx, 31, 0x32841Cu);
    ctx->pc = 0x328418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328414u;
    // 0x328418: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328438u, 0x328414u, 0x32841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32841Cu;
label_32841c:
    // 0x32841c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32841cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x328424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x328424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328428: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x328428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32842c: 0x80ca422  j           func_329088
    ctx->pc = 0x32842Cu;
    ctx->pc = 0x328430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32842Cu;
    // 0x328430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x32842Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x328434u;
    // 0x328434: 0x0  nop
    ctx->pc = 0x328434u;
    // NOP
    ctx->pc = 0x328438u;
}
