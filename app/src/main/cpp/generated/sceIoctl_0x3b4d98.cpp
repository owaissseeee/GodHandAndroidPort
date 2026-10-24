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

// Function: sceIoctl
// Address: 0x3b4d98 - 0x3b5120
void sceIoctl_0x3b4d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceIoctl_0x3b4d98");
#endif

    switch (ctx->pc) {
        case 0x3b4dd8u: goto label_3b4dd8;
        case 0x3b4de4u: goto label_3b4de4;
        case 0x3b4e00u: goto label_3b4e00;
        case 0x3b4e1cu: goto label_3b4e1c;
        case 0x3b4e64u: goto label_3b4e64;
        case 0x3b4e88u: goto label_3b4e88;
        case 0x3b4ec8u: goto label_3b4ec8;
        case 0x3b4f30u: goto label_3b4f30;
        case 0x3b4f8cu: goto label_3b4f8c;
        case 0x3b4ffcu: goto label_3b4ffc;
        case 0x3b5054u: goto label_3b5054;
        case 0x3b5074u: goto label_3b5074;
        case 0x3b50a0u: goto label_3b50a0;
        case 0x3b50b0u: goto label_3b50b0;
        case 0x3b50b8u: goto label_3b50b8;
        case 0x3b50ccu: goto label_3b50cc;
        case 0x3b50dcu: goto label_3b50dc;
        case 0x3b50ecu: goto label_3b50ec;
        case 0x3b50f4u: goto label_3b50f4;
        default: break;
    }

    ctx->pc = 0x3b4d98u;

    // 0x3b4d98: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b4d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3b4d9c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3b4d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3b4da0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3b4da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3b4da4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b4da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4da8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3b4da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3b4dac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b4dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4db0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3b4db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3b4db4: 0x3c160078  lui         $s6, 0x78
    ctx->pc = 0x3b4db4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)120 << 16));
    // 0x3b4db8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3b4db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3b4dbc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3b4dbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4dc0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3b4dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3b4dc4: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x3b4dc4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
    // 0x3b4dc8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3b4dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3b4dcc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3b4dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3b4dd0: 0xc0ece92  jal         func_3B3A48
    ctx->pc = 0x3B4DD0u;
    SET_GPR_U32(ctx, 31, 0x3B4DD8u);
    ctx->pc = 0x3B4DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4DD0u;
    // 0x3b4dd4: 0x26d3ffc0  addiu       $s3, $s6, -0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3A48u, 0x3B4DD0u, 0x3B4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4DD8u;
label_3b4dd8:
    // 0x3b4dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4ddc: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B4DDCu;
    SET_GPR_U32(ctx, 31, 0x3B4DE4u);
    ctx->pc = 0x3B4DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4DDCu;
    // 0x3b4de0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B4DDCu, 0x3B4DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4DE4u;
label_3b4de4:
    // 0x3b4de4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b4de8: 0xae92ff88  sw          $s2, -0x78($s4)
    ctx->pc = 0x3b4de8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294967176), GPR_U32(ctx, 18));
    // 0x3b4dec: 0x8c43aedc  lw          $v1, -0x5124($v0)
    ctx->pc = 0x3b4decu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b4df0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4DF0u;
    {
        const bool branch_taken_0x3b4df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4df0) {
            ctx->pc = 0x3B4E00u;
            goto label_3b4e00;
        }
    }
    ctx->pc = 0x3B4DF8u;
    // 0x3b4df8: 0xc0ecfd4  jal         func_3B3F50
    ctx->pc = 0x3B4DF8u;
    SET_GPR_U32(ctx, 31, 0x3B4E00u);
    ctx->pc = 0x3B3F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3F50u, 0x3B4DF8u, 0x3B4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E00u;
label_3b4e00:
    // 0x3b4e00: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4E00u;
    {
        const bool branch_taken_0x3b4e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4e00) {
            ctx->pc = 0x3B4E14u;
            goto label_3b4e14;
        }
    }
    ctx->pc = 0x3B4E08u;
    // 0x3b4e08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b4e0c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4E0Cu;
    {
        const bool branch_taken_0x3b4e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4e0c) {
            ctx->pc = 0x3B4E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4E0Cu;
            // 0x3b4e10: 0xae600414  sw          $zero, 0x414($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 1044), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4E24u;
            goto label_3b4e24;
        }
    }
    ctx->pc = 0x3B4E14u;
