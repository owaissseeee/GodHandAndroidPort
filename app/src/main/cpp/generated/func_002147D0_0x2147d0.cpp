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

// Function: func_002147D0
// Address: 0x2147d0 - 0x214de0
void func_002147D0_0x2147d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002147D0_0x2147d0");
#endif

    switch (ctx->pc) {
        case 0x2147f0u: goto label_2147f0;
        case 0x214834u: goto label_214834;
        case 0x21484cu: goto label_21484c;
        case 0x214be0u: goto label_214be0;
        case 0x214c04u: goto label_214c04;
        case 0x214c24u: goto label_214c24;
        case 0x214c2cu: goto label_214c2c;
        case 0x214c48u: goto label_214c48;
        case 0x214c5cu: goto label_214c5c;
        case 0x214c68u: goto label_214c68;
        case 0x214ca4u: goto label_214ca4;
        case 0x214d18u: goto label_214d18;
        case 0x214d7cu: goto label_214d7c;
        case 0x214d8cu: goto label_214d8c;
        case 0x214dc0u: goto label_214dc0;
        default: break;
    }

    ctx->pc = 0x2147d0u;

    // 0x2147d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2147d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2147d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2147d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2147d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2147d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2147dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2147e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2147e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2147e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2147e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2147e8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2147E8u;
    SET_GPR_U32(ctx, 31, 0x2147F0u);
    ctx->pc = 0x2147ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147E8u;
    // 0x2147ec: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2147E8u, 0x2147F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147F0u;
label_2147f0:
    // 0x2147f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2147f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147f4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2147f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2147f8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2147f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x2147fc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2147fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x214800: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x214800u;
    {
        const bool branch_taken_0x214800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214800u;
        // 0x214804: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214800) {
            ctx->pc = 0x21481Cu;
            goto label_21481c;
        }
    }
    ctx->pc = 0x214808u;
    // 0x214808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21480c: 0x106200fb  beq         $v1, $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x21480Cu;
    {
        const bool branch_taken_0x21480c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21480c) {
            ctx->pc = 0x214BFCu;
            goto label_214bfc;
        }
    }
    ctx->pc = 0x214814u;
    // 0x214814: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x214814u;
    {
        const bool branch_taken_0x214814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214814u;
        // 0x214818: 0x8e020564  lw          $v0, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214814) {
            ctx->pc = 0x214C6Cu;
            goto label_214c6c;
        }
    }
    ctx->pc = 0x21481Cu;
label_21481c:
    // 0x21481c: 0x921102f7  lbu         $s1, 0x2F7($s0)
    ctx->pc = 0x21481cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x214820: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x214820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214824: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214824u;
    {
        const bool branch_taken_0x214824 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x214824) {
            ctx->pc = 0x214828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214824u;
            // 0x214828: 0x920317c3  lbu         $v1, 0x17C3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21483Cu;
            goto label_21483c;
        }
    }
    ctx->pc = 0x21482Cu;
    // 0x21482c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x21482Cu;
    SET_GPR_U32(ctx, 31, 0x214834u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x21482Cu, 0x214834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214834u;
label_214834:
    // 0x214834: 0x30510001  andi        $s1, $v0, 0x1
    ctx->pc = 0x214834u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x214838: 0x920317c3  lbu         $v1, 0x17C3($s0)
    ctx->pc = 0x214838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
label_21483c:
    // 0x21483c: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x21483cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x214840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214844: 0xc09d91a  jal         func_276468
    ctx->pc = 0x214844u;
    SET_GPR_U32(ctx, 31, 0x21484Cu);
    ctx->pc = 0x214848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214844u;
    // 0x214848: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x214844u, 0x21484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21484Cu;
label_21484c:
    // 0x21484c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x21484cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x214850: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x214850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x214854: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x214854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x214858: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x214858u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x21485c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21485Cu;
    {
        const bool branch_taken_0x21485c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21485Cu;
        // 0x214860: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21485c) {
            ctx->pc = 0x21487Cu;
            goto label_21487c;
        }
    }
    ctx->pc = 0x214864u;
    // 0x214864: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x214864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x214868: 0x24425d60  addiu       $v0, $v0, 0x5D60
    ctx->pc = 0x214868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23904));
    // 0x21486c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214870: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214874: 0x800008  jr          $a0
    ctx->pc = 0x214874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21487Cu: goto label_21487c;
            case 0x2148A4u: goto label_2148a4;
            case 0x2148CCu: goto label_2148cc;
            case 0x2148F4u: goto label_2148f4;
            case 0x21491Cu: goto label_21491c;
            case 0x214944u: goto label_214944;
            case 0x21496Cu: goto label_21496c;
            case 0x214994u: goto label_214994;
            case 0x2149BCu: goto label_2149bc;
            case 0x2149E4u: goto label_2149e4;
            case 0x214A0Cu: goto label_214a0c;
            case 0x214A34u: goto label_214a34;
            case 0x214A5Cu: goto label_214a5c;
            case 0x214A84u: goto label_214a84;
            case 0x214AACu: goto label_214aac;
            case 0x214AD4u: goto label_214ad4;
            case 0x214AFCu: goto label_214afc;
            case 0x214B24u: goto label_214b24;
            case 0x214B4Cu: goto label_214b4c;
            case 0x214B74u: goto label_214b74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214874u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21487Cu;
