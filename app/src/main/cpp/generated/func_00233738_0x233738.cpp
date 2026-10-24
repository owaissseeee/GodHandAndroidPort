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

// Function: func_00233738
// Address: 0x233738 - 0x233dd8
void func_00233738_0x233738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00233738_0x233738");
#endif

    switch (ctx->pc) {
        case 0x233780u: goto label_233780;
        case 0x2337b0u: goto label_2337b0;
        case 0x2337f8u: goto label_2337f8;
        case 0x23382cu: goto label_23382c;
        case 0x23384cu: goto label_23384c;
        case 0x233854u: goto label_233854;
        case 0x233884u: goto label_233884;
        case 0x2338acu: goto label_2338ac;
        case 0x2338e4u: goto label_2338e4;
        case 0x23397cu: goto label_23397c;
        case 0x2339a0u: goto label_2339a0;
        case 0x2339c0u: goto label_2339c0;
        case 0x2339e4u: goto label_2339e4;
        case 0x233a04u: goto label_233a04;
        case 0x233a0cu: goto label_233a0c;
        case 0x233a50u: goto label_233a50;
        case 0x233a88u: goto label_233a88;
        case 0x233b10u: goto label_233b10;
        case 0x233b34u: goto label_233b34;
        case 0x233b54u: goto label_233b54;
        case 0x233b78u: goto label_233b78;
        case 0x233b98u: goto label_233b98;
        case 0x233ba0u: goto label_233ba0;
        case 0x233bc4u: goto label_233bc4;
        case 0x233be4u: goto label_233be4;
        case 0x233becu: goto label_233bec;
        case 0x233ca0u: goto label_233ca0;
        case 0x233cc0u: goto label_233cc0;
        case 0x233cc8u: goto label_233cc8;
        case 0x233ce0u: goto label_233ce0;
        case 0x233cecu: goto label_233cec;
        case 0x233cf4u: goto label_233cf4;
        case 0x233d0cu: goto label_233d0c;
        case 0x233d18u: goto label_233d18;
        case 0x233d20u: goto label_233d20;
        case 0x233d2cu: goto label_233d2c;
        case 0x233d40u: goto label_233d40;
        case 0x233d68u: goto label_233d68;
        default: break;
    }

    ctx->pc = 0x233738u;

    // 0x233738: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x233738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23373c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233740: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x233740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x233744: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x233744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x233748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23374c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x23374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x233750: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x233750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x233754: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x233754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x233758: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x233758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x23375c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x23375cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x233760: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x233760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x233764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233768: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x233768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x23376c: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x23376cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x233770: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x233770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x233774: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x233774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x233778: 0xc098a84  jal         func_262A10
    ctx->pc = 0x233778u;
    SET_GPR_U32(ctx, 31, 0x233780u);
    ctx->pc = 0x23377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233778u;
    // 0x23377c: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x233778u, 0x233780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233780u;
label_233780:
    // 0x233780: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x233780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x233784: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x233784u;
    {
        const bool branch_taken_0x233784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233784u;
        // 0x233788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233784) {
            ctx->pc = 0x23379Cu;
            goto label_23379c;
        }
    }
    ctx->pc = 0x23378Cu;
    // 0x23378c: 0x50620140  beql        $v1, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x23378Cu;
    {
        const bool branch_taken_0x23378c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23378c) {
            ctx->pc = 0x233790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23378Cu;
            // 0x233790: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233C90u;
            goto label_233c90;
        }
    }
    ctx->pc = 0x233794u;
    // 0x233794: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x233794u;
    {
        const bool branch_taken_0x233794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233794) {
            ctx->pc = 0x233D18u;
            goto label_233d18;
        }
    }
    ctx->pc = 0x23379Cu;
label_23379c:
    // 0x23379c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23379cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2337a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2337a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337a4: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x2337a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2337a8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2337A8u;
    SET_GPR_U32(ctx, 31, 0x2337B0u);
    ctx->pc = 0x2337ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2337A8u;
    // 0x2337ac: 0x3c170057  lui         $s7, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2337A8u, 0x2337B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2337B0u;