label_3b4e14:
    // 0x3b4e14: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B4E14u;
    SET_GPR_U32(ctx, 31, 0x3B4E1Cu);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B4E14u, 0x3B4E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E1Cu;
label_3b4e1c:
    // 0x3b4e1c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x3B4E1Cu;
    {
        const bool branch_taken_0x3b4e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E1Cu;
        // 0x3b4e20: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e1c) {
            ctx->pc = 0x3B50F8u;
            goto label_3b50f8;
        }
    }
    ctx->pc = 0x3B4E24u;
label_3b4e24:
    // 0x3b4e24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b4e28: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3B4E28u;
    {
        const bool branch_taken_0x3b4e28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E28u;
        // 0x3b4e2c: 0xae600418  sw          $zero, 0x418($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e28) {
            ctx->pc = 0x3B4ED0u;
            goto label_3b4ed0;
        }
    }
    ctx->pc = 0x3B4E30u;
    // 0x3b4e30: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x3b4e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b4e34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4E34u;
    {
        const bool branch_taken_0x3b4e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E34u;
        // 0x3b4e38: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e34) {
            ctx->pc = 0x3B4E4Cu;
            goto label_3b4e4c;
        }
    }
    ctx->pc = 0x3B4E3Cu;
    // 0x3b4e3c: 0x52350007  beql        $s1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B4E3Cu;
    {
        const bool branch_taken_0x3b4e3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x3b4e3c) {
            ctx->pc = 0x3B4E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4E3Cu;
            // 0x3b4e40: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4E5Cu;
            goto label_3b4e5c;
        }
    }
    ctx->pc = 0x3B4E44u;
    // 0x3b4e44: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3B4E44u;
    {
        const bool branch_taken_0x3b4e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E44u;
        // 0x3b4e48: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e44) {
            ctx->pc = 0x3B4F38u;
            goto label_3b4f38;
        }
    }
    ctx->pc = 0x3B4E4Cu;
label_3b4e4c:
    // 0x3b4e4c: 0x1222002c  beq         $s1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3B4E4Cu;
    {
        const bool branch_taken_0x3b4e4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E4Cu;
        // 0x3b4e50: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e4c) {
            ctx->pc = 0x3B4F00u;
            goto label_3b4f00;
        }
    }
    ctx->pc = 0x3B4E54u;
    // 0x3b4e54: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3B4E54u;
    {
        const bool branch_taken_0x3b4e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E54u;
        // 0x3b4e58: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e54) {
            ctx->pc = 0x3B4F38u;
            goto label_3b4f38;
        }
    }
    ctx->pc = 0x3B4E5Cu;
label_3b4e5c:
    // 0x3b4e5c: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B4E5Cu;
    SET_GPR_U32(ctx, 31, 0x3B4E64u);
    ctx->pc = 0x3B4E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E5Cu;
    // 0x3b4e60: 0x8e04aeec  lw          $a0, -0x5114($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B4E5Cu, 0x3B4E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E64u;
label_3b4e64:
    // 0x3b4e64: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3b4e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3b4e68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b4e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4e6c: 0x8ca3ae58  lw          $v1, -0x51A8($a1)
    ctx->pc = 0x3b4e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAE58u));
    // 0x3b4e70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b4e74: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B4E74u;
    {
        const bool branch_taken_0x3b4e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E74u;
        // 0x3b4e78: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e74) {
            ctx->pc = 0x3B4EA4u;
            goto label_3b4ea4;
        }
    }
    ctx->pc = 0x3B4E7Cu;
    // 0x3b4e7c: 0x24a3ae58  addiu       $v1, $a1, -0x51A8
    ctx->pc = 0x3b4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946392));
    // 0x3b4e80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3b4e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b4e84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b4e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3b4e88:
    // 0x3b4e88: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x3b4e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b4e8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4E8Cu;
    {
        const bool branch_taken_0x3b4e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E8Cu;
        // 0x3b4e90: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e8c) {
            ctx->pc = 0x3B4EA0u;
            goto label_3b4ea0;
        }
    }
    ctx->pc = 0x3B4E94u;
    // 0x3b4e94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b4e98: 0x5045fffb  beql        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3B4E98u;
    {
        const bool branch_taken_0x3b4e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3b4e98) {
            ctx->pc = 0x3B4E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4E98u;
            // 0x3b4e9c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4e88;
        }
    }
    ctx->pc = 0x3B4EA0u;
