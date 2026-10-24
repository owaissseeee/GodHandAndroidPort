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

// Function: TaskFnWork_runAndExit
// Address: 0x2d5ad8 - 0x2d5b30
void TaskFnWork_runAndExit_0x2d5ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TaskFnWork_runAndExit_0x2d5ad8");
#endif

    switch (ctx->pc) {
        case 0x2d5ad8u: goto label_2d5ad8;
        case 0x2d5adcu: goto label_2d5adc;
        case 0x2d5ae0u: goto label_2d5ae0;
        case 0x2d5ae4u: goto label_2d5ae4;
        case 0x2d5ae8u: goto label_2d5ae8;
        case 0x2d5aecu: goto label_2d5aec;
        case 0x2d5af0u: goto label_2d5af0;
        case 0x2d5af4u: goto label_2d5af4;
        case 0x2d5af8u: goto label_2d5af8;
        case 0x2d5afcu: goto label_2d5afc;
        case 0x2d5b00u: goto label_2d5b00;
        case 0x2d5b04u: goto label_2d5b04;
        case 0x2d5b08u: goto label_2d5b08;
        case 0x2d5b0cu: goto label_2d5b0c;
        case 0x2d5b10u: goto label_2d5b10;
        case 0x2d5b14u: goto label_2d5b14;
        case 0x2d5b18u: goto label_2d5b18;
        case 0x2d5b1cu: goto label_2d5b1c;
        case 0x2d5b20u: goto label_2d5b20;
        case 0x2d5b24u: goto label_2d5b24;
        case 0x2d5b28u: goto label_2d5b28;
        case 0x2d5b2cu: goto label_2d5b2c;
        default: break;
    }

    ctx->pc = 0x2d5ad8u;

label_2d5ad8:
    // 0x2d5ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d5ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d5adc:
    // 0x2d5adc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d5adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d5ae0:
    // 0x2d5ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d5ae4:
    // 0x2d5ae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d5ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5ae8:
    // 0x2d5ae8: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x2d5ae8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
label_2d5aec:
    // 0x2d5aec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2d5af0:
    if (ctx->pc == 0x2D5AF0u) {
        ctx->pc = 0x2D5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AECu;
        // 0x2d5af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5AF4u;
        goto label_2d5af4;
    }
    ctx->pc = 0x2D5AECu;
    {
        const bool branch_taken_0x2d5aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AECu;
        // 0x2d5af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5aec) {
            ctx->pc = 0x2D5AFCu;
            goto label_2d5afc;
        }
    }
    ctx->pc = 0x2D5AF4u;
label_2d5af4:
    // 0x2d5af4: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_2d5af8:
    if (ctx->pc == 0x2D5AF8u) {
        ctx->pc = 0x2D5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AF4u;
        // 0x2d5af8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5AFCu;
        goto label_2d5afc;
    }
    ctx->pc = 0x2D5AF4u;
    {
        const bool branch_taken_0x2d5af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d5af4) {
            ctx->pc = 0x2D5AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5AF4u;
            // 0x2d5af8: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5B10u;
            goto label_2d5b10;
        }
    }
    ctx->pc = 0x2D5AFCu;
label_2d5afc:
    // 0x2d5afc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2d5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2d5b00:
    // 0x2d5b00: 0x40f809  jalr        $v0
label_2d5b04:
    if (ctx->pc == 0x2D5B04u) {
        ctx->pc = 0x2D5B08u;
        goto label_2d5b08;
    }
    ctx->pc = 0x2D5B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5B08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5B00u, 0x2D5B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5B08u;
label_2d5b08:
    // 0x2d5b08: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d5b0c:
    if (ctx->pc == 0x2D5B0Cu) {
        ctx->pc = 0x2D5B10u;
        goto label_2d5b10;
    }
    ctx->pc = 0x2D5B08u;
    {
        const bool branch_taken_0x2d5b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5b08) {
            ctx->pc = 0x2D5B18u;
            goto label_2d5b18;
        }
    }
    ctx->pc = 0x2D5B10u;
label_2d5b10:
    // 0x2d5b10: 0x40f809  jalr        $v0
label_2d5b14:
    if (ctx->pc == 0x2D5B14u) {
        ctx->pc = 0x2D5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B10u;
        // 0x2d5b14: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5B18u;
        goto label_2d5b18;
    }
    ctx->pc = 0x2D5B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5B18u);
        ctx->pc = 0x2D5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B10u;
        // 0x2d5b14: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5B10u, 0x2D5B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5B18u;
label_2d5b18:
    // 0x2d5b18: 0xc0b5692  jal         func_2D5A48
label_2d5b1c:
    if (ctx->pc == 0x2D5B1Cu) {
        ctx->pc = 0x2D5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B18u;
        // 0x2d5b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5B20u;
        goto label_2d5b20;
    }
    ctx->pc = 0x2D5B18u;
    SET_GPR_U32(ctx, 31, 0x2D5B20u);
    ctx->pc = 0x2D5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5B18u;
    // 0x2d5b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x2D5B18u, 0x2D5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5B20u;
label_2d5b20:
    // 0x2d5b20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d5b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5b24:
    // 0x2d5b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5b28:
    // 0x2d5b28: 0x3e00008  jr          $ra
label_2d5b2c:
    if (ctx->pc == 0x2D5B2Cu) {
        ctx->pc = 0x2D5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B28u;
        // 0x2d5b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5B30u;
        goto label_fallthrough_0x2d5b28;
    }
    ctx->pc = 0x2D5B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B28u;
        // 0x2d5b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d5b28:
    ctx->pc = 0x2D5B30u;
}
