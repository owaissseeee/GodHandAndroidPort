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

// Function: serialPutchar
// Address: 0x3b0e30 - 0x3b0e68
void serialPutchar_0x3b0e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("serialPutchar_0x3b0e30");
#endif

    switch (ctx->pc) {
        case 0x3b0e48u: goto label_3b0e48;
        default: break;
    }

    ctx->pc = 0x3b0e30u;

    // 0x3b0e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b0e34: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b0e38: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0E38u;
    {
        const bool branch_taken_0x3b0e38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E38u;
        // 0x3b0e3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0e38) {
            ctx->pc = 0x3B0E58u;
            goto label_3b0e58;
        }
    }
    ctx->pc = 0x3B0E40u;
    // 0x3b0e40: 0xc0ec352  jal         func_3B0D48
    ctx->pc = 0x3B0E40u;
    SET_GPR_U32(ctx, 31, 0x3B0E48u);
    ctx->pc = 0x3B0E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E40u;
    // 0x3b0e44: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0D48u, 0x3B0E40u, 0x3B0E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0E48u;
label_3b0e48:
    // 0x3b0e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0e4c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3b0e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b0e50: 0x80ec352  j           func_3B0D48
    ctx->pc = 0x3B0E50u;
    ctx->pc = 0x3B0E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E50u;
    // 0x3b0e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0D48u, 0x3B0E50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B0E58u;
label_3b0e58:
    // 0x3b0e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0e5c: 0x80ec352  j           func_3B0D48
    ctx->pc = 0x3B0E5Cu;
    ctx->pc = 0x3B0E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E5Cu;
    // 0x3b0e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0D48u, 0x3B0E5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B0E64u;
    // 0x3b0e64: 0x0  nop
    ctx->pc = 0x3b0e64u;
    // NOP
    ctx->pc = 0x3b0e68u;
}