label_3b4ea0:
    // 0x3b4ea0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3b4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3b4ea4:
    // 0x3b4ea4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B4EA4u;
    {
        const bool branch_taken_0x3b4ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EA4u;
        // 0x3b4ea8: 0x8e83ff88  lw          $v1, -0x78($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ea4) {
            ctx->pc = 0x3B4EB8u;
            goto label_3b4eb8;
        }
    }
    ctx->pc = 0x3B4EACu;
    // 0x3b4eac: 0x8e82ff88  lw          $v0, -0x78($s4)
    ctx->pc = 0x3b4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967176)));
    // 0x3b4eb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4EB0u;
    {
        const bool branch_taken_0x3b4eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EB0u;
        // 0x3b4eb4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4eb0) {
            ctx->pc = 0x3B4EC0u;
            goto label_3b4ec0;
        }
    }
    ctx->pc = 0x3B4EB8u;
label_3b4eb8:
    // 0x3b4eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4ebc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3b4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3b4ec0:
    // 0x3b4ec0: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B4EC0u;
    SET_GPR_U32(ctx, 31, 0x3B4EC8u);
    ctx->pc = 0x3B4EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4EC0u;
    // 0x3b4ec4: 0x8e04aeec  lw          $a0, -0x5114($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B4EC0u, 0x3B4EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4EC8u;
label_3b4ec8:
    // 0x3b4ec8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3B4EC8u;
    {
        const bool branch_taken_0x3b4ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4ec8) {
            ctx->pc = 0x3B4F28u;
            goto label_3b4f28;
        }
    }
    ctx->pc = 0x3B4ED0u;
label_3b4ed0:
    // 0x3b4ed0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3b4ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3b4ed4: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x3b4ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x3b4ed8: 0x8c82aed8  lw          $v0, -0x5128($a0)
    ctx->pc = 0x3b4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAED8u));
    // 0x3b4edc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b4ee0: 0x24630c50  addiu       $v1, $v1, 0xC50
    ctx->pc = 0x3b4ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3152));
    // 0x3b4ee4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3b4ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x3b4ee8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3b4ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b4eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b4ef0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b4ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b4ef4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b4ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b4ef8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B4EF8u;
    {
        const bool branch_taken_0x3b4ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EF8u;
        // 0x3b4efc: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ef8) {
            ctx->pc = 0x3B4F28u;
            goto label_3b4f28;
        }
    }
    ctx->pc = 0x3B4F00u;
label_3b4f00:
    // 0x3b4f00: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x3b4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x3b4f04: 0x8c82aed8  lw          $v0, -0x5128($a0)
    ctx->pc = 0x3b4f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946520)));
    // 0x3b4f08: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b4f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b4f0c: 0x24630c50  addiu       $v1, $v1, 0xC50
    ctx->pc = 0x3b4f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3152));
    // 0x3b4f10: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3b4f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x3b4f14: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3b4f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3b4f18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b4f1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b4f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b4f20: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3b4f20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b4f24: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x3b4f24u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_3b4f28:
    // 0x3b4f28: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B4F28u;
    SET_GPR_U32(ctx, 31, 0x3B4F30u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B4F28u, 0x3B4F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F30u;
label_3b4f30:
    // 0x3b4f30: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3B4F30u;
    {
        const bool branch_taken_0x3b4f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F30u;
        // 0x3b4f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f30) {
            ctx->pc = 0x3B50F8u;
            goto label_3b50f8;
        }
    }
    ctx->pc = 0x3B4F38u;
label_3b4f38:
    // 0x3b4f38: 0xae710010  sw          $s1, 0x10($s3)
    ctx->pc = 0x3b4f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
    // 0x3b4f3c: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B4F3Cu;
    {
        const bool branch_taken_0x3b4f3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F3Cu;
        // 0x3b4f40: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f3c) {
            ctx->pc = 0x3B4F5Cu;
            goto label_3b4f5c;
        }
    }
    ctx->pc = 0x3B4F44u;
    // 0x3b4f44: 0xae60041c  sw          $zero, 0x41C($s3)
    ctx->pc = 0x3b4f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 0));
    // 0x3b4f48: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3b4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3b4f4c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3b4f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b4f50: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x3b4f50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x3b4f54: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3B4F54u;
    {
        const bool branch_taken_0x3b4f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F54u;
        // 0x3b4f58: 0x3c110078  lui         $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f54) {
            ctx->pc = 0x3B5030u;
            goto label_3b5030;
        }
    }
    ctx->pc = 0x3B4F5Cu;
