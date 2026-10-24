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

// Function: func_00332AE8
// Address: 0x332ae8 - 0x332ba8
void func_00332AE8_0x332ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332AE8_0x332ae8");
#endif

    switch (ctx->pc) {
        case 0x332b18u: goto label_332b18;
        case 0x332b38u: goto label_332b38;
        case 0x332b40u: goto label_332b40;
        case 0x332b48u: goto label_332b48;
        case 0x332b50u: goto label_332b50;
        case 0x332b5cu: goto label_332b5c;
        case 0x332b74u: goto label_332b74;
        case 0x332b88u: goto label_332b88;
        default: break;
    }

    ctx->pc = 0x332ae8u;

    // 0x332ae8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x332ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x332aec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x332aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x332af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x332af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332af4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x332af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x332af8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x332AF8u;
    {
        const bool branch_taken_0x332af8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x332AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AF8u;
        // 0x332afc: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332af8) {
            ctx->pc = 0x332B10u;
            goto label_332b10;
        }
    }
    ctx->pc = 0x332B00u;
    // 0x332b00: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x332b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x332b04: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x332B04u;
    {
        const bool branch_taken_0x332b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B04u;
        // 0x332b08: 0x24a542f8  addiu       $a1, $a1, 0x42F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b04) {
            ctx->pc = 0x332B80u;
            goto label_332b80;
        }
    }
    ctx->pc = 0x332B0Cu;
    // 0x332b0c: 0x0  nop
    ctx->pc = 0x332b0cu;
    // NOP
label_332b10:
    // 0x332b10: 0xc0ccf00  jal         func_333C00
    ctx->pc = 0x332B10u;
    SET_GPR_U32(ctx, 31, 0x332B18u);
    ctx->pc = 0x332B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B10u;
    // 0x332b14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333C00u, 0x332B10u, 0x332B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B18u;
label_332b18:
    // 0x332b18: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x332b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x332b1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x332b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x332b20: 0x24719c90  addiu       $s1, $v1, -0x6370
    ctx->pc = 0x332b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941840));
    // 0x332b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b28: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x332B28u;
    {
        const bool branch_taken_0x332b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B28u;
        // 0x332b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b28) {
            ctx->pc = 0x332B94u;
            goto label_332b94;
        }
    }
    ctx->pc = 0x332B30u;
    // 0x332b30: 0xc0ccce4  jal         func_333390
    ctx->pc = 0x332B30u;
    SET_GPR_U32(ctx, 31, 0x332B38u);
    ctx->pc = 0x333390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333390u, 0x332B30u, 0x332B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B38u;
label_332b38:
    // 0x332b38: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x332B38u;
    SET_GPR_U32(ctx, 31, 0x332B40u);
    ctx->pc = 0x332B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B38u;
    // 0x332b3c: 0x34048200  ori         $a0, $zero, 0x8200 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x332B38u, 0x332B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B40u;
label_332b40:
    // 0x332b40: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x332B40u;
    SET_GPR_U32(ctx, 31, 0x332B48u);
    ctx->pc = 0x332B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B40u;
    // 0x332b44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x332B40u, 0x332B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B48u;
label_332b48:
    // 0x332b48: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x332B48u;
    SET_GPR_U32(ctx, 31, 0x332B50u);
    ctx->pc = 0x332B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B48u;
    // 0x332b4c: 0x34048201  ori         $a0, $zero, 0x8201 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33281);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x332B48u, 0x332B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B50u;
label_332b50:
    // 0x332b50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b54: 0xc0cca0e  jal         func_332838
    ctx->pc = 0x332B54u;
    SET_GPR_U32(ctx, 31, 0x332B5Cu);
    ctx->pc = 0x332B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B54u;
    // 0x332b58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332838u, 0x332B54u, 0x332B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B5Cu;
label_332b5c:
    // 0x332b5c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x332b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x332b60: 0x24844328  addiu       $a0, $a0, 0x4328
    ctx->pc = 0x332b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17192));
    // 0x332b64: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x332B64u;
    {
        const bool branch_taken_0x332b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B64u;
        // 0x332b68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b64) {
            ctx->pc = 0x332B90u;
            goto label_332b90;
        }
    }
    ctx->pc = 0x332B6Cu;
    // 0x332b6c: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x332B6Cu;
    SET_GPR_U32(ctx, 31, 0x332B74u);
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x332B6Cu, 0x332B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B74u;
label_332b74:
    // 0x332b74: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x332b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x332b78: 0x24a54350  addiu       $a1, $a1, 0x4350
    ctx->pc = 0x332b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17232));
    // 0x332b7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x332b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332b80:
    // 0x332b80: 0xc0cca02  jal         func_332808
    ctx->pc = 0x332B80u;
    SET_GPR_U32(ctx, 31, 0x332B88u);
    ctx->pc = 0x332808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332808u, 0x332B80u, 0x332B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B88u;
label_332b88:
    // 0x332b88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x332B88u;
    {
        const bool branch_taken_0x332b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B88u;
        // 0x332b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b88) {
            ctx->pc = 0x332B94u;
            goto label_332b94;
        }
    }
    ctx->pc = 0x332B90u;
label_332b90:
    // 0x332b90: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x332b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_332b94:
    // 0x332b94: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x332b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332b98: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x332b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x332b9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x332b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x332BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332BA0u;
        // 0x332ba4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332BA8u;
}
