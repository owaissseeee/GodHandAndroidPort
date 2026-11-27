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

// Function: mfCiOpen
// Address: 0x336618 - 0x3366b8
void mfCiOpen_0x336618(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mfCiOpen_0x336618");
#endif

    if (__builtin_expect(ctx->pc != 0x336618u, 0)) {
        switch (ctx->pc) {
            case 0x336660u: goto label_336660;
            case 0x33667cu: goto label_33667c;
            case 0x336694u: goto label_336694;
            case 0x33669cu: goto label_33669c;
            default: break;
        }
    }


    // 0x336618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33661c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x336620: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336628: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x336628u;
    {
        const bool branch_taken_0x336628 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x33662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336628u;
        // 0x33662c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336628) {
            ctx->pc = 0x336640u;
            goto label_336640;
        }
    }
    // 0x336630: 0x3c050045  lui         $a1, 0x45
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x336634: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x336634u;
    {
        const bool branch_taken_0x336634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336634u;
        // 0x336638: 0x24a55090  addiu       $a1, $a1, 0x5090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336634) {
            ctx->pc = 0x336674u;
            goto label_336674;
        }
    }
    // 0x33663c: 0x0  nop
    // NOP
label_336640:
    // 0x336640: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x336640u;
    {
        const bool branch_taken_0x336640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x336644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336640u;
        // 0x336644: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336640) {
            ctx->pc = 0x336658u;
            goto label_336658;
        }
    }
    // 0x336648: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33664c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33664Cu;
    {
        const bool branch_taken_0x33664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33664Cu;
        // 0x336650: 0x24a550b8  addiu       $a1, $a1, 0x50B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33664c) {
            ctx->pc = 0x336674u;
            goto label_336674;
        }
    }
    // 0x336654: 0x0  nop
    // NOP
label_336658:
    // 0x336658: 0xc0cd94c  jal         func_336530
    ctx->pc = 0x336658u;
    SET_GPR_U32(ctx, 31, 0x336660u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00336530_0x336530, 0x336530u, 0x336660u)) {
        return;
    }
label_336660:
    // 0x336660: 0x3c050045  lui         $a1, 0x45
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x336664: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336668: 0x24a550e0  addiu       $a1, $a1, 0x50E0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20704));
    // 0x33666c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33666Cu;
    {
        const bool branch_taken_0x33666c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x336670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33666Cu;
        // 0x336670: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33666c) {
            ctx->pc = 0x336688u;
            goto label_336688;
        }
    }
label_336674:
    // 0x336674: 0xc0cd8cc  jal         func_336330
    ctx->pc = 0x336674u;
    SET_GPR_U32(ctx, 31, 0x33667Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00336330_0x336330, 0x336330u, 0x33667cu)) {
        return;
    }
label_33667c:
    // 0x33667c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33667Cu;
    {
        const bool branch_taken_0x33667c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33667Cu;
        // 0x336680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33667c) {
            ctx->pc = 0x3366A0u;
            goto label_3366a0;
        }
    }
    // 0x336684: 0x0  nop
    // NOP
label_336688:
    // 0x336688: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33668c: 0xc0e95f1  jal         func_3A57C4
    SET_GPR_U32(ctx, 31, 0x336694u);
    ctx->pc = 0x336690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33668Cu;
    // 0x336690: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003A57C4_0x3a57c4, 0x3a57c4u, 0x336694u)) {
        return;
    }
label_336694:
    // 0x336694: 0xc0cd96a  jal         func_3365A8
    SET_GPR_U32(ctx, 31, 0x33669Cu);
    ctx->pc = 0x336698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336694u;
    // 0x336698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003365A8_0x3365a8, 0x3365a8u, 0x33669cu)) {
        return;
    }
label_33669c:
    // 0x33669c: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3366a0:
    // 0x3366a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3366a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3366a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3366a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3366a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3366a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3366ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3366ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3366B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366ACu;
        // 0x3366b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3366ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x3366b4: 0x0  nop
    // NOP
    ctx->pc = 0x3366b8u;
}