label_3b4f5c:
    // 0x3b4f5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b4f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4f60: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x3b4f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x3b4f64: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3b4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3b4f68: 0xc41025  or          $v0, $a2, $a0
    ctx->pc = 0x3b4f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3b4f6c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3b4f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3b4f70: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3B4F70u;
    {
        const bool branch_taken_0x3b4f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F70u;
        // 0x3b4f74: 0xae63041c  sw          $v1, 0x41C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f70) {
            ctx->pc = 0x3B4FE8u;
            goto label_3b4fe8;
        }
    }
    ctx->pc = 0x3B4F78u;
    // 0x3b4f78: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x3b4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x3b4f7c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3b4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3b4f80: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3b4f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b4f84: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x3b4f84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x3b4f88: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3b4f88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
label_3b4f8c:
    // 0x3b4f8c: 0x68c50007  ldl         $a1, 0x7($a2)
    ctx->pc = 0x3b4f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3b4f90: 0x6cc50000  ldr         $a1, 0x0($a2)
    ctx->pc = 0x3b4f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3b4f94: 0x68c7000f  ldl         $a3, 0xF($a2)
    ctx->pc = 0x3b4f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3b4f98: 0x6cc70008  ldr         $a3, 0x8($a2)
    ctx->pc = 0x3b4f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3b4f9c: 0x68c80017  ldl         $t0, 0x17($a2)
    ctx->pc = 0x3b4f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3b4fa0: 0x6cc80010  ldr         $t0, 0x10($a2)
    ctx->pc = 0x3b4fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3b4fa4: 0x68c9001f  ldl         $t1, 0x1F($a2)
    ctx->pc = 0x3b4fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x3b4fa8: 0x6cc90018  ldr         $t1, 0x18($a2)
    ctx->pc = 0x3b4fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x3b4fac: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x3b4facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4fb0: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x3b4fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4fb4: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x3b4fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4fb8: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x3b4fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4fbc: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x3b4fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4fc0: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x3b4fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4fc4: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x3b4fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4fc8: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x3b4fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b4fcc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3b4fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3b4fd0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b4fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b4fd4: 0x0  nop
    ctx->pc = 0x3b4fd4u;
    // NOP
    // 0x3b4fd8: 0x14c2ffec  bne         $a2, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3B4FD8u;
    {
        const bool branch_taken_0x3b4fd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b4fd8) {
            ctx->pc = 0x3B4F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4f8c;
        }
    }
    ctx->pc = 0x3B4FE0u;
    // 0x3b4fe0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3B4FE0u;
    {
        const bool branch_taken_0x3b4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FE0u;
        // 0x3b4fe4: 0x24630198  addiu       $v1, $v1, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4fe0) {
            ctx->pc = 0x3B5034u;
            goto label_3b5034;
        }
    }
    ctx->pc = 0x3B4FE8u;
label_3b4fe8:
    // 0x3b4fe8: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x3b4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x3b4fec: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3b4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3b4ff0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3b4ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b4ff4: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x3b4ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
    // 0x3b4ff8: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3b4ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
label_3b4ffc:
    // 0x3b4ffc: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x3b4ffcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b5000: 0xdcc70008  ld          $a3, 0x8($a2)
    ctx->pc = 0x3b5000u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3b5004: 0xdcc80010  ld          $t0, 0x10($a2)
    ctx->pc = 0x3b5004u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3b5008: 0xdcc90018  ld          $t1, 0x18($a2)
    ctx->pc = 0x3b5008u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3b500c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x3b500cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x3b5010: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x3b5010u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x3b5014: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x3b5014u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x3b5018: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x3b5018u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x3b501c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3b501cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3b5020: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3b5020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3b5024: 0x0  nop
    ctx->pc = 0x3b5024u;
    // NOP
    // 0x3b5028: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3B5028u;
    {
        const bool branch_taken_0x3b5028 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b5028) {
            ctx->pc = 0x3B4FFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4ffc;
        }
    }
    ctx->pc = 0x3B5030u;
label_3b5030:
    // 0x3b5030: 0x24630198  addiu       $v1, $v1, 0x198
    ctx->pc = 0x3b5030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 408));
