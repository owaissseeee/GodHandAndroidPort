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

// Function: func_001AC980
// Address: 0x1ac980 - 0x1acb50
void func_001AC980_0x1ac980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AC980_0x1ac980");
#endif

    switch (ctx->pc) {
        case 0x1ac980u: goto label_1ac980;
        case 0x1ac984u: goto label_1ac984;
        case 0x1ac988u: goto label_1ac988;
        case 0x1ac98cu: goto label_1ac98c;
        case 0x1ac990u: goto label_1ac990;
        case 0x1ac994u: goto label_1ac994;
        case 0x1ac998u: goto label_1ac998;
        case 0x1ac99cu: goto label_1ac99c;
        case 0x1ac9a0u: goto label_1ac9a0;
        case 0x1ac9a4u: goto label_1ac9a4;
        case 0x1ac9a8u: goto label_1ac9a8;
        case 0x1ac9acu: goto label_1ac9ac;
        case 0x1ac9b0u: goto label_1ac9b0;
        case 0x1ac9b4u: goto label_1ac9b4;
        case 0x1ac9b8u: goto label_1ac9b8;
        case 0x1ac9bcu: goto label_1ac9bc;
        case 0x1ac9c0u: goto label_1ac9c0;
        case 0x1ac9c4u: goto label_1ac9c4;
        case 0x1ac9c8u: goto label_1ac9c8;
        case 0x1ac9ccu: goto label_1ac9cc;
        case 0x1ac9d0u: goto label_1ac9d0;
        case 0x1ac9d4u: goto label_1ac9d4;
        case 0x1ac9d8u: goto label_1ac9d8;
        case 0x1ac9dcu: goto label_1ac9dc;
        case 0x1ac9e0u: goto label_1ac9e0;
        case 0x1ac9e4u: goto label_1ac9e4;
        case 0x1ac9e8u: goto label_1ac9e8;
        case 0x1ac9ecu: goto label_1ac9ec;
        case 0x1ac9f0u: goto label_1ac9f0;
        case 0x1ac9f4u: goto label_1ac9f4;
        case 0x1ac9f8u: goto label_1ac9f8;
        case 0x1ac9fcu: goto label_1ac9fc;
        case 0x1aca00u: goto label_1aca00;
        case 0x1aca04u: goto label_1aca04;
        case 0x1aca08u: goto label_1aca08;
        case 0x1aca0cu: goto label_1aca0c;
        case 0x1aca10u: goto label_1aca10;
        case 0x1aca14u: goto label_1aca14;
        case 0x1aca18u: goto label_1aca18;
        case 0x1aca1cu: goto label_1aca1c;
        case 0x1aca20u: goto label_1aca20;
        case 0x1aca24u: goto label_1aca24;
        case 0x1aca28u: goto label_1aca28;
        case 0x1aca2cu: goto label_1aca2c;
        case 0x1aca30u: goto label_1aca30;
        case 0x1aca34u: goto label_1aca34;
        case 0x1aca38u: goto label_1aca38;
        case 0x1aca3cu: goto label_1aca3c;
        case 0x1aca40u: goto label_1aca40;
        case 0x1aca44u: goto label_1aca44;
        case 0x1aca48u: goto label_1aca48;
        case 0x1aca4cu: goto label_1aca4c;
        case 0x1aca50u: goto label_1aca50;
        case 0x1aca54u: goto label_1aca54;
        case 0x1aca58u: goto label_1aca58;
        case 0x1aca5cu: goto label_1aca5c;
        case 0x1aca60u: goto label_1aca60;
        case 0x1aca64u: goto label_1aca64;
        case 0x1aca68u: goto label_1aca68;
        case 0x1aca6cu: goto label_1aca6c;
        case 0x1aca70u: goto label_1aca70;
        case 0x1aca74u: goto label_1aca74;
        case 0x1aca78u: goto label_1aca78;
        case 0x1aca7cu: goto label_1aca7c;
        case 0x1aca80u: goto label_1aca80;
        case 0x1aca84u: goto label_1aca84;
        case 0x1aca88u: goto label_1aca88;
        case 0x1aca8cu: goto label_1aca8c;
        case 0x1aca90u: goto label_1aca90;
        case 0x1aca94u: goto label_1aca94;
        case 0x1aca98u: goto label_1aca98;
        case 0x1aca9cu: goto label_1aca9c;
        case 0x1acaa0u: goto label_1acaa0;
        case 0x1acaa4u: goto label_1acaa4;
        case 0x1acaa8u: goto label_1acaa8;
        case 0x1acaacu: goto label_1acaac;
        case 0x1acab0u: goto label_1acab0;
        case 0x1acab4u: goto label_1acab4;
        case 0x1acab8u: goto label_1acab8;
        case 0x1acabcu: goto label_1acabc;
        case 0x1acac0u: goto label_1acac0;
        case 0x1acac4u: goto label_1acac4;
        case 0x1acac8u: goto label_1acac8;
        case 0x1acaccu: goto label_1acacc;
        case 0x1acad0u: goto label_1acad0;
        case 0x1acad4u: goto label_1acad4;
        case 0x1acad8u: goto label_1acad8;
        case 0x1acadcu: goto label_1acadc;
        case 0x1acae0u: goto label_1acae0;
        case 0x1acae4u: goto label_1acae4;
        case 0x1acae8u: goto label_1acae8;
        case 0x1acaecu: goto label_1acaec;
        case 0x1acaf0u: goto label_1acaf0;
        case 0x1acaf4u: goto label_1acaf4;
        case 0x1acaf8u: goto label_1acaf8;
        case 0x1acafcu: goto label_1acafc;
        case 0x1acb00u: goto label_1acb00;
        case 0x1acb04u: goto label_1acb04;
        case 0x1acb08u: goto label_1acb08;
        case 0x1acb0cu: goto label_1acb0c;
        case 0x1acb10u: goto label_1acb10;
        case 0x1acb14u: goto label_1acb14;
        case 0x1acb18u: goto label_1acb18;
        case 0x1acb1cu: goto label_1acb1c;
        case 0x1acb20u: goto label_1acb20;
        case 0x1acb24u: goto label_1acb24;
        case 0x1acb28u: goto label_1acb28;
        case 0x1acb2cu: goto label_1acb2c;
        case 0x1acb30u: goto label_1acb30;
        case 0x1acb34u: goto label_1acb34;
        case 0x1acb38u: goto label_1acb38;
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb40u: goto label_1acb40;
        case 0x1acb44u: goto label_1acb44;
        case 0x1acb48u: goto label_1acb48;
        case 0x1acb4cu: goto label_1acb4c;
        default: break;
    }

    ctx->pc = 0x1ac980u;

