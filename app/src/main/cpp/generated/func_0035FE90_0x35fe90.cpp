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

// Function: func_0035FE90
// Address: 0x35fe90 - 0x35fee8
void func_0035FE90_0x35fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FE90_0x35fe90");
#endif

    switch (ctx->pc) {
        case 0x35feccu: goto label_35fecc;
        default: break;
    }

    ctx->pc = 0x35fe90u;

    // 0x35fe90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35fe94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fe98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fe98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fe9c: 0x80d7faa  j           func_35FEA8
    ctx->pc = 0x35FE9Cu;
    ctx->pc = 0x35FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE9Cu;
    // 0x35fea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEA8u;
    goto label_35fea8;
    ctx->pc = 0x35FEA4u;
    // 0x35fea4: 0x0  nop
    ctx->pc = 0x35fea4u;
    // NOP
label_35fea8:
    // 0x35fea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35fea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35feac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35feacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35feb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35feb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35feb4: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x35feb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x35feb8: 0x2610e800  addiu       $s0, $s0, -0x1800
    ctx->pc = 0x35feb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961152));
    // 0x35febc: 0x2406026c  addiu       $a2, $zero, 0x26C
    ctx->pc = 0x35febcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x35fec0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35fec4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x35FEC4u;
    SET_GPR_U32(ctx, 31, 0x35FECCu);
    ctx->pc = 0x35FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FEC4u;
    // 0x35fec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x35FEC4u, 0x35FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FECCu;
label_35fecc:
    // 0x35fecc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x35feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35fed0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x35fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x35fed4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35fed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35fed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fedc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35fedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35fee0: 0x80d81c4  j           func_360710
    ctx->pc = 0x35FEE0u;
    ctx->pc = 0x35FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FEE0u;
    // 0x35fee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360710u, 0x35FEE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35FEE8u;
}
