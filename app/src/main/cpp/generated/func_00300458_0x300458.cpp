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

// Function: func_00300458
// Address: 0x300458 - 0x3005d8
void func_00300458_0x300458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00300458_0x300458");
#endif

    switch (ctx->pc) {
        case 0x3004b8u: goto label_3004b8;
        case 0x300518u: goto label_300518;
        case 0x300558u: goto label_300558;
        case 0x300568u: goto label_300568;
        case 0x300578u: goto label_300578;
        case 0x300588u: goto label_300588;
        case 0x300598u: goto label_300598;
        default: break;
    }

    ctx->pc = 0x300458u;

    // 0x300458: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x300458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30045c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30045cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300460: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x300460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x300464: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x300464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x300468: 0x244a1940  addiu       $t2, $v0, 0x1940
    ctx->pc = 0x300468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
    // 0x30046c: 0x246b1960  addiu       $t3, $v1, 0x1960
    ctx->pc = 0x30046cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
    // 0x300470: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x300470u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x300474: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x300474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x300478: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x300478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x30047c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30047cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300480: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x300480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x300484: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x300484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x300488: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x300488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x30048c: 0x24471980  addiu       $a3, $v0, 0x1980
    ctx->pc = 0x30048cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x300490: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x300490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x300494: 0x2a320002  slti        $s2, $s1, 0x2
    ctx->pc = 0x300494u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x300498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30049c: 0x2470b940  addiu       $s0, $v1, -0x46C0
    ctx->pc = 0x30049cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949184));
    // 0x3004a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3004a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3004a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3004a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3004a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3004a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3004ac: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x3004acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3004b0: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x3004b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3004b4: 0x0  nop
    ctx->pc = 0x3004b4u;
    // NOP
label_3004b8:
    // 0x3004b8: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x3004b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x3004bc: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x3004bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x3004c0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x3004c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3004c4: 0x651806  srlv        $v1, $a1, $v1
    ctx->pc = 0x3004c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x3004c8: 0xca4821  addu        $t1, $a2, $t2
    ctx->pc = 0x3004c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3004cc: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x3004ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3004d0: 0x1031024  and         $v0, $t0, $v1
    ctx->pc = 0x3004d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x3004d4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3004D4u;
    {
        const bool branch_taken_0x3004d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3004D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004D4u;
        // 0x3004d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004d4) {
            ctx->pc = 0x3005A0u;
            goto label_3005a0;
        }
    }
    ctx->pc = 0x3004DCu;
    // 0x3004dc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3004dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3004e0: 0x32827  nor         $a1, $zero, $v1
    ctx->pc = 0x3004e0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x3004e4: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x3004e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x3004e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3004e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3004ec: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3004ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3004f0: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x3004f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3004f4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x3004f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x3004f8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3004f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3004fc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x3004fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x300500: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x300500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x300504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300508: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x300508u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x30050c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300510: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x300510u;
    SET_GPR_U32(ctx, 31, 0x300518u);
    ctx->pc = 0x300514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300510u;
    // 0x300514: 0x24060260  addiu       $a2, $zero, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x300510u, 0x300518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300518u;
label_300518:
    // 0x300518: 0x12330011  beq         $s1, $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x300518u;
    {
        const bool branch_taken_0x300518 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x300518) {
            ctx->pc = 0x300560u;
            goto label_300560;
        }
    }
    ctx->pc = 0x300520u;
    // 0x300520: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x300520u;
    {
        const bool branch_taken_0x300520 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x300520) {
            ctx->pc = 0x300538u;
            goto label_300538;
        }
    }
    ctx->pc = 0x300528u;
    // 0x300528: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x300528u;
    {
        const bool branch_taken_0x300528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x300528) {
            ctx->pc = 0x300550u;
            goto label_300550;
        }
    }
    ctx->pc = 0x300530u;
    // 0x300530: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x300530u;
    {
        const bool branch_taken_0x300530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300530) {
            ctx->pc = 0x300590u;
            goto label_300590;
        }
    }
    ctx->pc = 0x300538u;
label_300538:
    // 0x300538: 0x1234000d  beq         $s1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x300538u;
    {
        const bool branch_taken_0x300538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x300538) {
            ctx->pc = 0x300570u;
            goto label_300570;
        }
    }
    ctx->pc = 0x300540u;
    // 0x300540: 0x1235000f  beq         $s1, $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x300540u;
    {
        const bool branch_taken_0x300540 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x300540) {
            ctx->pc = 0x300580u;
            goto label_300580;
        }
    }
    ctx->pc = 0x300548u;
    // 0x300548: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x300548u;
    {
        const bool branch_taken_0x300548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300548) {
            ctx->pc = 0x300590u;
            goto label_300590;
        }
    }
    ctx->pc = 0x300550u;
