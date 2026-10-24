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

// Function: func_002FBED0
// Address: 0x2fbed0 - 0x2fbfb0
void func_002FBED0_0x2fbed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FBED0_0x2fbed0");
#endif

    switch (ctx->pc) {
        case 0x2fbee4u: goto label_2fbee4;
        case 0x2fbf0cu: goto label_2fbf0c;
        case 0x2fbf14u: goto label_2fbf14;
        default: break;
    }

    ctx->pc = 0x2fbed0u;

    // 0x2fbed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fbed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fbed4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fbed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fbed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fbed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fbedc: 0xc0ad794  jal         func_2B5E50
    ctx->pc = 0x2FBEDCu;
    SET_GPR_U32(ctx, 31, 0x2FBEE4u);
    ctx->pc = 0x2FBEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBEDCu;
    // 0x2fbee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5E50u, 0x2FBEDCu, 0x2FBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBEE4u;
label_2fbee4:
    // 0x2fbee4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FBEE4u;
    {
        const bool branch_taken_0x2fbee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbee4) {
            ctx->pc = 0x2FBF0Cu;
            goto label_2fbf0c;
        }
    }
    ctx->pc = 0x2FBEECu;
    // 0x2fbeec: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2fbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2fbef0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBEF0u;
    {
        const bool branch_taken_0x2fbef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbef0) {
            ctx->pc = 0x2FBF0Cu;
            goto label_2fbf0c;
        }
    }
    ctx->pc = 0x2FBEF8u;
    // 0x2fbef8: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2fbef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2fbefc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBEFCu;
    {
        const bool branch_taken_0x2fbefc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2fbefc) {
            ctx->pc = 0x2FBF0Cu;
            goto label_2fbf0c;
        }
    }
    ctx->pc = 0x2FBF04u;
    // 0x2fbf04: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2FBF04u;
    SET_GPR_U32(ctx, 31, 0x2FBF0Cu);
    ctx->pc = 0x2FBF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF04u;
    // 0x2fbf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FBF04u, 0x2FBF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF0Cu;
label_2fbf0c:
    // 0x2fbf0c: 0xc0befec  jal         func_2FBFB0
    ctx->pc = 0x2FBF0Cu;
    SET_GPR_U32(ctx, 31, 0x2FBF14u);
    ctx->pc = 0x2FBF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBF0Cu;
    // 0x2fbf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBFB0u, 0x2FBF0Cu, 0x2FBF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBF14u;
label_2fbf14:
    // 0x2fbf14: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2fbf18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fbf1c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2fbf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2fbf20: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FBF20u;
    {
        const bool branch_taken_0x2fbf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF20u;
        // 0x2fbf24: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf20) {
            ctx->pc = 0x2FBF5Cu;
            goto label_2fbf5c;
        }
    }
    ctx->pc = 0x2FBF28u;
    // 0x2fbf28: 0x8c431db8  lw          $v1, 0x1DB8($v0)
    ctx->pc = 0x2fbf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
    // 0x2fbf2c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBF2Cu;
    {
        const bool branch_taken_0x2fbf2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbf2c) {
            ctx->pc = 0x2FBF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FBF2Cu;
            // 0x2fbf30: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FBF48u;
            goto label_2fbf48;
        }
    }
    ctx->pc = 0x2FBF34u;
    // 0x2fbf34: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x2fbf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2fbf38: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2fbf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2fbf3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fbf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fbf40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBF40u;
    {
        const bool branch_taken_0x2fbf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF40u;
        // 0x2fbf44: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf40) {
            ctx->pc = 0x2FBF58u;
            goto label_2fbf58;
        }
    }
    ctx->pc = 0x2FBF48u;
label_2fbf48:
    // 0x2fbf48: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x2fbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x2fbf4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fbf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fbf50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2fbf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fbf54: 0xae03011c  sw          $v1, 0x11C($s0)
    ctx->pc = 0x2fbf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
label_2fbf58:
    // 0x2fbf58: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fbf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2fbf5c:
    // 0x2fbf5c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fbf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fbf60: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2fbf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2fbf64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FBF64u;
    {
        const bool branch_taken_0x2fbf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF64u;
        // 0x2fbf68: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf64) {
            ctx->pc = 0x2FBF9Cu;
            goto label_2fbf9c;
        }
    }
    ctx->pc = 0x2FBF6Cu;
    // 0x2fbf6c: 0x8c431db8  lw          $v1, 0x1DB8($v0)
    ctx->pc = 0x2fbf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
    // 0x2fbf70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FBF70u;
    {
        const bool branch_taken_0x2fbf70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF70u;
        // 0x2fbf74: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf70) {
            ctx->pc = 0x2FBF88u;
            goto label_2fbf88;
        }
    }
    ctx->pc = 0x2FBF78u;
    // 0x2fbf78: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x2fbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2fbf7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fbf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fbf80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBF80u;
    {
        const bool branch_taken_0x2fbf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBF80u;
        // 0x2fbf84: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbf80) {
            ctx->pc = 0x2FBF9Cu;
            goto label_2fbf9c;
        }
    }
    ctx->pc = 0x2FBF88u;
label_2fbf88:
    // 0x2fbf88: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x2fbf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2fbf8c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x2fbf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x2fbf90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fbf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fbf94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2fbf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fbf98: 0xae03011c  sw          $v1, 0x11C($s0)
    ctx->pc = 0x2fbf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
label_2fbf9c:
    // 0x2fbf9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fbf9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbfa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fbfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBFA4u;
        // 0x2fbfa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBFACu;
    // 0x2fbfac: 0x0  nop
    ctx->pc = 0x2fbfacu;
    // NOP
    ctx->pc = 0x2fbfb0u;
}
