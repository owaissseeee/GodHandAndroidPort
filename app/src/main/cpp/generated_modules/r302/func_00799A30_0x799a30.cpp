#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r302_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r302
{
// Function: func_00799A30
// Address: 0x799a30 - 0x799bc8
void func_00799A30_0x799a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799A30_0x799a30");
#endif

    switch (ctx->pc) {
        case 0x799aa0u: goto label_799aa0;
        case 0x799aacu: goto label_799aac;
        case 0x799abcu: goto label_799abc;
        case 0x799ac8u: goto label_799ac8;
        case 0x799af8u: goto label_799af8;
        case 0x799b20u: goto label_799b20;
        case 0x799b30u: goto label_799b30;
        case 0x799b3cu: goto label_799b3c;
        case 0x799b4cu: goto label_799b4c;
        case 0x799b58u: goto label_799b58;
        case 0x799b88u: goto label_799b88;
        case 0x799bb0u: goto label_799bb0;
        default: break;
    }

    ctx->pc = 0x799a30u;

    // 0x799a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799a34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799a38: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799a3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799a44: 0x8e229f80  lw          $v0, -0x6080($s1)
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799F80u));
    // 0x799a48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799a4c: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x799A4Cu;
    {
        const bool branch_taken_0x799a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A4Cu;
        // 0x799a50: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a4c) {
            ctx->pc = 0x799BB0u;
            goto label_799bb0;
        }
    }
    ctx->pc = 0x799A54u;
    // 0x799a54: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799a58: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x799A58u;
    {
        const bool branch_taken_0x799a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A58u;
        // 0x799a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a58) {
            ctx->pc = 0x799BB0u;
            goto label_799bb0;
        }
    }
    ctx->pc = 0x799A60u;
    // 0x799a60: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x799A60u;
    {
        const bool branch_taken_0x799a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x799A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A60u;
        // 0x799a64: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a60) {
            ctx->pc = 0x799AB4u;
            goto label_799ab4;
        }
    }
    ctx->pc = 0x799A68u;
    // 0x799a68: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799A68u;
    {
        const bool branch_taken_0x799a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a68) {
            ctx->pc = 0x799A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A68u;
            // 0x799a6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A70u;
    // 0x799a70: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799A70u;
    {
        const bool branch_taken_0x799a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A70u;
        // 0x799a74: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a70) {
            ctx->pc = 0x799A98u;
            goto label_799a98;
        }
    }
    ctx->pc = 0x799A78u;
    // 0x799a78: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x799A78u;
    {
        const bool branch_taken_0x799a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A78u;
        // 0x799a7c: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a78) {
            ctx->pc = 0x799BB8u;
            goto label_799bb8;
        }
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x799A80u;
    {
        const bool branch_taken_0x799a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a80) {
            ctx->pc = 0x799B28u;
            goto label_799b28;
        }
    }
    ctx->pc = 0x799A88u;
    // 0x799a88: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x799A88u;
    {
        const bool branch_taken_0x799a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x799A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A88u;
        // 0x799a8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a88) {
            ctx->pc = 0x799B44u;
            goto label_799b44;
        }
    }
    ctx->pc = 0x799A90u;
    // 0x799a90: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x799A90u;
    {
        const bool branch_taken_0x799a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a90) {
            ctx->pc = 0x799BB8u;
            goto label_799bb8;
        }
    }
    ctx->pc = 0x799A98u;
label_799a98:
    // 0x799a98: 0xc06f73a  jal         func_1BDCE8
    ctx->pc = 0x799A98u;
    SET_GPR_U32(ctx, 31, 0x799AA0u);
    ctx->pc = 0x799A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A98u;
    // 0x799a9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE8u, 0x799A98u, 0x799AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA0u;
label_799aa0:
    // 0x799aa0: 0x8e229f80  lw          $v0, -0x6080($s1)
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942592)));
    // 0x799aa4: 0xc06f73a  jal         func_1BDCE8
    ctx->pc = 0x799AA4u;
    SET_GPR_U32(ctx, 31, 0x799AACu);
    ctx->pc = 0x799AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA4u;
    // 0x799aa8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE8u, 0x799AA4u, 0x799AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AACu;
label_799aac:
    // 0x799aac: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x799AACu;
    {
        const bool branch_taken_0x799aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AACu;
        // 0x799ab0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aac) {
            ctx->pc = 0x799BB4u;
            goto label_799bb4;
        }
    }
    ctx->pc = 0x799AB4u;
label_799ab4:
    // 0x799ab4: 0xc06f708  jal         func_1BDC20
    ctx->pc = 0x799AB4u;
    SET_GPR_U32(ctx, 31, 0x799ABCu);
    ctx->pc = 0x799AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AB4u;
    // 0x799ab8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC20u, 0x799AB4u, 0x799ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ABCu;
