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

// Function: func_001D5E08
// Address: 0x1d5e08 - 0x1d5f50
void func_001D5E08_0x1d5e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D5E08_0x1d5e08");
#endif

    switch (ctx->pc) {
        case 0x1d5e4cu: goto label_1d5e4c;
        case 0x1d5e5cu: goto label_1d5e5c;
        case 0x1d5e78u: goto label_1d5e78;
        case 0x1d5e88u: goto label_1d5e88;
        case 0x1d5e9cu: goto label_1d5e9c;
        case 0x1d5eacu: goto label_1d5eac;
        case 0x1d5ec8u: goto label_1d5ec8;
        case 0x1d5ed8u: goto label_1d5ed8;
        case 0x1d5ee8u: goto label_1d5ee8;
        case 0x1d5ef8u: goto label_1d5ef8;
        case 0x1d5f10u: goto label_1d5f10;
        case 0x1d5f20u: goto label_1d5f20;
        case 0x1d5f30u: goto label_1d5f30;
        case 0x1d5f40u: goto label_1d5f40;
        default: break;
    }

    ctx->pc = 0x1d5e08u;

    // 0x1d5e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5e0c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1d5e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d5e10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5e1c: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D5E1Cu;
    {
        const bool branch_taken_0x1d5e1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E1Cu;
        // 0x1d5e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e1c) {
            ctx->pc = 0x1D5E6Cu;
            goto label_1d5e6c;
        }
    }
    ctx->pc = 0x1D5E24u;
    // 0x1d5e24: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1d5e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5e28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5E28u;
    {
        const bool branch_taken_0x1d5e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e28) {
            ctx->pc = 0x1D5E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5E28u;
            // 0x1d5e2c: 0x260406ac  addiu       $a0, $s0, 0x6AC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1708));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5E44u;
            goto label_1d5e44;
        }
    }
    ctx->pc = 0x1D5E30u;
    // 0x1d5e30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5e34: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D5E34u;
    {
        const bool branch_taken_0x1d5e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E34u;
        // 0x1d5e38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e34) {
            ctx->pc = 0x1D5EB4u;
            goto label_1d5eb4;
        }
    }
    ctx->pc = 0x1D5E3Cu;
    // 0x1d5e3c: 0x10a20030  beq         $a1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D5E3Cu;
    {
        const bool branch_taken_0x1d5e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E3Cu;
        // 0x1d5e40: 0x260406ac  addiu       $a0, $s0, 0x6AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e3c) {
            ctx->pc = 0x1D5F00u;
            goto label_1d5f00;
        }
    }
    ctx->pc = 0x1D5E44u;
label_1d5e44:
    // 0x1d5e44: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D5E44u;
    SET_GPR_U32(ctx, 31, 0x1D5E4Cu);
    ctx->pc = 0x1D5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E44u;
    // 0x1d5e48: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D5E44u, 0x1D5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E4Cu;
label_1d5e4c:
    // 0x1d5e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e50: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d5e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d5e54: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5E54u;
    SET_GPR_U32(ctx, 31, 0x1D5E5Cu);
    ctx->pc = 0x1D5E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E54u;
    // 0x1d5e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5E54u, 0x1D5E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E5Cu;
label_1d5e5c:
    // 0x1d5e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e60: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d5e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d5e64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D5E64u;
    {
        const bool branch_taken_0x1d5e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E64u;
        // 0x1d5e68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e64) {
            ctx->pc = 0x1D5E94u;
            goto label_1d5e94;
        }
    }
    ctx->pc = 0x1D5E6Cu;
label_1d5e6c:
    // 0x1d5e6c: 0x260406ac  addiu       $a0, $s0, 0x6AC
    ctx->pc = 0x1d5e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1708));
    // 0x1d5e70: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D5E70u;
    SET_GPR_U32(ctx, 31, 0x1D5E78u);
    ctx->pc = 0x1D5E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E70u;
    // 0x1d5e74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D5E70u, 0x1D5E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E78u;