label_1ac980:
    // 0x1ac980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ac984:
    // 0x1ac984: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1ac988:
    // 0x1ac988: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ac988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ac98c:
    // 0x1ac98c: 0x2446dc40  addiu       $a2, $v0, -0x23C0
    ctx->pc = 0x1ac98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
label_1ac990:
    // 0x1ac990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac994:
    // 0x1ac994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac998:
    // 0x1ac998: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ac998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac99c:
    // 0x1ac99c: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1ac99cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1ac9a0:
    // 0x1ac9a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ac9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ac9a4:
    // 0x1ac9a4: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1ac9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1ac9a8:
    // 0x1ac9a8: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1ac9a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1ac9ac:
    // 0x1ac9ac: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1ac9b0:
    if (ctx->pc == 0x1AC9B0u) {
        ctx->pc = 0x1AC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9ACu;
        // 0x1ac9b0: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9B4u;
        goto label_1ac9b4;
    }
    ctx->pc = 0x1AC9ACu;
    {
        const bool branch_taken_0x1ac9ac = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9ACu;
        // 0x1ac9b0: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9ac) {
            ctx->pc = 0x1AC9D8u;
            goto label_1ac9d8;
        }
    }
    ctx->pc = 0x1AC9B4u;
label_1ac9b4:
    // 0x1ac9b4: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1ac9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1ac9b8:
    // 0x1ac9b8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1ac9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ac9bc:
    // 0x1ac9bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ac9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ac9c0:
    // 0x1ac9c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ac9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac9c4:
    // 0x1ac9c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ac9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ac9c8:
    // 0x1ac9c8: 0xdc67fff8  ld          $a3, -0x8($v1)
    ctx->pc = 0x1ac9c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1ac9cc:
    // 0x1ac9cc: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x1ac9ccu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_1ac9d0:
    // 0x1ac9d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ac9d4:
    if (ctx->pc == 0x1AC9D4u) {
        ctx->pc = 0x1AC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9D0u;
        // 0x1ac9d4: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9D8u;
        goto label_1ac9d8;
    }
    ctx->pc = 0x1AC9D0u;
    {
        const bool branch_taken_0x1ac9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9D0u;
        // 0x1ac9d4: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9d0) {
            ctx->pc = 0x1AC9E0u;
            goto label_1ac9e0;
        }
    }
    ctx->pc = 0x1AC9D8u;
