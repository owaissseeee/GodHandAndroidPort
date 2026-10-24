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

// Function: func_0027F970
// Address: 0x27f970 - 0x27fb48
void func_0027F970_0x27f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027F970_0x27f970");
#endif

    switch (ctx->pc) {
        case 0x27f9f0u: goto label_27f9f0;
        case 0x27fa24u: goto label_27fa24;
        case 0x27fa38u: goto label_27fa38;
        case 0x27fa6cu: goto label_27fa6c;
        case 0x27fa9cu: goto label_27fa9c;
        case 0x27fabcu: goto label_27fabc;
        case 0x27fb00u: goto label_27fb00;
        case 0x27fb10u: goto label_27fb10;
        default: break;
    }

    ctx->pc = 0x27f970u;

    // 0x27f970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27f970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27f974: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27f974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27f978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27f97c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f984: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27f984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f988: 0x8e021560  lw          $v0, 0x1560($s0)
    ctx->pc = 0x27f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
    // 0x27f98c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x27f98cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27f990: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x27f990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x27f994: 0x8e031580  lw          $v1, 0x1580($s0)
    ctx->pc = 0x27f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5504)));
    // 0x27f998: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F998u;
    {
        const bool branch_taken_0x27f998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F998u;
        // 0x27f99c: 0xae021560  sw          $v0, 0x1560($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f998) {
            ctx->pc = 0x27F9B4u;
            goto label_27f9b4;
        }
    }
    ctx->pc = 0x27F9A0u;
    // 0x27f9a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f9a4: 0x10820043  beq         $a0, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x27F9A4u;
    {
        const bool branch_taken_0x27f9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f9a4) {
            ctx->pc = 0x27FAB4u;
            goto label_27fab4;
        }
    }
    ctx->pc = 0x27F9ACu;
    // 0x27f9ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x27F9ACu;
    {
        const bool branch_taken_0x27f9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9ACu;
        // 0x27f9b0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9ac) {
            ctx->pc = 0x27FAD8u;
            goto label_27fad8;
        }
    }
    ctx->pc = 0x27F9B4u;
label_27f9b4:
    // 0x27f9b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27F9B4u;
    {
        const bool branch_taken_0x27f9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9B4u;
        // 0x27f9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9b4) {
            ctx->pc = 0x27F9E0u;
            goto label_27f9e0;
        }
    }
    ctx->pc = 0x27F9BCu;
    // 0x27f9bc: 0x94620548  lhu         $v0, 0x548($v1)
    ctx->pc = 0x27f9bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
    // 0x27f9c0: 0x8464054a  lh          $a0, 0x54A($v1)
    ctx->pc = 0x27f9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1354)));
    // 0x27f9c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27f9c8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x27f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x27f9cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27f9ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27f9d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f9d4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x27f9d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x27f9d8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x27f9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27f9dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27f9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_27f9e0:
    // 0x27f9e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27F9E0u;
    {
        const bool branch_taken_0x27f9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9E0u;
        // 0x27f9e4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9e0) {
            ctx->pc = 0x27FA30u;
            goto label_27fa30;
        }
    }
    ctx->pc = 0x27F9E8u;
    // 0x27f9e8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x27F9E8u;
    SET_GPR_U32(ctx, 31, 0x27F9F0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x27F9E8u, 0x27F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9F0u;
label_27f9f0:
    // 0x27f9f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27f9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27f9f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27F9F4u;
    {
        const bool branch_taken_0x27f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9F4u;
        // 0x27f9f8: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9f4) {
            ctx->pc = 0x27FA2Cu;
            goto label_27fa2c;
        }
    }
    ctx->pc = 0x27F9FCu;
    // 0x27f9fc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27fa00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fa00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fa04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fa08: 0x8c450098  lw          $a1, 0x98($v0)
    ctx->pc = 0x27fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x27fa0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fa0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa10: 0x8c46009c  lw          $a2, 0x9C($v0)
    ctx->pc = 0x27fa10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x27fa14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fa14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa18: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27fa1c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FA1Cu;
    SET_GPR_U32(ctx, 31, 0x27FA24u);
    ctx->pc = 0x27FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA1Cu;
    // 0x27fa20: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FA1Cu, 0x27FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA24u;
label_27fa24:
    // 0x27fa24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27FA24u;
    {
        const bool branch_taken_0x27fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA24u;
        // 0x27fa28: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa24) {
            ctx->pc = 0x27FAA0u;
            goto label_27faa0;
        }
    }
    ctx->pc = 0x27FA2Cu;
label_27fa2c:
    // 0x27fa2c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x27fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_27fa30:
    // 0x27fa30: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x27FA30u;
    SET_GPR_U32(ctx, 31, 0x27FA38u);
    ctx->pc = 0x27FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA30u;
    // 0x27fa34: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x27FA30u, 0x27FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA38u;
