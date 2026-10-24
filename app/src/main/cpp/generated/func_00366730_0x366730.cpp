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

// Function: func_00366730
// Address: 0x366730 - 0x366840
void func_00366730_0x366730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366730_0x366730");
#endif

    switch (ctx->pc) {
        case 0x366788u: goto label_366788;
        case 0x3667c0u: goto label_3667c0;
        case 0x3667d0u: goto label_3667d0;
        case 0x3667d8u: goto label_3667d8;
        default: break;
    }

    ctx->pc = 0x366730u;

    // 0x366730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366734: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x366734u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36673c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x36673cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366740: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x366740u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366744: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x366744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x366748: 0x8de2000c  lw          $v0, 0xC($t7)
    ctx->pc = 0x366748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x36674c: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x36674cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x366750: 0x2468000f  addiu       $t0, $v1, 0xF
    ctx->pc = 0x366750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x366754: 0x2447001f  addiu       $a3, $v0, 0x1F
    ctx->pc = 0x366754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x366758: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x366758u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x36675c: 0x105180b  movn        $v1, $t0, $a1
    ctx->pc = 0x36675cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x366760: 0x8de50004  lw          $a1, 0x4($t7)
    ctx->pc = 0x366760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x366764: 0xe4100b  movn        $v0, $a3, $a0
    ctx->pc = 0x366764u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x366768: 0x3c903  sra         $t9, $v1, 4
    ctx->pc = 0x366768u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 3), 4));
    // 0x36676c: 0x25143  sra         $t2, $v0, 5
    ctx->pc = 0x36676cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 5));
    // 0x366770: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x366770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x366774: 0xa8040  sll         $s0, $t2, 1
    ctx->pc = 0x366774u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x366778: 0x1b20002d  blez        $t9, . + 4 + (0x2D << 2)
    ctx->pc = 0x366778u;
    {
        const bool branch_taken_0x366778 = (GPR_S64(ctx, 25) <= 0);
        ctx->pc = 0x36677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366778u;
        // 0x36677c: 0x8f0d0010  lw          $t5, 0x10($t8) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366778) {
            ctx->pc = 0x366830u;
            goto label_366830;
        }
    }
    ctx->pc = 0x366780u;
    // 0x366780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x366780u;
    {
        const bool branch_taken_0x366780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366780u;
        // 0x366784: 0x14e2018  mult        $a0, $t2, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x366780) {
            ctx->pc = 0x366790u;
            goto label_366790;
        }
    }
    ctx->pc = 0x366788u;
label_366788:
    // 0x366788: 0x14e2018  mult        $a0, $t2, $t6
    ctx->pc = 0x366788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x36678c: 0x0  nop
    ctx->pc = 0x36678cu;
    // NOP
label_366790:
    // 0x366790: 0x20a1821  addu        $v1, $s0, $t2
    ctx->pc = 0x366790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x366794: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x366794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x366798: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x366798u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36679c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x36679cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3667a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3667a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3667a4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3667a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3667a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3667a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3667ac: 0x1940001c  blez        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x3667ACu;
    {
        const bool branch_taken_0x3667ac = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x3667B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3667ACu;
        // 0x3667b0: 0x453821  addu        $a3, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3667ac) {
            ctx->pc = 0x366820u;
            goto label_366820;
        }
    }
    ctx->pc = 0x3667B4u;
    // 0x3667b4: 0xe4180  sll         $t0, $t6, 6
    ctx->pc = 0x3667b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
    // 0x3667b8: 0xd6100  sll         $t4, $t5, 4
    ctx->pc = 0x3667b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x3667bc: 0x0  nop
    ctx->pc = 0x3667bcu;
    // NOP
label_3667c0:
    // 0x3667c0: 0x8f020004  lw          $v0, 0x4($t8)
    ctx->pc = 0x3667c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x3667c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3667c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3667c8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3667c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3667cc: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x3667ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_3667d0:
    // 0x3667d0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3667d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3667d4: 0x0  nop
    ctx->pc = 0x3667d4u;
    // NOP
label_3667d8:
    // 0x3667d8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3667d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3667dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3667dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3667e0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3667e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3667e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3667e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3667e8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3667e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3667ec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3667ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3667f0: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3667F0u;
    {
        const bool branch_taken_0x3667f0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x3667F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3667F0u;
        // 0x3667f4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3667f0) {
            ctx->pc = 0x3667D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3667d8;
        }
    }
    ctx->pc = 0x3667F8u;
    // 0x3667f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3667f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3667fc: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x3667fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x366800: 0x29230010  slti        $v1, $t1, 0x10
    ctx->pc = 0x366800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x366804: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x366804u;
    {
        const bool branch_taken_0x366804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366804u;
        // 0x366808: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366804) {
            ctx->pc = 0x3667D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3667d0;
        }
    }
    ctx->pc = 0x36680Cu;
    // 0x36680c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x36680cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x366810: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x366810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x366814: 0x16a102a  slt         $v0, $t3, $t2
    ctx->pc = 0x366814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x366818: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x366818u;
    {
        const bool branch_taken_0x366818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366818u;
        // 0x36681c: 0x10c4021  addu        $t0, $t0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366818) {
            ctx->pc = 0x3667C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3667c0;
        }
    }
    ctx->pc = 0x366820u;
label_366820:
    // 0x366820: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x366820u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x366824: 0x1d9102a  slt         $v0, $t6, $t9
    ctx->pc = 0x366824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x366828: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x366828u;
    {
        const bool branch_taken_0x366828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366828) {
            ctx->pc = 0x36682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366828u;
            // 0x36682c: 0x8de50004  lw          $a1, 0x4($t7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366788;
        }
    }
    ctx->pc = 0x366830u;
label_366830:
    // 0x366830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366834: 0x3e00008  jr          $ra
    ctx->pc = 0x366834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366834u;
        // 0x366838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36683Cu;
    // 0x36683c: 0x0  nop
    ctx->pc = 0x36683cu;
    // NOP
    ctx->pc = 0x366840u;
}
