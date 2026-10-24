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

// Function: func_003A57C4
// Address: 0x3a57c4 - 0x3a58dc
void func_003A57C4_0x3a57c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A57C4_0x3a57c4");
#endif

    switch (ctx->pc) {
        case 0x3a5848u: goto label_3a5848;
        case 0x3a5894u: goto label_3a5894;
        case 0x3a58bcu: goto label_3a58bc;
        default: break;
    }

    ctx->pc = 0x3a57c4u;

    // 0x3a57c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a57c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a57c8: 0xa74025  or          $t0, $a1, $a3
    ctx->pc = 0x3a57c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x3a57cc: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x3a57ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x3a57d0: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3A57D0u;
    {
        const bool branch_taken_0x3a57d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57D0u;
        // 0x3a57d4: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a57d0) {
            ctx->pc = 0x3A58BCu;
            goto label_3a58bc;
        }
    }
    ctx->pc = 0x3A57D8u;
    // 0x3a57d8: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x3a57d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x3a57dc: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x3a57dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a57e0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3a57e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3a57e4: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3a57e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3a57e8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3a57e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3a57ec: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3a57ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3a57f0: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x3a57f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x3a57f4: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x3a57f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x3a57f8: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3a57f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a57fc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a57fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5800: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5804: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a5804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5808: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a580c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a580cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5810: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5814: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A5814u;
    {
        const bool branch_taken_0x3a5814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5814) {
            ctx->pc = 0x3A5818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5814u;
            // 0x3a5818: 0xdcaa0000  ld          $t2, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A587Cu;
            goto label_3a587c;
        }
    }
    ctx->pc = 0x3A581Cu;
    // 0x3a581c: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x3a581cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3a5820: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x3a5820u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5824: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x3a5824u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3a5828: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x3a5828u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3a582c: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x3a582cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x3a5830: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a5830u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5834: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x3a5834u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3a5838: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x3a5838u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3a583c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x3a583cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3a5840: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A5840u;
    {
        const bool branch_taken_0x3a5840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5840u;
        // 0x3a5844: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5840) {
            ctx->pc = 0x3A58B8u;
            goto label_3a58b8;
        }
    }
    ctx->pc = 0x3A5848u;
label_3a5848:
    // 0x3a5848: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x3a5848u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x3a584c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3a584cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3a5850: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x3a5850u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5854: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x3a5854u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3a5858: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x3a5858u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x3a585c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a585cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5860: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x3a5860u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3a5864: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x3a5864u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3a5868: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x3a5868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3a586c: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A586Cu;
    {
        const bool branch_taken_0x3a586c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A586Cu;
        // 0x3a5870: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a586c) {
            ctx->pc = 0x3A5848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5848;
        }
    }
    ctx->pc = 0x3A5874u;
    // 0x3a5874: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3A5874u;
    {
        const bool branch_taken_0x3a5874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5874u;
        // 0x3a5878: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5874) {
            ctx->pc = 0x3A58BCu;
            goto label_3a58bc;
        }
    }
    ctx->pc = 0x3A587Cu;
label_3a587c:
    // 0x3a587c: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x3a587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x3a5880: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x3a5880u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x3a5884: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a5884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a5888: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a5888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3a588c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A588Cu;
    {
        const bool branch_taken_0x3a588c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A588Cu;
        // 0x3a5890: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a588c) {
            ctx->pc = 0x3A58B8u;
            goto label_3a58b8;
        }
    }
    ctx->pc = 0x3A5894u;
label_3a5894:
    // 0x3a5894: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x3a5894u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x3a5898: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a5898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3a589c: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x3a589cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a58a0: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x3a58a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x3a58a4: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x3a58a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x3a58a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a58a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a58ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a58acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3a58b0: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A58B0u;
    {
        const bool branch_taken_0x3a58b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58B0u;
        // 0x3a58b4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a58b0) {
            ctx->pc = 0x3A5894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5894;
        }
    }
    ctx->pc = 0x3A58B8u;
label_3a58b8:
    // 0x3a58b8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3a58b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a58bc:
    // 0x3a58bc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a58bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a58c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a58c4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3a58c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a58c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3a58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3a58cc: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A58CCu;
    {
        const bool branch_taken_0x3a58cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58CCu;
        // 0x3a58d0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a58cc) {
            ctx->pc = 0x3A58BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a58bc;
        }
    }
    ctx->pc = 0x3A58D4u;
    // 0x3a58d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A58D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58D4u;
        // 0x3a58d8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A58D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A58DCu;
}
