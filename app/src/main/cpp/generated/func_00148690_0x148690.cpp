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

// Function: func_00148690
// Address: 0x148690 - 0x148bd8
void func_00148690_0x148690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00148690_0x148690");
#endif

    switch (ctx->pc) {
        case 0x1486fcu: goto label_1486fc;
        case 0x148730u: goto label_148730;
        case 0x148794u: goto label_148794;
        case 0x148850u: goto label_148850;
        case 0x1488b4u: goto label_1488b4;
        case 0x1488c4u: goto label_1488c4;
        case 0x1488d0u: goto label_1488d0;
        case 0x14896cu: goto label_14896c;
        case 0x1489a0u: goto label_1489a0;
        case 0x148a04u: goto label_148a04;
        case 0x148ab0u: goto label_148ab0;
        case 0x148b1cu: goto label_148b1c;
        case 0x148b2cu: goto label_148b2c;
        case 0x148b38u: goto label_148b38;
        default: break;
    }

    ctx->pc = 0x148690u;

    // 0x148690: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x148690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x148694: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x148694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x148698: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x148698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x14869c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x14869cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1486a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1486a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1486a4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1486a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1486a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1486a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1486ac: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1486acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1486b0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1486b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1486b4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1486b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1486b8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1486b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1486bc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1486bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1486c0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1486c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1486c4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1486c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1486c8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1486c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1486cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1486ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1486d0: 0x8e230388  lw          $v1, 0x388($s1)
    ctx->pc = 0x1486d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 904)));
    // 0x1486d4: 0x8e240380  lw          $a0, 0x380($s1)
    ctx->pc = 0x1486d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x1486d8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1486d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1486dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1486dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1486e0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1486E0u;
    {
        const bool branch_taken_0x1486e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1486E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486E0u;
        // 0x1486e4: 0x9475000a  lhu         $s5, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486e0) {
            ctx->pc = 0x148808u;
            goto label_148808;
        }
    }
    ctx->pc = 0x1486E8u;
    // 0x1486e8: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x1486e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x1486ec: 0x8e250400  lw          $a1, 0x400($s1)
    ctx->pc = 0x1486ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1024)));
    // 0x1486f0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1486f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1486f4: 0xc0544e6  jal         func_151398
    ctx->pc = 0x1486F4u;
    SET_GPR_U32(ctx, 31, 0x1486FCu);
    ctx->pc = 0x1486F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1486F4u;
    // 0x1486f8: 0x260464a0  addiu       $a0, $s0, 0x64A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x1486F4u, 0x1486FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486FCu;
label_1486fc:
    // 0x1486fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1486fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148700: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x148700u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148704: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x148704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x148708: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x148708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14870c: 0x12a00126  beqz        $s5, . + 4 + (0x126 << 2)
    ctx->pc = 0x14870Cu;
    {
        const bool branch_taken_0x14870c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x148710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14870Cu;
        // 0x148710: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14870c) {
            ctx->pc = 0x148BA8u;
            goto label_148ba8;
        }
    }
    ctx->pc = 0x148714u;
    // 0x148714: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x148714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x148718: 0x32620003  andi        $v0, $s3, 0x3
    ctx->pc = 0x148718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
    // 0x14871c: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x14871cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x148720: 0x2b8fc  dsll32      $s7, $v0, 3
    ctx->pc = 0x148720u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 3));
    // 0x148724: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x148724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x148728: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x148728u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14872c: 0x0  nop
    ctx->pc = 0x14872cu;
    // NOP
label_148730:
    // 0x148730: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x148730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148734: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x148734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x148738: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x148738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14873c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x14873cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x148740: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x148740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148744: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x148744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x148748: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x148748u;
    {
        const bool branch_taken_0x148748 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148748u;
        // 0x14874c: 0x90830016  lbu         $v1, 0x16($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148748) {
            ctx->pc = 0x148770u;
            goto label_148770;
        }
    }
    ctx->pc = 0x148750u;
    // 0x148750: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x148750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x148754: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x148754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148758: 0x10560005  beq         $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x148758u;
    {
        const bool branch_taken_0x148758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x14875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148758u;
        // 0x14875c: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148758) {
            ctx->pc = 0x148770u;
            goto label_148770;
        }
    }
    ctx->pc = 0x148760u;
    // 0x148760: 0x8e220410  lw          $v0, 0x410($s1)
    ctx->pc = 0x148760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1040)));
    // 0x148764: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x148764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x148768: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x148768u;
    {
        const bool branch_taken_0x148768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148768) {
            ctx->pc = 0x14876Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148768u;
            // 0x14876c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148770u;
            goto label_148770;
        }
    }
    ctx->pc = 0x148770u;
