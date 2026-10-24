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

// Function: func_001ABA20
// Address: 0x1aba20 - 0x1abb58
void func_001ABA20_0x1aba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ABA20_0x1aba20");
#endif

    switch (ctx->pc) {
        case 0x1abac0u: goto label_1abac0;
        case 0x1abac8u: goto label_1abac8;
        case 0x1abae8u: goto label_1abae8;
        case 0x1abaf4u: goto label_1abaf4;
        case 0x1abb08u: goto label_1abb08;
        case 0x1abb34u: goto label_1abb34;
        case 0x1abb40u: goto label_1abb40;
        default: break;
    }

    ctx->pc = 0x1aba20u;

    // 0x1aba20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aba24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aba28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aba2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aba2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba30: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1aba30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1aba34: 0x8e0209d4  lw          $v0, 0x9D4($s0)
    ctx->pc = 0x1aba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2516)));
    // 0x1aba38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABA38u;
    {
        const bool branch_taken_0x1aba38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA38u;
        // 0x1aba3c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba38) {
            ctx->pc = 0x1ABA44u;
            goto label_1aba44;
        }
    }
    ctx->pc = 0x1ABA40u;
    // 0x1aba40: 0xae0209d4  sw          $v0, 0x9D4($s0)
    ctx->pc = 0x1aba40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2516), GPR_U32(ctx, 2));
label_1aba44:
    // 0x1aba44: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1aba44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1aba48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aba4c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1ABA4Cu;
    {
        const bool branch_taken_0x1aba4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA4Cu;
        // 0x1aba50: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba4c) {
            ctx->pc = 0x1ABAD4u;
            goto label_1abad4;
        }
    }
    ctx->pc = 0x1ABA54u;
    // 0x1aba54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABA54u;
    {
        const bool branch_taken_0x1aba54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba54) {
            ctx->pc = 0x1ABA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABA54u;
            // 0x1aba58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABA6Cu;
            goto label_1aba6c;
        }
    }
    ctx->pc = 0x1ABA5Cu;
    // 0x1aba5c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ABA5Cu;
    {
        const bool branch_taken_0x1aba5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aba5c) {
            ctx->pc = 0x1ABA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABA5Cu;
            // 0x1aba60: 0x8e0309d0  lw          $v1, 0x9D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABA84u;
            goto label_1aba84;
        }
    }
    ctx->pc = 0x1ABA64u;
    // 0x1aba64: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1ABA64u;
    {
        const bool branch_taken_0x1aba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA64u;
        // 0x1aba68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba64) {
            ctx->pc = 0x1ABB44u;
            goto label_1abb44;
        }
    }
    ctx->pc = 0x1ABA6Cu;
label_1aba6c:
    // 0x1aba6c: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1ABA6Cu;
    {
        const bool branch_taken_0x1aba6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ABA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA6Cu;
        // 0x1aba70: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba6c) {
            ctx->pc = 0x1ABAFCu;
            goto label_1abafc;
        }
    }
    ctx->pc = 0x1ABA74u;
    // 0x1aba74: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1ABA74u;
    {
        const bool branch_taken_0x1aba74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aba74) {
            ctx->pc = 0x1ABB00u;
            goto label_1abb00;
        }
    }
    ctx->pc = 0x1ABA7Cu;
    // 0x1aba7c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1ABA7Cu;
    {
        const bool branch_taken_0x1aba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA7Cu;
        // 0x1aba80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba7c) {
            ctx->pc = 0x1ABB44u;
            goto label_1abb44;
        }
    }
    ctx->pc = 0x1ABA84u;
label_1aba84:
    // 0x1aba84: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1aba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1aba88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1aba88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1aba8c: 0x8e090304  lw          $t1, 0x304($s0)
    ctx->pc = 0x1aba8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1aba90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1aba90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1aba94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aba94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aba98: 0xae0309d0  sw          $v1, 0x9D0($s0)
    ctx->pc = 0x1aba98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 3));
    // 0x1aba9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abaa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1abaa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abaa4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1abaa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1abaa8: 0x8d250040  lw          $a1, 0x40($t1)
    ctx->pc = 0x1abaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x1abaac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1abaacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abab0: 0x8d260068  lw          $a2, 0x68($t1)
    ctx->pc = 0x1abab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 104)));
    // 0x1abab4: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1abab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1abab8: 0xc055d5a  jal         func_157568
    ctx->pc = 0x1ABAB8u;
    SET_GPR_U32(ctx, 31, 0x1ABAC0u);
    ctx->pc = 0x1ABABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAB8u;
    // 0x1ababc: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x1ABAB8u, 0x1ABAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAC0u;
label_1abac0:
    // 0x1abac0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1ABAC0u;
    SET_GPR_U32(ctx, 31, 0x1ABAC8u);
    ctx->pc = 0x1ABAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAC0u;
    // 0x1abac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1ABAC0u, 0x1ABAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAC8u;
label_1abac8:
    // 0x1abac8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1abac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1abacc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1abaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1abad0: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x1abad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_1abad4:
    // 0x1abad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1abad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1abad8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1abad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1abadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abae0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1ABAE0u;
    SET_GPR_U32(ctx, 31, 0x1ABAE8u);
    ctx->pc = 0x1ABAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAE0u;
    // 0x1abae4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1ABAE0u, 0x1ABAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAE8u;
label_1abae8:
    // 0x1abae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abaec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1ABAECu;
    SET_GPR_U32(ctx, 31, 0x1ABAF4u);
    ctx->pc = 0x1ABAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAECu;
    // 0x1abaf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1ABAECu, 0x1ABAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAF4u;
label_1abaf4:
    // 0x1abaf4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1ABAF4u;
    {
        const bool branch_taken_0x1abaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAF4u;
        // 0x1abaf8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abaf4) {
            ctx->pc = 0x1ABB44u;
            goto label_1abb44;
        }
    }
    ctx->pc = 0x1ABAFCu;
label_1abafc:
    // 0x1abafc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1abafcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1abb00:
    // 0x1abb00: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1ABB00u;
    SET_GPR_U32(ctx, 31, 0x1ABB08u);
    ctx->pc = 0x1ABB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB00u;
    // 0x1abb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1ABB00u, 0x1ABB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB08u;
label_1abb08:
    // 0x1abb08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ABB08u;
    {
        const bool branch_taken_0x1abb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abb08) {
            ctx->pc = 0x1ABB20u;
            goto label_1abb20;
        }
    }
    ctx->pc = 0x1ABB10u;
    // 0x1abb10: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1abb10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1abb14: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1abb14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1abb18: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1abb18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1abb1c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1abb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1abb20:
    // 0x1abb20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1abb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1abb24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1abb24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1abb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb2c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1ABB2Cu;
    SET_GPR_U32(ctx, 31, 0x1ABB34u);
    ctx->pc = 0x1ABB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB2Cu;
    // 0x1abb30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1ABB2Cu, 0x1ABB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB34u;
label_1abb34:
    // 0x1abb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1abb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb38: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1ABB38u;
    SET_GPR_U32(ctx, 31, 0x1ABB40u);
    ctx->pc = 0x1ABB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB38u;
    // 0x1abb3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1ABB38u, 0x1ABB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB40u;
label_1abb40:
    // 0x1abb40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1abb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1abb44:
    // 0x1abb44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abb48: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1abb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1abb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB4Cu;
        // 0x1abb50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABB54u;
    // 0x1abb54: 0x0  nop
    ctx->pc = 0x1abb54u;
    // NOP
    ctx->pc = 0x1abb58u;
}
