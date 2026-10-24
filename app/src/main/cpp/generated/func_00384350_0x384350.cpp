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

// Function: func_00384350
// Address: 0x384350 - 0x384590
void func_00384350_0x384350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384350_0x384350");
#endif

    switch (ctx->pc) {
        case 0x3843e8u: goto label_3843e8;
        case 0x384404u: goto label_384404;
        case 0x38441cu: goto label_38441c;
        case 0x3844b0u: goto label_3844b0;
        case 0x3844c8u: goto label_3844c8;
        case 0x3844dcu: goto label_3844dc;
        case 0x3844f8u: goto label_3844f8;
        case 0x384534u: goto label_384534;
        case 0x384550u: goto label_384550;
        case 0x384578u: goto label_384578;
        default: break;
    }

    ctx->pc = 0x384350u;

    // 0x384350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x384350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x384354: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x384354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x384358: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x384358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38435c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x384360: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x384360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384364: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x384364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x384368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38436c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x38436cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x384370: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x384370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x384374: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x384374u;
    {
        const bool branch_taken_0x384374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384374u;
        // 0x384378: 0x247228d0  addiu       $s2, $v1, 0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 10448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384374) {
            ctx->pc = 0x384440u;
            goto label_384440;
        }
    }
    ctx->pc = 0x38437Cu;
    // 0x38437c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x38437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384380: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x384380u;
    {
        const bool branch_taken_0x384380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x384384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384380u;
        // 0x384384: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384380) {
            ctx->pc = 0x38442Cu;
            goto label_38442c;
        }
    }
    ctx->pc = 0x384388u;
    // 0x384388: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x384388u;
    {
        const bool branch_taken_0x384388 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x38438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384388u;
        // 0x38438c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384388) {
            ctx->pc = 0x3843A4u;
            goto label_3843a4;
        }
    }
    ctx->pc = 0x384390u;
    // 0x384390: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x384390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384394: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x384394u;
    {
        const bool branch_taken_0x384394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x384398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384394u;
        // 0x384398: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384394) {
            ctx->pc = 0x3843BCu;
            goto label_3843bc;
        }
    }
    ctx->pc = 0x38439Cu;
    // 0x38439c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x38439Cu;
    {
        const bool branch_taken_0x38439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38439c) {
            ctx->pc = 0x38442Cu;
            goto label_38442c;
        }
    }
    ctx->pc = 0x3843A4u;
label_3843a4:
    // 0x3843a4: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3843A4u;
    {
        const bool branch_taken_0x3843a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3843A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3843A4u;
        // 0x3843a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3843a4) {
            ctx->pc = 0x38441Cu;
            goto label_38441c;
        }
    }
    ctx->pc = 0x3843ACu;
    // 0x3843ac: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3843ACu;
    {
        const bool branch_taken_0x3843ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3843B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3843ACu;
        // 0x3843b0: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3843ac) {
            ctx->pc = 0x384428u;
            goto label_384428;
        }
    }
    ctx->pc = 0x3843B4u;
    // 0x3843b4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3843B4u;
    {
        const bool branch_taken_0x3843b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3843b4) {
            ctx->pc = 0x38442Cu;
            goto label_38442c;
        }
    }
    ctx->pc = 0x3843BCu;
label_3843bc:
    // 0x3843bc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3843bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3843c0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3843C0u;
    {
        const bool branch_taken_0x3843c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3843C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3843C0u;
        // 0x3843c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3843c0) {
            ctx->pc = 0x38441Cu;
            goto label_38441c;
        }
    }
    ctx->pc = 0x3843C8u;
    // 0x3843c8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3843C8u;
    {
        const bool branch_taken_0x3843c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3843CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3843C8u;
        // 0x3843cc: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3843c8) {
            ctx->pc = 0x3843F0u;
            goto label_3843f0;
        }
    }
    ctx->pc = 0x3843D0u;
    // 0x3843d0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3843d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3843d4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3843d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3843d8: 0x24e7cb48  addiu       $a3, $a3, -0x34B8
    ctx->pc = 0x3843d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953800));
    // 0x3843dc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3843dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3843e0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3843E0u;
    SET_GPR_U32(ctx, 31, 0x3843E8u);
    ctx->pc = 0x3843E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843E0u;
    // 0x3843e4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3843E0u, 0x3843E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3843E8u;
