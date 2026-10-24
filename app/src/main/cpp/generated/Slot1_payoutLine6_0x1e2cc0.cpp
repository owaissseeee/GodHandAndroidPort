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

// Function: Slot1_payoutLine6
// Address: 0x1e2cc0 - 0x1e2eb8
void Slot1_payoutLine6_0x1e2cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot1_payoutLine6_0x1e2cc0");
#endif

    switch (ctx->pc) {
        case 0x1e2d30u: goto label_1e2d30;
        case 0x1e2d40u: goto label_1e2d40;
        case 0x1e2da8u: goto label_1e2da8;
        case 0x1e2dc8u: goto label_1e2dc8;
        case 0x1e2df4u: goto label_1e2df4;
        case 0x1e2e28u: goto label_1e2e28;
        case 0x1e2e44u: goto label_1e2e44;
        case 0x1e2e58u: goto label_1e2e58;
        case 0x1e2e68u: goto label_1e2e68;
        case 0x1e2e84u: goto label_1e2e84;
        default: break;
    }

    ctx->pc = 0x1e2cc0u;

    // 0x1e2cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e2cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2cc8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e2cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e2ccc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e2cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e2cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2cd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e2cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2cdc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2ce0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E2CE0u;
    {
        const bool branch_taken_0x1e2ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CE0u;
        // 0x1e2ce4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ce0) {
            ctx->pc = 0x1E2D50u;
            goto label_1e2d50;
        }
    }
    ctx->pc = 0x1E2CE8u;
    // 0x1e2ce8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2CE8u;
    {
        const bool branch_taken_0x1e2ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ce8) {
            ctx->pc = 0x1E2CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2CE8u;
            // 0x1e2cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2D00u;
            goto label_1e2d00;
        }
    }
    ctx->pc = 0x1E2CF0u;
    // 0x1e2cf0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2CF0u;
    {
        const bool branch_taken_0x1e2cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF0u;
        // 0x1e2cf4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cf0) {
            ctx->pc = 0x1E2D18u;
            goto label_1e2d18;
        }
    }
    ctx->pc = 0x1E2CF8u;
    // 0x1e2cf8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1E2CF8u;
    {
        const bool branch_taken_0x1e2cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF8u;
        // 0x1e2cfc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cf8) {
            ctx->pc = 0x1E2EA0u;
            goto label_1e2ea0;
        }
    }
    ctx->pc = 0x1E2D00u;
label_1e2d00:
    // 0x1e2d00: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E2D00u;
    {
        const bool branch_taken_0x1e2d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D00u;
        // 0x1e2d04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d00) {
            ctx->pc = 0x1E2DDCu;
            goto label_1e2ddc;
        }
    }
    ctx->pc = 0x1E2D08u;
    // 0x1e2d08: 0x50620062  beql        $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1E2D08u;
    {
        const bool branch_taken_0x1e2d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e2d08) {
            ctx->pc = 0x1E2D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2D08u;
            // 0x1e2d0c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2E94u;
            goto label_1e2e94;
        }
    }
    ctx->pc = 0x1E2D10u;
    // 0x1e2d10: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1E2D10u;
    {
        const bool branch_taken_0x1e2d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D10u;
        // 0x1e2d14: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d10) {
            ctx->pc = 0x1E2EA0u;
            goto label_1e2ea0;
        }
    }
    ctx->pc = 0x1E2D18u;
label_1e2d18:
    // 0x1e2d18: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e2d18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e2d1c: 0xae020490  sw          $v0, 0x490($s0)
    ctx->pc = 0x1e2d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 2));
    // 0x1e2d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2d24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2d28: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2D28u;
    SET_GPR_U32(ctx, 31, 0x1E2D30u);
    ctx->pc = 0x1E2D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2D28u;
    // 0x1e2d2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2D28u, 0x1E2D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D30u;
label_1e2d30:
    // 0x1e2d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2d34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e2d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2d38: 0xc078f5e  jal         func_1E3D78
    ctx->pc = 0x1E2D38u;
    SET_GPR_U32(ctx, 31, 0x1E2D40u);
    ctx->pc = 0x1E2D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2D38u;
    // 0x1e2d3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3D78u, 0x1E2D38u, 0x1E2D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2D40u;
