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

// Function: func_0037FD28
// Address: 0x37fd28 - 0x37fe40
void func_0037FD28_0x37fd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037FD28_0x37fd28");
#endif

    switch (ctx->pc) {
        case 0x37fd7cu: goto label_37fd7c;
        case 0x37fd90u: goto label_37fd90;
        case 0x37fdb0u: goto label_37fdb0;
        case 0x37fdd0u: goto label_37fdd0;
        case 0x37fde8u: goto label_37fde8;
        case 0x37fe04u: goto label_37fe04;
        case 0x37fe24u: goto label_37fe24;
        default: break;
    }

    ctx->pc = 0x37fd28u;

    // 0x37fd28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37fd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37fd2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37fd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37fd30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37fd34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37fd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fd38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37fd3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37fd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37fd40: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x37fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x37fd44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37fd48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37FD48u;
    {
        const bool branch_taken_0x37fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD48u;
        // 0x37fd4c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd48) {
            ctx->pc = 0x37FD74u;
            goto label_37fd74;
        }
    }
    ctx->pc = 0x37FD50u;
    // 0x37fd50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x37fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x37fd54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37FD54u;
    {
        const bool branch_taken_0x37fd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fd54) {
            ctx->pc = 0x37FD74u;
            goto label_37fd74;
        }
    }
    ctx->pc = 0x37FD5Cu;
    // 0x37fd5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x37fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x37fd60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FD60u;
    {
        const bool branch_taken_0x37fd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fd60) {
            ctx->pc = 0x37FD74u;
            goto label_37fd74;
        }
    }
    ctx->pc = 0x37FD68u;
    // 0x37fd68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x37fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x37fd6c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x37FD6Cu;
    {
        const bool branch_taken_0x37fd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD6Cu;
        // 0x37fd70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd6c) {
            ctx->pc = 0x37FE28u;
            goto label_37fe28;
        }
    }
    ctx->pc = 0x37FD74u;
label_37fd74:
    // 0x37fd74: 0xc0c8e9c  jal         func_323A70
    ctx->pc = 0x37FD74u;
    SET_GPR_U32(ctx, 31, 0x37FD7Cu);
    ctx->pc = 0x37FD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD74u;
    // 0x37fd78: 0x8e0400f4  lw          $a0, 0xF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A70u, 0x37FD74u, 0x37FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD7Cu;
label_37fd7c:
    // 0x37fd7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x37fd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x37fd80: 0x8e0400f8  lw          $a0, 0xF8($s0)
    ctx->pc = 0x37fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x37fd84: 0x24a5c2a8  addiu       $a1, $a1, -0x3D58
    ctx->pc = 0x37fd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951592));
    // 0x37fd88: 0xc0ea4b8  jal         func_3A92E0
    ctx->pc = 0x37FD88u;
    SET_GPR_U32(ctx, 31, 0x37FD90u);
    ctx->pc = 0x37FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD88u;
    // 0x37fd8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A92E0u, 0x37FD88u, 0x37FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD90u;
label_37fd90:
    // 0x37fd90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37FD90u;
    {
        const bool branch_taken_0x37fd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD90u;
        // 0x37fd94: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd90) {
            ctx->pc = 0x37FDA0u;
            goto label_37fda0;
        }
    }
    ctx->pc = 0x37FD98u;
    // 0x37fd98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37FD98u;
    {
        const bool branch_taken_0x37fd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD98u;
        // 0x37fd9c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd98) {
            ctx->pc = 0x37FDA4u;
            goto label_37fda4;
        }
    }
    ctx->pc = 0x37FDA0u;
label_37fda0:
    // 0x37fda0: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x37fda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
label_37fda4:
    // 0x37fda4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x37fda4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x37fda8: 0xc0c7240  jal         func_31C900
    ctx->pc = 0x37FDA8u;
    SET_GPR_U32(ctx, 31, 0x37FDB0u);
    ctx->pc = 0x37FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FDA8u;
    // 0x37fdac: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C900u, 0x37FDA8u, 0x37FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FDB0u;
