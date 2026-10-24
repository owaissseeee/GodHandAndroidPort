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

// Function: func_003777C0
// Address: 0x3777c0 - 0x3778d8
void func_003777C0_0x3777c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003777C0_0x3777c0");
#endif

    switch (ctx->pc) {
        case 0x3777e0u: goto label_3777e0;
        case 0x377880u: goto label_377880;
        default: break;
    }

    ctx->pc = 0x3777c0u;

    // 0x3777c0: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3777c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3777c4: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x3777c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x3777c8: 0x244be910  addiu       $t3, $v0, -0x16F0
    ctx->pc = 0x3777c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x3777cc: 0x246ab340  addiu       $t2, $v1, -0x4CC0
    ctx->pc = 0x3777ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947648));
    // 0x3777d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3777d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777d4: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x3777d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3777d8: 0x1091018  mult        $v0, $t0, $t1
    ctx->pc = 0x3777d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3777dc: 0x0  nop
    ctx->pc = 0x3777dcu;
    // NOP
label_3777e0:
    // 0x3777e0: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x3777e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3777e4: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x3777e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3777e8: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x3777e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x3777ec: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x3777ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3777f0: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3777F0u;
    {
        const bool branch_taken_0x3777f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3777F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3777F0u;
        // 0x3777f4: 0x4a3021  addu        $a2, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3777f0) {
            ctx->pc = 0x3778C0u;
            goto label_3778c0;
        }
    }
    ctx->pc = 0x3777F8u;
    // 0x3777f8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3777f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3777fc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3777fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x377800: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x377800u;
    {
        const bool branch_taken_0x377800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x377800) {
            ctx->pc = 0x377804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377800u;
            // 0x377804: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3778C4u;
            goto label_3778c4;
        }
    }
    ctx->pc = 0x377808u;
    // 0x377808: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x377808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37780c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x37780cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x377810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x377810u;
    {
        const bool branch_taken_0x377810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377810u;
        // 0x377814: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377810) {
            ctx->pc = 0x377828u;
            goto label_377828;
        }
    }
    ctx->pc = 0x377818u;
    // 0x377818: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x377818u;
    {
        const bool branch_taken_0x377818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377818u;
        // 0x37781c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377818) {
            ctx->pc = 0x3778C4u;
            goto label_3778c4;
        }
    }
    ctx->pc = 0x377820u;
    // 0x377820: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x377820u;
    {
        const bool branch_taken_0x377820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377820u;
        // 0x377824: 0x34828000  ori         $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377820) {
            ctx->pc = 0x3778BCu;
            goto label_3778bc;
        }
    }
    ctx->pc = 0x377828u;
label_377828:
    // 0x377828: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x377828u;
    {
        const bool branch_taken_0x377828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377828u;
        // 0x37782c: 0x30827fff  andi        $v0, $a0, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377828) {
            ctx->pc = 0x377834u;
            goto label_377834;
        }
    }
    ctx->pc = 0x377830u;
    // 0x377830: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x377830u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_377834:
    // 0x377834: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x377834u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x377838: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x377838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37783c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x37783Cu;
    {
        const bool branch_taken_0x37783c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37783c) {
            ctx->pc = 0x377840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37783Cu;
            // 0x377840: 0x94c40000  lhu         $a0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377860u;
            goto label_377860;
        }
    }
    ctx->pc = 0x377844u;
    // 0x377844: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x377844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377848: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x377848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x37784c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37784Cu;
    {
        const bool branch_taken_0x37784c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37784c) {
            ctx->pc = 0x377850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37784Cu;
            // 0x377850: 0x94c40000  lhu         $a0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377860u;
            goto label_377860;
        }
    }
    ctx->pc = 0x377854u;
    // 0x377854: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x377854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x377858: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x377858u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37785c: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x37785cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_377860:
    // 0x377860: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x377860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x377864: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x377864u;
    {
        const bool branch_taken_0x377864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377864u;
        // 0x377868: 0x25070001  addiu       $a3, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377864) {
            ctx->pc = 0x3778A0u;
            goto label_3778a0;
        }
    }
    ctx->pc = 0x37786Cu;
    // 0x37786c: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x37786cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x377870: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x377870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x377874: 0x24a20034  addiu       $v0, $a1, 0x34
    ctx->pc = 0x377874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x377878: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x377878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37787c: 0x0  nop
    ctx->pc = 0x37787cu;
    // NOP
label_377880:
    // 0x377880: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x377880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x377884: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x377884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x377888: 0x0  nop
    ctx->pc = 0x377888u;
    // NOP
    // 0x37788c: 0x0  nop
    ctx->pc = 0x37788cu;
    // NOP
    // 0x377890: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x377890u;
    {
        const bool branch_taken_0x377890 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x377894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377890u;
        // 0x377894: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377890) {
            ctx->pc = 0x377880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377880;
        }
    }
    ctx->pc = 0x377898u;
    // 0x377898: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x377898u;
    {
        const bool branch_taken_0x377898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377898u;
        // 0x37789c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377898) {
            ctx->pc = 0x3778C4u;
            goto label_3778c4;
        }
    }
    ctx->pc = 0x3778A0u;
label_3778a0:
    // 0x3778a0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3778a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3778a4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3778a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3778a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3778A8u;
    {
        const bool branch_taken_0x3778a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3778ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778A8u;
        // 0x3778ac: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3778a8) {
            ctx->pc = 0x3778C4u;
            goto label_3778c4;
        }
    }
    ctx->pc = 0x3778B0u;
    // 0x3778b0: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x3778b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3778b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3778B4u;
    {
        const bool branch_taken_0x3778b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3778B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778B4u;
        // 0x3778b8: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3778b4) {
            ctx->pc = 0x3778C4u;
            goto label_3778c4;
        }
    }
    ctx->pc = 0x3778BCu;
label_3778bc:
    // 0x3778bc: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x3778bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_3778c0:
    // 0x3778c0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3778c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3778c4:
    // 0x3778c4: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x3778c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3778c8: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3778C8u;
    {
        const bool branch_taken_0x3778c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3778CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778C8u;
        // 0x3778cc: 0x1091018  mult        $v0, $t0, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3778c8) {
            ctx->pc = 0x3777E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3777e0;
        }
    }
    ctx->pc = 0x3778D0u;
    // 0x3778d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3778D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3778D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3778D8u;
}
