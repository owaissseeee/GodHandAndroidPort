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

// Function: func_003505F8
// Address: 0x3505f8 - 0x3506d8
void func_003505F8_0x3505f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003505F8_0x3505f8");
#endif

    switch (ctx->pc) {
        case 0x350608u: goto label_350608;
        case 0x350610u: goto label_350610;
        case 0x350618u: goto label_350618;
        case 0x350644u: goto label_350644;
        case 0x350694u: goto label_350694;
        case 0x3506a8u: goto label_3506a8;
        case 0x3506bcu: goto label_3506bc;
        default: break;
    }

    ctx->pc = 0x3505f8u;

    // 0x3505f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3505f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3505fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3505fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350600: 0xc0d58da  jal         func_356368
    ctx->pc = 0x350600u;
    SET_GPR_U32(ctx, 31, 0x350608u);
    ctx->pc = 0x356368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356368u, 0x350600u, 0x350608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350608u;
label_350608:
    // 0x350608: 0xc0d41b6  jal         func_3506D8
    ctx->pc = 0x350608u;
    SET_GPR_U32(ctx, 31, 0x350610u);
    ctx->pc = 0x3506D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3506D8u, 0x350608u, 0x350610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350610u;
label_350610:
    // 0x350610: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x350610u;
    {
        const bool branch_taken_0x350610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350610u;
        // 0x350614: 0x3c050076  lui         $a1, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350610) {
            ctx->pc = 0x350638u;
            goto label_350638;
        }
    }
    ctx->pc = 0x350618u;
label_350618:
    // 0x350618: 0x0  nop
    ctx->pc = 0x350618u;
    // NOP
    // 0x35061c: 0x0  nop
    ctx->pc = 0x35061cu;
    // NOP
    // 0x350620: 0x0  nop
    ctx->pc = 0x350620u;
    // NOP
    // 0x350624: 0x0  nop
    ctx->pc = 0x350624u;
    // NOP
    // 0x350628: 0x0  nop
    ctx->pc = 0x350628u;
    // NOP
    // 0x35062c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x35062Cu;
    {
        const bool branch_taken_0x35062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35062c) {
            ctx->pc = 0x350618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_350618;
        }
    }
    ctx->pc = 0x350634u;
    // 0x350634: 0x0  nop
    ctx->pc = 0x350634u;
    // NOP
label_350638:
    // 0x350638: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x350638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35063c: 0xc0daf80  jal         func_36BE00
    ctx->pc = 0x35063Cu;
    SET_GPR_U32(ctx, 31, 0x350644u);
    ctx->pc = 0x350640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35063Cu;
    // 0x350640: 0x24a52868  addiu       $a1, $a1, 0x2868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BE00u, 0x35063Cu, 0x350644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350644u;
label_350644:
    // 0x350644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x350644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350648: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x350648u;
    {
        const bool branch_taken_0x350648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350648u;
        // 0x35064c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350648) {
            ctx->pc = 0x350680u;
            goto label_350680;
        }
    }
    ctx->pc = 0x350650u;
    // 0x350650: 0x3c02ff03  lui         $v0, 0xFF03
    ctx->pc = 0x350650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65283 << 16));
    // 0x350654: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x350654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x350658: 0x3442ff05  ori         $v0, $v0, 0xFF05
    ctx->pc = 0x350658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65285);
    // 0x35065c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35065cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x350660: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x350660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x350664: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x350664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350668: 0x34630f01  ori         $v1, $v1, 0xF01
    ctx->pc = 0x350668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3841);
    // 0x35066c: 0x34a50f13  ori         $a1, $a1, 0xF13
    ctx->pc = 0x35066cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3859);
    // 0x350670: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x350670u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x350674: 0x80d375c  j           func_34DD70
    ctx->pc = 0x350674u;
    ctx->pc = 0x350678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350674u;
    // 0x350678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x350674u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35067Cu;
    // 0x35067c: 0x0  nop
    ctx->pc = 0x35067cu;
    // NOP
label_350680:
    // 0x350680: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x350680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x350684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x350684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350688: 0x24846ba8  addiu       $a0, $a0, 0x6BA8
    ctx->pc = 0x350688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27560));
    // 0x35068c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x35068Cu;
    SET_GPR_U32(ctx, 31, 0x350694u);
    ctx->pc = 0x350690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35068Cu;
    // 0x350690: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x35068Cu, 0x350694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350694u;
label_350694:
    // 0x350694: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x350694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x350698: 0x24846bd0  addiu       $a0, $a0, 0x6BD0
    ctx->pc = 0x350698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27600));
    // 0x35069c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35069cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3506a0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3506A0u;
    SET_GPR_U32(ctx, 31, 0x3506A8u);
    ctx->pc = 0x3506A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3506A0u;
    // 0x3506a4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3506A0u, 0x3506A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3506A8u;
label_3506a8:
    // 0x3506a8: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x3506a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x3506ac: 0x24846bd8  addiu       $a0, $a0, 0x6BD8
    ctx->pc = 0x3506acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27608));
    // 0x3506b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3506b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3506b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3506B4u;
    SET_GPR_U32(ctx, 31, 0x3506BCu);
    ctx->pc = 0x3506B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3506B4u;
    // 0x3506b8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3506B4u, 0x3506BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3506BCu;
label_3506bc:
    // 0x3506bc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3506bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3506c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3506c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3506c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3506c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3506c8: 0xac60e2ec  sw          $zero, -0x1D14($v1)
    ctx->pc = 0x3506c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EE2ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE2ECu, _value); } while (0);
    // 0x3506cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3506CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3506D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3506CCu;
        // 0x3506d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3506CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3506D4u;
    // 0x3506d4: 0x0  nop
    ctx->pc = 0x3506d4u;
    // NOP
    ctx->pc = 0x3506d8u;
}