label_148770:
    // 0x148770: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x148770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x148774: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x148774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x148778: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x148778u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14877c: 0x1076001c  beq         $v1, $s6, . + 4 + (0x1C << 2)
    ctx->pc = 0x14877Cu;
    {
        const bool branch_taken_0x14877c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x148780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14877Cu;
        // 0x148780: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14877c) {
            ctx->pc = 0x1487F0u;
            goto label_1487f0;
        }
    }
    ctx->pc = 0x148784u;
    // 0x148784: 0x3c32821  addu        $a1, $fp, $v1
    ctx->pc = 0x148784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x148788: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x148788u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14878c: 0xc0544da  jal         func_151368
    ctx->pc = 0x14878Cu;
    SET_GPR_U32(ctx, 31, 0x148794u);
    ctx->pc = 0x148790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14878Cu;
    // 0x148790: 0x244464a0  addiu       $a0, $v0, 0x64A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x14878Cu, 0x148794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148794u;
label_148794:
    // 0x148794: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x148794u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x148798: 0x2197e  dsrl32      $v1, $v0, 5
    ctx->pc = 0x148798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 5));
    // 0x14879c: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x14879cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1487a0: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x1487a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x1487a4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1487a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1487a8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1487a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1487ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1487acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1487b0: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x1487b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x1487b4: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x1487b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x1487b8: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1487b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1487bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1487bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1487c0: 0x3c059fff  lui         $a1, 0x9FFF
    ctx->pc = 0x1487c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40959 << 16));
    // 0x1487c4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1487c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1487c8: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x1487c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x1487cc: 0x34a5003f  ori         $a1, $a1, 0x3F
    ctx->pc = 0x1487ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63);
    // 0x1487d0: 0x82240387  lb          $a0, 0x387($s1)
    ctx->pc = 0x1487d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 903)));
    // 0x1487d4: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x1487d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1487d8: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1487d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1487dc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1487dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1487e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1487e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1487e4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1487e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1487e8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x1487e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x1487ec: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1487ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_1487f0:
    // 0x1487f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1487f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1487f4: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x1487f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1487f8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1487F8u;
    {
        const bool branch_taken_0x1487f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1487FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487F8u;
        // 0x1487fc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487f8) {
            ctx->pc = 0x148730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148730;
        }
    }
    ctx->pc = 0x148800u;
    // 0x148800: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x148800u;
    {
        const bool branch_taken_0x148800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148800u;
        // 0x148804: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148800) {
            ctx->pc = 0x148BACu;
            goto label_148bac;
        }
    }
    ctx->pc = 0x148808u;
label_148808:
    // 0x148808: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x148808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x14880c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x148810: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x148810u;
    {
        const bool branch_taken_0x148810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148810u;
        // 0x148814: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148810) {
            ctx->pc = 0x148948u;
            goto label_148948;
        }
    }
    ctx->pc = 0x148818u;
    // 0x148818: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x148818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14881c: 0x8c6276b0  lw          $v0, 0x76B0($v1)
    ctx->pc = 0x14881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30384)));
    // 0x148820: 0x12a000e1  beqz        $s5, . + 4 + (0xE1 << 2)
    ctx->pc = 0x148820u;
    {
        const bool branch_taken_0x148820 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x148824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148820u;
        // 0x148824: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148820) {
            ctx->pc = 0x148BA8u;
            goto label_148ba8;
        }
    }
    ctx->pc = 0x148828u;
    // 0x148828: 0x32630003  andi        $v1, $s3, 0x3
    ctx->pc = 0x148828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
    // 0x14882c: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x14882cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x148830: 0x318fc  dsll32      $v1, $v1, 3
    ctx->pc = 0x148830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 3));
    // 0x148834: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x148838: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x148838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x14883c: 0x245664a0  addiu       $s6, $v0, 0x64A0
    ctx->pc = 0x14883cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 25760));
    // 0x148840: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x148840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x148844: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x148844u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x148848: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x148848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14884c: 0x0  nop
    ctx->pc = 0x14884cu;
    // NOP