label_1ac9d8:
    // 0x1ac9d8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1ac9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ac9dc:
    // 0x1ac9dc: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x1ac9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1ac9e0:
    // 0x1ac9e0: 0x2503dc40  addiu       $v1, $t0, -0x23C0
    ctx->pc = 0x1ac9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958144));
label_1ac9e4:
    // 0x1ac9e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ac9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ac9e8:
    // 0x1ac9e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ac9ec:
    // 0x1ac9ec: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1ac9f0:
    if (ctx->pc == 0x1AC9F0u) {
        ctx->pc = 0x1AC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9ECu;
        // 0x1ac9f0: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9F4u;
        goto label_1ac9f4;
    }
    ctx->pc = 0x1AC9ECu;
    {
        const bool branch_taken_0x1ac9ec = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9ECu;
        // 0x1ac9f0: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9ec) {
            ctx->pc = 0x1ACA08u;
            goto label_1aca08;
        }
    }
    ctx->pc = 0x1AC9F4u;
label_1ac9f4:
    // 0x1ac9f4: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x1ac9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1ac9f8:
    // 0x1ac9f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ac9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1ac9fc:
    // 0x1ac9fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ac9fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1aca00:
    // 0x1aca00: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aca04:
    if (ctx->pc == 0x1ACA04u) {
        ctx->pc = 0x1ACA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA00u;
        // 0x1aca04: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA08u;
        goto label_1aca08;
    }
    ctx->pc = 0x1ACA00u;
    {
        const bool branch_taken_0x1aca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA00u;
        // 0x1aca04: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca00) {
            ctx->pc = 0x1ACA0Cu;
            goto label_1aca0c;
        }
    }
    ctx->pc = 0x1ACA08u;
label_1aca08:
    // 0x1aca08: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aca08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1aca0c:
    // 0x1aca0c: 0xc0f809  jalr        $a2
label_1aca10:
    if (ctx->pc == 0x1ACA10u) {
        ctx->pc = 0x1ACA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA0Cu;
        // 0x1aca10: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA14u;
        goto label_1aca14;
    }
    ctx->pc = 0x1ACA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1ACA14u);
        ctx->pc = 0x1ACA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA0Cu;
        // 0x1aca10: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA0Cu, 0x1ACA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACA14u;
label_1aca14:
    // 0x1aca14: 0x92020621  lbu         $v0, 0x621($s0)
    ctx->pc = 0x1aca14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1569)));
label_1aca18:
    // 0x1aca18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1aca1c:
    // 0x1aca1c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1aca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1aca20:
    // 0x1aca20: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
