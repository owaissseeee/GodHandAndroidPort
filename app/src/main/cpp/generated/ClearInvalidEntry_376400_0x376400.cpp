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

// Function: ClearInvalidEntry_376400
// Address: 0x376400 - 0x376438
void ClearInvalidEntry_376400_0x376400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearInvalidEntry_376400_0x376400");
#endif

    switch (ctx->pc) {
        case 0x376418u: goto label_376418;
        default: break;
    }

    ctx->pc = 0x376400u;

    // 0x376400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376404: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x376404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x376408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37640c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37640cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376410: 0xc0df42a  jal         func_37D0A8
    ctx->pc = 0x376410u;
    SET_GPR_U32(ctx, 31, 0x376418u);
    ctx->pc = 0x376414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376410u;
    // 0x376414: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D0A8u, 0x376410u, 0x376418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376418u;
label_376418:
    // 0x376418: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x376418u;
    {
        const bool branch_taken_0x376418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x376418) {
            ctx->pc = 0x37641Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376418u;
            // 0x37641c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37642Cu;
            goto label_37642c;
        }
    }
    ctx->pc = 0x376420u;
    // 0x376420: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x376420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x376424: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x376424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x376428: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x376428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37642c:
    // 0x37642c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37642cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376430: 0x3e00008  jr          $ra
    ctx->pc = 0x376430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376430u;
        // 0x376434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376438u;
}