label_1d5e78:
    // 0x1d5e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e7c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d5e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d5e80: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5E80u;
    SET_GPR_U32(ctx, 31, 0x1D5E88u);
    ctx->pc = 0x1D5E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E80u;
    // 0x1d5e84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5E80u, 0x1D5E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E88u;
label_1d5e88:
    // 0x1d5e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e8c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d5e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d5e90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5e94:
    // 0x1d5e94: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5E94u;
    SET_GPR_U32(ctx, 31, 0x1D5E9Cu);
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5E94u, 0x1D5E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E9Cu;
label_1d5e9c:
    // 0x1d5e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d5ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d5ea4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5EA4u;
    SET_GPR_U32(ctx, 31, 0x1D5EACu);
    ctx->pc = 0x1D5EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EA4u;
    // 0x1d5ea8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5EA4u, 0x1D5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EACu;
label_1d5eac:
    // 0x1d5eac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D5EACu;
    {
        const bool branch_taken_0x1d5eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EACu;
        // 0x1d5eb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5eac) {
            ctx->pc = 0x1D5F44u;
            goto label_1d5f44;
        }
    }
    ctx->pc = 0x1D5EB4u;
label_1d5eb4:
    // 0x1d5eb4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1d5eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d5eb8: 0x260406ac  addiu       $a0, $s0, 0x6AC
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1708));
    // 0x1d5ebc: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x1d5ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1d5ec0: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D5EC0u;
    SET_GPR_U32(ctx, 31, 0x1D5EC8u);
    ctx->pc = 0x1D5EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EC0u;
    // 0x1d5ec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D5EC0u, 0x1D5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EC8u;
label_1d5ec8:
    // 0x1d5ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ecc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d5ed0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5ED0u;
    SET_GPR_U32(ctx, 31, 0x1D5ED8u);
    ctx->pc = 0x1D5ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ED0u;
    // 0x1d5ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5ED0u, 0x1D5ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ED8u;
label_1d5ed8:
    // 0x1d5ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5edc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d5edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d5ee0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5EE0u;
    SET_GPR_U32(ctx, 31, 0x1D5EE8u);
    ctx->pc = 0x1D5EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EE0u;
    // 0x1d5ee4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5EE0u, 0x1D5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EE8u;
label_1d5ee8:
    // 0x1d5ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d5eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d5ef0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5EF0u;
    SET_GPR_U32(ctx, 31, 0x1D5EF8u);
    ctx->pc = 0x1D5EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EF0u;
    // 0x1d5ef4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5EF0u, 0x1D5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EF8u;
label_1d5ef8:
    // 0x1d5ef8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5EF8u;
    {
        const bool branch_taken_0x1d5ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EF8u;
        // 0x1d5efc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ef8) {
            ctx->pc = 0x1D5F44u;
            goto label_1d5f44;
        }
    }
    ctx->pc = 0x1D5F00u;
label_1d5f00:
    // 0x1d5f00: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d5f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f08: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D5F08u;
    SET_GPR_U32(ctx, 31, 0x1D5F10u);
    ctx->pc = 0x1D5F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F08u;
    // 0x1d5f0c: 0x2406fec0  addiu       $a2, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D5F08u, 0x1D5F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F10u;
label_1d5f10:
    // 0x1d5f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f14: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d5f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d5f18: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5F18u;
    SET_GPR_U32(ctx, 31, 0x1D5F20u);
    ctx->pc = 0x1D5F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F18u;
    // 0x1d5f1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5F18u, 0x1D5F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F20u;
label_1d5f20:
    // 0x1d5f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f24: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d5f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d5f28: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5F28u;
    SET_GPR_U32(ctx, 31, 0x1D5F30u);
    ctx->pc = 0x1D5F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F28u;
    // 0x1d5f2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5F28u, 0x1D5F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F30u;
label_1d5f30:
    // 0x1d5f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d5f38: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D5F38u;
    SET_GPR_U32(ctx, 31, 0x1D5F40u);
    ctx->pc = 0x1D5F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F38u;
    // 0x1d5f3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D5F38u, 0x1D5F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F40u;
label_1d5f40:
    // 0x1d5f40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5f44:
    // 0x1d5f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F48u;
        // 0x1d5f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F50u;
}
