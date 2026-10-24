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

// Function: func_00381F18
// Address: 0x381f18 - 0x3820c0
void func_00381F18_0x381f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381F18_0x381f18");
#endif

    switch (ctx->pc) {
        case 0x381fe0u: goto label_381fe0;
        case 0x3820a8u: goto label_3820a8;
        default: break;
    }

    ctx->pc = 0x381f18u;

    // 0x381f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x381f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x381f1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x381f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x381f20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x381f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x381f24: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x381f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x381f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x381f2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x381f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381f34: 0x26300318  addiu       $s0, $s1, 0x318
    ctx->pc = 0x381f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 792));
    // 0x381f38: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x381f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x381f3c: 0x8ca40038  lw          $a0, 0x38($a1)
    ctx->pc = 0x381f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x381f40: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x381f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x381f44: 0x4810010  bgez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x381F44u;
    {
        const bool branch_taken_0x381f44 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x381F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F44u;
        // 0x381f48: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f44) {
            ctx->pc = 0x381F88u;
            goto label_381f88;
        }
    }
    ctx->pc = 0x381F4Cu;
    // 0x381f4c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x381f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x381f50: 0x2623031c  addiu       $v1, $s1, 0x31C
    ctx->pc = 0x381f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 796));
    // 0x381f54: 0x24c4fc40  addiu       $a0, $a2, -0x3C0
    ctx->pc = 0x381f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966336));
    // 0x381f58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x381f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x381f5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x381f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x381f60: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x381f60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x381f64: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x381f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x381f68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381F68u;
    {
        const bool branch_taken_0x381f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F68u;
        // 0x381f6c: 0x94650000  lhu         $a1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f68) {
            ctx->pc = 0x381F7Cu;
            goto label_381f7c;
        }
    }
    ctx->pc = 0x381F70u;
    // 0x381f70: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x381f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x381f74: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x381F74u;
    {
        const bool branch_taken_0x381f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F74u;
        // 0x381f78: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f74) {
            ctx->pc = 0x381FC8u;
            goto label_381fc8;
        }
    }
    ctx->pc = 0x381F7Cu;
label_381f7c:
    // 0x381f7c: 0x2402fc40  addiu       $v0, $zero, -0x3C0
    ctx->pc = 0x381f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    // 0x381f80: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x381F80u;
    {
        const bool branch_taken_0x381f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F80u;
        // 0x381f84: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f80) {
            ctx->pc = 0x381FC8u;
            goto label_381fc8;
        }
    }
    ctx->pc = 0x381F88u;
label_381f88:
    // 0x381f88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x381f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x381f8c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x381f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x381f90: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x381F90u;
    {
        const bool branch_taken_0x381f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F90u;
        // 0x381f94: 0x61823  negu        $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381f90) {
            ctx->pc = 0x381FF4u;
            goto label_381ff4;
        }
    }
    ctx->pc = 0x381F98u;
    // 0x381f98: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x381f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x381f9c: 0x2624031c  addiu       $a0, $s1, 0x31C
    ctx->pc = 0x381f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 796));
    // 0x381fa0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x381fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x381fa4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x381fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x381fa8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x381fa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x381fac: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x381facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x381fb0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x381FB0u;
    {
        const bool branch_taken_0x381fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x381FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FB0u;
        // 0x381fb4: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381fb0) {
            ctx->pc = 0x381FC4u;
            goto label_381fc4;
        }
    }
    ctx->pc = 0x381FB8u;
    // 0x381fb8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x381fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x381fbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x381FBCu;
    {
        const bool branch_taken_0x381fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FBCu;
        // 0x381fc0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381fbc) {
            ctx->pc = 0x381FC8u;
            goto label_381fc8;
        }
    }
    ctx->pc = 0x381FC4u;
label_381fc4:
    // 0x381fc4: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x381fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_381fc8:
    // 0x381fc8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x381fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x381fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x381fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381fd0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x381fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x381fd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x381fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x381fd8: 0xc0e01f8  jal         func_3807E0
    ctx->pc = 0x381FD8u;
    SET_GPR_U32(ctx, 31, 0x381FE0u);
    ctx->pc = 0x381FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381FD8u;
    // 0x381fdc: 0x84450004  lh          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807E0u, 0x381FD8u, 0x381FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381FE0u;
