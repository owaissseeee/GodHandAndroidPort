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

// Function: func_0033C7F8
// Address: 0x33c7f8 - 0x33c918
void func_0033C7F8_0x33c7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C7F8_0x33c7f8");
#endif

    switch (ctx->pc) {
        case 0x33c840u: goto label_33c840;
        case 0x33c894u: goto label_33c894;
        case 0x33c8a0u: goto label_33c8a0;
        case 0x33c8b0u: goto label_33c8b0;
        case 0x33c8f0u: goto label_33c8f0;
        default: break;
    }

    ctx->pc = 0x33c7f8u;

    // 0x33c7f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33c7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33c7fc: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x33c7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x33c800: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33c804: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33c804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c808: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33c808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33c80c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x33c80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c810: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33c810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33c814: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33c814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c818: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33c818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33c81c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33c81cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c824: 0x25039d60  addiu       $v1, $t0, -0x62A0
    ctx->pc = 0x33c824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942048));
    // 0x33c828: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33c828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x33c82c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x33c82cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3E9D60u));
    // 0x33c830: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33C830u;
    {
        const bool branch_taken_0x33c830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C830u;
        // 0x33c834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c830) {
            ctx->pc = 0x33C864u;
            goto label_33c864;
        }
    }
    ctx->pc = 0x33C838u;
    // 0x33c838: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x33c838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33c83c: 0x0  nop
    ctx->pc = 0x33c83cu;
    // NOP
label_33c840:
    // 0x33c840: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x33c840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x33c844: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33C844u;
    {
        const bool branch_taken_0x33c844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C844u;
        // 0x33c848: 0x24630104  addiu       $v1, $v1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c844) {
            ctx->pc = 0x33C864u;
            goto label_33c864;
        }
    }
    ctx->pc = 0x33C84Cu;
    // 0x33c84c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x33c84cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c850: 0x0  nop
    ctx->pc = 0x33c850u;
    // NOP
    // 0x33c854: 0x0  nop
    ctx->pc = 0x33c854u;
    // NOP
    // 0x33c858: 0x0  nop
    ctx->pc = 0x33c858u;
    // NOP
    // 0x33c85c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33C85Cu;
    {
        const bool branch_taken_0x33c85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c85c) {
            ctx->pc = 0x33C860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C85Cu;
            // 0x33c860: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c840;
        }
    }
    ctx->pc = 0x33C864u;
label_33c864:
    // 0x33c864: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x33c864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33c868: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x33C868u;
    {
        const bool branch_taken_0x33c868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x33C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C868u;
        // 0x33c86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c868) {
            ctx->pc = 0x33C8F4u;
            goto label_33c8f4;
        }
    }
    ctx->pc = 0x33C870u;
    // 0x33c870: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x33c870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x33c874: 0x25039d60  addiu       $v1, $t0, -0x62A0
    ctx->pc = 0x33c874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942048));
    // 0x33c878: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33c87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33c880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33c884: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x33c884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x33c888: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33c888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c88c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33C88Cu;
    SET_GPR_U32(ctx, 31, 0x33C894u);
    ctx->pc = 0x33C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C88Cu;
    // 0x33c890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33C88Cu, 0x33C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C894u;
label_33c894:
    // 0x33c894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33c894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c898: 0xc0cfe2e  jal         func_33F8B8
    ctx->pc = 0x33C898u;
    SET_GPR_U32(ctx, 31, 0x33C8A0u);
    ctx->pc = 0x33C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C898u;
    // 0x33c89c: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F8B8u, 0x33C898u, 0x33C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8A0u;
label_33c8a0:
    // 0x33c8a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33C8A0u;
    {
        const bool branch_taken_0x33c8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C8A0u;
        // 0x33c8a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c8a0) {
            ctx->pc = 0x33C8B8u;
            goto label_33c8b8;
        }
    }
    ctx->pc = 0x33C8A8u;
    // 0x33c8a8: 0xc0cf246  jal         func_33C918
    ctx->pc = 0x33C8A8u;
    SET_GPR_U32(ctx, 31, 0x33C8B0u);
    ctx->pc = 0x33C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8A8u;
    // 0x33c8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C918u, 0x33C8A8u, 0x33C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8B0u;
label_33c8b0:
    // 0x33c8b0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33C8B0u;
    {
        const bool branch_taken_0x33c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C8B0u;
        // 0x33c8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c8b0) {
            ctx->pc = 0x33C8F4u;
            goto label_33c8f4;
        }
    }
    ctx->pc = 0x33C8B8u;
label_33c8b8:
    // 0x33c8b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x33c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x33c8bc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x33c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x33c8c0: 0x2442c770  addiu       $v0, $v0, -0x3890
    ctx->pc = 0x33c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
    // 0x33c8c4: 0x2463c7a0  addiu       $v1, $v1, -0x3860
    ctx->pc = 0x33c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952864));
    // 0x33c8c8: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x33c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x33c8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c8d0: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x33c8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x33c8d4: 0xae13003c  sw          $s3, 0x3C($s0)
    ctx->pc = 0x33c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
    // 0x33c8d8: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x33c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x33c8dc: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x33c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x33c8e0: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x33c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x33c8e4: 0xae10007c  sw          $s0, 0x7C($s0)
    ctx->pc = 0x33c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 16));
    // 0x33c8e8: 0xc0cf1f0  jal         func_33C7C0
    ctx->pc = 0x33C8E8u;
    SET_GPR_U32(ctx, 31, 0x33C8F0u);
    ctx->pc = 0x33C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C8E8u;
    // 0x33c8ec: 0xae100084  sw          $s0, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C7C0u, 0x33C8E8u, 0x33C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C8F0u;
label_33c8f0:
    // 0x33c8f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33c8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c8f4:
    // 0x33c8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c8f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c8fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33c8fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c900: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33c900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33c904: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33c904u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c908: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33c90c: 0x3e00008  jr          $ra
    ctx->pc = 0x33C90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C90Cu;
        // 0x33c910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C914u;
    // 0x33c914: 0x0  nop
    ctx->pc = 0x33c914u;
    // NOP
    ctx->pc = 0x33c918u;
}