label_1aca24:
    if (ctx->pc == 0x1ACA24u) {
        ctx->pc = 0x1ACA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA20u;
        // 0x1aca24: 0xa2020621  sb          $v0, 0x621($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1569), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA28u;
        goto label_1aca28;
    }
    ctx->pc = 0x1ACA20u;
    {
        const bool branch_taken_0x1aca20 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1ACA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA20u;
        // 0x1aca24: 0xa2020621  sb          $v0, 0x621($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1569), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca20) {
            ctx->pc = 0x1ACA54u;
            goto label_1aca54;
        }
    }
    ctx->pc = 0x1ACA28u;
label_1aca28:
    // 0x1aca28: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1aca28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1aca2c:
    // 0x1aca2c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1aca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1aca30:
    // 0x1aca30: 0x86030548  lh          $v1, 0x548($s0)
    ctx->pc = 0x1aca30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
label_1aca34:
    // 0x1aca34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1aca38:
    // 0x1aca38: 0xa2040621  sb          $a0, 0x621($s0)
    ctx->pc = 0x1aca38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1569), (uint8_t)GPR_U32(ctx, 4));
label_1aca3c:
    // 0x1aca3c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1aca3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1aca40:
    // 0x1aca40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1aca44:
    if (ctx->pc == 0x1ACA44u) {
        ctx->pc = 0x1ACA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA40u;
        // 0x1aca44: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA48u;
        goto label_1aca48;
    }
    ctx->pc = 0x1ACA40u;
    {
        const bool branch_taken_0x1aca40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA40u;
        // 0x1aca44: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca40) {
            ctx->pc = 0x1ACA50u;
            goto label_1aca50;
        }
    }
    ctx->pc = 0x1ACA48u;
label_1aca48:
    // 0x1aca48: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aca4c:
    if (ctx->pc == 0x1ACA4Cu) {
        ctx->pc = 0x1ACA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA48u;
        // 0x1aca4c: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA50u;
        goto label_1aca50;
    }
    ctx->pc = 0x1ACA48u;
    {
        const bool branch_taken_0x1aca48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA48u;
        // 0x1aca4c: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca48) {
            ctx->pc = 0x1ACA54u;
            goto label_1aca54;
        }
    }
    ctx->pc = 0x1ACA50u;
label_1aca50:
    // 0x1aca50: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x1aca50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_1aca54:
    // 0x1aca54: 0x9202060d  lbu         $v0, 0x60D($s0)
    ctx->pc = 0x1aca54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1549)));
label_1aca58:
    // 0x1aca58: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_1aca5c:
    if (ctx->pc == 0x1ACA5Cu) {
        ctx->pc = 0x1ACA60u;
        goto label_1aca60;
    }
    ctx->pc = 0x1ACA58u;
    {
        const bool branch_taken_0x1aca58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aca58) {
            ctx->pc = 0x1ACB18u;
            goto label_1acb18;
        }
    }
    ctx->pc = 0x1ACA60u;
label_1aca60:
    // 0x1aca60: 0x8e030624  lw          $v1, 0x624($s0)
    ctx->pc = 0x1aca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1572)));
label_1aca64:
    // 0x1aca64: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_1aca68:
    if (ctx->pc == 0x1ACA68u) {
        ctx->pc = 0x1ACA6Cu;
        goto label_1aca6c;
    }
    ctx->pc = 0x1ACA64u;
    {
        const bool branch_taken_0x1aca64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca64) {
            ctx->pc = 0x1ACB18u;
            goto label_1acb18;
        }
    }
    ctx->pc = 0x1ACA6Cu;
