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

// Function: iSetTimerAlarm
// Address: 0x3b7898 - 0x3b7988
void iSetTimerAlarm_0x3b7898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iSetTimerAlarm_0x3b7898");
#endif

    switch (ctx->pc) {
        case 0x3b7908u: goto label_3b7908;
        case 0x3b794cu: goto label_3b794c;
        case 0x3b7954u: goto label_3b7954;
        default: break;
    }

    ctx->pc = 0x3b7898u;

    // 0x3b7898: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b7898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b789c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3b789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3b78a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b78a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b78a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b78a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b78a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b78a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b78ac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3b78acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b78b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b78b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3b78b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b78b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b78b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b78b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b78bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b78bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b78c0: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B78C0u;
    {
        const bool branch_taken_0x3b78c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78C0u;
        // 0x3b78c4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b78c0) {
            ctx->pc = 0x3B78D4u;
            goto label_3b78d4;
        }
    }
    ctx->pc = 0x3B78C8u;
    // 0x3b78c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b78cc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3B78CCu;
    {
        const bool branch_taken_0x3b78cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78CCu;
        // 0x3b78d0: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b78cc) {
            ctx->pc = 0x3B7964u;
            goto label_3b7964;
        }
    }
    ctx->pc = 0x3B78D4u;
label_3b78d4:
    // 0x3b78d4: 0x3c120078  lui         $s2, 0x78
    ctx->pc = 0x3b78d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)120 << 16));
    // 0x3b78d8: 0x8e504040  lw          $s0, 0x4040($s2)
    ctx->pc = 0x3b78d8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x784040u));
    // 0x3b78dc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B78DCu;
    {
        const bool branch_taken_0x3b78dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b78dc) {
            ctx->pc = 0x3B78ECu;
            goto label_3b78ec;
        }
    }
    ctx->pc = 0x3B78E4u;
    // 0x3b78e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b78e8: 0xae424040  sw          $v0, 0x4040($s2)
    ctx->pc = 0x3b78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16448), GPR_U32(ctx, 2));
label_3b78ec:
    // 0x3b78ec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B78ECu;
    {
        const bool branch_taken_0x3b78ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b78ec) {
            ctx->pc = 0x3B7900u;
            goto label_3b7900;
        }
    }
    ctx->pc = 0x3B78F4u;
    // 0x3b78f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b78f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b78f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3B78F8u;
    {
        const bool branch_taken_0x3b78f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B78F8u;
        // 0x3b78fc: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b78f8) {
            ctx->pc = 0x3B7964u;
            goto label_3b7964;
        }
    }
    ctx->pc = 0x3B7900u;
label_3b7900:
    // 0x3b7900: 0xc0edc80  jal         func_3B7200
    ctx->pc = 0x3B7900u;
    SET_GPR_U32(ctx, 31, 0x3B7908u);
    ctx->pc = 0x3B7200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7200u, 0x3B7900u, 0x3B7908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7908u;
label_3b7908:
    // 0x3b7908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b7908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b790c: 0x6230007  bgezl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B790Cu;
    {
        const bool branch_taken_0x3b790c = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x3b790c) {
            ctx->pc = 0x3B7910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B790Cu;
            // 0x3b7910: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B792Cu;
            goto label_3b792c;
        }
    }
    ctx->pc = 0x3B7914u;
    // 0x3b7914: 0x8e434040  lw          $v1, 0x4040($s2)
    ctx->pc = 0x3b7914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16448)));
    // 0x3b7918: 0xae504040  sw          $s0, 0x4040($s2)
    ctx->pc = 0x3b7918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16448), GPR_U32(ctx, 16));
    // 0x3b791c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b791cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3b7920: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3b7920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3b7924: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B7924u;
    {
        const bool branch_taken_0x3b7924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7924u;
        // 0x3b7928: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7924) {
            ctx->pc = 0x3B7968u;
            goto label_3b7968;
        }
    }
    ctx->pc = 0x3B792Cu;
label_3b792c:
    // 0x3b792c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x3b792cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x3b7930: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x3b7930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x3b7934: 0x24c67708  addiu       $a2, $a2, 0x7708
    ctx->pc = 0x3b7934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30472));
    // 0x3b7938: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3b7938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x3b793c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b793cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b7940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7944: 0xc0edd00  jal         func_3B7400
    ctx->pc = 0x3B7944u;
    SET_GPR_U32(ctx, 31, 0x3B794Cu);
    ctx->pc = 0x3B7948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7944u;
    // 0x3b7948: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7400u, 0x3B7944u, 0x3B794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B794Cu;
label_3b794c:
    // 0x3b794c: 0xc0edcb4  jal         func_3B72D0
    ctx->pc = 0x3B794Cu;
    SET_GPR_U32(ctx, 31, 0x3B7954u);
    ctx->pc = 0x3B7950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B794Cu;
    // 0x3b7950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B72D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B72D0u, 0x3B794Cu, 0x3B7954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7954u;
label_3b7954:
    // 0x3b7954: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3b7954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3b7958: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x3b7958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x3b795c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b7960: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3b7960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3b7964:
    // 0x3b7964: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b7964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3b7968:
    // 0x3b7968: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3b7968u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b796c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b796cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b7970: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b7970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7974: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b7974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7978: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b7978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b797c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b797cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7980: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7980u;
        // 0x3b7984: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7988u;
}