label_3843e8:
    // 0x3843e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3843E8u;
    {
        const bool branch_taken_0x3843e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3843ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3843E8u;
        // 0x3843ec: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3843e8) {
            ctx->pc = 0x384408u;
            goto label_384408;
        }
    }
    ctx->pc = 0x3843F0u;
label_3843f0:
    // 0x3843f0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3843f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3843f4: 0x24e7cb68  addiu       $a3, $a3, -0x3498
    ctx->pc = 0x3843f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953832));
    // 0x3843f8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3843f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3843fc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3843FCu;
    SET_GPR_U32(ctx, 31, 0x384404u);
    ctx->pc = 0x384400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843FCu;
    // 0x384400: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3843FCu, 0x384404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384404u;
label_384404:
    // 0x384404: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384404u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_384408:
    // 0x384408: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x384408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x38440c: 0x24e7cb88  addiu       $a3, $a3, -0x3478
    ctx->pc = 0x38440cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953864));
    // 0x384410: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x384410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x384414: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384414u;
    SET_GPR_U32(ctx, 31, 0x38441Cu);
    ctx->pc = 0x384418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384414u;
    // 0x384418: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384414u, 0x38441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38441Cu;
label_38441c:
    // 0x38441c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x38441cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x384420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x384420u;
    {
        const bool branch_taken_0x384420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384420u;
        // 0x384424: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384420) {
            ctx->pc = 0x38442Cu;
            goto label_38442c;
        }
    }
    ctx->pc = 0x384428u;
label_384428:
    // 0x384428: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x384428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38442c:
    // 0x38442c: 0x460003b  bltz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x38442Cu;
    {
        const bool branch_taken_0x38442c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x384430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38442Cu;
        // 0x384430: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38442c) {
            ctx->pc = 0x38451Cu;
            goto label_38451c;
        }
    }
    ctx->pc = 0x384434u;
    // 0x384434: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x384434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x384438: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x384438u;
    {
        const bool branch_taken_0x384438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384438u;
        // 0x38443c: 0x24422858  addiu       $v0, $v0, 0x2858 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384438) {
            ctx->pc = 0x384514u;
            goto label_384514;
        }
    }
    ctx->pc = 0x384440u;
label_384440:
    // 0x384440: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x384440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384444: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x384444u;
    {
        const bool branch_taken_0x384444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x384448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384444u;
        // 0x384448: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384444) {
            ctx->pc = 0x384504u;
            goto label_384504;
        }
    }
    ctx->pc = 0x38444Cu;
    // 0x38444c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38444Cu;
    {
        const bool branch_taken_0x38444c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x384450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38444Cu;
        // 0x384450: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38444c) {
            ctx->pc = 0x384468u;
            goto label_384468;
        }
    }
    ctx->pc = 0x384454u;
    // 0x384454: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x384454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384458: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x384458u;
    {
        const bool branch_taken_0x384458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384458u;
        // 0x38445c: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384458) {
            ctx->pc = 0x384480u;
            goto label_384480;
        }
    }
    ctx->pc = 0x384460u;
    // 0x384460: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x384460u;
    {
        const bool branch_taken_0x384460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384460) {
            ctx->pc = 0x384504u;
            goto label_384504;
        }
    }
    ctx->pc = 0x384468u;
label_384468:
    // 0x384468: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x384468u;
    {
        const bool branch_taken_0x384468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384468u;
        // 0x38446c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384468) {
            ctx->pc = 0x3844C8u;
            goto label_3844c8;
        }
    }
    ctx->pc = 0x384470u;
    // 0x384470: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x384470u;
    {
        const bool branch_taken_0x384470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x384474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384470u;
        // 0x384474: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384470) {
            ctx->pc = 0x3844D0u;
            goto label_3844d0;
        }
    }
    ctx->pc = 0x384478u;
    // 0x384478: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x384478u;
    {
        const bool branch_taken_0x384478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384478u;
        // 0x38447c: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384478) {
            ctx->pc = 0x384504u;
            goto label_384504;
        }
    }
    ctx->pc = 0x384480u;
label_384480:
    // 0x384480: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x384480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x384484: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x384484u;
    {
        const bool branch_taken_0x384484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384484u;
        // 0x384488: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384484) {
            ctx->pc = 0x3844C8u;
            goto label_3844c8;
        }
    }
    ctx->pc = 0x38448Cu;
    // 0x38448c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x38448cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x384490: 0x24632848  addiu       $v1, $v1, 0x2848
    ctx->pc = 0x384490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10312));
    // 0x384494: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x384494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x384498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x384498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38449c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x38449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3844a0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3844a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3844a4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3844a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3844a8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3844A8u;
    SET_GPR_U32(ctx, 31, 0x3844B0u);
    ctx->pc = 0x3844ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844A8u;
    // 0x3844ac: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3844A8u, 0x3844B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844B0u;