label_148850:
    // 0x148850: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x148850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148854: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x148854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x148858: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x148858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14885c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x14885cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x148860: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x148860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148864: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x148864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x148868: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x148868u;
    {
        const bool branch_taken_0x148868 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148868u;
        // 0x14886c: 0x90860016  lbu         $a2, 0x16($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148868) {
            ctx->pc = 0x148890u;
            goto label_148890;
        }
    }
    ctx->pc = 0x148870u;
    // 0x148870: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x148870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x148874: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x148874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148878: 0x10570005  beq         $v0, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x148878u;
    {
        const bool branch_taken_0x148878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x14887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148878u;
        // 0x14887c: 0x3c044000  lui         $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148878) {
            ctx->pc = 0x148890u;
            goto label_148890;
        }
    }
    ctx->pc = 0x148880u;
    // 0x148880: 0x8e220410  lw          $v0, 0x410($s1)
    ctx->pc = 0x148880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1040)));
    // 0x148884: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x148884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x148888: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x148888u;
    {
        const bool branch_taken_0x148888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148888) {
            ctx->pc = 0x14888Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148888u;
            // 0x14888c: 0x90660000  lbu         $a2, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148890u;
            goto label_148890;
        }
    }
    ctx->pc = 0x148890u;
label_148890:
    // 0x148890: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x148890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x148894: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x148894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x148898: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x148898u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x14889c: 0x10d70024  beq         $a2, $s7, . + 4 + (0x24 << 2)
    ctx->pc = 0x14889Cu;
    {
        const bool branch_taken_0x14889c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 23));
        ctx->pc = 0x1488A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14889Cu;
        // 0x1488a0: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14889c) {
            ctx->pc = 0x148930u;
            goto label_148930;
        }
    }
    ctx->pc = 0x1488A4u;
    // 0x1488a4: 0x8e250400  lw          $a1, 0x400($s1)
    ctx->pc = 0x1488a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1024)));
    // 0x1488a8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1488a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1488ac: 0xc0548b0  jal         func_1522C0
    ctx->pc = 0x1488ACu;
    SET_GPR_U32(ctx, 31, 0x1488B4u);
    ctx->pc = 0x1488B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1488ACu;
    // 0x1488b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522C0u, 0x1488ACu, 0x1488B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488B4u;
label_1488b4:
    // 0x1488b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1488b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1488b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488bc: 0xc0544e6  jal         func_151398
    ctx->pc = 0x1488BCu;
    SET_GPR_U32(ctx, 31, 0x1488C4u);
    ctx->pc = 0x1488C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1488BCu;
    // 0x1488c0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x1488BCu, 0x1488C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488C4u;
label_1488c4:
    // 0x1488c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1488c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488c8: 0xc0544da  jal         func_151368
    ctx->pc = 0x1488C8u;
    SET_GPR_U32(ctx, 31, 0x1488D0u);
    ctx->pc = 0x1488CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1488C8u;
    // 0x1488cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x1488C8u, 0x1488D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488D0u;
label_1488d0:
    // 0x1488d0: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1488d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1488d4: 0x2197e  dsrl32      $v1, $v0, 5
    ctx->pc = 0x1488d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 5));
    // 0x1488d8: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1488d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1488dc: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x1488dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x1488e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1488e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1488e4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1488e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1488e8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1488e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1488ec: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x1488ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x1488f0: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x1488f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x1488f4: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1488f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1488f8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1488f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1488fc: 0x3c059fff  lui         $a1, 0x9FFF
    ctx->pc = 0x1488fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40959 << 16));
    // 0x148900: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x148900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x148904: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x148904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x148908: 0x34a5003f  ori         $a1, $a1, 0x3F
    ctx->pc = 0x148908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63);
    // 0x14890c: 0x82240387  lb          $a0, 0x387($s1)
    ctx->pc = 0x14890cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 903)));
    // 0x148910: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x148910u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x148914: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x148914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x148918: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x148918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x14891c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14891cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x148920: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x148920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x148924: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x148924u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148928: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x148928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x14892c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x14892cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_148930:
    // 0x148930: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x148930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x148934: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x148934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x148938: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x148938u;
    {
        const bool branch_taken_0x148938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148938u;
        // 0x14893c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148938) {
            ctx->pc = 0x148850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148850;
        }
    }
    ctx->pc = 0x148940u;
    // 0x148940: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x148940u;
    {
        const bool branch_taken_0x148940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148940u;
        // 0x148944: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148940) {
            ctx->pc = 0x148BACu;
            goto label_148bac;
        }
    }
    ctx->pc = 0x148948u;
