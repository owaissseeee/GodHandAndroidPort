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

// Function: func_0011AAA0
// Address: 0x11aaa0 - 0x11ac80
void func_0011AAA0_0x11aaa0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011AAA0_0x11aaa0");
#endif

    if (__builtin_expect(ctx->pc != 0x11aaa0u, 0)) {
        switch (ctx->pc) {
            case 0x11aad8u: goto label_11aad8;
            case 0x11ab54u: goto label_11ab54;
            case 0x11ab5cu: goto label_11ab5c;
            case 0x11ab8cu: goto label_11ab8c;
            case 0x11abbcu: goto label_11abbc;
            case 0x11abc8u: goto label_11abc8;
            case 0x11abd8u: goto label_11abd8;
            case 0x11abe0u: goto label_11abe0;
            case 0x11abe8u: goto label_11abe8;
            case 0x11abfcu: goto label_11abfc;
            case 0x11ac28u: goto label_11ac28;
            case 0x11ac34u: goto label_11ac34;
            case 0x11ac68u: goto label_11ac68;
            default: break;
        }
    }


    // 0x11aaa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11aaa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11aaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11aaa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11aaac: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aab0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x11aab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11aab4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x11aab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11aab8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AAB8u;
    {
        const bool branch_taken_0x11aab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAB8u;
        // 0x11aabc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aab8) {
            ctx->pc = 0x11AAD0u;
            goto label_11aad0;
        }
    }
    // 0x11aac0: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x11AAC0u;
    {
        const bool branch_taken_0x11aac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11aac0) {
            ctx->pc = 0x11ABF4u;
            goto label_11abf4;
        }
    }
    // 0x11aac8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x11AAC8u;
    {
        const bool branch_taken_0x11aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAC8u;
        // 0x11aacc: 0xc601054c  lwc1        $f1, 0x54C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aac8) {
            ctx->pc = 0x11AC38u;
            goto label_11ac38;
        }
    }
label_11aad0:
    // 0x11aad0: 0xc0c73f8  jal         func_31CFE0
    SET_GPR_U32(ctx, 31, 0x11AAD8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x11AAD0u, 0x11AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_11aad8:
    // 0x11aad8: 0x30430003  andi        $v1, $v0, 0x3
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11aadc: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aae0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11AAE0u;
    {
        const bool branch_taken_0x11aae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11aae0) {
            ctx->pc = 0x11AAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AAE0u;
            // 0x11aae4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AB10u;
            goto label_11ab10;
        }
    }
    // 0x11aae8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AAE8u;
    {
        const bool branch_taken_0x11aae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAE8u;
        // 0x11aaec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aae8) {
            ctx->pc = 0x11AB00u;
            goto label_11ab00;
        }
    }
    // 0x11aaf0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11AAF0u;
    {
        const bool branch_taken_0x11aaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAF0u;
        // 0x11aaf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaf0) {
            ctx->pc = 0x11AB1Cu;
            goto label_11ab1c;
        }
    }
    // 0x11aaf8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11AAF8u;
    {
        const bool branch_taken_0x11aaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11aaf8) {
            ctx->pc = 0x11AAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AAF8u;
            // 0x11aafc: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AB2Cu;
            goto label_11ab2c;
        }
    }
label_11ab00:
    // 0x11ab00: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11ab04: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x11ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x11ab08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11AB08u;
    {
        const bool branch_taken_0x11ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB08u;
        // 0x11ab0c: 0x8c44014c  lw          $a0, 0x14C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab08) {
            ctx->pc = 0x11AB34u;
            goto label_11ab34;
        }
    }
label_11ab10:
    // 0x11ab10: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x11ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x11ab14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11AB14u;
    {
        const bool branch_taken_0x11ab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB14u;
        // 0x11ab18: 0x8c440154  lw          $a0, 0x154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab14) {
            ctx->pc = 0x11AB34u;
            goto label_11ab34;
        }
    }
label_11ab1c:
    // 0x11ab1c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x11ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x11ab20: 0x8c4304ec  lw          $v1, 0x4EC($v0)
    ctx->pc = 0x11ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1260)));
    // 0x11ab24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11AB24u;
    {
        const bool branch_taken_0x11ab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB24u;
        // 0x11ab28: 0x8c4404f0  lw          $a0, 0x4F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab24) {
            ctx->pc = 0x11AB34u;
            goto label_11ab34;
        }
    }
label_11ab2c:
    // 0x11ab2c: 0x8c4304f4  lw          $v1, 0x4F4($v0)
    ctx->pc = 0x11ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1268)));
    // 0x11ab30: 0x8c4404f8  lw          $a0, 0x4F8($v0)
    ctx->pc = 0x11ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1272)));
label_11ab34:
    // 0x11ab34: 0x622821  addu        $a1, $v1, $v0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ab38: 0x823021  addu        $a2, $a0, $v0
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11ab3c: 0x44806000  mtc1        $zero, $f12
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ab40: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab44: 0x24070001  addiu       $a3, $zero, 0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ab48: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab4c: 0xc0aa15e  jal         func_2A8578
    SET_GPR_U32(ctx, 31, 0x11AB54u);
    ctx->pc = 0x11AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB4Cu;
    // 0x11ab50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002A8578_0x2a8578, 0x2a8578u, 0x11ab54u)) {
        return;
    }
