#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: __unpack_d
// Address: 0x79bec8 - 0x79bf68
void ps2___unpack_d_0x79bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_d_0x79bec8");
#endif

    ctx->pc = 0x79bec8u;

    // 0x79bec8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x79bec8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79becc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79beccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bed0: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x79bed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x79bed4: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x79bed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x79bed8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x79bed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79bedc: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x79bedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x79bee0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x79bee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x79bee4: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x79bee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x79bee8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BEE8u;
    {
        const bool branch_taken_0x79bee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEE8u;
        // 0x79beec: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bee8) {
            ctx->pc = 0x79BF00u;
            goto label_79bf00;
        }
    }
    ctx->pc = 0x79BEF0u;
    // 0x79bef0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79bef4: 0x3e00008  jr          $ra
    ctx->pc = 0x79BEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEF4u;
        // 0x79bef8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEFCu;
    // 0x79befc: 0x0  nop
    ctx->pc = 0x79befcu;
    // NOP
label_79bf00:
    // 0x79bf00: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79BF00u;
    {
        const bool branch_taken_0x79bf00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x79bf00) {
            ctx->pc = 0x79BF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BF00u;
            // 0x79bf04: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BF40u;
            goto label_79bf40;
        }
    }
    ctx->pc = 0x79BF08u;
    // 0x79bf08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BF08u;
    {
        const bool branch_taken_0x79bf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF08u;
        // 0x79bf0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf08) {
            ctx->pc = 0x79BF18u;
            goto label_79bf18;
        }
    }
    ctx->pc = 0x79BF10u;
    // 0x79bf10: 0x3e00008  jr          $ra
    ctx->pc = 0x79BF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF10u;
        // 0x79bf14: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BF18u;
label_79bf18:
    // 0x79bf18: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79bf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79bf1c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x79bf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x79bf20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79bf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79bf24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BF24u;
    {
        const bool branch_taken_0x79bf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF24u;
        // 0x79bf28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf24) {
            ctx->pc = 0x79BF34u;
            goto label_79bf34;
        }
    }
    ctx->pc = 0x79BF2Cu;
    // 0x79bf2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79BF2Cu;
    {
        const bool branch_taken_0x79bf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF2Cu;
        // 0x79bf30: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf2c) {
            ctx->pc = 0x79BF38u;
            goto label_79bf38;
        }
    }
    ctx->pc = 0x79BF34u;
label_79bf34:
    // 0x79bf34: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x79bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_79bf38:
    // 0x79bf38: 0x3e00008  jr          $ra
    ctx->pc = 0x79BF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF38u;
        // 0x79bf3c: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BF40u;
label_79bf40:
    // 0x79bf40: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79bf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79bf44: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x79bf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x79bf48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x79bf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79bf4c: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x79bf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x79bf50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79bf54: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x79bf54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x79bf58: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x79bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x79bf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF5Cu;
        // 0x79bf60: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BF64u;
    // 0x79bf64: 0x0  nop
    ctx->pc = 0x79bf64u;
    // NOP
    ctx->pc = 0x79bf68u;
}
} // namespace gh_r022