label_21487c:
    // 0x21487c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21487Cu;
    {
        const bool branch_taken_0x21487c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21487Cu;
        // 0x214880: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21487c) {
            ctx->pc = 0x214894u;
            goto label_214894;
        }
    }
    ctx->pc = 0x214884u;
    // 0x214884: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x214884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x214888: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21488c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x21488Cu;
    {
        const bool branch_taken_0x21488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21488Cu;
        // 0x214890: 0x8c4300d8  lw          $v1, 0xD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21488c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214894u;
label_214894:
    // 0x214894: 0x8c4400cc  lw          $a0, 0xCC($v0)
    ctx->pc = 0x214894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x214898: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21489c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x21489Cu;
    {
        const bool branch_taken_0x21489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21489Cu;
        // 0x2148a0: 0x8c4300d0  lw          $v1, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21489c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x2148A4u;
label_2148a4:
    // 0x2148a4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2148A4u;
    {
        const bool branch_taken_0x2148a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148A4u;
        // 0x2148a8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148a4) {
            ctx->pc = 0x2148BCu;
            goto label_2148bc;
        }
    }
    ctx->pc = 0x2148ACu;
    // 0x2148ac: 0x8c440674  lw          $a0, 0x674($v0)
    ctx->pc = 0x2148acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1652)));
    // 0x2148b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2148b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148b4: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x2148B4u;
    {
        const bool branch_taken_0x2148b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148B4u;
        // 0x2148b8: 0x8c430678  lw          $v1, 0x678($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148b4) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x2148BCu;
label_2148bc:
    // 0x2148bc: 0x8c44066c  lw          $a0, 0x66C($v0)
    ctx->pc = 0x2148bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1644)));
    // 0x2148c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2148c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148c4: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x2148C4u;
    {
        const bool branch_taken_0x2148c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148C4u;
        // 0x2148c8: 0x8c430670  lw          $v1, 0x670($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148c4) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x2148CCu;
label_2148cc:
    // 0x2148cc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2148CCu;
    {
        const bool branch_taken_0x2148cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148CCu;
        // 0x2148d0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148cc) {
            ctx->pc = 0x2148E4u;
            goto label_2148e4;
        }
    }
    ctx->pc = 0x2148D4u;
    // 0x2148d4: 0x8c4435f4  lw          $a0, 0x35F4($v0)
    ctx->pc = 0x2148d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13812)));
    // 0x2148d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2148d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148dc: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2148DCu;
    {
        const bool branch_taken_0x2148dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148DCu;
        // 0x2148e0: 0x8c4335f8  lw          $v1, 0x35F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148dc) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x2148E4u;
label_2148e4:
    // 0x2148e4: 0x8c4435ec  lw          $a0, 0x35EC($v0)
    ctx->pc = 0x2148e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13804)));
    // 0x2148e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2148e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148ec: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2148ECu;
    {
        const bool branch_taken_0x2148ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148ECu;
        // 0x2148f0: 0x8c4335f0  lw          $v1, 0x35F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148ec) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x2148F4u;
label_2148f4:
    // 0x2148f4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2148F4u;
    {
        const bool branch_taken_0x2148f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2148F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148F4u;
        // 0x2148f8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148f4) {
            ctx->pc = 0x21490Cu;
            goto label_21490c;
        }
    }
    ctx->pc = 0x2148FCu;
    // 0x2148fc: 0x8c4410ec  lw          $a0, 0x10EC($v0)
    ctx->pc = 0x2148fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4332)));
    // 0x214900: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214904: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x214904u;
    {
        const bool branch_taken_0x214904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214904u;
        // 0x214908: 0x8c4310f0  lw          $v1, 0x10F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214904) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x21490Cu;
label_21490c:
    // 0x21490c: 0x8c4410e4  lw          $a0, 0x10E4($v0)
    ctx->pc = 0x21490cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4324)));
    // 0x214910: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214914: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x214914u;
    {
        const bool branch_taken_0x214914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214914u;
        // 0x214918: 0x8c4310e8  lw          $v1, 0x10E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214914) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x21491Cu;
label_21491c:
    // 0x21491c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21491Cu;
    {
        const bool branch_taken_0x21491c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21491Cu;
        // 0x214920: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21491c) {
            ctx->pc = 0x214934u;
            goto label_214934;
        }
    }
    ctx->pc = 0x214924u;
    // 0x214924: 0x8c443cb0  lw          $a0, 0x3CB0($v0)
    ctx->pc = 0x214924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15536)));
    // 0x214928: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21492c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x21492Cu;
    {
        const bool branch_taken_0x21492c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21492Cu;
        // 0x214930: 0x8c433cb4  lw          $v1, 0x3CB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21492c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214934u;
label_214934:
    // 0x214934: 0x8c443ca8  lw          $a0, 0x3CA8($v0)
    ctx->pc = 0x214934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15528)));
    // 0x214938: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21493c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x21493Cu;
    {
        const bool branch_taken_0x21493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21493Cu;
        // 0x214940: 0x8c433cac  lw          $v1, 0x3CAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21493c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214944u;
label_214944:
    // 0x214944: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214944u;
    {
        const bool branch_taken_0x214944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214944u;
        // 0x214948: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214944) {
            ctx->pc = 0x21495Cu;
            goto label_21495c;
        }
    }
    ctx->pc = 0x21494Cu;
    // 0x21494c: 0x8c440854  lw          $a0, 0x854($v0)
    ctx->pc = 0x21494cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2132)));
    // 0x214950: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214954: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x214954u;
    {
        const bool branch_taken_0x214954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214954u;
        // 0x214958: 0x8c430858  lw          $v1, 0x858($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214954) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x21495Cu;
label_21495c:
    // 0x21495c: 0x8c44084c  lw          $a0, 0x84C($v0)
    ctx->pc = 0x21495cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
    // 0x214960: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214964: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x214964u;
    {
        const bool branch_taken_0x214964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214964u;
        // 0x214968: 0x8c430850  lw          $v1, 0x850($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214964) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x21496Cu;
label_21496c:
    // 0x21496c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21496Cu;
    {
        const bool branch_taken_0x21496c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21496Cu;
        // 0x214970: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21496c) {
            ctx->pc = 0x214984u;
            goto label_214984;
        }
    }
    ctx->pc = 0x214974u;
    // 0x214974: 0x8c441ed8  lw          $a0, 0x1ED8($v0)
    ctx->pc = 0x214974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7896)));
    // 0x214978: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21497c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x21497Cu;
    {
        const bool branch_taken_0x21497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21497Cu;
        // 0x214980: 0x8c431edc  lw          $v1, 0x1EDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21497c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214984u;
label_214984:
    // 0x214984: 0x8c441ed0  lw          $a0, 0x1ED0($v0)
    ctx->pc = 0x214984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7888)));
    // 0x214988: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21498c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x21498Cu;
    {
        const bool branch_taken_0x21498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21498Cu;
        // 0x214990: 0x8c431ed4  lw          $v1, 0x1ED4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21498c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214994u;
label_214994:
    // 0x214994: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214994u;
    {
        const bool branch_taken_0x214994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214994u;
        // 0x214998: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214994) {
            ctx->pc = 0x2149ACu;
            goto label_2149ac;
        }
    }
    ctx->pc = 0x21499Cu;
    // 0x21499c: 0x8c441fdc  lw          $a0, 0x1FDC($v0)
    ctx->pc = 0x21499cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8156)));
    // 0x2149a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2149a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149a4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2149A4u;
    {
        const bool branch_taken_0x2149a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149A4u;
        // 0x2149a8: 0x8c431fe0  lw          $v1, 0x1FE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149a4) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x2149ACu;
label_2149ac:
    // 0x2149ac: 0x8c441fd4  lw          $a0, 0x1FD4($v0)
    ctx->pc = 0x2149acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8148)));
    // 0x2149b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2149b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149b4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2149B4u;
    {
        const bool branch_taken_0x2149b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149B4u;
        // 0x2149b8: 0x8c431fd8  lw          $v1, 0x1FD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149b4) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x2149BCu;
label_2149bc:
    // 0x2149bc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2149BCu;
    {
        const bool branch_taken_0x2149bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149BCu;
        // 0x2149c0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149bc) {
            ctx->pc = 0x2149D4u;
            goto label_2149d4;
        }
    }
    ctx->pc = 0x2149C4u;
    // 0x2149c4: 0x8c441ffc  lw          $a0, 0x1FFC($v0)
    ctx->pc = 0x2149c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8188)));
    // 0x2149c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2149c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149cc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2149CCu;
    {
        const bool branch_taken_0x2149cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149CCu;
        // 0x2149d0: 0x8c432000  lw          $v1, 0x2000($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149cc) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x2149D4u;
label_2149d4:
    // 0x2149d4: 0x8c441ff4  lw          $a0, 0x1FF4($v0)
    ctx->pc = 0x2149d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8180)));
    // 0x2149d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2149d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149dc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2149DCu;
    {
        const bool branch_taken_0x2149dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149DCu;
        // 0x2149e0: 0x8c431ff8  lw          $v1, 0x1FF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149dc) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x2149E4u;
label_2149e4:
    // 0x2149e4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2149E4u;
    {
        const bool branch_taken_0x2149e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149E4u;
        // 0x2149e8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149e4) {
            ctx->pc = 0x2149FCu;
            goto label_2149fc;
        }
    }
    ctx->pc = 0x2149ECu;
    // 0x2149ec: 0x8c44158c  lw          $a0, 0x158C($v0)
    ctx->pc = 0x2149ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5516)));
    // 0x2149f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2149f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149f4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2149F4u;
    {
        const bool branch_taken_0x2149f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149F4u;
        // 0x2149f8: 0x8c431590  lw          $v1, 0x1590($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149f4) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x2149FCu;
label_2149fc:
    // 0x2149fc: 0x8c441584  lw          $a0, 0x1584($v0)
    ctx->pc = 0x2149fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5508)));
    // 0x214a00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a04: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x214A04u;
    {
        const bool branch_taken_0x214a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A04u;
        // 0x214a08: 0x8c431588  lw          $v1, 0x1588($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a04) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214A0Cu;
label_214a0c:
    // 0x214a0c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214A0Cu;
    {
        const bool branch_taken_0x214a0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A0Cu;
        // 0x214a10: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a0c) {
            ctx->pc = 0x214A24u;
            goto label_214a24;
        }
    }
    ctx->pc = 0x214A14u;
    // 0x214a14: 0x8c443a28  lw          $a0, 0x3A28($v0)
    ctx->pc = 0x214a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14888)));
    // 0x214a18: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a1c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x214A1Cu;
    {
        const bool branch_taken_0x214a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A1Cu;
        // 0x214a20: 0x8c433a2c  lw          $v1, 0x3A2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a1c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214A24u;
label_214a24:
    // 0x214a24: 0x8c443a20  lw          $a0, 0x3A20($v0)
    ctx->pc = 0x214a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14880)));
    // 0x214a28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a2c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x214A2Cu;
    {
        const bool branch_taken_0x214a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A2Cu;
        // 0x214a30: 0x8c433a24  lw          $v1, 0x3A24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a2c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214A34u;
label_214a34:
    // 0x214a34: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214A34u;
    {
        const bool branch_taken_0x214a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A34u;
        // 0x214a38: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a34) {
            ctx->pc = 0x214A4Cu;
            goto label_214a4c;
        }
    }
    ctx->pc = 0x214A3Cu;
    // 0x214a3c: 0x8c44343c  lw          $a0, 0x343C($v0)
    ctx->pc = 0x214a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13372)));
    // 0x214a40: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a44: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x214A44u;
    {
        const bool branch_taken_0x214a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A44u;
        // 0x214a48: 0x8c433440  lw          $v1, 0x3440($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a44) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214A4Cu;
label_214a4c:
    // 0x214a4c: 0x8c443444  lw          $a0, 0x3444($v0)
    ctx->pc = 0x214a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13380)));
    // 0x214a50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a54: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x214A54u;
    {
        const bool branch_taken_0x214a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A54u;
        // 0x214a58: 0x8c433448  lw          $v1, 0x3448($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a54) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214A5Cu;
label_214a5c:
    // 0x214a5c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214A5Cu;
    {
        const bool branch_taken_0x214a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A5Cu;
        // 0x214a60: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a5c) {
            ctx->pc = 0x214A74u;
            goto label_214a74;
        }
    }
    ctx->pc = 0x214A64u;
    // 0x214a64: 0x8c44191c  lw          $a0, 0x191C($v0)
    ctx->pc = 0x214a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6428)));
    // 0x214a68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a6c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x214A6Cu;
    {
        const bool branch_taken_0x214a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A6Cu;
        // 0x214a70: 0x8c431920  lw          $v1, 0x1920($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a6c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214A74u;
label_214a74:
    // 0x214a74: 0x8c441914  lw          $a0, 0x1914($v0)
    ctx->pc = 0x214a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6420)));
    // 0x214a78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a7c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x214A7Cu;
    {
        const bool branch_taken_0x214a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A7Cu;
        // 0x214a80: 0x8c431918  lw          $v1, 0x1918($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a7c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214A84u;
label_214a84:
    // 0x214a84: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214A84u;
    {
        const bool branch_taken_0x214a84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A84u;
        // 0x214a88: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a84) {
            ctx->pc = 0x214A9Cu;
            goto label_214a9c;
        }
    }
    ctx->pc = 0x214A8Cu;
    // 0x214a8c: 0x8c443060  lw          $a0, 0x3060($v0)
    ctx->pc = 0x214a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12384)));
    // 0x214a90: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a94: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x214A94u;
    {
        const bool branch_taken_0x214a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A94u;
        // 0x214a98: 0x8c433064  lw          $v1, 0x3064($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a94) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214A9Cu;
label_214a9c:
    // 0x214a9c: 0x8c443058  lw          $a0, 0x3058($v0)
    ctx->pc = 0x214a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12376)));
    // 0x214aa0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214aa4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x214AA4u;
    {
        const bool branch_taken_0x214aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AA4u;
        // 0x214aa8: 0x8c43305c  lw          $v1, 0x305C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214aa4) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214AACu;
label_214aac:
    // 0x214aac: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214AACu;
    {
        const bool branch_taken_0x214aac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AACu;
        // 0x214ab0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214aac) {
            ctx->pc = 0x214AC4u;
            goto label_214ac4;
        }
    }
    ctx->pc = 0x214AB4u;
    // 0x214ab4: 0x8c44326c  lw          $a0, 0x326C($v0)
    ctx->pc = 0x214ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x214ab8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214abc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x214ABCu;
    {
        const bool branch_taken_0x214abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214ABCu;
        // 0x214ac0: 0x8c433270  lw          $v1, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214abc) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214AC4u;
label_214ac4:
    // 0x214ac4: 0x8c44326c  lw          $a0, 0x326C($v0)
    ctx->pc = 0x214ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x214ac8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214acc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x214ACCu;
    {
        const bool branch_taken_0x214acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214ACCu;
        // 0x214ad0: 0x8c433270  lw          $v1, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214acc) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214AD4u;
label_214ad4:
    // 0x214ad4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214AD4u;
    {
        const bool branch_taken_0x214ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AD4u;
        // 0x214ad8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ad4) {
            ctx->pc = 0x214AECu;
            goto label_214aec;
        }
    }
    ctx->pc = 0x214ADCu;
    // 0x214adc: 0x8c443724  lw          $a0, 0x3724($v0)
    ctx->pc = 0x214adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x214ae0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ae4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x214AE4u;
    {
        const bool branch_taken_0x214ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AE4u;
        // 0x214ae8: 0x8c433728  lw          $v1, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ae4) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214AECu;
label_214aec:
    // 0x214aec: 0x8c443724  lw          $a0, 0x3724($v0)
    ctx->pc = 0x214aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x214af0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214af4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x214AF4u;
    {
        const bool branch_taken_0x214af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AF4u;
        // 0x214af8: 0x8c433728  lw          $v1, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214af4) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214AFCu;
label_214afc:
    // 0x214afc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214AFCu;
    {
        const bool branch_taken_0x214afc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AFCu;
        // 0x214b00: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214afc) {
            ctx->pc = 0x214B14u;
            goto label_214b14;
        }
    }
    ctx->pc = 0x214B04u;
    // 0x214b04: 0x8c440d20  lw          $a0, 0xD20($v0)
    ctx->pc = 0x214b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3360)));
    // 0x214b08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b0c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x214B0Cu;
    {
        const bool branch_taken_0x214b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B0Cu;
        // 0x214b10: 0x8c430d24  lw          $v1, 0xD24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b0c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214B14u;
label_214b14:
    // 0x214b14: 0x8c440d18  lw          $a0, 0xD18($v0)
    ctx->pc = 0x214b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3352)));
    // 0x214b18: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b1c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x214B1Cu;
    {
        const bool branch_taken_0x214b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B1Cu;
        // 0x214b20: 0x8c430d1c  lw          $v1, 0xD1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b1c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214B24u;
label_214b24:
    // 0x214b24: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214B24u;
    {
        const bool branch_taken_0x214b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B24u;
        // 0x214b28: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b24) {
            ctx->pc = 0x214B3Cu;
            goto label_214b3c;
        }
    }
    ctx->pc = 0x214B2Cu;
    // 0x214b2c: 0x8c441be0  lw          $a0, 0x1BE0($v0)
    ctx->pc = 0x214b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7136)));
    // 0x214b30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b34: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x214B34u;
    {
        const bool branch_taken_0x214b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B34u;
        // 0x214b38: 0x8c431be4  lw          $v1, 0x1BE4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b34) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214B3Cu;
label_214b3c:
    // 0x214b3c: 0x8c441bd8  lw          $a0, 0x1BD8($v0)
    ctx->pc = 0x214b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7128)));
    // 0x214b40: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214b40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x214B44u;
    {
        const bool branch_taken_0x214b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B44u;
        // 0x214b48: 0x8c431bdc  lw          $v1, 0x1BDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b44) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214B4Cu;
label_214b4c:
    // 0x214b4c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214B4Cu;
    {
        const bool branch_taken_0x214b4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B4Cu;
        // 0x214b50: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b4c) {
            ctx->pc = 0x214B64u;
            goto label_214b64;
        }
    }
    ctx->pc = 0x214B54u;
    // 0x214b54: 0x8c442d38  lw          $a0, 0x2D38($v0)
    ctx->pc = 0x214b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x214b58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x214B5Cu;
    {
        const bool branch_taken_0x214b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B5Cu;
        // 0x214b60: 0x8c432d3c  lw          $v1, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b5c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214B64u;
label_214b64:
    // 0x214b64: 0x8c442d38  lw          $a0, 0x2D38($v0)
    ctx->pc = 0x214b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x214b68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x214B6Cu;
    {
        const bool branch_taken_0x214b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B6Cu;
        // 0x214b70: 0x8c432d3c  lw          $v1, 0x2D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b6c) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214B74u;
label_214b74:
    // 0x214b74: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214B74u;
    {
        const bool branch_taken_0x214b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B74u;
        // 0x214b78: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b74) {
            ctx->pc = 0x214B8Cu;
            goto label_214b8c;
        }
    }
    ctx->pc = 0x214B7Cu;
    // 0x214b7c: 0x8c44229c  lw          $a0, 0x229C($v0)
    ctx->pc = 0x214b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8860)));
    // 0x214b80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x214B84u;
    {
        const bool branch_taken_0x214b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B84u;
        // 0x214b88: 0x8c4322a0  lw          $v1, 0x22A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b84) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214B8Cu;
label_214b8c:
    // 0x214b8c: 0x8c442294  lw          $a0, 0x2294($v0)
    ctx->pc = 0x214b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8852)));
    // 0x214b90: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b94: 0x8c432298  lw          $v1, 0x2298($v0)
    ctx->pc = 0x214b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8856)));