label_3b5034:
    // 0x3b5034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b5034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b5038: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3b5038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3b503c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b5040: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3b5040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x3b5044: 0x26340c00  addiu       $s4, $s1, 0xC00
    ctx->pc = 0x3b5044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 3072));
    // 0x3b5048: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3b5048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x3b504c: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B504Cu;
    SET_GPR_U32(ctx, 31, 0x3B5054u);
    ctx->pc = 0x3B5050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B504Cu;
    // 0x3b5050: 0x26d0ffc0  addiu       $s0, $s6, -0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B504Cu, 0x3B5054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5054u;
label_3b5054:
    // 0x3b5054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b5054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b505c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b5060: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3b5060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3b5064: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3b5064u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x3b5068: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x3b5068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x3b506c: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x3B506Cu;
    SET_GPR_U32(ctx, 31, 0x3B5074u);
    ctx->pc = 0x3B5070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B506Cu;
    // 0x3b5070: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B506Cu, 0x3B5074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5074u;
label_3b5074:
    // 0x3b5074: 0x26a416c0  addiu       $a0, $s5, 0x16C0
    ctx->pc = 0x3b5074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 5824));
    // 0x3b5078: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b5078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b507c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b507cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b5080: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3b5080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3b5084: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3b5084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3b5088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b508c: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x3b508cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x3b5090: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3b5090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5094: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b5094u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b5098: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B5098u;
    SET_GPR_U32(ctx, 31, 0x3B50A0u);
    ctx->pc = 0x3B509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5098u;
    // 0x3b509c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B5098u, 0x3B50A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50A0u;
label_3b50a0:
    // 0x3b50a0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B50A0u;
    {
        const bool branch_taken_0x3b50a0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50A0u;
        // 0x3b50a4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b50a0) {
            ctx->pc = 0x3B50C0u;
            goto label_3b50c0;
        }
    }
    ctx->pc = 0x3B50A8u;
    // 0x3b50a8: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B50A8u;
    SET_GPR_U32(ctx, 31, 0x3B50B0u);
    ctx->pc = 0x3B50ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B50A8u;
    // 0x3b50ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B50A8u, 0x3B50B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50B0u;
label_3b50b0:
    // 0x3b50b0: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B50B0u;
    SET_GPR_U32(ctx, 31, 0x3B50B8u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B50B0u, 0x3B50B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50B8u;
label_3b50b8:
    // 0x3b50b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B50B8u;
    {
        const bool branch_taken_0x3b50b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50B8u;
        // 0x3b50bc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b50b8) {
            ctx->pc = 0x3B50F8u;
            goto label_3b50f8;
        }
    }
    ctx->pc = 0x3B50C0u;
label_3b50c0:
    // 0x3b50c0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x3b50c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3b50c4: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B50C4u;
    SET_GPR_U32(ctx, 31, 0x3B50CCu);
    ctx->pc = 0x3B50C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B50C4u;
    // 0x3b50c8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B50C4u, 0x3B50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50CCu;
label_3b50cc:
    // 0x3b50cc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B50CCu;
    {
        const bool branch_taken_0x3b50cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b50cc) {
            ctx->pc = 0x3B50E4u;
            goto label_3b50e4;
        }
    }
    ctx->pc = 0x3B50D4u;
    // 0x3b50d4: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B50D4u;
    SET_GPR_U32(ctx, 31, 0x3B50DCu);
    ctx->pc = 0x3B50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B50D4u;
    // 0x3b50d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B50D4u, 0x3B50DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50DCu;
label_3b50dc:
    // 0x3b50dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B50DCu;
    {
        const bool branch_taken_0x3b50dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50DCu;
        // 0x3b50e0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b50dc) {
            ctx->pc = 0x3B50F8u;
            goto label_3b50f8;
        }
    }
    ctx->pc = 0x3B50E4u;
label_3b50e4:
    // 0x3b50e4: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B50E4u;
    SET_GPR_U32(ctx, 31, 0x3B50ECu);
    ctx->pc = 0x3B50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B50E4u;
    // 0x3b50e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B50E4u, 0x3B50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50ECu;
label_3b50ec:
    // 0x3b50ec: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B50ECu;
    SET_GPR_U32(ctx, 31, 0x3B50F4u);
    ctx->pc = 0x3B50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B50ECu;
    // 0x3b50f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B50ECu, 0x3B50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B50F4u;
label_3b50f4:
    // 0x3b50f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3b50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3b50f8:
    // 0x3b50f8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3b50f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b50fc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3b50fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b5100: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3b5100u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b5104: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3b5104u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b5108: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3b5108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b510c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b510cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b5110: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3b5110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b5114: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b5114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b5118: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5118u;
        // 0x3b511c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5120u;
}