label_2337b0:
    // 0x2337b0: 0x8e050304  lw          $a1, 0x304($s0)
    ctx->pc = 0x2337b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2337b4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2337b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2337b8: 0x8e0306ec  lw          $v1, 0x6EC($s0)
    ctx->pc = 0x2337b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x2337bc: 0x8ca204a4  lw          $v0, 0x4A4($a1)
    ctx->pc = 0x2337bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1188)));
    // 0x2337c0: 0xae1505f0  sw          $s5, 0x5F0($s0)
    ctx->pc = 0x2337c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 21));
    // 0x2337c4: 0x10600107  beqz        $v1, . + 4 + (0x107 << 2)
    ctx->pc = 0x2337C4u;
    {
        const bool branch_taken_0x2337c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2337C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337C4u;
        // 0x2337c8: 0x459021  addu        $s2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337c4) {
            ctx->pc = 0x233BE4u;
            goto label_233be4;
        }
    }
    ctx->pc = 0x2337CCu;
    // 0x2337cc: 0x946202fe  lhu         $v0, 0x2FE($v1)
    ctx->pc = 0x2337ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x2337d0: 0x24140368  addiu       $s4, $zero, 0x368
    ctx->pc = 0x2337d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x2337d4: 0x14540029  bne         $v0, $s4, . + 4 + (0x29 << 2)
    ctx->pc = 0x2337D4u;
    {
        const bool branch_taken_0x2337d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2337D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337D4u;
        // 0x2337d8: 0x26f69b70  addiu       $s6, $s7, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337d4) {
            ctx->pc = 0x23387Cu;
            goto label_23387c;
        }
    }
    ctx->pc = 0x2337DCu;
    // 0x2337dc: 0x8ca20498  lw          $v0, 0x498($a1)
    ctx->pc = 0x2337dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1176)));
    // 0x2337e0: 0x8ca3049c  lw          $v1, 0x49C($a1)
    ctx->pc = 0x2337e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1180)));
    // 0x2337e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2337e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2337e8: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x2337e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2337ec: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x2337ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2337f0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2337F0u;
    SET_GPR_U32(ctx, 31, 0x2337F8u);
    ctx->pc = 0x2337F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2337F0u;
    // 0x2337f4: 0x658821  addu        $s1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2337F0u, 0x2337F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2337F8u;
label_2337f8:
    // 0x2337f8: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2337F8u;
    {
        const bool branch_taken_0x2337f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2337f8) {
            ctx->pc = 0x23380Cu;
            goto label_23380c;
        }
    }
    ctx->pc = 0x233800u;
    // 0x233800: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x233800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x233804: 0x8c6204a0  lw          $v0, 0x4A0($v1)
    ctx->pc = 0x233804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1184)));
    // 0x233808: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x233808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23380c:
    // 0x23380c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23380cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233810: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233814: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x233814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233818: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x233818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23381c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233820: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x233820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x233824: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x233824u;
    SET_GPR_U32(ctx, 31, 0x23382Cu);
    ctx->pc = 0x233828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233824u;
    // 0x233828: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x233824u, 0x23382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23382Cu;
label_23382c:
    // 0x23382c: 0xae1505f0  sw          $s5, 0x5F0($s0)
    ctx->pc = 0x23382cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 21));
    // 0x233830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233834: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x233834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x233838: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x233838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x23383c: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x23383cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x233840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233844: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x233844u;
    SET_GPR_U32(ctx, 31, 0x23384Cu);
    ctx->pc = 0x233848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233844u;
    // 0x233848: 0x24090111  addiu       $t1, $zero, 0x111 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x233844u, 0x23384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23384Cu;
label_23384c:
    // 0x23384c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23384Cu;
    SET_GPR_U32(ctx, 31, 0x233854u);
    ctx->pc = 0x233850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23384Cu;
    // 0x233850: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23384Cu, 0x233854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233854u;
label_233854:
    // 0x233854: 0x14540005  bne         $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x233854u;
    {
        const bool branch_taken_0x233854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x233858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233854u;
        // 0x233858: 0x8e0906ec  lw          $t1, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233854) {
            ctx->pc = 0x23386Cu;
            goto label_23386c;
        }
    }
    ctx->pc = 0x23385Cu;
    // 0x23385c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23385cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233860: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x233860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x233864: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x233864u;
    {
        const bool branch_taken_0x233864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233864u;
        // 0x233868: 0x2406007e  addiu       $a2, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233864) {
            ctx->pc = 0x233BB8u;
            goto label_233bb8;
        }
    }
    ctx->pc = 0x23386Cu;
label_23386c:
    // 0x23386c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233870: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x233870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x233874: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x233874u;
    {
        const bool branch_taken_0x233874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233874u;
        // 0x233878: 0x24060079  addiu       $a2, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233874) {
            ctx->pc = 0x233BB8u;
            goto label_233bb8;
        }
    }
    ctx->pc = 0x23387Cu;
label_23387c:
    // 0x23387c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23387Cu;
    SET_GPR_U32(ctx, 31, 0x233884u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23387Cu, 0x233884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233884u;
label_233884:
    // 0x233884: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x233884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x233888: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x233888u;
    {
        const bool branch_taken_0x233888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233888) {
            ctx->pc = 0x23388Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233888u;
            // 0x23388c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23389Cu;
            goto label_23389c;
        }
    }
    ctx->pc = 0x233890u;
    // 0x233890: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x233890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x233894: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x233894u;
    {
        const bool branch_taken_0x233894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233894u;
        // 0x233898: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233894) {
            ctx->pc = 0x233A38u;
            goto label_233a38;
        }
    }
    ctx->pc = 0x23389Cu;
