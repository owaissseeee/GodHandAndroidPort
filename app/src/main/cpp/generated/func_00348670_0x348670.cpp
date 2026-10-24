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

// Function: func_00348670
// Address: 0x348670 - 0x3487c0
void func_00348670_0x348670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348670_0x348670");
#endif

    switch (ctx->pc) {
        case 0x3486b0u: goto label_3486b0;
        case 0x3486c4u: goto label_3486c4;
        case 0x3486fcu: goto label_3486fc;
        case 0x348720u: goto label_348720;
        case 0x34874cu: goto label_34874c;
        case 0x348778u: goto label_348778;
        case 0x348790u: goto label_348790;
        default: break;
    }

    ctx->pc = 0x348670u;

    // 0x348670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x348670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x348674: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x348674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x348678: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x348678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34867c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x348680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348688: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x348688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34868c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x348690: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x348690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348694: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x348694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x348698: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x348698u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34869c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34869cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3486a0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3486a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3486a4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3486a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x3486a8: 0xc0d224e  jal         func_348938
    ctx->pc = 0x3486A8u;
    SET_GPR_U32(ctx, 31, 0x3486B0u);
    ctx->pc = 0x3486ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486A8u;
    // 0x3486ac: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348938u, 0x3486A8u, 0x3486B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486B0u;
label_3486b0:
    // 0x3486b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3486b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486b4: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x3486B4u;
    {
        const bool branch_taken_0x3486b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3486B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3486B4u;
        // 0x3486b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486b4) {
            ctx->pc = 0x348794u;
            goto label_348794;
        }
    }
    ctx->pc = 0x3486BCu;
    // 0x3486bc: 0xc0d2096  jal         func_348258
    ctx->pc = 0x3486BCu;
    SET_GPR_U32(ctx, 31, 0x3486C4u);
    ctx->pc = 0x348258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348258u, 0x3486BCu, 0x3486C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486C4u;
label_3486c4:
    // 0x3486c4: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x3486c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x3486c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3486c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3486cc: 0x8e16003c  lw          $s6, 0x3C($s0)
    ctx->pc = 0x3486ccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3486d0: 0x24500284  addiu       $s0, $v0, 0x284
    ctx->pc = 0x3486d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 644));
    // 0x3486d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3486d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486d8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x3486d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x3486dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3486dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3486e0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3486e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x3486e4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x3486e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3486e8: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x3486e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x3486ec: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x3486ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3486f0: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x3486f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x3486f4: 0xc0d20ce  jal         func_348338
    ctx->pc = 0x3486F4u;
    SET_GPR_U32(ctx, 31, 0x3486FCu);
    ctx->pc = 0x3486F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3486F4u;
    // 0x3486f8: 0xae150018  sw          $s5, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348338u, 0x3486F4u, 0x3486FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486FCu;
label_3486fc:
    // 0x3486fc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3486fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x348700: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x348700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x348704: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x348704u;
    {
        const bool branch_taken_0x348704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348704u;
        // 0x348708: 0x24849240  addiu       $a0, $a0, -0x6DC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348704) {
            ctx->pc = 0x348770u;
            goto label_348770;
        }
    }
    ctx->pc = 0x34870Cu;
    // 0x34870c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x34870cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348710: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x348710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x348714: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x348714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348718: 0xc0ce568  jal         func_3395A0
    ctx->pc = 0x348718u;
    SET_GPR_U32(ctx, 31, 0x348720u);
    ctx->pc = 0x34871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348718u;
    // 0x34871c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3395A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3395A0u, 0x348718u, 0x348720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348720u;
label_348720:
    // 0x348720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348724: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x348724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348728: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x348728u;
    {
        const bool branch_taken_0x348728 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x34872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348728u;
        // 0x34872c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348728) {
            ctx->pc = 0x348740u;
            goto label_348740;
        }
    }
    ctx->pc = 0x348730u;
    // 0x348730: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x348730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x348734: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x348734u;
    {
        const bool branch_taken_0x348734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348734u;
        // 0x348738: 0x24849270  addiu       $a0, $a0, -0x6D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348734) {
            ctx->pc = 0x348770u;
            goto label_348770;
        }
    }
    ctx->pc = 0x34873Cu;
    // 0x34873c: 0x0  nop
    ctx->pc = 0x34873cu;
    // NOP
label_348740:
    // 0x348740: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x348740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x348744: 0xc0d20e8  jal         func_3483A0
    ctx->pc = 0x348744u;
    SET_GPR_U32(ctx, 31, 0x34874Cu);
    ctx->pc = 0x348748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348744u;
    // 0x348748: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3483A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3483A0u, 0x348744u, 0x34874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34874Cu;
label_34874c:
    // 0x34874c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x34874cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348750: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x348750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348754: 0x26a500c0  addiu       $a1, $s5, 0xC0
    ctx->pc = 0x348754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x348758: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x348758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34875c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34875cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348760: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x348760u;
    {
        const bool branch_taken_0x348760 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x348764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348760u;
        // 0x348764: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348760) {
            ctx->pc = 0x348780u;
            goto label_348780;
        }
    }
    ctx->pc = 0x348768u;
    // 0x348768: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x348768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x34876c: 0x24849298  addiu       $a0, $a0, -0x6D68
    ctx->pc = 0x34876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939288));
label_348770:
    // 0x348770: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x348770u;
    SET_GPR_U32(ctx, 31, 0x348778u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x348770u, 0x348778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348778u;
label_348778:
    // 0x348778: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x348778u;
    {
        const bool branch_taken_0x348778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348778u;
        // 0x34877c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348778) {
            ctx->pc = 0x348794u;
            goto label_348794;
        }
    }
    ctx->pc = 0x348780u;
label_348780:
    // 0x348780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x348780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348784: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x348784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x348788: 0xc0d3824  jal         func_34E090
    ctx->pc = 0x348788u;
    SET_GPR_U32(ctx, 31, 0x348790u);
    ctx->pc = 0x34878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348788u;
    // 0x34878c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E090u, 0x348788u, 0x348790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348790u;
label_348790:
    // 0x348790: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x348790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_348794:
    // 0x348794: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x348794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348798: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x348798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34879c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34879cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3487a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3487a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3487a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3487a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3487a8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3487a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3487ac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3487acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3487b0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3487b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3487b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3487B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3487B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3487B4u;
        // 0x3487b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3487B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3487BCu;
    // 0x3487bc: 0x0  nop
    ctx->pc = 0x3487bcu;
    // NOP
    ctx->pc = 0x3487c0u;
}
