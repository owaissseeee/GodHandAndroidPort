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

// Function: _sceMpegFlush
// Address: 0x39b810 - 0x39b8d0
void _sceMpegFlush_0x39b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegFlush_0x39b810");
#endif

    switch (ctx->pc) {
        case 0x39b85cu: goto label_39b85c;
        case 0x39b884u: goto label_39b884;
        case 0x39b89cu: goto label_39b89c;
        default: break;
    }

    ctx->pc = 0x39b810u;

    // 0x39b810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39b814: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39b818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39b818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39b81c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39b81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b824: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x39b824u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x39b828: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39b82c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x39B82Cu;
    {
        const bool branch_taken_0x39b82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B82Cu;
        // 0x39b830: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b82c) {
            ctx->pc = 0x39B8B8u;
            goto label_39b8b8;
        }
    }
    ctx->pc = 0x39B834u;
    // 0x39b834: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x39b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39b838: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x39B838u;
    {
        const bool branch_taken_0x39b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B838u;
        // 0x39b83c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b838) {
            ctx->pc = 0x39B8BCu;
            goto label_39b8bc;
        }
    }
    ctx->pc = 0x39B840u;
    // 0x39b840: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x39b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x39b844: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39B844u;
    {
        const bool branch_taken_0x39b844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B844u;
        // 0x39b848: 0x8e060128  lw          $a2, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b844) {
            ctx->pc = 0x39B864u;
            goto label_39b864;
        }
    }
    ctx->pc = 0x39B84Cu;
    // 0x39b84c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39b84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39b850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39b850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b854: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39B854u;
    SET_GPR_U32(ctx, 31, 0x39B85Cu);
    ctx->pc = 0x39B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B854u;
    // 0x39b858: 0x24a5e5d8  addiu       $a1, $a1, -0x1A28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39B854u, 0x39B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B85Cu;
label_39b85c:
    // 0x39b85c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x39B85Cu;
    {
        const bool branch_taken_0x39b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B85Cu;
        // 0x39b860: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b85c) {
            ctx->pc = 0x39B8A0u;
            goto label_39b8a0;
        }
    }
    ctx->pc = 0x39B864u;
label_39b864:
    // 0x39b864: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x39b864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x39b868: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39b86c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39B86Cu;
    {
        const bool branch_taken_0x39b86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B86Cu;
        // 0x39b870: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b86c) {
            ctx->pc = 0x39B88Cu;
            goto label_39b88c;
        }
    }
    ctx->pc = 0x39B874u;
    // 0x39b874: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x39b874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x39b878: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x39b878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x39b87c: 0xc0e6c4c  jal         func_39B130
    ctx->pc = 0x39B87Cu;
    SET_GPR_U32(ctx, 31, 0x39B884u);
    ctx->pc = 0x39B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B87Cu;
    // 0x39b880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B130u, 0x39B87Cu, 0x39B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B884u;
label_39b884:
    // 0x39b884: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39B884u;
    {
        const bool branch_taken_0x39b884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B884u;
        // 0x39b888: 0x8e020128  lw          $v0, 0x128($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b884) {
            ctx->pc = 0x39B8A0u;
            goto label_39b8a0;
        }
    }
    ctx->pc = 0x39B88Cu;
label_39b88c:
    // 0x39b88c: 0x8e0501dc  lw          $a1, 0x1DC($s0)
    ctx->pc = 0x39b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x39b890: 0x8e0601ec  lw          $a2, 0x1EC($s0)
    ctx->pc = 0x39b890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x39b894: 0xc0e6cfc  jal         func_39B3F0
    ctx->pc = 0x39B894u;
    SET_GPR_U32(ctx, 31, 0x39B89Cu);
    ctx->pc = 0x39B898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B894u;
    // 0x39b898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B3F0u, 0x39B894u, 0x39B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B89Cu;
label_39b89c:
    // 0x39b89c: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x39b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_39b8a0:
    // 0x39b8a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b8a4: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x39b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x39b8a8: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x39b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x39b8ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39b8b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x39b8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x39b8b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x39b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_39b8b8:
    // 0x39b8b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39b8bc:
    // 0x39b8bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39b8bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b8c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39b8c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b8c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x39B8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B8C8u;
        // 0x39b8cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B8D0u;
}
