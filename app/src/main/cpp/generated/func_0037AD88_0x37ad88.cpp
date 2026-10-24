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

// Function: func_0037AD88
// Address: 0x37ad88 - 0x37aec0
void func_0037AD88_0x37ad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037AD88_0x37ad88");
#endif

    switch (ctx->pc) {
        case 0x37adbcu: goto label_37adbc;
        case 0x37aea0u: goto label_37aea0;
        case 0x37aea8u: goto label_37aea8;
        default: break;
    }

    ctx->pc = 0x37ad88u;

    // 0x37ad88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37ad88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37ad8c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x37ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37ad90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37ad90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37ad94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37ad98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37ad9c: 0x24422638  addiu       $v0, $v0, 0x2638
    ctx->pc = 0x37ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9784));
    // 0x37ada0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ada4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37ada4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ada8: 0x2624015c  addiu       $a0, $s1, 0x15C
    ctx->pc = 0x37ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
    // 0x37adac: 0x82230026  lb          $v1, 0x26($s1)
    ctx->pc = 0x37adacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x37adb0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x37adb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37adb4: 0xc0dd580  jal         func_375600
    ctx->pc = 0x37ADB4u;
    SET_GPR_U32(ctx, 31, 0x37ADBCu);
    ctx->pc = 0x37ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ADB4u;
    // 0x37adb8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375600u, 0x37ADB4u, 0x37ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ADBCu;
label_37adbc:
    // 0x37adbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x37adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37adc0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x37adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x37adc4: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x37adc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37adc8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37adcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37ADCCu;
    {
        const bool branch_taken_0x37adcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADCCu;
        // 0x37add0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37adcc) {
            ctx->pc = 0x37ADDCu;
            goto label_37addc;
        }
    }
    ctx->pc = 0x37ADD4u;
    // 0x37add4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37ADD4u;
    {
        const bool branch_taken_0x37add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADD4u;
        // 0x37add8: 0x86030010  lh          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37add4) {
            ctx->pc = 0x37ADE0u;
            goto label_37ade0;
        }
    }
    ctx->pc = 0x37ADDCu;
label_37addc:
    // 0x37addc: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x37addcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_37ade0:
    // 0x37ade0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x37ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x37ade4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x37ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x37ade8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x37ADE8u;
    {
        const bool branch_taken_0x37ade8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ade8) {
            ctx->pc = 0x37ADECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37ADE8u;
            // 0x37adec: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37AE30u;
            goto label_37ae30;
        }
    }
    ctx->pc = 0x37ADF0u;
    // 0x37adf0: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x37adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x37adf4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x37adf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x37adf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37ADF8u;
    {
        const bool branch_taken_0x37adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ADF8u;
        // 0x37adfc: 0x9606000a  lhu         $a2, 0xA($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37adf8) {
            ctx->pc = 0x37AE08u;
            goto label_37ae08;
        }
    }
    ctx->pc = 0x37AE00u;
    // 0x37ae00: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x37ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x37ae04: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x37ae04u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_37ae08:
    // 0x37ae08: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x37ae08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x37ae0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37AE0Cu;
    {
        const bool branch_taken_0x37ae0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE0Cu;
        // 0x37ae10: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae0c) {
            ctx->pc = 0x37AE1Cu;
            goto label_37ae1c;
        }
    }
    ctx->pc = 0x37AE14u;
    // 0x37ae14: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x37ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37ae18: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x37ae18u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_37ae1c:
    // 0x37ae1c: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x37ae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x37ae20: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x37ae20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x37ae24: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x37ae24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x37ae28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37AE28u;
    {
        const bool branch_taken_0x37ae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE28u;
        // 0x37ae2c: 0x3280b  movn        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae28) {
            ctx->pc = 0x37AE60u;
            goto label_37ae60;
        }
    }
    ctx->pc = 0x37AE30u;
label_37ae30:
    // 0x37ae30: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x37ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x37ae34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37AE34u;
    {
        const bool branch_taken_0x37ae34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE34u;
        // 0x37ae38: 0xa31023  subu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae34) {
            ctx->pc = 0x37AE44u;
            goto label_37ae44;
        }
    }
    ctx->pc = 0x37AE3Cu;
    // 0x37ae3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37ae40: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x37ae40u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_37ae44:
    // 0x37ae44: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x37ae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x37ae48: 0x9606000a  lhu         $a2, 0xA($s0)
    ctx->pc = 0x37ae48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x37ae4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37AE4Cu;
    {
        const bool branch_taken_0x37ae4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE4Cu;
        // 0x37ae50: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae4c) {
            ctx->pc = 0x37AE60u;
            goto label_37ae60;
        }
    }
    ctx->pc = 0x37AE54u;
    // 0x37ae54: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x37ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37ae58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37ae5c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x37ae5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_37ae60:
    // 0x37ae60: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x37ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x37ae64: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x37ae64u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37ae68: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x37ae68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x37ae6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37AE6Cu;
    {
        const bool branch_taken_0x37ae6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE6Cu;
        // 0x37ae70: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae6c) {
            ctx->pc = 0x37AE7Cu;
            goto label_37ae7c;
        }
    }
    ctx->pc = 0x37AE74u;
    // 0x37ae74: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x37ae74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37ae78: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x37ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_37ae7c:
    // 0x37ae7c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x37ae7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37ae80: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x37ae80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x37ae84: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x37ae84u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x37ae88: 0x10a70008  beq         $a1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x37AE88u;
    {
        const bool branch_taken_0x37ae88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x37AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AE88u;
        // 0x37ae8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ae88) {
            ctx->pc = 0x37AEACu;
            goto label_37aeac;
        }
    }
    ctx->pc = 0x37AE90u;
    // 0x37ae90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x37ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37ae94: 0x2624015c  addiu       $a0, $s1, 0x15C
    ctx->pc = 0x37ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
    // 0x37ae98: 0xc0dd58c  jal         func_375630
    ctx->pc = 0x37AE98u;
    SET_GPR_U32(ctx, 31, 0x37AEA0u);
    ctx->pc = 0x37AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AE98u;
    // 0x37ae9c: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375630u, 0x37AE98u, 0x37AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEA0u;
label_37aea0:
    // 0x37aea0: 0xc0dd5d2  jal         func_375748
    ctx->pc = 0x37AEA0u;
    SET_GPR_U32(ctx, 31, 0x37AEA8u);
    ctx->pc = 0x37AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AEA0u;
    // 0x37aea4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375748u, 0x37AEA0u, 0x37AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEA8u;
label_37aea8:
    // 0x37aea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37aeac:
    // 0x37aeac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37aeacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37aeb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37aeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37aeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37aeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37aeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x37AEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AEB8u;
        // 0x37aebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AEC0u;
}