label_1e2d40:
    // 0x1e2d40: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2d44: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e2d48: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1E2D48u;
    {
        const bool branch_taken_0x1e2d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D48u;
        // 0x1e2d4c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d48) {
            ctx->pc = 0x1E2E6Cu;
            goto label_1e2e6c;
        }
    }
    ctx->pc = 0x1E2D50u;
label_1e2d50:
    // 0x1e2d50: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e2d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2D54u;
    {
        const bool branch_taken_0x1e2d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D54u;
        // 0x1e2d58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d54) {
            ctx->pc = 0x1E2D68u;
            goto label_1e2d68;
        }
    }
    ctx->pc = 0x1E2D5Cu;
    // 0x1e2d5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e2d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2d60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2D60u;
    {
        const bool branch_taken_0x1e2d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D60u;
        // 0x1e2d64: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d60) {
            ctx->pc = 0x1E2D6Cu;
            goto label_1e2d6c;
        }
    }
    ctx->pc = 0x1E2D68u;
label_1e2d68:
    // 0x1e2d68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2d6c:
    // 0x1e2d6c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e2d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2d70: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1E2D70u;
    {
        const bool branch_taken_0x1e2d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D70u;
        // 0x1e2d74: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d70) {
            ctx->pc = 0x1E2E9Cu;
            goto label_1e2e9c;
        }
    }
    ctx->pc = 0x1E2D78u;
    // 0x1e2d78: 0x8e0303e0  lw          $v1, 0x3E0($s0)
    ctx->pc = 0x1e2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 992)));
    // 0x1e2d7c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e2d80: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e2d84: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e2d84u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e2d88: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E2D88u;
    {
        const bool branch_taken_0x1e2d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2d88) {
            ctx->pc = 0x1E2D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2D88u;
            // 0x1e2d8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2D90u;
            goto label_1e2d90;
        }
    }
    ctx->pc = 0x1E2D90u;
label_1e2d90:
    // 0x1e2d90: 0x1812  mflo        $v1
    ctx->pc = 0x1e2d90u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e2d94: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1e2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1e2d98: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e2d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e2d9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e2d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2da0: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E2DA0u;
    SET_GPR_U32(ctx, 31, 0x1E2DA8u);
    ctx->pc = 0x1E2DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2DA0u;
    // 0x1e2da4: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E2DA0u, 0x1E2DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2DA8u;
label_1e2da8:
    // 0x1e2da8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e2da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e2dac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e2dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2db0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e2db4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e2db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2db8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e2db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2dbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e2dbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2dc0: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E2DC0u;
    SET_GPR_U32(ctx, 31, 0x1E2DC8u);
    ctx->pc = 0x1E2DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2DC0u;
    // 0x1e2dc4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E2DC0u, 0x1E2DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2DC8u;
label_1e2dc8:
    // 0x1e2dc8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2dcc: 0xae0204c8  sw          $v0, 0x4C8($s0)
    ctx->pc = 0x1e2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 2));
    // 0x1e2dd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e2dd4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E2DD4u;
    {
        const bool branch_taken_0x1e2dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DD4u;
        // 0x1e2dd8: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dd4) {
            ctx->pc = 0x1E2E9Cu;
            goto label_1e2e9c;
        }
    }
    ctx->pc = 0x1E2DDCu;
label_1e2ddc:
    // 0x1e2ddc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e2de0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E2DE0u;
    {
        const bool branch_taken_0x1e2de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DE0u;
        // 0x1e2de4: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2de0) {
            ctx->pc = 0x1E2E18u;
            goto label_1e2e18;
        }
    }
    ctx->pc = 0x1E2DE8u;
    // 0x1e2de8: 0x26329b70  addiu       $s2, $s1, -0x6490
    ctx->pc = 0x1e2de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1e2dec: 0xc07ea38  jal         func_1FA8E0
    ctx->pc = 0x1E2DECu;
    SET_GPR_U32(ctx, 31, 0x1E2DF4u);
    ctx->pc = 0x1E2DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2DECu;
    // 0x1e2df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA8E0u, 0x1E2DECu, 0x1E2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2DF4u;