label_214b98:
    // 0x214b98: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x214b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x214b9c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x214b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214ba0: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x214ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x214ba4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x214BA4u;
    {
        const bool branch_taken_0x214ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214ba4) {
            ctx->pc = 0x214BCCu;
            goto label_214bcc;
        }
    }
    ctx->pc = 0x214BACu;
    // 0x214bac: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x214BACu;
    {
        const bool branch_taken_0x214bac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x214bac) {
            ctx->pc = 0x214BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214BACu;
            // 0x214bb0: 0x8ce20464  lw          $v0, 0x464($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214BC0u;
            goto label_214bc0;
        }
    }
    ctx->pc = 0x214BB4u;
    // 0x214bb4: 0x8ce2046c  lw          $v0, 0x46C($a3)
    ctx->pc = 0x214bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1132)));
    // 0x214bb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x214BB8u;
    {
        const bool branch_taken_0x214bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BB8u;
        // 0x214bbc: 0x8ce30470  lw          $v1, 0x470($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214bb8) {
            ctx->pc = 0x214BC4u;
            goto label_214bc4;
        }
    }
    ctx->pc = 0x214BC0u;
label_214bc0:
    // 0x214bc0: 0x8ce30468  lw          $v1, 0x468($a3)
    ctx->pc = 0x214bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1128)));
