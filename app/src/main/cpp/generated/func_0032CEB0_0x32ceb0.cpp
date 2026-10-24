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

// Function: func_0032CEB0
// Address: 0x32ceb0 - 0x32cf30
void func_0032CEB0_0x32ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032CEB0_0x32ceb0");
#endif

    switch (ctx->pc) {
        case 0x32ced4u: goto label_32ced4;
        case 0x32cf04u: goto label_32cf04;
        default: break;
    }

    ctx->pc = 0x32ceb0u;

    // 0x32ceb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ceb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ceb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ceb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cebc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32cec0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32cec4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32CEC4u;
    {
        const bool branch_taken_0x32cec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CEC4u;
        // 0x32cec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cec4) {
            ctx->pc = 0x32CEF0u;
            goto label_32cef0;
        }
    }
    ctx->pc = 0x32CECCu;
    // 0x32cecc: 0xc0ca026  jal         func_328098
    ctx->pc = 0x32CECCu;
    SET_GPR_U32(ctx, 31, 0x32CED4u);
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x32CECCu, 0x32CED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CED4u;
label_32ced4:
    // 0x32ced4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32ced8: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CED8u;
    {
        const bool branch_taken_0x32ced8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32ced8) {
            ctx->pc = 0x32CEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CED8u;
            // 0x32cedc: 0x8e040094  lw          $a0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CEF4u;
            goto label_32cef4;
        }
    }
    ctx->pc = 0x32CEE0u;
    // 0x32cee0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32cee4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x32cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32cee8: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x32cee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x32ceec: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x32ceecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_32cef0:
    // 0x32cef0: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x32cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_32cef4:
    // 0x32cef4: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x32CEF4u;
    {
        const bool branch_taken_0x32cef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32cef4) {
            ctx->pc = 0x32CEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CEF4u;
            // 0x32cef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CF24u;
            goto label_32cf24;
        }
    }
    ctx->pc = 0x32CEFCu;
    // 0x32cefc: 0xc0cd6a8  jal         func_335AA0
    ctx->pc = 0x32CEFCu;
    SET_GPR_U32(ctx, 31, 0x32CF04u);
    ctx->pc = 0x335AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335AA0u, 0x32CEFCu, 0x32CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CF04u;
label_32cf04:
    // 0x32cf04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32cf08: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CF08u;
    {
        const bool branch_taken_0x32cf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32cf08) {
            ctx->pc = 0x32CF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CF08u;
            // 0x32cf0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CF24u;
            goto label_32cf24;
        }
    }
    ctx->pc = 0x32CF10u;
    // 0x32cf10: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32cf14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32cf18: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x32cf18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x32cf1c: 0xa6030060  sh          $v1, 0x60($s0)
    ctx->pc = 0x32cf1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x32cf20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32cf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32cf24:
    // 0x32cf24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32cf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32cf28: 0x3e00008  jr          $ra
    ctx->pc = 0x32CF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CF28u;
        // 0x32cf2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CF30u;
}
