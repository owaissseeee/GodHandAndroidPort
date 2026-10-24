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

// Function: SFD_Standby
// Address: 0x3570f8 - 0x357140
void SFD_Standby_0x3570f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFD_Standby_0x3570f8");
#endif

    switch (ctx->pc) {
        case 0x35710cu: goto label_35710c;
        default: break;
    }

    ctx->pc = 0x3570f8u;

    // 0x3570f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3570f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3570fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3570fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x357100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x357104: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x357104u;
    SET_GPR_U32(ctx, 31, 0x35710Cu);
    ctx->pc = 0x357108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357104u;
    // 0x357108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x357104u, 0x35710Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35710Cu;
label_35710c:
    // 0x35710c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35710cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x357110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357114: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x357114u;
    {
        const bool branch_taken_0x357114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357114u;
        // 0x357118: 0x34a50143  ori         $a1, $a1, 0x143 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)323);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357114) {
            ctx->pc = 0x357130u;
            goto label_357130;
        }
    }
    ctx->pc = 0x35711Cu;
    // 0x35711c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35711cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x357120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357124: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x357124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357128: 0x80d375c  j           func_34DD70
    ctx->pc = 0x357128u;
    ctx->pc = 0x35712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357128u;
    // 0x35712c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x357128u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x357130u;
label_357130:
    // 0x357130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357134: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x357134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357138: 0x80d5c50  j           func_357140
    ctx->pc = 0x357138u;
    ctx->pc = 0x35713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357138u;
    // 0x35713c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357140u, 0x357138u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x357140u;
}
