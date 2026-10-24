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

// Function: func_002D5000
// Address: 0x2d5000 - 0x2d5070
void func_002D5000_0x2d5000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5000_0x2d5000");
#endif

    switch (ctx->pc) {
        case 0x2d5014u: goto label_2d5014;
        default: break;
    }

    ctx->pc = 0x2d5000u;

    // 0x2d5000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5004: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d500c: 0xc0b53f0  jal         func_2D4FC0
    ctx->pc = 0x2D500Cu;
    SET_GPR_U32(ctx, 31, 0x2D5014u);
    ctx->pc = 0x2D5010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D500Cu;
    // 0x2d5010: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4FC0u, 0x2D500Cu, 0x2D5014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5014u;
label_2d5014:
    // 0x2d5014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5018: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5018u;
        // 0x2d501c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5020u;
    // 0x2d5020: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2d5020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2d5024: 0x0  nop
    ctx->pc = 0x2d5024u;
    // NOP
    // 0x2d5028: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d5028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d502c: 0x0  nop
    ctx->pc = 0x2d502cu;
    // NOP
    // 0x2d5030: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d5030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d5034: 0x0  nop
    ctx->pc = 0x2d5034u;
    // NOP
    // 0x2d5038: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d5038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d503c: 0x0  nop
    ctx->pc = 0x2d503cu;
    // NOP
    // 0x2d5040: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5044: 0x0  nop
    ctx->pc = 0x2d5044u;
    // NOP
    // 0x2d5048: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d504c: 0x0  nop
    ctx->pc = 0x2d504cu;
    // NOP
    // 0x2d5050: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d5050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5054: 0x0  nop
    ctx->pc = 0x2d5054u;
    // NOP
    // 0x2d5058: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d5058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d505c: 0x0  nop
    ctx->pc = 0x2d505cu;
    // NOP
    // 0x2d5060: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d5060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d5064: 0x0  nop
    ctx->pc = 0x2d5064u;
    // NOP
    // 0x2d5068: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d5068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d506c: 0x0  nop
    ctx->pc = 0x2d506cu;
    // NOP
    ctx->pc = 0x2d5070u;
}
