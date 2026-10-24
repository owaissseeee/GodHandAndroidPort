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

// Function: func_002B3B70
// Address: 0x2b3b70 - 0x2b3be0
void func_002B3B70_0x2b3b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3B70_0x2b3b70");
#endif

    switch (ctx->pc) {
        case 0x2b3b8cu: goto label_2b3b8c;
        case 0x2b3ba0u: goto label_2b3ba0;
        case 0x2b3bb0u: goto label_2b3bb0;
        case 0x2b3bb8u: goto label_2b3bb8;
        default: break;
    }

    ctx->pc = 0x2b3b70u;

    // 0x2b3b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3b74: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b3b78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b3b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b3b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3b84: 0xc0abbe4  jal         func_2AEF90
    ctx->pc = 0x2B3B84u;
    SET_GPR_U32(ctx, 31, 0x2B3B8Cu);
    ctx->pc = 0x2B3B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B84u;
    // 0x2b3b88: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEF90u, 0x2B3B84u, 0x2B3B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B8Cu;
label_2b3b8c:
    // 0x2b3b8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3B8Cu;
    {
        const bool branch_taken_0x2b3b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B8Cu;
        // 0x2b3b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b8c) {
            ctx->pc = 0x2B3BA8u;
            goto label_2b3ba8;
        }
    }
    ctx->pc = 0x2B3B94u;
    // 0x2b3b94: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2b3b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b3b98: 0xc0ad17e  jal         func_2B45F8
    ctx->pc = 0x2B3B98u;
    SET_GPR_U32(ctx, 31, 0x2B3BA0u);
    ctx->pc = 0x2B3B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B98u;
    // 0x2b3b9c: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45F8u, 0x2B3B98u, 0x2B3BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BA0u;
label_2b3ba0:
    // 0x2b3ba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3BA0u;
    {
        const bool branch_taken_0x2b3ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ba0) {
            ctx->pc = 0x2B3BB0u;
            goto label_2b3bb0;
        }
    }
    ctx->pc = 0x2B3BA8u;
label_2b3ba8:
    // 0x2b3ba8: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B3BA8u;
    SET_GPR_U32(ctx, 31, 0x2B3BB0u);
    ctx->pc = 0x2B3BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3BA8u;
    // 0x2b3bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B3BA8u, 0x2B3BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BB0u;
label_2b3bb0:
    // 0x2b3bb0: 0xc0ad17a  jal         func_2B45E8
    ctx->pc = 0x2B3BB0u;
    SET_GPR_U32(ctx, 31, 0x2B3BB8u);
    ctx->pc = 0x2B3BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3BB0u;
    // 0x2b3bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45E8u, 0x2B3BB0u, 0x2B3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3BB8u;
label_2b3bb8:
    // 0x2b3bb8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b3bbc: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b3bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3bc0: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2b3bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3bc4: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2b3bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3bc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3bcc: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2b3bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3bd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b3bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BD8u;
        // 0x2b3bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3BE0u;
}