label_1e2df4:
    // 0x1e2df4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2DF4u;
    {
        const bool branch_taken_0x1e2df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2df4) {
            ctx->pc = 0x1E2DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2DF4u;
            // 0x1e2df8: 0x8e0504c8  lw          $a1, 0x4C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2E1Cu;
            goto label_1e2e1c;
        }
    }
    ctx->pc = 0x1E2DFCu;
    // 0x1e2dfc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e2e00: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e2e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e2e04: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e2e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e2e08: 0xdc437650  ld          $v1, 0x7650($v0)
    ctx->pc = 0x1e2e08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30288)));
    // 0x1e2e0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e2e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e2e10: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2E10u;
    {
        const bool branch_taken_0x1e2e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2e10) {
            ctx->pc = 0x1E2E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2E10u;
            // 0x1e2e14: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2E18u;
label_1e2e18:
    // 0x1e2e18: 0x8e0504c8  lw          $a1, 0x4C8($s0)
    ctx->pc = 0x1e2e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
label_1e2e1c:
    // 0x1e2e1c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e2e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e2e20: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E2E20u;
    SET_GPR_U32(ctx, 31, 0x1E2E28u);
    ctx->pc = 0x1E2E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E20u;
    // 0x1e2e24: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E2E20u, 0x1E2E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E28u;
label_1e2e28:
    // 0x1e2e28: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1e2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1e2e2c: 0x26249b70  addiu       $a0, $s1, -0x6490
    ctx->pc = 0x1e2e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1e2e30: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x1e2e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e2e34: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e2e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e2e38: 0x2812  mflo        $a1
    ctx->pc = 0x1e2e38u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1e2e3c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2E3Cu;
    SET_GPR_U32(ctx, 31, 0x1E2E44u);
    ctx->pc = 0x1E2E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E3Cu;
    // 0x1e2e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2E3Cu, 0x1E2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E44u;
label_1e2e44:
    // 0x1e2e44: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e2e44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e2e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e50: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2E50u;
    SET_GPR_U32(ctx, 31, 0x1E2E58u);
    ctx->pc = 0x1E2E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E50u;
    // 0x1e2e54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2E50u, 0x1E2E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E58u;
label_1e2e58:
    // 0x1e2e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e60: 0xc078f5e  jal         func_1E3D78
    ctx->pc = 0x1E2E60u;
    SET_GPR_U32(ctx, 31, 0x1E2E68u);
    ctx->pc = 0x1E2E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E60u;
    // 0x1e2e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3D78u, 0x1E2E60u, 0x1E2E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E68u;
label_1e2e68:
    // 0x1e2e68: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e2e6c:
    // 0x1e2e6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2e70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E2E70u;
    {
        const bool branch_taken_0x1e2e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E70u;
        // 0x1e2e74: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e70) {
            ctx->pc = 0x1E2E9Cu;
            goto label_1e2e9c;
        }
    }
    ctx->pc = 0x1E2E78u;
label_1e2e78:
    // 0x1e2e78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2e7c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2E7Cu;
    SET_GPR_U32(ctx, 31, 0x1E2E84u);
    ctx->pc = 0x1E2E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2E7Cu;
    // 0x1e2e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2E7Cu, 0x1E2E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2E84u;
label_1e2e84:
    // 0x1e2e84: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e2e88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e2e8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2E8Cu;
    {
        const bool branch_taken_0x1e2e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E8Cu;
        // 0x1e2e90: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e8c) {
            ctx->pc = 0x1E2E9Cu;
            goto label_1e2e9c;
        }
    }
    ctx->pc = 0x1E2E94u;
label_1e2e94:
    // 0x1e2e94: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e2e98: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e2e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e2e9c:
    // 0x1e2e9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e2e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2ea0:
    // 0x1e2ea0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e2ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2ea4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2ea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EACu;
        // 0x1e2eb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2EB4u;
    // 0x1e2eb4: 0x0  nop
    ctx->pc = 0x1e2eb4u;
    // NOP
    ctx->pc = 0x1e2eb8u;
}