label_381fe0:
    // 0x381fe0: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x381fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x381fe4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x381fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x381fe8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x381fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x381fec: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x381FECu;
    {
        const bool branch_taken_0x381fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FECu;
        // 0x381ff0: 0xa462000e  sh          $v0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381fec) {
            ctx->pc = 0x38209Cu;
            goto label_38209c;
        }
    }
    ctx->pc = 0x381FF4u;
label_381ff4:
    // 0x381ff4: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x381ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x381ff8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x381FF8u;
    {
        const bool branch_taken_0x381ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381FF8u;
        // 0x381ffc: 0x26230326  addiu       $v1, $s1, 0x326 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 806));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ff8) {
            ctx->pc = 0x382030u;
            goto label_382030;
        }
    }
    ctx->pc = 0x382000u;
    // 0x382000: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x382000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382004: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x382004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x382008: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x382008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38200c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x38200cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x382010: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x382010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x382014: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382014u;
    {
        const bool branch_taken_0x382014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382014u;
        // 0x382018: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382014) {
            ctx->pc = 0x382028u;
            goto label_382028;
        }
    }
    ctx->pc = 0x38201Cu;
    // 0x38201c: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x38201cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x382020: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x382020u;
    {
        const bool branch_taken_0x382020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382020u;
        // 0x382024: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382020) {
            ctx->pc = 0x382070u;
            goto label_382070;
        }
    }
    ctx->pc = 0x382028u;
label_382028:
    // 0x382028: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x382028u;
    {
        const bool branch_taken_0x382028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382028u;
        // 0x38202c: 0xa4600000  sh          $zero, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382028) {
            ctx->pc = 0x382070u;
            goto label_382070;
        }
    }
    ctx->pc = 0x382030u;
label_382030:
    // 0x382030: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x382030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x382034: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x382034u;
    {
        const bool branch_taken_0x382034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382034u;
        // 0x382038: 0x26240326  addiu       $a0, $s1, 0x326 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 806));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382034) {
            ctx->pc = 0x3820A8u;
            goto label_3820a8;
        }
    }
    ctx->pc = 0x38203Cu;
    // 0x38203c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x38203cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382040: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x382040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x382044: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x382044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x382048: 0xe61823  subu        $v1, $a3, $a2
    ctx->pc = 0x382048u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x38204c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x382050: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x382050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x382054: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x382054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x382058: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x382058u;
    {
        const bool branch_taken_0x382058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382058u;
        // 0x38205c: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382058) {
            ctx->pc = 0x38206Cu;
            goto label_38206c;
        }
    }
    ctx->pc = 0x382060u;
    // 0x382060: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x382060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x382064: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x382064u;
    {
        const bool branch_taken_0x382064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382064u;
        // 0x382068: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382064) {
            ctx->pc = 0x382070u;
            goto label_382070;
        }
    }
    ctx->pc = 0x38206Cu;
label_38206c:
    // 0x38206c: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x38206cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
label_382070:
    // 0x382070: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x382070u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382074: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x382074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x382078: 0x24a52060  addiu       $a1, $a1, 0x2060
    ctx->pc = 0x382078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8288));
    // 0x38207c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x38207cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x382080: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x382080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x382084: 0x8462000e  lh          $v0, 0xE($v1)
    ctx->pc = 0x382084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x382088: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x382088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38208c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x38208cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x382090: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x382090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x382094: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x382094u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x382098: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x382098u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
label_38209c:
    // 0x38209c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3820a0: 0xc0e0830  jal         func_3820C0
    ctx->pc = 0x3820A0u;
    SET_GPR_U32(ctx, 31, 0x3820A8u);
    ctx->pc = 0x3820A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3820A0u;
    // 0x3820a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3820C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3820C0u, 0x3820A0u, 0x3820A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3820A8u;
label_3820a8:
    // 0x3820a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3820a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3820ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3820acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3820b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3820b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3820b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3820B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3820B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820B4u;
        // 0x3820b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3820B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3820BCu;
    // 0x3820bc: 0x0  nop
    ctx->pc = 0x3820bcu;
    // NOP
    ctx->pc = 0x3820c0u;
}