label_37fdb0:
    // 0x37fdb0: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x37fdb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x37fdb4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37fdb8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x37FDB8u;
    {
        const bool branch_taken_0x37fdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FDB8u;
        // 0x37fdbc: 0x261100cc  addiu       $s1, $s0, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fdb8) {
            ctx->pc = 0x37FDF0u;
            goto label_37fdf0;
        }
    }
    ctx->pc = 0x37FDC0u;
    // 0x37fdc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37fdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fdc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37fdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fdc8: 0xc0e06ce  jal         func_381B38
    ctx->pc = 0x37FDC8u;
    SET_GPR_U32(ctx, 31, 0x37FDD0u);
    ctx->pc = 0x37FDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FDC8u;
    // 0x37fdcc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381B38u, 0x37FDC8u, 0x37FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FDD0u;
label_37fdd0:
    // 0x37fdd0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x37FDD0u;
    {
        const bool branch_taken_0x37fdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fdd0) {
            ctx->pc = 0x37FDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FDD0u;
            // 0x37fdd4: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FE10u;
            goto label_37fe10;
        }
    }
    ctx->pc = 0x37FDD8u;
    // 0x37fdd8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x37fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x37fddc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x37fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37fde0: 0xc0cb68a  jal         func_32DA28
    ctx->pc = 0x37FDE0u;
    SET_GPR_U32(ctx, 31, 0x37FDE8u);
    ctx->pc = 0x37FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FDE0u;
    // 0x37fde4: 0x92460006  lbu         $a2, 0x6($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DA28u, 0x37FDE0u, 0x37FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FDE8u;
label_37fde8:
    // 0x37fde8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x37FDE8u;
    {
        const bool branch_taken_0x37fde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FDE8u;
        // 0x37fdec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fde8) {
            ctx->pc = 0x37FE28u;
            goto label_37fe28;
        }
    }
    ctx->pc = 0x37FDF0u;
label_37fdf0:
    // 0x37fdf0: 0x2611006c  addiu       $s1, $s0, 0x6C
    ctx->pc = 0x37fdf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x37fdf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fdf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37fdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fdfc: 0xc0e02ba  jal         func_380AE8
    ctx->pc = 0x37FDFCu;
    SET_GPR_U32(ctx, 31, 0x37FE04u);
    ctx->pc = 0x37FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FDFCu;
    // 0x37fe00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AE8u, 0x37FDFCu, 0x37FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FE04u;
label_37fe04:
    // 0x37fe04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FE04u;
    {
        const bool branch_taken_0x37fe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fe04) {
            ctx->pc = 0x37FE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FE04u;
            // 0x37fe08: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FE18u;
            goto label_37fe18;
        }
    }
    ctx->pc = 0x37FE0Cu;
    // 0x37fe0c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x37fe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_37fe10:
    // 0x37fe10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37FE10u;
    {
        const bool branch_taken_0x37fe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE10u;
        // 0x37fe14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fe10) {
            ctx->pc = 0x37FE28u;
            goto label_37fe28;
        }
    }
    ctx->pc = 0x37FE18u;
label_37fe18:
    // 0x37fe18: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x37fe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37fe1c: 0xc0caed2  jal         func_32BB48
    ctx->pc = 0x37FE1Cu;
    SET_GPR_U32(ctx, 31, 0x37FE24u);
    ctx->pc = 0x37FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FE1Cu;
    // 0x37fe20: 0x92460006  lbu         $a2, 0x6($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BB48u, 0x37FE1Cu, 0x37FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FE24u;
label_37fe24:
    // 0x37fe24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37fe24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37fe28:
    // 0x37fe28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37fe28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37fe2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37fe2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fe30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37fe30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fe34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37fe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fe38: 0x3e00008  jr          $ra
    ctx->pc = 0x37FE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE38u;
        // 0x37fe3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FE40u;
}