label_11ab54:
    // 0x11ab54: 0xc0c73f8  jal         func_31CFE0
    SET_GPR_U32(ctx, 31, 0x11AB5Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x11AB54u, 0x11AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_11ab5c:
    // 0x11ab5c: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11ab60: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11AB60u;
    {
        const bool branch_taken_0x11ab60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB60u;
        // 0x11ab64: 0x240600cf  addiu       $a2, $zero, 0xCF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab60) {
            ctx->pc = 0x11AB94u;
            goto label_11ab94;
        }
    }
    // 0x11ab68: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11ab6c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab70: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11ab74: 0x200382d  daddu       $a3, $s0, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab78: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab7c: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab80: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab84: 0xc0b2e92  jal         func_2CBA48
    SET_GPR_U32(ctx, 31, 0x11AB8Cu);
    ctx->pc = 0x11AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB84u;
    // 0x11ab88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CBA48_0x2cba48, 0x2cba48u, 0x11ab8cu)) {
        return;
    }
label_11ab8c:
    // 0x11ab8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11AB8Cu;
    {
        const bool branch_taken_0x11ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB8Cu;
        // 0x11ab90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab8c) {
            ctx->pc = 0x11ABC0u;
            goto label_11abc0;
        }
    }
label_11ab94:
    // 0x11ab94: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11ab98: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab9c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11aba0: 0x240600d0  addiu       $a2, $zero, 0xD0
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x11aba4: 0x200382d  daddu       $a3, $s0, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aba8: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abac: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abb0: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abb4: 0xc0b2e92  jal         func_2CBA48
    SET_GPR_U32(ctx, 31, 0x11ABBCu);
    ctx->pc = 0x11ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABB4u;
    // 0x11abb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CBA48_0x2cba48, 0x2cba48u, 0x11abbcu)) {
        return;
    }
label_11abbc:
    // 0x11abbc: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11abc0:
    // 0x11abc0: 0xc04b0d2  jal         func_12C348
    SET_GPR_U32(ctx, 31, 0x11ABC8u);
    ctx->pc = 0x11ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABC0u;
    // 0x11abc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0012C348_0x12c348, 0x12c348u, 0x11abc8u)) {
        return;
    }
label_11abc8:
    // 0x11abc8: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abcc: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abd0: 0xc0493d8  jal         func_124F60
    SET_GPR_U32(ctx, 31, 0x11ABD8u);
    ctx->pc = 0x11ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABD0u;
    // 0x11abd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &pl00_clearMotionCam_0x124f60, 0x124f60u, 0x11abd8u)) {
        return;
    }
label_11abd8:
    // 0x11abd8: 0xc04ab0a  jal         func_12AC28
    SET_GPR_U32(ctx, 31, 0x11ABE0u);
    ctx->pc = 0x11ABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABD8u;
    // 0x11abdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &CallWithAndClearField698_12AC28_0x12ac28, 0x12ac28u, 0x11abe0u)) {
        return;
    }
label_11abe0:
    // 0x11abe0: 0xc04ae4a  jal         func_12B928
    SET_GPR_U32(ctx, 31, 0x11ABE8u);
    ctx->pc = 0x11ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABE0u;
    // 0x11abe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0012B928_0x12b928, 0x12b928u, 0x11abe8u)) {
        return;
    }
label_11abe8:
    // 0x11abe8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11abe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11abec: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11abf0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11abf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11abf4:
    // 0x11abf4: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x11ABFCu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABF4u;
    // 0x11abf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11ABF4u, 0x11ABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_11abfc:
    // 0x11abfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ABFCu;
    {
        const bool branch_taken_0x11abfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11abfc) {
            ctx->pc = 0x11AC14u;
            goto label_11ac14;
        }
    }
    // 0x11ac04: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x11ac04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ac08: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11ac08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ac0c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x11ac0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ac10: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x11ac10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_11ac14:
    // 0x11ac14: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ac18: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11ac1c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac20: 0xc053e7c  jal         func_14F9F0
    SET_GPR_U32(ctx, 31, 0x11AC28u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC20u;
    // 0x11ac24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11AC20u, 0x11AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_11ac28:
    // 0x11ac28: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11ac2c: 0xc053e4a  jal         func_14F928
    SET_GPR_U32(ctx, 31, 0x11AC34u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC2Cu;
    // 0x11ac30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11AC2Cu, 0x11AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_11ac34:
    // 0x11ac34: 0xc601054c  lwc1        $f1, 0x54C($s0)
    ctx->pc = 0x11ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11ac38:
    // 0x11ac38: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ac3c: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ac40: 0x0  nop
    // NOP
    // 0x11ac44: 0x46000836  c.le.s      $f1, $f0
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ac48: 0x0  nop
    // NOP
    // 0x11ac4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11AC4Cu;
    {
        const bool branch_taken_0x11ac4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC4Cu;
        // 0x11ac50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac4c) {
            ctx->pc = 0x11AC60u;
            goto label_11ac60;
        }
    }
    // 0x11ac54: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11ac54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x11ac58: 0x34420040  ori         $v0, $v0, 0x40
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x11ac5c: 0xa60203ac  sh          $v0, 0x3AC($s0)
    ctx->pc = 0x11ac5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
label_11ac60:
    // 0x11ac60: 0xc048e4e  jal         func_123938
    SET_GPR_U32(ctx, 31, 0x11AC68u);
    ctx->pc = 0x11AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC60u;
    // 0x11ac64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00123938_0x123938, 0x123938u, 0x11ac68u)) {
        return;
    }
label_11ac68:
    // 0x11ac68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11ac68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ac6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ac6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ac70: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x11ac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ac74: 0x3e00008  jr          $ra
    ctx->pc = 0x11AC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC74u;
        // 0x11ac78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x11ac7c: 0x0  nop
    // NOP
    ctx->pc = 0x11ac80u;
}