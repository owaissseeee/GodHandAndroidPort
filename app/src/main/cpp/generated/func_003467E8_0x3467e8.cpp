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

// Function: func_003467E8
// Address: 0x3467e8 - 0x346828
void func_003467E8_0x3467e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003467E8_0x3467e8");
#endif

    switch (ctx->pc) {
        case 0x346808u: goto label_346808;
        default: break;
    }

    ctx->pc = 0x3467e8u;

    // 0x3467e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3467e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3467ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3467ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3467f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3467f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3467f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3467f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3467f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3467f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3467fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3467fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x346800: 0xc0d269a  jal         func_349A68
    ctx->pc = 0x346800u;
    SET_GPR_U32(ctx, 31, 0x346808u);
    ctx->pc = 0x346804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346800u;
    // 0x346804: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349A68u, 0x346800u, 0x346808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346808u;
label_346808:
    // 0x346808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34680c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34680cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x346818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34681c: 0x80d1f88  j           func_347E20
    ctx->pc = 0x34681Cu;
    ctx->pc = 0x346820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34681Cu;
    // 0x346820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347E20u, 0x34681Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x346824u;
    // 0x346824: 0x0  nop
    ctx->pc = 0x346824u;
    // NOP
    ctx->pc = 0x346828u;
}
