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

// Function: func_00330AD0
// Address: 0x330ad0 - 0x330b48
void func_00330AD0_0x330ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330AD0_0x330ad0");
#endif

    switch (ctx->pc) {
        case 0x330ad0u: goto label_330ad0;
        case 0x330ad4u: goto label_330ad4;
        case 0x330ad8u: goto label_330ad8;
        case 0x330adcu: goto label_330adc;
        case 0x330ae0u: goto label_330ae0;
        case 0x330ae4u: goto label_330ae4;
        case 0x330ae8u: goto label_330ae8;
        case 0x330aecu: goto label_330aec;
        case 0x330af0u: goto label_330af0;
        case 0x330af4u: goto label_330af4;
        case 0x330af8u: goto label_330af8;
        case 0x330afcu: goto label_330afc;
        case 0x330b00u: goto label_330b00;
        case 0x330b04u: goto label_330b04;
        case 0x330b08u: goto label_330b08;
        case 0x330b0cu: goto label_330b0c;
        case 0x330b10u: goto label_330b10;
        case 0x330b14u: goto label_330b14;
        case 0x330b18u: goto label_330b18;
        case 0x330b1cu: goto label_330b1c;
        case 0x330b20u: goto label_330b20;
        case 0x330b24u: goto label_330b24;
        case 0x330b28u: goto label_330b28;
        case 0x330b2cu: goto label_330b2c;
        case 0x330b30u: goto label_330b30;
        case 0x330b34u: goto label_330b34;
        case 0x330b38u: goto label_330b38;
        case 0x330b3cu: goto label_330b3c;
        case 0x330b40u: goto label_330b40;
        case 0x330b44u: goto label_330b44;
        default: break;
    }

    ctx->pc = 0x330ad0u;

label_330ad0:
    // 0x330ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_330ad4:
    // 0x330ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_330ad8:
    // 0x330ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_330adc:
    // 0x330adc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_330ae0:
    if (ctx->pc == 0x330AE0u) {
        ctx->pc = 0x330AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330ADCu;
        // 0x330ae0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330AE4u;
        goto label_330ae4;
    }
    ctx->pc = 0x330ADCu;
    {
        const bool branch_taken_0x330adc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x330AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330ADCu;
        // 0x330ae0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330adc) {
            ctx->pc = 0x330B00u;
            goto label_330b00;
        }
    }
    ctx->pc = 0x330AE4u;
label_330ae4:
    // 0x330ae4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330ae8:
    // 0x330ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330aec:
    // 0x330aec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x330aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_330af0:
    // 0x330af0: 0x248432d8  addiu       $a0, $a0, 0x32D8
    ctx->pc = 0x330af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13016));
label_330af4:
    // 0x330af4: 0x80cc0b8  j           func_3302E0
label_330af8:
    if (ctx->pc == 0x330AF8u) {
        ctx->pc = 0x330AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330AF4u;
        // 0x330af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330AFCu;
        goto label_330afc;
    }
    ctx->pc = 0x330AF4u;
    ctx->pc = 0x330AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330AF4u;
    // 0x330af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330AF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330AFCu;
label_330afc:
    // 0x330afc: 0x0  nop
    ctx->pc = 0x330afcu;
    // NOP
label_330b00:
    // 0x330b00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x330b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_330b04:
    // 0x330b04: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x330b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_330b08:
    // 0x330b08: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_330b0c:
    if (ctx->pc == 0x330B0Cu) {
        ctx->pc = 0x330B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B08u;
        // 0x330b0c: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B10u;
        goto label_330b10;
    }
    ctx->pc = 0x330B08u;
    {
        const bool branch_taken_0x330b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330b08) {
            ctx->pc = 0x330B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330B08u;
            // 0x330b0c: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330B30u;
            goto label_330b30;
        }
    }
    ctx->pc = 0x330B10u;
label_330b10:
    // 0x330b10: 0x40f809  jalr        $v0
label_330b14:
    if (ctx->pc == 0x330B14u) {
        ctx->pc = 0x330B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B10u;
        // 0x330b14: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B18u;
        goto label_330b18;
    }
    ctx->pc = 0x330B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330B18u);
        ctx->pc = 0x330B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B10u;
        // 0x330b14: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330B10u, 0x330B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330B18u;
label_330b18:
    // 0x330b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330b1c:
    // 0x330b1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x330b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_330b20:
    // 0x330b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330b24:
    // 0x330b24: 0x80cc244  j           func_330910
label_330b28:
    if (ctx->pc == 0x330B28u) {
        ctx->pc = 0x330B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B24u;
        // 0x330b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B2Cu;
        goto label_330b2c;
    }
    ctx->pc = 0x330B24u;
    ctx->pc = 0x330B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330B24u;
    // 0x330b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330910u, 0x330B24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330B2Cu;
label_330b2c:
    // 0x330b2c: 0x0  nop
    ctx->pc = 0x330b2cu;
    // NOP
label_330b30:
    // 0x330b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330b34:
    // 0x330b34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x330b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_330b38:
    // 0x330b38: 0x248432f8  addiu       $a0, $a0, 0x32F8
    ctx->pc = 0x330b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13048));
label_330b3c:
    // 0x330b3c: 0x80cc0b8  j           func_3302E0
label_330b40:
    if (ctx->pc == 0x330B40u) {
        ctx->pc = 0x330B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B3Cu;
        // 0x330b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B44u;
        goto label_330b44;
    }
    ctx->pc = 0x330B3Cu;
    ctx->pc = 0x330B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330B3Cu;
    // 0x330b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330B3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330B44u;
label_330b44:
    // 0x330b44: 0x0  nop
    ctx->pc = 0x330b44u;
    // NOP
    ctx->pc = 0x330b48u;
}