label_148948:
    // 0x148948: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x148948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x14894c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x148950: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x148950u;
    {
        const bool branch_taken_0x148950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148950) {
            ctx->pc = 0x148954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148950u;
            // 0x148954: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148A78u;
            goto label_148a78;
        }
    }
    ctx->pc = 0x148958u;
    // 0x148958: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x148958u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x14895c: 0x8e250400  lw          $a1, 0x400($s1)
    ctx->pc = 0x14895cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1024)));
    // 0x148960: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x148960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148964: 0xc0544e6  jal         func_151398
    ctx->pc = 0x148964u;
    SET_GPR_U32(ctx, 31, 0x14896Cu);
    ctx->pc = 0x148968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148964u;
    // 0x148968: 0x260464a0  addiu       $a0, $s0, 0x64A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x148964u, 0x14896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14896Cu;
label_14896c:
    // 0x14896c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14896cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148970: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x148970u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148974: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x148974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x148978: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x148978u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14897c: 0x12a0008a  beqz        $s5, . + 4 + (0x8A << 2)
    ctx->pc = 0x14897Cu;
    {
        const bool branch_taken_0x14897c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x148980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14897Cu;
        // 0x148980: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14897c) {
            ctx->pc = 0x148BA8u;
            goto label_148ba8;
        }
    }
    ctx->pc = 0x148984u;
    // 0x148984: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x148984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x148988: 0x32620003  andi        $v0, $s3, 0x3
    ctx->pc = 0x148988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
    // 0x14898c: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x14898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x148990: 0x2b8fc  dsll32      $s7, $v0, 3
    ctx->pc = 0x148990u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 3));
    // 0x148994: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x148994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x148998: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x148998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14899c: 0x0  nop
    ctx->pc = 0x14899cu;
    // NOP
label_1489a0:
    // 0x1489a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1489a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1489a4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1489a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1489a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1489a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1489ac: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x1489acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1489b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1489b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1489b4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1489b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x1489b8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1489B8u;
    {
        const bool branch_taken_0x1489b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1489BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489B8u;
        // 0x1489bc: 0x90830016  lbu         $v1, 0x16($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489b8) {
            ctx->pc = 0x1489E0u;
            goto label_1489e0;
        }
    }
    ctx->pc = 0x1489C0u;
    // 0x1489c0: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1489c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1489c4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1489c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1489c8: 0x10560005  beq         $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1489C8u;
    {
        const bool branch_taken_0x1489c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1489CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489C8u;
        // 0x1489cc: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489c8) {
            ctx->pc = 0x1489E0u;
            goto label_1489e0;
        }
    }
    ctx->pc = 0x1489D0u;
    // 0x1489d0: 0x8e220410  lw          $v0, 0x410($s1)
    ctx->pc = 0x1489d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1040)));
    // 0x1489d4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1489d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1489d8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1489D8u;
    {
        const bool branch_taken_0x1489d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1489d8) {
            ctx->pc = 0x1489DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1489D8u;
            // 0x1489dc: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1489E0u;
            goto label_1489e0;
        }
    }
    ctx->pc = 0x1489E0u;
label_1489e0:
    // 0x1489e0: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x1489e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x1489e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1489e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1489e8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1489e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1489ec: 0x1076001c  beq         $v1, $s6, . + 4 + (0x1C << 2)
    ctx->pc = 0x1489ECu;
    {
        const bool branch_taken_0x1489ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x1489F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489ECu;
        // 0x1489f0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489ec) {
            ctx->pc = 0x148A60u;
            goto label_148a60;
        }
    }
    ctx->pc = 0x1489F4u;
    // 0x1489f4: 0x3c32821  addu        $a1, $fp, $v1
    ctx->pc = 0x1489f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1489f8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1489f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1489fc: 0xc0544da  jal         func_151368
    ctx->pc = 0x1489FCu;
    SET_GPR_U32(ctx, 31, 0x148A04u);
    ctx->pc = 0x148A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1489FCu;
    // 0x148a00: 0x244464a0  addiu       $a0, $v0, 0x64A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x1489FCu, 0x148A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A04u;
