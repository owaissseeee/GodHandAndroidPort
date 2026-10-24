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

// Function: func_003430C8
// Address: 0x3430c8 - 0x3431d8
void func_003430C8_0x3430c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003430C8_0x3430c8");
#endif

    switch (ctx->pc) {
        case 0x343188u: goto label_343188;
        case 0x343198u: goto label_343198;
        default: break;
    }

    ctx->pc = 0x3430c8u;

    // 0x3430c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3430c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3430cc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3430ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3430d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3430d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3430d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3430d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3430d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3430d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3430dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3430dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3430e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3430e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3430e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3430e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3430e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3430e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3430ec: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x3430ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x3430f0: 0x8c49c7d0  lw          $t1, -0x3830($v0)
    ctx->pc = 0x3430f0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3EC7D0u));
    // 0x3430f4: 0x350840d0  ori         $t0, $t0, 0x40D0
    ctx->pc = 0x3430f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16592);
    // 0x3430f8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3430f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3430fc: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x3430fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x343100: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x343100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x343104: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x343104u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x343108: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x343108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x34310c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x34310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x343110: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x343110u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x343114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x343114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x343118: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x343118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x34311c: 0x24452840  addiu       $a1, $v0, 0x2840
    ctx->pc = 0x34311cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x343120: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x343120u;
    {
        const bool branch_taken_0x343120 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x343124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343120u;
        // 0x343124: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343120) {
            ctx->pc = 0x343180u;
            goto label_343180;
        }
    }
    ctx->pc = 0x343128u;
    // 0x343128: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x343128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x34312c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x34312Cu;
    {
        const bool branch_taken_0x34312c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34312c) {
            ctx->pc = 0x343130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34312Cu;
            // 0x343130: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343170u;
            goto label_343170;
        }
    }
    ctx->pc = 0x343134u;
    // 0x343134: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x343134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x343138: 0x8c42c7d4  lw          $v0, -0x382C($v0)
    ctx->pc = 0x343138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EC7D4u));
    // 0x34313c: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x34313cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x343140: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x343140u;
    {
        const bool branch_taken_0x343140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x343140) {
            ctx->pc = 0x343144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343140u;
            // 0x343144: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343170u;
            goto label_343170;
        }
    }
    ctx->pc = 0x343148u;
    // 0x343148: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x343148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x34314c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34314Cu;
    {
        const bool branch_taken_0x34314c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34314c) {
            ctx->pc = 0x343150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34314Cu;
            // 0x343150: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343170u;
            goto label_343170;
        }
    }
    ctx->pc = 0x343154u;
    // 0x343154: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x343154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x343158: 0x24428a30  addiu       $v0, $v0, -0x75D0
    ctx->pc = 0x343158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937136));
    // 0x34315c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x34315cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x758A34u));
    // 0x343160: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x343160u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x758A30u));
    // 0x343164: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x343164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x343168: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x343168u;
    {
        const bool branch_taken_0x343168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343168u;
        // 0x34316c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343168) {
            ctx->pc = 0x34319Cu;
            goto label_34319c;
        }
    }
    ctx->pc = 0x343170u;
label_343170:
    // 0x343170: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x343170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x343174: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x343174u;
    {
        const bool branch_taken_0x343174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343174u;
        // 0x343178: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343174) {
            ctx->pc = 0x34319Cu;
            goto label_34319c;
        }
    }
    ctx->pc = 0x34317Cu;
    // 0x34317c: 0x0  nop
    ctx->pc = 0x34317cu;
    // NOP
label_343180:
    // 0x343180: 0xc0d115a  jal         func_344568
    ctx->pc = 0x343180u;
    SET_GPR_U32(ctx, 31, 0x343188u);
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x343180u, 0x343188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343188u;
label_343188:
    // 0x343188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x343188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34318c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34318cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x343190: 0xc0d115a  jal         func_344568
    ctx->pc = 0x343190u;
    SET_GPR_U32(ctx, 31, 0x343198u);
    ctx->pc = 0x343194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343190u;
    // 0x343194: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x343190u, 0x343198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343198u;
label_343198:
    // 0x343198: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x343198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_34319c:
    // 0x34319c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x34319cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3431a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3431A0u;
    {
        const bool branch_taken_0x3431a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3431a0) {
            ctx->pc = 0x3431A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3431A0u;
            // 0x3431a4: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3431B8u;
            goto label_3431b8;
        }
    }
    ctx->pc = 0x3431A8u;
    // 0x3431a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3431a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3431ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3431ACu;
    {
        const bool branch_taken_0x3431ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3431B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431ACu;
        // 0x3431b0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3431ac) {
            ctx->pc = 0x3431BCu;
            goto label_3431bc;
        }
    }
    ctx->pc = 0x3431B4u;
    // 0x3431b4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x3431b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3431b8:
    // 0x3431b8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3431b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3431bc:
    // 0x3431bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3431bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3431c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3431c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3431c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3431c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3431c8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3431c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3431cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3431CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3431D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3431CCu;
        // 0x3431d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3431CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3431D4u;
    // 0x3431d4: 0x0  nop
    ctx->pc = 0x3431d4u;
    // NOP
    ctx->pc = 0x3431d8u;
}