label_214bc4:
    // 0x214bc4: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x214bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x214bc8: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x214bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_214bcc:
    // 0x214bcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x214bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x214bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bd4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x214bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x214bd8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x214BD8u;
    SET_GPR_U32(ctx, 31, 0x214BE0u);
    ctx->pc = 0x214BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214BD8u;
    // 0x214bdc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x214BD8u, 0x214BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214BE0u;
label_214be0:
    // 0x214be0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x214be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x214be4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x214be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x214be8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214bec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x214becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x214bf0: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x214bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x214bf4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x214bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x214bf8: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x214bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_214bfc:
    // 0x214bfc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x214BFCu;
    SET_GPR_U32(ctx, 31, 0x214C04u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x214BFCu, 0x214C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C04u;
label_214c04:
    // 0x214c04: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x214c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c0c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x214c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x214c10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x214c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x214c14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x214c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x214c18: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x214c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x214c1c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x214C1Cu;
    SET_GPR_U32(ctx, 31, 0x214C24u);
    ctx->pc = 0x214C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C1Cu;
    // 0x214c20: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x214C1Cu, 0x214C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C24u;
label_214c24:
    // 0x214c24: 0xc055f06  jal         func_157C18
    ctx->pc = 0x214C24u;
    SET_GPR_U32(ctx, 31, 0x214C2Cu);
    ctx->pc = 0x214C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C24u;
    // 0x214c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x214C24u, 0x214C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C2Cu;
label_214c2c:
    // 0x214c2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x214C2Cu;
    {
        const bool branch_taken_0x214c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C2Cu;
        // 0x214c30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c2c) {
            ctx->pc = 0x214C48u;
            goto label_214c48;
        }
    }
    ctx->pc = 0x214C34u;
    // 0x214c34: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x214c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x214c38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214C38u;
    {
        const bool branch_taken_0x214c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x214c38) {
            ctx->pc = 0x214C48u;
            goto label_214c48;
        }
    }
    ctx->pc = 0x214C40u;
    // 0x214c40: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x214C40u;
    SET_GPR_U32(ctx, 31, 0x214C48u);
    ctx->pc = 0x214C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C40u;
    // 0x214c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x214C40u, 0x214C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C48u;