label_148a04:
    // 0x148a04: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x148a04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x148a08: 0x2197e  dsrl32      $v1, $v0, 5
    ctx->pc = 0x148a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 5));
    // 0x148a0c: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x148a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x148a10: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x148a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x148a14: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x148a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x148a18: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x148a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x148a1c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x148a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x148a20: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x148a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x148a24: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x148a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x148a28: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x148a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x148a2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x148a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x148a30: 0x3c059fff  lui         $a1, 0x9FFF
    ctx->pc = 0x148a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40959 << 16));
    // 0x148a34: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x148a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x148a38: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x148a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x148a3c: 0x34a5003f  ori         $a1, $a1, 0x3F
    ctx->pc = 0x148a3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63);
    // 0x148a40: 0x82240387  lb          $a0, 0x387($s1)
    ctx->pc = 0x148a40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 903)));
    // 0x148a44: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x148a44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x148a48: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x148a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x148a4c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x148a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x148a50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x148a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x148a54: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x148a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x148a58: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x148a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x148a5c: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x148a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_148a60:
    // 0x148a60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x148a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x148a64: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x148a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x148a68: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x148A68u;
    {
        const bool branch_taken_0x148a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A68u;
        // 0x148a6c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a68) {
            ctx->pc = 0x1489A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1489a0;
        }
    }
    ctx->pc = 0x148A70u;
    // 0x148a70: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x148A70u;
    {
        const bool branch_taken_0x148a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A70u;
        // 0x148a74: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a70) {
            ctx->pc = 0x148BACu;
            goto label_148bac;
        }
    }
    ctx->pc = 0x148A78u;
label_148a78:
    // 0x148a78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x148a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a7c: 0x8c6276b0  lw          $v0, 0x76B0($v1)
    ctx->pc = 0x148a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30384)));
    // 0x148a80: 0x12a00049  beqz        $s5, . + 4 + (0x49 << 2)
    ctx->pc = 0x148A80u;
    {
        const bool branch_taken_0x148a80 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x148A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A80u;
        // 0x148a84: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a80) {
            ctx->pc = 0x148BA8u;
            goto label_148ba8;
        }
    }
    ctx->pc = 0x148A88u;
    // 0x148a88: 0x32630003  andi        $v1, $s3, 0x3
    ctx->pc = 0x148a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
    // 0x148a8c: 0x22180  sll         $a0, $v0, 6
    ctx->pc = 0x148a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x148a90: 0x318fc  dsll32      $v1, $v1, 3
    ctx->pc = 0x148a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 3));
    // 0x148a94: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x148a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x148a98: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x148a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x148a9c: 0x245764a0  addiu       $s7, $v0, 0x64A0
    ctx->pc = 0x148a9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 25760));
    // 0x148aa0: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x148aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x148aa4: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x148aa4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x148aa8: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x148aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x148aac: 0x0  nop
    ctx->pc = 0x148aacu;
    // NOP
label_148ab0:
    // 0x148ab0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x148ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148ab4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x148ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x148ab8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x148ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148abc: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x148abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x148ac0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x148ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x148ac4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x148ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x148ac8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x148AC8u;
    {
        const bool branch_taken_0x148ac8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x148ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AC8u;
        // 0x148acc: 0x90870016  lbu         $a3, 0x16($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ac8) {
            ctx->pc = 0x148AF0u;
            goto label_148af0;
        }
    }
    ctx->pc = 0x148AD0u;
    // 0x148ad0: 0x2871821  addu        $v1, $s4, $a3
    ctx->pc = 0x148ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x148ad4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x148ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148ad8: 0x10560005  beq         $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x148AD8u;
    {
        const bool branch_taken_0x148ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x148ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AD8u;
        // 0x148adc: 0x3c044000  lui         $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ad8) {
            ctx->pc = 0x148AF0u;
            goto label_148af0;
        }
    }
    ctx->pc = 0x148AE0u;
    // 0x148ae0: 0x8e220410  lw          $v0, 0x410($s1)
    ctx->pc = 0x148ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1040)));
    // 0x148ae4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x148ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x148ae8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x148AE8u;
    {
        const bool branch_taken_0x148ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ae8) {
            ctx->pc = 0x148AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148AE8u;
            // 0x148aec: 0x90670000  lbu         $a3, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148AF0u;
            goto label_148af0;
        }
    }
    ctx->pc = 0x148AF0u;
