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

// Function: DelayThread
// Address: 0x3b0ae0 - 0x3b0ba8
void DelayThread_0x3b0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DelayThread_0x3b0ae0");
#endif

    switch (ctx->pc) {
        case 0x3b0b30u: goto label_3b0b30;
        case 0x3b0b50u: goto label_3b0b50;
        case 0x3b0b64u: goto label_3b0b64;
        case 0x3b0b78u: goto label_3b0b78;
        case 0x3b0b88u: goto label_3b0b88;
        case 0x3b0b90u: goto label_3b0b90;
        default: break;
    }

    ctx->pc = 0x3b0ae0u;

    // 0x3b0ae0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b0ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b0ae4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3b0ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3b0ae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b0ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b0aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b0aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0af0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b0af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3b0af4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3b0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3b0af8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3b0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3b0afc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b0afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b0b00: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0B00u;
    {
        const bool branch_taken_0x3b0b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0b00) {
            ctx->pc = 0x3B0B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0B00u;
            // 0x3b0b04: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0B14u;
            goto label_3b0b14;
        }
    }
    ctx->pc = 0x3B0B08u;
    // 0x3b0b08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b0b0c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3B0B0Cu;
    {
        const bool branch_taken_0x3b0b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B0Cu;
        // 0x3b0b10: 0x34428008  ori         $v0, $v0, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b0c) {
            ctx->pc = 0x3B0B94u;
            goto label_3b0b94;
        }
    }
    ctx->pc = 0x3B0B14u;
label_3b0b14:
    // 0x3b0b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0b18: 0x2442fe40  addiu       $v0, $v0, -0x1C0
    ctx->pc = 0x3b0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x3b0b1c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3b0b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3b0b20: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b0b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b0b24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b0b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b28: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B0B28u;
    SET_GPR_U32(ctx, 31, 0x3B0B30u);
    ctx->pc = 0x3B0B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B28u;
    // 0x3b0b2c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B0B28u, 0x3B0B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B30u;
label_3b0b30:
    // 0x3b0b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b0b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b34: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0B34u;
    {
        const bool branch_taken_0x3b0b34 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3B0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B34u;
        // 0x3b0b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b34) {
            ctx->pc = 0x3B0B48u;
            goto label_3b0b48;
        }
    }
    ctx->pc = 0x3B0B3Cu;
    // 0x3b0b3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b0b40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3B0B40u;
    {
        const bool branch_taken_0x3b0b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B40u;
        // 0x3b0b44: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b40) {
            ctx->pc = 0x3B0B94u;
            goto label_3b0b94;
        }
    }
    ctx->pc = 0x3B0B48u;
label_3b0b48:
    // 0x3b0b48: 0xc0edd8e  jal         func_3B7638
    ctx->pc = 0x3B0B48u;
    SET_GPR_U32(ctx, 31, 0x3B0B50u);
    ctx->pc = 0x3B0B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B48u;
    // 0x3b0b4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7638u, 0x3B0B48u, 0x3B0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B50u;
label_3b0b50:
    // 0x3b0b50: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b0b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b0b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b0b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b58: 0x24a50d20  addiu       $a1, $a1, 0xD20
    ctx->pc = 0x3b0b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3360));
    // 0x3b0b5c: 0xc0eddda  jal         func_3B7768
    ctx->pc = 0x3B0B5Cu;
    SET_GPR_U32(ctx, 31, 0x3B0B64u);
    ctx->pc = 0x3B0B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B5Cu;
    // 0x3b0b60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7768u, 0x3B0B5Cu, 0x3B0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B64u;
label_3b0b64:
    // 0x3b0b64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b0b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0b68: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0B68u;
    {
        const bool branch_taken_0x3b0b68 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x3b0b68) {
            ctx->pc = 0x3B0B80u;
            goto label_3b0b80;
        }
    }
    ctx->pc = 0x3B0B70u;
    // 0x3b0b70: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B0B70u;
    SET_GPR_U32(ctx, 31, 0x3B0B78u);
    ctx->pc = 0x3B0B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B70u;
    // 0x3b0b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B0B70u, 0x3B0B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B78u;
label_3b0b78:
    // 0x3b0b78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B0B78u;
    {
        const bool branch_taken_0x3b0b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B78u;
        // 0x3b0b7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b78) {
            ctx->pc = 0x3B0B94u;
            goto label_3b0b94;
        }
    }
    ctx->pc = 0x3B0B80u;
label_3b0b80:
    // 0x3b0b80: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B0B80u;
    SET_GPR_U32(ctx, 31, 0x3B0B88u);
    ctx->pc = 0x3B0B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B80u;
    // 0x3b0b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B0B80u, 0x3B0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B88u;
label_3b0b88:
    // 0x3b0b88: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B0B88u;
    SET_GPR_U32(ctx, 31, 0x3B0B90u);
    ctx->pc = 0x3B0B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B88u;
    // 0x3b0b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B0B88u, 0x3B0B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B90u;
label_3b0b90:
    // 0x3b0b90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0b94:
    // 0x3b0b94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b0b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b0b98: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3b0b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0b9c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b0b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BA0u;
        // 0x3b0ba4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0BA8u;
}