label_23389c:
    // 0x23389c: 0x26e49b70  addiu       $a0, $s7, -0x6490
    ctx->pc = 0x23389cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    // 0x2338a0: 0x8c4304a8  lw          $v1, 0x4A8($v0)
    ctx->pc = 0x2338a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1192)));
    // 0x2338a4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2338A4u;
    SET_GPR_U32(ctx, 31, 0x2338ACu);
    ctx->pc = 0x2338A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338A4u;
    // 0x2338a8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2338A4u, 0x2338ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338ACu;
label_2338ac:
    // 0x2338ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2338acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2338b0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2338B0u;
    {
        const bool branch_taken_0x2338b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2338b0) {
            ctx->pc = 0x2338C4u;
            goto label_2338c4;
        }
    }
    ctx->pc = 0x2338B8u;
    // 0x2338b8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2338b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2338bc: 0x8c6204a8  lw          $v0, 0x4A8($v1)
    ctx->pc = 0x2338bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1192)));
    // 0x2338c0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2338c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2338c4:
    // 0x2338c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2338c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2338c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2338c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2338ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338d0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2338d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2338d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2338d8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2338d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2338dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2338DCu;
    SET_GPR_U32(ctx, 31, 0x2338E4u);
    ctx->pc = 0x2338E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338DCu;
    // 0x2338e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2338DCu, 0x2338E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2338E4u;
label_2338e4:
    // 0x2338e4: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x2338e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x2338e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2338E8u;
    {
        const bool branch_taken_0x2338e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338E8u;
        // 0x2338ec: 0xae1505f0  sw          $s5, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338e8) {
            ctx->pc = 0x2338F8u;
            goto label_2338f8;
        }
    }
    ctx->pc = 0x2338F0u;
    // 0x2338f0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2338f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2338f4: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x2338f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_2338f8:
    // 0x2338f8: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x2338f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x2338fc: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x2338fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x233900: 0x10740020  beq         $v1, $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x233900u;
    {
        const bool branch_taken_0x233900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x233904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233900u;
        // 0x233904: 0x28620369  slti        $v0, $v1, 0x369 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)873) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233900) {
            ctx->pc = 0x233984u;
            goto label_233984;
        }
    }
    ctx->pc = 0x233908u;
    // 0x233908: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233908u;
    {
        const bool branch_taken_0x233908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233908u;
        // 0x23390c: 0x24020362  addiu       $v0, $zero, 0x362 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 866));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233908) {
            ctx->pc = 0x233928u;
            goto label_233928;
        }
    }
    ctx->pc = 0x233910u;
    // 0x233910: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x233910u;
    {
        const bool branch_taken_0x233910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233910u;
        // 0x233914: 0x28620363  slti        $v0, $v1, 0x363 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)867) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233910) {
            ctx->pc = 0x233960u;
            goto label_233960;
        }
    }
    ctx->pc = 0x233918u;
    // 0x233918: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x233918u;
    {
        const bool branch_taken_0x233918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233918u;
        // 0x23391c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233918) {
            ctx->pc = 0x233988u;
            goto label_233988;
        }
    }
    ctx->pc = 0x233920u;
    // 0x233920: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x233920u;
    {
        const bool branch_taken_0x233920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233920u;
        // 0x233924: 0x24020363  addiu       $v0, $zero, 0x363 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 867));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233920) {
            ctx->pc = 0x233950u;
            goto label_233950;
        }
    }
    ctx->pc = 0x233928u;
label_233928:
    // 0x233928: 0x24020380  addiu       $v0, $zero, 0x380
    ctx->pc = 0x233928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    // 0x23392c: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x23392Cu;
    {
        const bool branch_taken_0x23392c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23392Cu;
        // 0x233930: 0x28620381  slti        $v0, $v1, 0x381 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)897) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23392c) {
            ctx->pc = 0x2339C8u;
            goto label_2339c8;
        }
    }
    ctx->pc = 0x233934u;
    // 0x233934: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233934u;
    {
        const bool branch_taken_0x233934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233934u;
        // 0x233938: 0x24020379  addiu       $v0, $zero, 0x379 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 889));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233934) {
            ctx->pc = 0x23394Cu;
            goto label_23394c;
        }
    }
    ctx->pc = 0x23393Cu;
    // 0x23393c: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23393Cu;
    {
        const bool branch_taken_0x23393c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23393Cu;
        // 0x233940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23393c) {
            ctx->pc = 0x2339ECu;
            goto label_2339ec;
        }
    }
    ctx->pc = 0x233944u;
    // 0x233944: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x233944u;
    {
        const bool branch_taken_0x233944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233944u;
        // 0x233948: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233944) {
            ctx->pc = 0x23398Cu;
            goto label_23398c;
        }
    }
    ctx->pc = 0x23394Cu;
label_23394c:
    // 0x23394c: 0x240203b7  addiu       $v0, $zero, 0x3B7
    ctx->pc = 0x23394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