label_214c48:
    // 0x214c48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214c4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c54: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x214C54u;
    SET_GPR_U32(ctx, 31, 0x214C5Cu);
    ctx->pc = 0x214C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C54u;
    // 0x214c58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x214C54u, 0x214C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C5Cu;
label_214c5c:
    // 0x214c5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x214c5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x214c60: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x214C60u;
    SET_GPR_U32(ctx, 31, 0x214C68u);
    ctx->pc = 0x214C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C60u;
    // 0x214c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x214C60u, 0x214C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C68u;
label_214c68:
    // 0x214c68: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x214c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_214c6c:
    // 0x214c6c: 0x2444fdec  addiu       $a0, $v0, -0x214
    ctx->pc = 0x214c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966764));
    // 0x214c70: 0x2c830066  sltiu       $v1, $a0, 0x66
    ctx->pc = 0x214c70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)102) ? 1 : 0);
    // 0x214c74: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x214C74u;
    {
        const bool branch_taken_0x214c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C74u;
        // 0x214c78: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c74) {
            ctx->pc = 0x214C94u;
            goto label_214c94;
        }
    }
    ctx->pc = 0x214C7Cu;
    // 0x214c7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x214c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x214c80: 0x24425f60  addiu       $v0, $v0, 0x5F60
    ctx->pc = 0x214c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24416));
    // 0x214c84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214c88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214c8c: 0x800008  jr          $a0
    ctx->pc = 0x214C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214C94u: goto label_214c94;
            case 0x214D20u: goto label_214d20;
            case 0x214DC0u: goto label_214dc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214C8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x214C94u;
