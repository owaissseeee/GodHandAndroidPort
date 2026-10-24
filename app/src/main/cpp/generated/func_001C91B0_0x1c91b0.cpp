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

// Function: func_001C91B0
// Address: 0x1c91b0 - 0x1c9268
void func_001C91B0_0x1c91b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C91B0_0x1c91b0");
#endif

    switch (ctx->pc) {
        case 0x1c91ecu: goto label_1c91ec;
        case 0x1c920cu: goto label_1c920c;
        case 0x1c922cu: goto label_1c922c;
        case 0x1c9240u: goto label_1c9240;
        case 0x1c9250u: goto label_1c9250;
        default: break;
    }

    ctx->pc = 0x1c91b0u;

    // 0x1c91b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c91b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c91b4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c91b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c91b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c91bc: 0x2442aa98  addiu       $v0, $v0, -0x5568
    ctx->pc = 0x1c91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945432));
    // 0x1c91c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c91c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c91c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c91c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c91c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c91c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c91cc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1c91ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1c91d0: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x1c91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x1c91d4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C91D4u;
    {
        const bool branch_taken_0x1c91d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91D4u;
        // 0x1c91d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91d4) {
            ctx->pc = 0x1C91FCu;
            goto label_1c91fc;
        }
    }
    ctx->pc = 0x1C91DCu;
    // 0x1c91dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c91dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1c91e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c91e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c91e4: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1C91E4u;
    SET_GPR_U32(ctx, 31, 0x1C91ECu);
    ctx->pc = 0x1C91E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91E4u;
    // 0x1c91e8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1C91E4u, 0x1C91ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C91ECu;
label_1c91ec:
    // 0x1c91ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C91ECu;
    {
        const bool branch_taken_0x1c91ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91ECu;
        // 0x1c91f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91ec) {
            ctx->pc = 0x1C91FCu;
            goto label_1c91fc;
        }
    }
    ctx->pc = 0x1C91F4u;
    // 0x1c91f4: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x1c91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
    // 0x1c91f8: 0xae020654  sw          $v0, 0x654($s0)
    ctx->pc = 0x1c91f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1620), GPR_U32(ctx, 2));
label_1c91fc:
    // 0x1c91fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c91fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9200: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c9200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c9204: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1C9204u;
    SET_GPR_U32(ctx, 31, 0x1C920Cu);
    ctx->pc = 0x1C9208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9204u;
    // 0x1c9208: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1C9204u, 0x1C920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C920Cu;
label_1c920c:
    // 0x1c920c: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c920cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1c9210: 0x240203ae  addiu       $v0, $zero, 0x3AE
    ctx->pc = 0x1c9210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 942));
    // 0x1c9214: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9214u;
    {
        const bool branch_taken_0x1c9214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9214) {
            ctx->pc = 0x1C9218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9214u;
            // 0x1c9218: 0x8e04068c  lw          $a0, 0x68C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9230u;
            goto label_1c9230;
        }
    }
    ctx->pc = 0x1C921Cu;
    // 0x1c921c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1c921cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1c9220: 0x24050206  addiu       $a1, $zero, 0x206
    ctx->pc = 0x1c9220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x1c9224: 0xc0c15de  jal         func_305778
    ctx->pc = 0x1C9224u;
    SET_GPR_U32(ctx, 31, 0x1C922Cu);
    ctx->pc = 0x1C9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9224u;
    // 0x1c9228: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x1C9224u, 0x1C922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C922Cu;
label_1c922c:
    // 0x1c922c: 0x8e04068c  lw          $a0, 0x68C($s0)
    ctx->pc = 0x1c922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1676)));
label_1c9230:
    // 0x1c9230: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9230u;
    {
        const bool branch_taken_0x1c9230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9230) {
            ctx->pc = 0x1C9234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9230u;
            // 0x1c9234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9248u;
            goto label_1c9248;
        }
    }
    ctx->pc = 0x1C9238u;
    // 0x1c9238: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1C9238u;
    SET_GPR_U32(ctx, 31, 0x1C9240u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1C9238u, 0x1C9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9240u;
label_1c9240:
    // 0x1c9240: 0xae00068c  sw          $zero, 0x68C($s0)
    ctx->pc = 0x1c9240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 0));
    // 0x1c9244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9248:
    // 0x1c9248: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1C9248u;
    SET_GPR_U32(ctx, 31, 0x1C9250u);
    ctx->pc = 0x1C924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9248u;
    // 0x1c924c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1C9248u, 0x1C9250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9250u;
label_1c9250:
    // 0x1c9250: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c9250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c925c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C925Cu;
        // 0x1c9260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C925Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9264u;
    // 0x1c9264: 0x0  nop
    ctx->pc = 0x1c9264u;
    // NOP
    ctx->pc = 0x1c9268u;
}