label_1aca6c:
    // 0x1aca6c: 0x9c620060  lwu         $v0, 0x60($v1)
    ctx->pc = 0x1aca6cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_1aca70:
    // 0x1aca70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aca70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1aca74:
    // 0x1aca74: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1aca78:
    if (ctx->pc == 0x1ACA78u) {
        ctx->pc = 0x1ACA7Cu;
        goto label_1aca7c;
    }
    ctx->pc = 0x1ACA74u;
    {
        const bool branch_taken_0x1aca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca74) {
            ctx->pc = 0x1ACB18u;
            goto label_1acb18;
        }
    }
    ctx->pc = 0x1ACA7Cu;
label_1aca7c:
    // 0x1aca7c: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x1aca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1aca80:
    // 0x1aca80: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x1aca80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1aca84:
    // 0x1aca84: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1aca84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1aca88:
    // 0x1aca88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aca88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aca8c:
    // 0x1aca8c: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x1aca8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
label_1aca90:
    // 0x1aca90: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1aca90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1aca94:
    // 0x1aca94: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x1aca94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_1aca98:
    // 0x1aca98: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1aca98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1aca9c:
    // 0x1aca9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1acaa0:
    if (ctx->pc == 0x1ACAA0u) {
        ctx->pc = 0x1ACAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA9Cu;
        // 0x1acaa0: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAA4u;
        goto label_1acaa4;
    }
    ctx->pc = 0x1ACA9Cu;
    {
        const bool branch_taken_0x1aca9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA9Cu;
        // 0x1acaa0: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca9c) {
            ctx->pc = 0x1ACAACu;
            goto label_1acaac;
        }
    }
    ctx->pc = 0x1ACAA4u;
label_1acaa4:
    // 0x1acaa4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1acaa8:
    if (ctx->pc == 0x1ACAA8u) {
        ctx->pc = 0x1ACAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA4u;
        // 0x1acaa8: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAACu;
        goto label_1acaac;
    }
    ctx->pc = 0x1ACAA4u;
    {
        const bool branch_taken_0x1acaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA4u;
        // 0x1acaa8: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acaa4) {
            ctx->pc = 0x1ACAB0u;
            goto label_1acab0;
        }
    }
    ctx->pc = 0x1ACAACu;
label_1acaac:
    // 0x1acaac: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1acaacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_1acab0:
    // 0x1acab0: 0x8e020618  lw          $v0, 0x618($s0)
    ctx->pc = 0x1acab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1560)));
label_1acab4:
    // 0x1acab4: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x1acab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1acab8:
    // 0x1acab8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1acab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1acabc:
    // 0x1acabc: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
label_1acac0:
    if (ctx->pc == 0x1ACAC0u) {
        ctx->pc = 0x1ACAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACABCu;
        // 0x1acac0: 0xae020618  sw          $v0, 0x618($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAC4u;
        goto label_1acac4;
    }
    ctx->pc = 0x1ACABCu;
    {
        const bool branch_taken_0x1acabc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1ACAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACABCu;
        // 0x1acac0: 0xae020618  sw          $v0, 0x618($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acabc) {
            ctx->pc = 0x1ACADCu;
            goto label_1acadc;
        }
    }
    ctx->pc = 0x1ACAC4u;
label_1acac4:
    // 0x1acac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acac8:
    // 0x1acac8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1acac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1acacc:
    // 0x1acacc: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1acaccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_1acad0:
    // 0x1acad0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1acad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1acad4:
    // 0x1acad4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1acad8:
    if (ctx->pc == 0x1ACAD8u) {
        ctx->pc = 0x1ACAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAD4u;
        // 0x1acad8: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACADCu;
        goto label_1acadc;
    }
    ctx->pc = 0x1ACAD4u;
    {
        const bool branch_taken_0x1acad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAD4u;
        // 0x1acad8: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acad4) {
            ctx->pc = 0x1ACAF0u;
            goto label_1acaf0;
        }
    }
    ctx->pc = 0x1ACADCu;