label_214c94:
    // 0x214c94: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x214c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x214c98: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x214c98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214c9c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x214C9Cu;
    SET_GPR_U32(ctx, 31, 0x214CA4u);
    ctx->pc = 0x214CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C9Cu;
    // 0x214ca0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x214C9Cu, 0x214CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214CA4u;
label_214ca4:
    // 0x214ca4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x214ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x214ca8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x214ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x214cac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x214CACu;
    {
        const bool branch_taken_0x214cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CACu;
        // 0x214cb0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cac) {
            ctx->pc = 0x214CCCu;
            goto label_214ccc;
        }
    }
    ctx->pc = 0x214CB4u;
    // 0x214cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x214cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x214cb8: 0x24426100  addiu       $v0, $v0, 0x6100
    ctx->pc = 0x214cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24832));
    // 0x214cbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214cc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214cc4: 0x800008  jr          $a0
    ctx->pc = 0x214CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214CCCu: goto label_214ccc;
            case 0x214CD8u: goto label_214cd8;
            case 0x214CE4u: goto label_214ce4;
            case 0x214CF0u: goto label_214cf0;
            case 0x214CFCu: goto label_214cfc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214CC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x214CCCu;
label_214ccc:
    // 0x214ccc: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x214cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x214cd0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x214CD0u;
    {
        const bool branch_taken_0x214cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CD0u;
        // 0x214cd4: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cd0) {
            ctx->pc = 0x214D08u;
            goto label_214d08;
        }
    }
    ctx->pc = 0x214CD8u;
