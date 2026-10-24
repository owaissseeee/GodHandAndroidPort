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

// Function: StoreArgAndUpdateChildA
// Address: 0x326780 - 0x3267c0
void StoreArgAndUpdateChildA_0x326780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StoreArgAndUpdateChildA_0x326780");
#endif

    switch (ctx->pc) {
        case 0x3267a4u: goto label_3267a4;
        default: break;
    }

    ctx->pc = 0x326780u;

    // 0x326780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x326788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32678c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x326790: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x326790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326798: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x326798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x32679c: 0xc0cf10a  jal         func_33C428
    ctx->pc = 0x32679Cu;
    SET_GPR_U32(ctx, 31, 0x3267A4u);
    ctx->pc = 0x3267A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32679Cu;
    // 0x3267a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C428u, 0x32679Cu, 0x3267A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3267A4u;
label_3267a4:
    // 0x3267a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3267a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3267a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3267a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3267acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3267b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3267b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3267b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3267b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3267b8: 0x80cf090  j           func_33C240
    ctx->pc = 0x3267B8u;
    ctx->pc = 0x3267BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3267B8u;
    // 0x3267bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C240u, 0x3267B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3267C0u;
}