label_799abc:
    // 0x799abc: 0x8e229f80  lw          $v0, -0x6080($s1)
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942592)));
    // 0x799ac0: 0xc06f708  jal         func_1BDC20
    ctx->pc = 0x799AC0u;
    SET_GPR_U32(ctx, 31, 0x799AC8u);
    ctx->pc = 0x799AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC0u;
    // 0x799ac4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC20u, 0x799AC0u, 0x799AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC8u;
label_799ac8:
    // 0x799ac8: 0x8e229f80  lw          $v0, -0x6080($s1)
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942592)));
    // 0x799acc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799ad0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x799ad4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799ad8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x799ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae0: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x799ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x799ae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799ae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799aec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799aecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799af0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799AF0u;
    SET_GPR_U32(ctx, 31, 0x799AF8u);
    ctx->pc = 0x799AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AF0u;
    // 0x799af4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799AF0u, 0x799AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF8u;
label_799af8:
    // 0x799af8: 0x8e239f80  lw          $v1, -0x6080($s1)
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942592)));
    // 0x799afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b04: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x799b08: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x799b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799b0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799b0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799b10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799b14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b18: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799B18u;
    SET_GPR_U32(ctx, 31, 0x799B20u);
    ctx->pc = 0x799B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B18u;
    // 0x799b1c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799B18u, 0x799B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B20u;
label_799b20:
    // 0x799b20: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x799B20u;
    {
        const bool branch_taken_0x799b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B20u;
        // 0x799b24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b20) {
            ctx->pc = 0x799BB4u;
            goto label_799bb4;
        }
    }
    ctx->pc = 0x799B28u;
label_799b28:
    // 0x799b28: 0xc06f712  jal         func_1BDC48
    ctx->pc = 0x799B28u;
    SET_GPR_U32(ctx, 31, 0x799B30u);
    ctx->pc = 0x799B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B28u;
    // 0x799b2c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC48u, 0x799B28u, 0x799B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B30u;
label_799b30:
    // 0x799b30: 0x8e229f80  lw          $v0, -0x6080($s1)
    ctx->pc = 0x799b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942592)));
    // 0x799b34: 0xc06f712  jal         func_1BDC48
    ctx->pc = 0x799B34u;
    SET_GPR_U32(ctx, 31, 0x799B3Cu);
    ctx->pc = 0x799B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B34u;
    // 0x799b38: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC48u, 0x799B34u, 0x799B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B3Cu;
label_799b3c:
    // 0x799b3c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x799B3Cu;
    {
        const bool branch_taken_0x799b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B3Cu;
        // 0x799b40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b3c) {
            ctx->pc = 0x799BB4u;
            goto label_799bb4;
        }
    }
    ctx->pc = 0x799B44u;
label_799b44:
    // 0x799b44: 0xc06f6fe  jal         func_1BDBF8
    ctx->pc = 0x799B44u;
    SET_GPR_U32(ctx, 31, 0x799B4Cu);
    ctx->pc = 0x799B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B44u;
    // 0x799b48: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x799B44u, 0x799B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B4Cu;
label_799b4c:
    // 0x799b4c: 0x8e229f80  lw          $v0, -0x6080($s1)
    ctx->pc = 0x799b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942592)));
    // 0x799b50: 0xc06f6fe  jal         func_1BDBF8
    ctx->pc = 0x799B50u;
    SET_GPR_U32(ctx, 31, 0x799B58u);
    ctx->pc = 0x799B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B50u;
    // 0x799b54: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x799B50u, 0x799B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B58u;
label_799b58:
    // 0x799b58: 0x8e229f80  lw          $v0, -0x6080($s1)
    ctx->pc = 0x799b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942592)));
    // 0x799b5c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799b60: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x799b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x799b64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b68: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b70: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x799b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x799b74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799b7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b80: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799B80u;
    SET_GPR_U32(ctx, 31, 0x799B88u);
    ctx->pc = 0x799B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B80u;
    // 0x799b84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799B80u, 0x799B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B88u;
label_799b88:
    // 0x799b88: 0x8e239f80  lw          $v1, -0x6080($s1)
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942592)));
    // 0x799b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b94: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x799b98: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x799b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799b9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799b9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799ba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799ba4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ba8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799BA8u;
    SET_GPR_U32(ctx, 31, 0x799BB0u);
    ctx->pc = 0x799BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BA8u;
    // 0x799bac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799BA8u, 0x799BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BB0u;
label_799bb0:
    // 0x799bb0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799bb4:
    // 0x799bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799bb8:
    // 0x799bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x799BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BBCu;
        // 0x799bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BC4u;
    // 0x799bc4: 0x0  nop
    ctx->pc = 0x799bc4u;
    // NOP
    ctx->pc = 0x799bc8u;
}
} // namespace gh_r302