label_233950:
    // 0x233950: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x233950u;
    {
        const bool branch_taken_0x233950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233950u;
        // 0x233954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233950) {
            ctx->pc = 0x2339A8u;
            goto label_2339a8;
        }
    }
    ctx->pc = 0x233958u;
    // 0x233958: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x233958u;
    {
        const bool branch_taken_0x233958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233958u;
        // 0x23395c: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233958) {
            ctx->pc = 0x23398Cu;
            goto label_23398c;
        }
    }
    ctx->pc = 0x233960u;
label_233960:
    // 0x233960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233964: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x233964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x233968: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x233968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23396c: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x23396cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x233970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233974: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x233974u;
    SET_GPR_U32(ctx, 31, 0x23397Cu);
    ctx->pc = 0x233978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233974u;
    // 0x233978: 0x24090141  addiu       $t1, $zero, 0x141 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x233974u, 0x23397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23397Cu;
label_23397c:
    // 0x23397c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x23397Cu;
    {
        const bool branch_taken_0x23397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23397c) {
            ctx->pc = 0x233A04u;
            goto label_233a04;
        }
    }
    ctx->pc = 0x233984u;
label_233984:
    // 0x233984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233988:
    // 0x233988: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x233988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_23398c:
    // 0x23398c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x23398cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x233990: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x233990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x233994: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233998: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x233998u;
    SET_GPR_U32(ctx, 31, 0x2339A0u);
    ctx->pc = 0x23399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233998u;
    // 0x23399c: 0x24090140  addiu       $t1, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x233998u, 0x2339A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339A0u;
label_2339a0:
    // 0x2339a0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2339A0u;
    {
        const bool branch_taken_0x2339a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2339a0) {
            ctx->pc = 0x233A04u;
            goto label_233a04;
        }
    }
    ctx->pc = 0x2339A8u;
label_2339a8:
    // 0x2339a8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2339a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2339ac: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2339acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2339b0: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x2339b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2339b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2339b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339b8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2339B8u;
    SET_GPR_U32(ctx, 31, 0x2339C0u);
    ctx->pc = 0x2339BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339B8u;
    // 0x2339bc: 0x24090142  addiu       $t1, $zero, 0x142 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2339B8u, 0x2339C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339C0u;
label_2339c0:
    // 0x2339c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2339C0u;
    {
        const bool branch_taken_0x2339c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2339c0) {
            ctx->pc = 0x233A04u;
            goto label_233a04;
        }
    }
    ctx->pc = 0x2339C8u;
label_2339c8:
    // 0x2339c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2339c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2339ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2339d0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2339d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2339d4: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x2339d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2339d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2339d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339dc: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2339DCu;
    SET_GPR_U32(ctx, 31, 0x2339E4u);
    ctx->pc = 0x2339E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339DCu;
    // 0x2339e0: 0x240900ea  addiu       $t1, $zero, 0xEA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2339DCu, 0x2339E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339E4u;
label_2339e4:
    // 0x2339e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2339E4u;
    {
        const bool branch_taken_0x2339e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2339e4) {
            ctx->pc = 0x233A04u;
            goto label_233a04;
        }
    }
    ctx->pc = 0x2339ECu;
label_2339ec:
    // 0x2339ec: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2339f0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2339f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2339f4: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x2339f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2339f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2339f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2339fc: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2339FCu;
    SET_GPR_U32(ctx, 31, 0x233A04u);
    ctx->pc = 0x233A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339FCu;
    // 0x233a00: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2339FCu, 0x233A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A04u;
label_233a04:
    // 0x233a04: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233A04u;
    SET_GPR_U32(ctx, 31, 0x233A0Cu);
    ctx->pc = 0x233A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A04u;
    // 0x233a08: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233A04u, 0x233A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A0Cu;
label_233a0c:
    // 0x233a0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x233a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x233a10: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x233A10u;
    {
        const bool branch_taken_0x233a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x233A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A10u;
        // 0x233a14: 0x8e0906ec  lw          $t1, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a10) {
            ctx->pc = 0x233A28u;
            goto label_233a28;
        }
    }
    ctx->pc = 0x233A18u;
    // 0x233a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a1c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x233a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x233a20: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x233A20u;
    {
        const bool branch_taken_0x233a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A20u;
        // 0x233a24: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a20) {
            ctx->pc = 0x233BB8u;
            goto label_233bb8;
        }
    }
    ctx->pc = 0x233A28u;
label_233a28:
    // 0x233a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a2c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x233a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x233a30: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x233A30u;
    {
        const bool branch_taken_0x233a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A30u;
        // 0x233a34: 0x2406007a  addiu       $a2, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a30) {
            ctx->pc = 0x233BB8u;
            goto label_233bb8;
        }
    }
    ctx->pc = 0x233A38u;