label_1acadc:
    // 0x1acadc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1acadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1acae0:
    // 0x1acae0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1acae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1acae4:
    // 0x1acae4: 0xa6020610  sh          $v0, 0x610($s0)
    ctx->pc = 0x1acae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1552), (uint16_t)GPR_U32(ctx, 2));
label_1acae8:
    // 0x1acae8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1acae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acaec:
    // 0x1acaec: 0xe6000614  swc1        $f0, 0x614($s0)
    ctx->pc = 0x1acaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1556), bits); }
label_1acaf0:
    // 0x1acaf0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1acaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1acaf4:
    // 0x1acaf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acaf8:
    // 0x1acaf8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1acaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1acafc:
    // 0x1acafc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1acafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1acb00:
    // 0x1acb00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1acb00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acb04:
    // 0x1acb04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1acb04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acb08:
    // 0x1acb08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1acb08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acb0c:
    // 0x1acb0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1acb0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acb10:
    // 0x1acb10: 0xc0b2e92  jal         func_2CBA48
label_1acb14:
    if (ctx->pc == 0x1ACB14u) {
        ctx->pc = 0x1ACB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB10u;
        // 0x1acb14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB18u;
        goto label_1acb18;
    }
    ctx->pc = 0x1ACB10u;
    SET_GPR_U32(ctx, 31, 0x1ACB18u);
    ctx->pc = 0x1ACB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB10u;
    // 0x1acb14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1ACB10u, 0x1ACB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB18u;
label_1acb18:
    // 0x1acb18: 0xc06b0dc  jal         func_1AC370
label_1acb1c:
    if (ctx->pc == 0x1ACB1Cu) {
        ctx->pc = 0x1ACB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB18u;
        // 0x1acb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB20u;
        goto label_1acb20;
    }
    ctx->pc = 0x1ACB18u;
    SET_GPR_U32(ctx, 31, 0x1ACB20u);
    ctx->pc = 0x1ACB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB18u;
    // 0x1acb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC370u, 0x1ACB18u, 0x1ACB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB20u;
label_1acb20:
    // 0x1acb20: 0x9203060c  lbu         $v1, 0x60C($s0)
    ctx->pc = 0x1acb20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
label_1acb24:
    // 0x1acb24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acb28:
    // 0x1acb28: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_1acb2c:
    if (ctx->pc == 0x1ACB2Cu) {
        ctx->pc = 0x1ACB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB28u;
        // 0x1acb2c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB30u;
        goto label_1acb30;
    }
    ctx->pc = 0x1ACB28u;
    {
        const bool branch_taken_0x1acb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acb28) {
            ctx->pc = 0x1ACB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACB28u;
            // 0x1acb2c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACB44u;
            goto label_1acb44;
        }
    }
    ctx->pc = 0x1ACB30u;
label_1acb30:
    // 0x1acb30: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1acb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1acb34:
    // 0x1acb34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1acb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1acb38:
    // 0x1acb38: 0xc06dfb8  jal         func_1B7EE0
label_1acb3c:
    if (ctx->pc == 0x1ACB3Cu) {
        ctx->pc = 0x1ACB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB38u;
        // 0x1acb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB40u;
        goto label_1acb40;
    }
    ctx->pc = 0x1ACB38u;
    SET_GPR_U32(ctx, 31, 0x1ACB40u);
    ctx->pc = 0x1ACB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB38u;
    // 0x1acb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EE0u, 0x1ACB38u, 0x1ACB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACB40u;
label_1acb40:
    // 0x1acb40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1acb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1acb44:
    // 0x1acb44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acb48:
    // 0x1acb48: 0x3e00008  jr          $ra
label_1acb4c:
    if (ctx->pc == 0x1ACB4Cu) {
        ctx->pc = 0x1ACB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB48u;
        // 0x1acb4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB50u;
        goto label_fallthrough_0x1acb48;
    }
    ctx->pc = 0x1ACB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB48u;
        // 0x1acb4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1acb48:
    ctx->pc = 0x1ACB50u;
}