label_148af0:
    // 0x148af0: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x148af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x148af4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x148af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x148af8: 0x2380b  movn        $a3, $zero, $v0
    ctx->pc = 0x148af8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x148afc: 0x10f60026  beq         $a3, $s6, . + 4 + (0x26 << 2)
    ctx->pc = 0x148AFCu;
    {
        const bool branch_taken_0x148afc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        ctx->pc = 0x148B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AFCu;
        // 0x148b00: 0x3c030042  lui         $v1, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148afc) {
            ctx->pc = 0x148B98u;
            goto label_148b98;
        }
    }
    ctx->pc = 0x148B04u;
    // 0x148b04: 0x8e240400  lw          $a0, 0x400($s1)
    ctx->pc = 0x148b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1024)));
    // 0x148b08: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x148b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x148b0c: 0x2466ea58  addiu       $a2, $v1, -0x15A8
    ctx->pc = 0x148b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961752));
    // 0x148b10: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x148b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x148b14: 0xc0c7370  jal         func_31CDC0
    ctx->pc = 0x148B14u;
    SET_GPR_U32(ctx, 31, 0x148B1Cu);
    ctx->pc = 0x148B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B14u;
    // 0x148b18: 0x2445ea50  addiu       $a1, $v0, -0x15B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CDC0u, 0x148B14u, 0x148B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B1Cu;
label_148b1c:
    // 0x148b1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x148b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x148b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b24: 0xc0544e6  jal         func_151398
    ctx->pc = 0x148B24u;
    SET_GPR_U32(ctx, 31, 0x148B2Cu);
    ctx->pc = 0x148B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B24u;
    // 0x148b28: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x148B24u, 0x148B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B2Cu;
label_148b2c:
    // 0x148b2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x148b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b30: 0xc0544da  jal         func_151368
    ctx->pc = 0x148B30u;
    SET_GPR_U32(ctx, 31, 0x148B38u);
    ctx->pc = 0x148B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B30u;
    // 0x148b34: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x148B30u, 0x148B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B38u;
label_148b38:
    // 0x148b38: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x148b38u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x148b3c: 0x2197e  dsrl32      $v1, $v0, 5
    ctx->pc = 0x148b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 5));
    // 0x148b40: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x148b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x148b44: 0x3405fff8  ori         $a1, $zero, 0xFFF8
    ctx->pc = 0x148b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x148b48: 0x52ef8  dsll        $a1, $a1, 27
    ctx->pc = 0x148b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 27);
    // 0x148b4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x148b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x148b50: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x148b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x148b54: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x148b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x148b58: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x148b58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x148b5c: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x148b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
    // 0x148b60: 0x82240387  lb          $a0, 0x387($s1)
    ctx->pc = 0x148b60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 903)));
    // 0x148b64: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x148b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x148b68: 0x3c059fff  lui         $a1, 0x9FFF
    ctx->pc = 0x148b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40959 << 16));
    // 0x148b6c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x148b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x148b70: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x148b70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x148b74: 0x34a5003f  ori         $a1, $a1, 0x3F
    ctx->pc = 0x148b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63);
    // 0x148b78: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x148b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x148b7c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x148b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x148b80: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x148b80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148b84: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x148b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x148b88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x148b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x148b8c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x148b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x148b90: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x148b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x148b94: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x148b94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
label_148b98:
    // 0x148b98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x148b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x148b9c: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x148b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x148ba0: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x148BA0u;
    {
        const bool branch_taken_0x148ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BA0u;
        // 0x148ba4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ba0) {
            ctx->pc = 0x148AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148ab0;
        }
    }
    ctx->pc = 0x148BA8u;
label_148ba8:
    // 0x148ba8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x148ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_148bac:
    // 0x148bac: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x148bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x148bb0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x148bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148bb4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x148bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148bb8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x148bb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148bbc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x148bbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x148bc0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x148bc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148bc4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x148bc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148bc8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x148bc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148bcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x148bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x148BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BD0u;
        // 0x148bd4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148BD8u;
}