label_3844b0:
    // 0x3844b0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3844b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3844b4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x3844b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3844b8: 0x24e7cb88  addiu       $a3, $a3, -0x3478
    ctx->pc = 0x3844b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953864));
    // 0x3844bc: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3844bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3844c0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3844C0u;
    SET_GPR_U32(ctx, 31, 0x3844C8u);
    ctx->pc = 0x3844C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844C0u;
    // 0x3844c4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3844C0u, 0x3844C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844C8u;
label_3844c8:
    // 0x3844c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3844C8u;
    {
        const bool branch_taken_0x3844c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3844CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844C8u;
        // 0x3844cc: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3844c8) {
            ctx->pc = 0x384500u;
            goto label_384500;
        }
    }
    ctx->pc = 0x3844D0u;
label_3844d0:
    // 0x3844d0: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x3844d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3844d4: 0xc0cac2c  jal         func_32B0B0
    ctx->pc = 0x3844D4u;
    SET_GPR_U32(ctx, 31, 0x3844DCu);
    ctx->pc = 0x3844D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844D4u;
    // 0x3844d8: 0x2411000a  addiu       $s1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B0B0u, 0x3844D4u, 0x3844DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844DCu;
label_3844dc:
    // 0x3844dc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3844dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3844e0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3844e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3844e4: 0x24e7cba0  addiu       $a3, $a3, -0x3460
    ctx->pc = 0x3844e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953888));
    // 0x3844e8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3844e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3844ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3844ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3844f0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3844F0u;
    SET_GPR_U32(ctx, 31, 0x3844F8u);
    ctx->pc = 0x3844F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3844F0u;
    // 0x3844f4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3844F0u, 0x3844F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3844F8u;
label_3844f8:
    // 0x3844f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3844F8u;
    {
        const bool branch_taken_0x3844f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3844FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3844F8u;
        // 0x3844fc: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3844f8) {
            ctx->pc = 0x384504u;
            goto label_384504;
        }
    }
    ctx->pc = 0x384500u;
label_384500:
    // 0x384500: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x384500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_384504:
    // 0x384504: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x384504u;
    {
        const bool branch_taken_0x384504 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x384508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384504u;
        // 0x384508: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384504) {
            ctx->pc = 0x38451Cu;
            goto label_38451c;
        }
    }
    ctx->pc = 0x38450Cu;
    // 0x38450c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38450cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x384510: 0x24422820  addiu       $v0, $v0, 0x2820
    ctx->pc = 0x384510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10272));
label_384514:
    // 0x384514: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x384514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x384518: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x384518u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38451c:
    // 0x38451c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38451cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384520: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384524: 0x24e7cbb0  addiu       $a3, $a3, -0x3450
    ctx->pc = 0x384524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953904));
    // 0x384528: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x384528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38452c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38452Cu;
    SET_GPR_U32(ctx, 31, 0x384534u);
    ctx->pc = 0x384530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38452Cu;
    // 0x384530: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38452Cu, 0x384534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384534u;
label_384534:
    // 0x384534: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384534u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384538: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x384538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38453c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x38453cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384540: 0x24e7cbc0  addiu       $a3, $a3, -0x3440
    ctx->pc = 0x384540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953920));
    // 0x384544: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x384544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x384548: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384548u;
    SET_GPR_U32(ctx, 31, 0x384550u);
    ctx->pc = 0x38454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384548u;
    // 0x38454c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384548u, 0x384550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384550u;
label_384550:
    // 0x384550: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x384550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x384554: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x384554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x384558: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x384558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x38455c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x38455cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x384560: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x384560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x384564: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x384564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x384568: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x384568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38456c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x38456cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x384570: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384570u;
    SET_GPR_U32(ctx, 31, 0x384578u);
    ctx->pc = 0x384574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384570u;
    // 0x384574: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384570u, 0x384578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384578u;
label_384578:
    // 0x384578: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x384578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38457c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38457cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384580: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x384580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384588: 0x3e00008  jr          $ra
    ctx->pc = 0x384588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384588u;
        // 0x38458c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384590u;
}
