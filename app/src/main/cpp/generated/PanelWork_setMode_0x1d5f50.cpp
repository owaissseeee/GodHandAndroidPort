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

// Function: PanelWork_setMode
// Address: 0x1d5f50 - 0x1d6030
void PanelWork_setMode_0x1d5f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PanelWork_setMode_0x1d5f50");
#endif

    switch (ctx->pc) {
        case 0x1d5f94u: goto label_1d5f94;
        case 0x1d5fa4u: goto label_1d5fa4;
        case 0x1d5fb4u: goto label_1d5fb4;
        case 0x1d5fc8u: goto label_1d5fc8;
        case 0x1d5fe4u: goto label_1d5fe4;
        case 0x1d5ff4u: goto label_1d5ff4;
        case 0x1d6004u: goto label_1d6004;
        case 0x1d601cu: goto label_1d601c;
        default: break;
    }

    ctx->pc = 0x1d5f50u;

    // 0x1d5f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5f54: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1d5f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d5f58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5f64: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D5F64u;
    {
        const bool branch_taken_0x1d5f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F64u;
        // 0x1d5f68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f64) {
            ctx->pc = 0x1D5FBCu;
            goto label_1d5fbc;
        }
    }
    ctx->pc = 0x1D5F6Cu;
    // 0x1d5f6c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d5f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5f70: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5F70u;
    {
        const bool branch_taken_0x1d5f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f70) {
            ctx->pc = 0x1D5F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5F70u;
            // 0x1d5f74: 0x2604105c  addiu       $a0, $s0, 0x105C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4188));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5F8Cu;
            goto label_1d5f8c;
        }
    }
    ctx->pc = 0x1D5F78u;
    // 0x1d5f78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d5f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5f7c: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D5F7Cu;
    {
        const bool branch_taken_0x1d5f7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F7Cu;
        // 0x1d5f80: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f7c) {
            ctx->pc = 0x1D5FD0u;
            goto label_1d5fd0;
        }
    }
    ctx->pc = 0x1D5F84u;
    // 0x1d5f84: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D5F84u;
    {
        const bool branch_taken_0x1d5f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F84u;
        // 0x1d5f88: 0x2604105c  addiu       $a0, $s0, 0x105C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f84) {
            ctx->pc = 0x1D600Cu;
            goto label_1d600c;
        }
    }
    ctx->pc = 0x1D5F8Cu;
label_1d5f8c:
    // 0x1d5f8c: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1D5F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F94u);
    ctx->pc = 0x1D5F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F8Cu;
    // 0x1d5f90: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1D5F8Cu, 0x1D5F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F94u;
label_1d5f94:
    // 0x1d5f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f98: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1d5f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1d5f9c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D5FA4u);
    ctx->pc = 0x1D5FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F9Cu;
    // 0x1d5fa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5F9Cu, 0x1D5FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FA4u;
label_1d5fa4:
    // 0x1d5fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fa8: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1d5fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d5fac: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5FACu;
    SET_GPR_U32(ctx, 31, 0x1D5FB4u);
    ctx->pc = 0x1D5FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FACu;
    // 0x1d5fb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5FACu, 0x1D5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FB4u;
label_1d5fb4:
    // 0x1d5fb4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D5FB4u;
    {
        const bool branch_taken_0x1d5fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FB4u;
        // 0x1d5fb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fb4) {
            ctx->pc = 0x1D6020u;
            goto label_1d6020;
        }
    }
    ctx->pc = 0x1D5FBCu;
label_1d5fbc:
    // 0x1d5fbc: 0x2604105c  addiu       $a0, $s0, 0x105C
    ctx->pc = 0x1d5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4188));
    // 0x1d5fc0: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1D5FC0u;
    SET_GPR_U32(ctx, 31, 0x1D5FC8u);
    ctx->pc = 0x1D5FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FC0u;
    // 0x1d5fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1D5FC0u, 0x1D5FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FC8u;
label_1d5fc8:
    // 0x1d5fc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5FC8u;
    {
        const bool branch_taken_0x1d5fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FC8u;
        // 0x1d5fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fc8) {
            ctx->pc = 0x1D5FE8u;
            goto label_1d5fe8;
        }
    }
    ctx->pc = 0x1D5FD0u;
label_1d5fd0:
    // 0x1d5fd0: 0x2604105c  addiu       $a0, $s0, 0x105C
    ctx->pc = 0x1d5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4188));
    // 0x1d5fd4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1d5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1d5fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5fdc: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1D5FDCu;
    SET_GPR_U32(ctx, 31, 0x1D5FE4u);
    ctx->pc = 0x1D5FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FDCu;
    // 0x1d5fe0: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1D5FDCu, 0x1D5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FE4u;
label_1d5fe4:
    // 0x1d5fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5fe8:
    // 0x1d5fe8: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1d5fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1d5fec: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5FECu;
    SET_GPR_U32(ctx, 31, 0x1D5FF4u);
    ctx->pc = 0x1D5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FECu;
    // 0x1d5ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5FECu, 0x1D5FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FF4u;
label_1d5ff4:
    // 0x1d5ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ff8: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1d5ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d5ffc: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5FFCu;
    SET_GPR_U32(ctx, 31, 0x1D6004u);
    ctx->pc = 0x1D6000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FFCu;
    // 0x1d6000: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5FFCu, 0x1D6004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6004u;
label_1d6004:
    // 0x1d6004: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6004u;
    {
        const bool branch_taken_0x1d6004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6004u;
        // 0x1d6008: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6004) {
            ctx->pc = 0x1D6020u;
            goto label_1d6020;
        }
    }
    ctx->pc = 0x1D600Cu;
label_1d600c:
    // 0x1d600c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6010: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x1d6010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1d6014: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1D6014u;
    SET_GPR_U32(ctx, 31, 0x1D601Cu);
    ctx->pc = 0x1D6018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6014u;
    // 0x1d6018: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1D6014u, 0x1D601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D601Cu;
label_1d601c:
    // 0x1d601c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d601cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6020:
    // 0x1d6020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6024: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6024u;
        // 0x1d6028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D602Cu;
    // 0x1d602c: 0x0  nop
    ctx->pc = 0x1d602cu;
    // NOP
    ctx->pc = 0x1d6030u;
}