label_233a38:
    // 0x233a38: 0x26e49b70  addiu       $a0, $s7, -0x6490
    ctx->pc = 0x233a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    // 0x233a3c: 0x8c430474  lw          $v1, 0x474($v0)
    ctx->pc = 0x233a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1140)));
    // 0x233a40: 0x8c450478  lw          $a1, 0x478($v0)
    ctx->pc = 0x233a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1144)));
    // 0x233a44: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x233a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233a48: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233A48u;
    SET_GPR_U32(ctx, 31, 0x233A50u);
    ctx->pc = 0x233A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A48u;
    // 0x233a4c: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233A48u, 0x233A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A50u;
label_233a50:
    // 0x233a50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x233a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x233a54: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x233A54u;
    {
        const bool branch_taken_0x233a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x233a54) {
            ctx->pc = 0x233A68u;
            goto label_233a68;
        }
    }
    ctx->pc = 0x233A5Cu;
    // 0x233a5c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x233a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x233a60: 0x8c620478  lw          $v0, 0x478($v1)
    ctx->pc = 0x233a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1144)));
    // 0x233a64: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x233a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233a68:
    // 0x233a68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x233a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233a6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x233a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a74: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x233a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233a7c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x233a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x233a80: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x233A80u;
    SET_GPR_U32(ctx, 31, 0x233A88u);
    ctx->pc = 0x233A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A80u;
    // 0x233a84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x233A80u, 0x233A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A88u;
label_233a88:
    // 0x233a88: 0xae1505f0  sw          $s5, 0x5F0($s0)
    ctx->pc = 0x233a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 21));
    // 0x233a8c: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x233a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x233a90: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x233a90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x233a94: 0x10740020  beq         $v1, $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x233A94u;
    {
        const bool branch_taken_0x233a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x233A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A94u;
        // 0x233a98: 0x28620369  slti        $v0, $v1, 0x369 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)873) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a94) {
            ctx->pc = 0x233B18u;
            goto label_233b18;
        }
    }
    ctx->pc = 0x233A9Cu;
    // 0x233a9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233A9Cu;
    {
        const bool branch_taken_0x233a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A9Cu;
        // 0x233aa0: 0x24020362  addiu       $v0, $zero, 0x362 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 866));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a9c) {
            ctx->pc = 0x233ABCu;
            goto label_233abc;
        }
    }
    ctx->pc = 0x233AA4u;
    // 0x233aa4: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x233AA4u;
    {
        const bool branch_taken_0x233aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AA4u;
        // 0x233aa8: 0x28620363  slti        $v0, $v1, 0x363 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)867) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233aa4) {
            ctx->pc = 0x233AF4u;
            goto label_233af4;
        }
    }
    ctx->pc = 0x233AACu;
    // 0x233aac: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x233AACu;
    {
        const bool branch_taken_0x233aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AACu;
        // 0x233ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233aac) {
            ctx->pc = 0x233B1Cu;
            goto label_233b1c;
        }
    }
    ctx->pc = 0x233AB4u;
    // 0x233ab4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x233AB4u;
    {
        const bool branch_taken_0x233ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AB4u;
        // 0x233ab8: 0x24020363  addiu       $v0, $zero, 0x363 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 867));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ab4) {
            ctx->pc = 0x233AE4u;
            goto label_233ae4;
        }
    }
    ctx->pc = 0x233ABCu;
label_233abc:
    // 0x233abc: 0x24020380  addiu       $v0, $zero, 0x380
    ctx->pc = 0x233abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    // 0x233ac0: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x233AC0u;
    {
        const bool branch_taken_0x233ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AC0u;
        // 0x233ac4: 0x28620381  slti        $v0, $v1, 0x381 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)897) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ac0) {
            ctx->pc = 0x233B5Cu;
            goto label_233b5c;
        }
    }
    ctx->pc = 0x233AC8u;
    // 0x233ac8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233AC8u;
    {
        const bool branch_taken_0x233ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AC8u;
        // 0x233acc: 0x24020379  addiu       $v0, $zero, 0x379 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 889));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ac8) {
            ctx->pc = 0x233AE0u;
            goto label_233ae0;
        }
    }
    ctx->pc = 0x233AD0u;
    // 0x233ad0: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x233AD0u;
    {
        const bool branch_taken_0x233ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AD0u;
        // 0x233ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ad0) {
            ctx->pc = 0x233B80u;
            goto label_233b80;
        }
    }
    ctx->pc = 0x233AD8u;
    // 0x233ad8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x233AD8u;
    {
        const bool branch_taken_0x233ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AD8u;
        // 0x233adc: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ad8) {
            ctx->pc = 0x233B20u;
            goto label_233b20;
        }
    }
    ctx->pc = 0x233AE0u;
label_233ae0:
    // 0x233ae0: 0x240203b7  addiu       $v0, $zero, 0x3B7
    ctx->pc = 0x233ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