label_214cd8:
    // 0x214cd8: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x214cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x214cdc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x214CDCu;
    {
        const bool branch_taken_0x214cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CDCu;
        // 0x214ce0: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cdc) {
            ctx->pc = 0x214D04u;
            goto label_214d04;
        }
    }
    ctx->pc = 0x214CE4u;
label_214ce4:
    // 0x214ce4: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x214ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x214ce8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x214CE8u;
    {
        const bool branch_taken_0x214ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CE8u;
        // 0x214cec: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ce8) {
            ctx->pc = 0x214D04u;
            goto label_214d04;
        }
    }
    ctx->pc = 0x214CF0u;
label_214cf0:
    // 0x214cf0: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x214cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x214cf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x214CF4u;
    {
        const bool branch_taken_0x214cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CF4u;
        // 0x214cf8: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214cf4) {
            ctx->pc = 0x214D04u;
            goto label_214d04;
        }
    }
    ctx->pc = 0x214CFCu;
label_214cfc:
    // 0x214cfc: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x214cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x214d00: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x214d00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_214d04:
    // 0x214d04: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x214d04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_214d08:
    // 0x214d08: 0x5220002e  beql        $s1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x214D08u;
    {
        const bool branch_taken_0x214d08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x214d08) {
            ctx->pc = 0x214D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214D08u;
            // 0x214d0c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214DC4u;
            goto label_214dc4;
        }
    }
    ctx->pc = 0x214D10u;
    // 0x214d10: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x214D10u;
    SET_GPR_U32(ctx, 31, 0x214D18u);
    ctx->pc = 0x214D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D10u;
    // 0x214d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x214D10u, 0x214D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D18u;