label_300550:
    // 0x300550: 0xc0c1352  jal         func_304D48
    ctx->pc = 0x300550u;
    SET_GPR_U32(ctx, 31, 0x300558u);
    ctx->pc = 0x300554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300550u;
    // 0x300554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304D48u, 0x300550u, 0x300558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300558u;
label_300558:
    // 0x300558: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x300558u;
    {
        const bool branch_taken_0x300558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300558u;
        // 0x30055c: 0xa0510190  sb          $s1, 0x190($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 400), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300558) {
            ctx->pc = 0x3005B0u;
            goto label_3005b0;
        }
    }
    ctx->pc = 0x300560u;
label_300560:
    // 0x300560: 0xc0c135c  jal         func_304D70
    ctx->pc = 0x300560u;
    SET_GPR_U32(ctx, 31, 0x300568u);
    ctx->pc = 0x300564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300560u;
    // 0x300564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304D70u, 0x300560u, 0x300568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300568u;
label_300568:
    // 0x300568: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x300568u;
    {
        const bool branch_taken_0x300568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300568u;
        // 0x30056c: 0xa0510190  sb          $s1, 0x190($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 400), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300568) {
            ctx->pc = 0x3005B0u;
            goto label_3005b0;
        }
    }
    ctx->pc = 0x300570u;
label_300570:
    // 0x300570: 0xc0c136c  jal         func_304DB0
    ctx->pc = 0x300570u;
    SET_GPR_U32(ctx, 31, 0x300578u);
    ctx->pc = 0x300574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300570u;
    // 0x300574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304DB0u, 0x300570u, 0x300578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300578u;
label_300578:
    // 0x300578: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x300578u;
    {
        const bool branch_taken_0x300578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300578u;
        // 0x30057c: 0xa0510190  sb          $s1, 0x190($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 400), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300578) {
            ctx->pc = 0x3005B0u;
            goto label_3005b0;
        }
    }
    ctx->pc = 0x300580u;
label_300580:
    // 0x300580: 0xc0c137c  jal         func_304DF0
    ctx->pc = 0x300580u;
    SET_GPR_U32(ctx, 31, 0x300588u);
    ctx->pc = 0x300584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300580u;
    // 0x300584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304DF0u, 0x300580u, 0x300588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300588u;
label_300588:
    // 0x300588: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x300588u;
    {
        const bool branch_taken_0x300588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300588u;
        // 0x30058c: 0xa0510190  sb          $s1, 0x190($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 400), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300588) {
            ctx->pc = 0x3005B0u;
            goto label_3005b0;
        }
    }
    ctx->pc = 0x300590u;
label_300590:
    // 0x300590: 0xc0c1352  jal         func_304D48
    ctx->pc = 0x300590u;
    SET_GPR_U32(ctx, 31, 0x300598u);
    ctx->pc = 0x300594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300590u;
    // 0x300594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304D48u, 0x300590u, 0x300598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300598u;
label_300598:
    // 0x300598: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x300598u;
    {
        const bool branch_taken_0x300598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300598u;
        // 0x30059c: 0xa0510190  sb          $s1, 0x190($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 400), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300598) {
            ctx->pc = 0x3005B0u;
            goto label_3005b0;
        }
    }
    ctx->pc = 0x3005A0u;
label_3005a0:
    // 0x3005a0: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x3005a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3005a4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3005A4u;
    {
        const bool branch_taken_0x3005a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3005A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005A4u;
        // 0x3005a8: 0x26100260  addiu       $s0, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005a4) {
            ctx->pc = 0x3004B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3004b8;
        }
    }
    ctx->pc = 0x3005ACu;
    // 0x3005ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3005acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3005b0:
    // 0x3005b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3005b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3005b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3005b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3005b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3005b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3005bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3005bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3005c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3005c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3005c4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3005c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3005c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3005c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3005cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3005CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3005D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005CCu;
        // 0x3005d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3005CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3005D4u;
    // 0x3005d4: 0x0  nop
    ctx->pc = 0x3005d4u;
    // NOP
    ctx->pc = 0x3005d8u;
}