label_27fa38:
    // 0x27fa38: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x27fa38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27fa3c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27FA3Cu;
    {
        const bool branch_taken_0x27fa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA3Cu;
        // 0x27fa40: 0x8e060304  lw          $a2, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa3c) {
            ctx->pc = 0x27FA74u;
            goto label_27fa74;
        }
    }
    ctx->pc = 0x27FA44u;
    // 0x27fa44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fa44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fa48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa4c: 0x8cc5006c  lw          $a1, 0x6C($a2)
    ctx->pc = 0x27fa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x27fa50: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27fa50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27fa54: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x27fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
    // 0x27fa58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fa58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa5c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27fa60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fa60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa64: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FA64u;
    SET_GPR_U32(ctx, 31, 0x27FA6Cu);
    ctx->pc = 0x27FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA64u;
    // 0x27fa68: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FA64u, 0x27FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA6Cu;
label_27fa6c:
    // 0x27fa6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27FA6Cu;
    {
        const bool branch_taken_0x27fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA6Cu;
        // 0x27fa70: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa6c) {
            ctx->pc = 0x27FAA0u;
            goto label_27faa0;
        }
    }
    ctx->pc = 0x27FA74u;
label_27fa74:
    // 0x27fa74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fa74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fa78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa7c: 0x8cc5006c  lw          $a1, 0x6C($a2)
    ctx->pc = 0x27fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x27fa80: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27fa80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27fa84: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x27fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x27fa88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27fa88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa8c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x27fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x27fa90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27fa90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa94: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FA94u;
    SET_GPR_U32(ctx, 31, 0x27FA9Cu);
    ctx->pc = 0x27FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA94u;
    // 0x27fa98: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FA94u, 0x27FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA9Cu;
label_27fa9c:
    // 0x27fa9c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27fa9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27faa0:
    // 0x27faa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27faa4: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x27faa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x27faa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27faac: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x27faacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x27fab0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27fab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27fab4:
    // 0x27fab4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27FAB4u;
    SET_GPR_U32(ctx, 31, 0x27FABCu);
    ctx->pc = 0x27FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAB4u;
    // 0x27fab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27FAB4u, 0x27FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FABCu;
label_27fabc:
    // 0x27fabc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FABCu;
    {
        const bool branch_taken_0x27fabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fabc) {
            ctx->pc = 0x27FAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FABCu;
            // 0x27fac0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FAD8u;
            goto label_27fad8;
        }
    }
    ctx->pc = 0x27FAC4u;
    // 0x27fac4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27fac4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fac8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27fac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27facc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27faccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fad0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27fad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27fad4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x27fad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_27fad8:
    // 0x27fad8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27fad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27fadc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27FADCu;
    {
        const bool branch_taken_0x27fadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FADCu;
        // 0x27fae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fadc) {
            ctx->pc = 0x27FB18u;
            goto label_27fb18;
        }
    }
    ctx->pc = 0x27FAE4u;
    // 0x27fae4: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x27fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x27fae8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27FAE8u;
    {
        const bool branch_taken_0x27fae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAE8u;
        // 0x27faec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fae8) {
            ctx->pc = 0x27FB1Cu;
            goto label_27fb1c;
        }
    }
    ctx->pc = 0x27FAF0u;
    // 0x27faf0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x27faf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x27faf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27faf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27faf8: 0xc0a03ae  jal         func_280EB8
    ctx->pc = 0x27FAF8u;
    SET_GPR_U32(ctx, 31, 0x27FB00u);
    ctx->pc = 0x27FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAF8u;
    // 0x27fafc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EB8u, 0x27FAF8u, 0x27FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB00u;
label_27fb00:
    // 0x27fb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27fb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb08: 0xc0a03ae  jal         func_280EB8
    ctx->pc = 0x27FB08u;
    SET_GPR_U32(ctx, 31, 0x27FB10u);
    ctx->pc = 0x27FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB08u;
    // 0x27fb0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EB8u, 0x27FB08u, 0x27FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB10u;
label_27fb10:
    // 0x27fb10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27FB10u;
    {
        const bool branch_taken_0x27fb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB10u;
        // 0x27fb14: 0xa6000568  sh          $zero, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb10) {
            ctx->pc = 0x27FB1Cu;
            goto label_27fb1c;
        }
    }
    ctx->pc = 0x27FB18u;
label_27fb18:
    // 0x27fb18: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x27fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_27fb1c:
    // 0x27fb1c: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x27fb1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x27fb20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FB20u;
    {
        const bool branch_taken_0x27fb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fb20) {
            ctx->pc = 0x27FB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FB20u;
            // 0x27fb24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FB38u;
            goto label_27fb38;
        }
    }
    ctx->pc = 0x27FB28u;
    // 0x27fb28: 0x8e021560  lw          $v0, 0x1560($s0)
    ctx->pc = 0x27fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
    // 0x27fb2c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27fb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x27fb30: 0xae021560  sw          $v0, 0x1560($s0)
    ctx->pc = 0x27fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 2));
    // 0x27fb34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27fb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27fb38:
    // 0x27fb38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27fb38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fb3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27fb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fb40: 0x3e00008  jr          $ra
    ctx->pc = 0x27FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB40u;
        // 0x27fb44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FB48u;
}