label_233ae4:
    // 0x233ae4: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x233AE4u;
    {
        const bool branch_taken_0x233ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AE4u;
        // 0x233ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ae4) {
            ctx->pc = 0x233B3Cu;
            goto label_233b3c;
        }
    }
    ctx->pc = 0x233AECu;
    // 0x233aec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x233AECu;
    {
        const bool branch_taken_0x233aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AECu;
        // 0x233af0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233aec) {
            ctx->pc = 0x233B20u;
            goto label_233b20;
        }
    }
    ctx->pc = 0x233AF4u;
label_233af4:
    // 0x233af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233af8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x233af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x233afc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x233afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x233b00: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x233b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x233b04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b08: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x233B08u;
    SET_GPR_U32(ctx, 31, 0x233B10u);
    ctx->pc = 0x233B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B08u;
    // 0x233b0c: 0x24090141  addiu       $t1, $zero, 0x141 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x233B08u, 0x233B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B10u;
label_233b10:
    // 0x233b10: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x233B10u;
    {
        const bool branch_taken_0x233b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233b10) {
            ctx->pc = 0x233B98u;
            goto label_233b98;
        }
    }
    ctx->pc = 0x233B18u;
label_233b18:
    // 0x233b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233b1c:
    // 0x233b1c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x233b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_233b20:
    // 0x233b20: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x233b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x233b24: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x233b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x233b28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b2c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x233B2Cu;
    SET_GPR_U32(ctx, 31, 0x233B34u);
    ctx->pc = 0x233B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B2Cu;
    // 0x233b30: 0x24090140  addiu       $t1, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x233B2Cu, 0x233B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B34u;
label_233b34:
    // 0x233b34: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x233B34u;
    {
        const bool branch_taken_0x233b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233b34) {
            ctx->pc = 0x233B98u;
            goto label_233b98;
        }
    }
    ctx->pc = 0x233B3Cu;
label_233b3c:
    // 0x233b3c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x233b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x233b40: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x233b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x233b44: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x233b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x233b48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b4c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x233B4Cu;
    SET_GPR_U32(ctx, 31, 0x233B54u);
    ctx->pc = 0x233B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B4Cu;
    // 0x233b50: 0x24090142  addiu       $t1, $zero, 0x142 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x233B4Cu, 0x233B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B54u;
label_233b54:
    // 0x233b54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x233B54u;
    {
        const bool branch_taken_0x233b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233b54) {
            ctx->pc = 0x233B98u;
            goto label_233b98;
        }
    }
    ctx->pc = 0x233B5Cu;
label_233b5c:
    // 0x233b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b60: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x233b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x233b64: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x233b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x233b68: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x233b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x233b6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b70: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x233B70u;
    SET_GPR_U32(ctx, 31, 0x233B78u);
    ctx->pc = 0x233B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B70u;
    // 0x233b74: 0x240900ea  addiu       $t1, $zero, 0xEA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x233B70u, 0x233B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B78u;
label_233b78:
    // 0x233b78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x233B78u;
    {
        const bool branch_taken_0x233b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233b78) {
            ctx->pc = 0x233B98u;
            goto label_233b98;
        }
    }
    ctx->pc = 0x233B80u;
label_233b80:
    // 0x233b80: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x233b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x233b84: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x233b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x233b88: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x233b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x233b8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x233b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233b90: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x233B90u;
    SET_GPR_U32(ctx, 31, 0x233B98u);
    ctx->pc = 0x233B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B90u;
    // 0x233b94: 0x24090112  addiu       $t1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x233B90u, 0x233B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233B98u;
label_233b98:
    // 0x233b98: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233B98u;
    SET_GPR_U32(ctx, 31, 0x233BA0u);
    ctx->pc = 0x233B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B98u;
    // 0x233b9c: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233B98u, 0x233BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BA0u;
label_233ba0:
    // 0x233ba0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x233ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x233ba4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x233BA4u;
    {
        const bool branch_taken_0x233ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x233BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BA4u;
        // 0x233ba8: 0x8e0906ec  lw          $t1, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ba4) {
            ctx->pc = 0x233BCCu;
            goto label_233bcc;
        }
    }
    ctx->pc = 0x233BACu;
    // 0x233bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bb0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x233bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x233bb4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x233bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_233bb8:
    // 0x233bb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x233bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bbc: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x233BBCu;
    SET_GPR_U32(ctx, 31, 0x233BC4u);
    ctx->pc = 0x233BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BBCu;
    // 0x233bc0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x233BBCu, 0x233BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BC4u;
label_233bc4:
    // 0x233bc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x233BC4u;
    {
        const bool branch_taken_0x233bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233bc4) {
            ctx->pc = 0x233BE4u;
            goto label_233be4;
        }
    }
    ctx->pc = 0x233BCCu;
label_233bcc:
    // 0x233bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bd0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x233bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x233bd4: 0x2406007b  addiu       $a2, $zero, 0x7B
    ctx->pc = 0x233bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x233bd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x233bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233bdc: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x233BDCu;
    SET_GPR_U32(ctx, 31, 0x233BE4u);
    ctx->pc = 0x233BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BDCu;
    // 0x233be0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x233BDCu, 0x233BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BE4u;