label_214d18:
    // 0x214d18: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x214D18u;
    {
        const bool branch_taken_0x214d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D18u;
        // 0x214d1c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d18) {
            ctx->pc = 0x214DC4u;
            goto label_214dc4;
        }
    }
    ctx->pc = 0x214D20u;
label_214d20:
    // 0x214d20: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x214d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214d24: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x214d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x214d28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214d2c: 0x0  nop
    ctx->pc = 0x214d2cu;
    // NOP
    // 0x214d30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x214d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214d34: 0x0  nop
    ctx->pc = 0x214d34u;
    // NOP
    // 0x214d38: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x214D38u;
    {
        const bool branch_taken_0x214d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x214d38) {
            ctx->pc = 0x214D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214D38u;
            // 0x214d3c: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x214D4Cu;
            goto label_214d4c;
        }
    }
    ctx->pc = 0x214D40u;
    // 0x214d40: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x214d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x214d44: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x214d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
    // 0x214d48: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x214d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214d4c:
    // 0x214d4c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x214d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214d50: 0x0  nop
    ctx->pc = 0x214d50u;
    // NOP
    // 0x214d54: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x214d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214d58: 0x0  nop
    ctx->pc = 0x214d58u;
    // NOP
    // 0x214d5c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x214D5Cu;
    {
        const bool branch_taken_0x214d5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x214d5c) {
            ctx->pc = 0x214D74u;
            goto label_214d74;
        }
    }
    ctx->pc = 0x214D64u;
    // 0x214d64: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x214d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214d68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x214d68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x214d6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x214D6Cu;
    {
        const bool branch_taken_0x214d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D6Cu;
        // 0x214d70: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d6c) {
            ctx->pc = 0x214DC0u;
            goto label_214dc0;
        }
    }
    ctx->pc = 0x214D74u;
label_214d74:
    // 0x214d74: 0xc042d6e  jal         func_10B5B8
    ctx->pc = 0x214D74u;
    SET_GPR_U32(ctx, 31, 0x214D7Cu);
    ctx->pc = 0x214D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D74u;
    // 0x214d78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5B8u, 0x214D74u, 0x214D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D7Cu;
label_214d7c:
    // 0x214d7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x214D7Cu;
    {
        const bool branch_taken_0x214d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214d7c) {
            ctx->pc = 0x214D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214D7Cu;
            // 0x214d80: 0xc6010604  lwc1        $f1, 0x604($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x214D98u;
            goto label_214d98;
        }
    }
    ctx->pc = 0x214D84u;
    // 0x214d84: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x214D84u;
    SET_GPR_U32(ctx, 31, 0x214D8Cu);
    ctx->pc = 0x214D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214D84u;
    // 0x214d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x214D84u, 0x214D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D8Cu;
label_214d8c:
    // 0x214d8c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x214D8Cu;
    {
        const bool branch_taken_0x214d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214d8c) {
            ctx->pc = 0x214D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214D8Cu;
            // 0x214d90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214DC4u;
            goto label_214dc4;
        }
    }
    ctx->pc = 0x214D94u;
    // 0x214d94: 0xc6010604  lwc1        $f1, 0x604($s0)
    ctx->pc = 0x214d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214d98:
    // 0x214d98: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x214d98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214d9c: 0x0  nop
    ctx->pc = 0x214d9cu;
    // NOP
    // 0x214da0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x214DA0u;
    {
        const bool branch_taken_0x214da0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x214da0) {
            ctx->pc = 0x214DB8u;
            goto label_214db8;
        }
    }
    ctx->pc = 0x214DA8u;
    // 0x214da8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x214da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214dac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x214dacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x214db0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x214DB0u;
    {
        const bool branch_taken_0x214db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DB0u;
        // 0x214db4: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214db0) {
            ctx->pc = 0x214DC0u;
            goto label_214dc0;
        }
    }
    ctx->pc = 0x214DB8u;
label_214db8:
    // 0x214db8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x214DB8u;
    SET_GPR_U32(ctx, 31, 0x214DC0u);
    ctx->pc = 0x214DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214DB8u;
    // 0x214dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x214DB8u, 0x214DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214DC0u;
label_214dc0:
    // 0x214dc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_214dc4:
    // 0x214dc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214dc8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x214dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214dd0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x214dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x214dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x214DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DD4u;
        // 0x214dd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214DDCu;
    // 0x214ddc: 0x0  nop
    ctx->pc = 0x214ddcu;
    // NOP
    ctx->pc = 0x214de0u;
}