label_233be4:
    // 0x233be4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233BE4u;
    SET_GPR_U32(ctx, 31, 0x233BECu);
    ctx->pc = 0x233BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BE4u;
    // 0x233be8: 0x26e49b70  addiu       $a0, $s7, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233BE4u, 0x233BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233BECu;
label_233bec:
    // 0x233bec: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x233becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x233bf0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x233bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x233bf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x233BF4u;
    {
        const bool branch_taken_0x233bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BF4u;
        // 0x233bf8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bf4) {
            ctx->pc = 0x233C14u;
            goto label_233c14;
        }
    }
    ctx->pc = 0x233BFCu;
    // 0x233bfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233c00: 0x24429d30  addiu       $v0, $v0, -0x62D0
    ctx->pc = 0x233c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942000));
    // 0x233c04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233c08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x233c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233c0c: 0x800008  jr          $a0
    ctx->pc = 0x233C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233C14u: goto label_233c14;
            case 0x233C2Cu: goto label_233c2c;
            case 0x233C48u: goto label_233c48;
            case 0x233C6Cu: goto label_233c6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233C0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x233C14u;
label_233c14:
    // 0x233c14: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x233c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233c18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x233c1c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x233c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x233c20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233c24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x233C24u;
    {
        const bool branch_taken_0x233c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C24u;
        // 0x233c28: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c24) {
            ctx->pc = 0x233C64u;
            goto label_233c64;
        }
    }
    ctx->pc = 0x233C2Cu;
label_233c2c:
    // 0x233c2c: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x233c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233c30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x233c34: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x233c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x233c38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x233c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x233c3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233c40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x233C40u;
    {
        const bool branch_taken_0x233c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C40u;
        // 0x233c44: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c40) {
            ctx->pc = 0x233C64u;
            goto label_233c64;
        }
    }
    ctx->pc = 0x233C48u;
label_233c48:
    // 0x233c48: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x233c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233c4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x233c4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x233c50: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x233c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x233c54: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x233c54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x233c58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233c5c: 0x0  nop
    ctx->pc = 0x233c5cu;
    // NOP
    // 0x233c60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x233c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_233c64:
    // 0x233c64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x233c64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x233c68: 0xe60105f0  swc1        $f1, 0x5F0($s0)
    ctx->pc = 0x233c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1520), bits); }
label_233c6c:
    // 0x233c6c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x233c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x233c70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x233C70u;
    {
        const bool branch_taken_0x233c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C70u;
        // 0x233c74: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c70) {
            ctx->pc = 0x233C7Cu;
            goto label_233c7c;
        }
    }
    ctx->pc = 0x233C78u;
    // 0x233c78: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x233c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_233c7c:
    // 0x233c7c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x233c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x233c80: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x233c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x233c84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x233c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x233c88: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x233c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x233c8c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x233c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_233c90:
    // 0x233c90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x233C90u;
    {
        const bool branch_taken_0x233c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C90u;
        // 0x233c94: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c90) {
            ctx->pc = 0x233CC0u;
            goto label_233cc0;
        }
    }
    ctx->pc = 0x233C98u;
    // 0x233c98: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x233C98u;
    SET_GPR_U32(ctx, 31, 0x233CA0u);
    ctx->pc = 0x233C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C98u;
    // 0x233c9c: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x233C98u, 0x233CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CA0u;
label_233ca0:
    // 0x233ca0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x233ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ca8: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x233ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x233cac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x233cacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x233cb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x233cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x233cb4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x233cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x233cb8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x233CB8u;
    SET_GPR_U32(ctx, 31, 0x233CC0u);
    ctx->pc = 0x233CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CB8u;
    // 0x233cbc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x233CB8u, 0x233CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CC0u;
label_233cc0:
    // 0x233cc0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x233CC0u;
    SET_GPR_U32(ctx, 31, 0x233CC8u);
    ctx->pc = 0x233CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CC0u;
    // 0x233cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x233CC0u, 0x233CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CC8u;
label_233cc8:
    // 0x233cc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233CC8u;
    {
        const bool branch_taken_0x233cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CC8u;
        // 0x233ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cc8) {
            ctx->pc = 0x233CFCu;
            goto label_233cfc;
        }
    }
    ctx->pc = 0x233CD0u;
    // 0x233cd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x233cd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x233cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x233cd8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x233CD8u;
    SET_GPR_U32(ctx, 31, 0x233CE0u);
    ctx->pc = 0x233CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CD8u;
    // 0x233cdc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x233CD8u, 0x233CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CE0u;
label_233ce0:
    // 0x233ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ce4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x233CE4u;
    SET_GPR_U32(ctx, 31, 0x233CECu);
    ctx->pc = 0x233CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CE4u;
    // 0x233ce8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x233CE4u, 0x233CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CECu;
label_233cec:
    // 0x233cec: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x233CECu;
    SET_GPR_U32(ctx, 31, 0x233CF4u);
    ctx->pc = 0x233CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CECu;
    // 0x233cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x233CECu, 0x233CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CF4u;
label_233cf4:
    // 0x233cf4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x233CF4u;
    {
        const bool branch_taken_0x233cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CF4u;
        // 0x233cf8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cf4) {
            ctx->pc = 0x233DA8u;
            goto label_233da8;
        }
    }
    ctx->pc = 0x233CFCu;
label_233cfc:
    // 0x233cfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x233d00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x233d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x233d04: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x233D04u;
    SET_GPR_U32(ctx, 31, 0x233D0Cu);
    ctx->pc = 0x233D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D04u;
    // 0x233d08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x233D04u, 0x233D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D0Cu;
label_233d0c:
    // 0x233d0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x233d0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x233d10: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x233D10u;
    SET_GPR_U32(ctx, 31, 0x233D18u);
    ctx->pc = 0x233D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D10u;
    // 0x233d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x233D10u, 0x233D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D18u;
label_233d18:
    // 0x233d18: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x233D18u;
    SET_GPR_U32(ctx, 31, 0x233D20u);
    ctx->pc = 0x233D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D18u;
    // 0x233d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x233D18u, 0x233D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D20u;
label_233d20:
    // 0x233d20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x233d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x233d24: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x233D24u;
    SET_GPR_U32(ctx, 31, 0x233D2Cu);
    ctx->pc = 0x233D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D24u;
    // 0x233d28: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x233D24u, 0x233D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D2Cu;
label_233d2c:
    // 0x233d2c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x233d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x233d30: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x233D30u;
    {
        const bool branch_taken_0x233d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233d30) {
            ctx->pc = 0x233D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233D30u;
            // 0x233d34: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233D74u;
            goto label_233d74;
        }
    }
    ctx->pc = 0x233D38u;
    // 0x233d38: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x233D38u;
    SET_GPR_U32(ctx, 31, 0x233D40u);
    ctx->pc = 0x233D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D38u;
    // 0x233d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x233D38u, 0x233D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D40u;
label_233d40:
    // 0x233d40: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x233D40u;
    {
        const bool branch_taken_0x233d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D40u;
        // 0x233d44: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d40) {
            ctx->pc = 0x233D74u;
            goto label_233d74;
        }
    }
    ctx->pc = 0x233D48u;
    // 0x233d48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x233d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x233d4c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x233D4Cu;
    {
        const bool branch_taken_0x233d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d4c) {
            ctx->pc = 0x233D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233D4Cu;
            // 0x233d50: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233D74u;
            goto label_233d74;
        }
    }
    ctx->pc = 0x233D54u;
    // 0x233d54: 0x92021864  lbu         $v0, 0x1864($s0)
    ctx->pc = 0x233d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
    // 0x233d58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x233D58u;
    {
        const bool branch_taken_0x233d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233d58) {
            ctx->pc = 0x233D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233D58u;
            // 0x233d5c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233D74u;
            goto label_233d74;
        }
    }
    ctx->pc = 0x233D60u;
    // 0x233d60: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x233D60u;
    SET_GPR_U32(ctx, 31, 0x233D68u);
    ctx->pc = 0x233D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D60u;
    // 0x233d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x233D60u, 0x233D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D68u;
label_233d68:
    // 0x233d68: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x233D68u;
    {
        const bool branch_taken_0x233d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233d68) {
            ctx->pc = 0x233D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233D68u;
            // 0x233d6c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233DA8u;
            goto label_233da8;
        }
    }
    ctx->pc = 0x233D70u;
    // 0x233d70: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x233d70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_233d74:
    // 0x233d74: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x233d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x233d78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x233D78u;
    {
        const bool branch_taken_0x233d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D78u;
        // 0x233d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d78) {
            ctx->pc = 0x233D84u;
            goto label_233d84;
        }
    }
    ctx->pc = 0x233D80u;
    // 0x233d80: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x233d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_233d84:
    // 0x233d84: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x233d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x233d88: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x233D88u;
    {
        const bool branch_taken_0x233d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d88) {
            ctx->pc = 0x233D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233D88u;
            // 0x233d8c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233DA8u;
            goto label_233da8;
        }
    }
    ctx->pc = 0x233D90u;
    // 0x233d90: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x233d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x233d94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x233d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x233d98: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x233d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x233d9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x233d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x233da0: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x233da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x233da4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x233da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_233da8:
    // 0x233da8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x233da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x233dac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x233dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x233db0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x233db0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233db4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x233db4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233db8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x233db8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233dbc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x233dbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233dc0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x233dc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233dc8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x233dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x233dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x233DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DCCu;
        // 0x233dd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233DD4u;
    // 0x233dd4: 0x0  nop
    ctx->pc = 0x233dd4u;
    // NOP
    ctx->pc = 0x233dd8u;
}
