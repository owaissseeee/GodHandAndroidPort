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

// Function: _groupOfPicturesHeader
// Address: 0x3a05e0 - 0x3a0680
void _groupOfPicturesHeader_0x3a05e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_groupOfPicturesHeader_0x3a05e0");
#endif

    switch (ctx->pc) {
        case 0x3a0610u: goto label_3a0610;
        case 0x3a061cu: goto label_3a061c;
        case 0x3a0628u: goto label_3a0628;
        case 0x3a0634u: goto label_3a0634;
        case 0x3a0640u: goto label_3a0640;
        case 0x3a064cu: goto label_3a064c;
        case 0x3a0658u: goto label_3a0658;
        case 0x3a0668u: goto label_3a0668;
        default: break;
    }

    ctx->pc = 0x3a05e0u;

    // 0x3a05e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a05e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a05e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a05e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a05e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a05ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a05ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a05f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a05f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a05f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a05f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a05f8: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x3a05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x3a05fc: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x3a05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
    // 0x3a0600: 0xae030864  sw          $v1, 0x864($s0)
    ctx->pc = 0x3a0600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 3));
    // 0x3a0604: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a0604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a0608: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0608u;
    SET_GPR_U32(ctx, 31, 0x3A0610u);
    ctx->pc = 0x3A060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0608u;
    // 0x3a060c: 0xae02085c  sw          $v0, 0x85C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0608u, 0x3A0610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0610u;
label_3a0610:
    // 0x3a0610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0614: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0614u;
    SET_GPR_U32(ctx, 31, 0x3A061Cu);
    ctx->pc = 0x3A0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0614u;
    // 0x3a0618: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0614u, 0x3A061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A061Cu;
label_3a061c:
    // 0x3a061c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0620: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0620u;
    SET_GPR_U32(ctx, 31, 0x3A0628u);
    ctx->pc = 0x3A0624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0620u;
    // 0x3a0624: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0620u, 0x3A0628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0628u;
label_3a0628:
    // 0x3a0628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a062c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A062Cu;
    SET_GPR_U32(ctx, 31, 0x3A0634u);
    ctx->pc = 0x3A0630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A062Cu;
    // 0x3a0630: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A062Cu, 0x3A0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0634u;
label_3a0634:
    // 0x3a0634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0638: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0638u;
    SET_GPR_U32(ctx, 31, 0x3A0640u);
    ctx->pc = 0x3A063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0638u;
    // 0x3a063c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0638u, 0x3A0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0640u;
label_3a0640:
    // 0x3a0640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0644: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0644u;
    SET_GPR_U32(ctx, 31, 0x3A064Cu);
    ctx->pc = 0x3A0648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0644u;
    // 0x3a0648: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0644u, 0x3A064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A064Cu;
label_3a064c:
    // 0x3a064c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a064cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0650: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0650u;
    SET_GPR_U32(ctx, 31, 0x3A0658u);
    ctx->pc = 0x3A0654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0650u;
    // 0x3a0654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0650u, 0x3A0658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0658u;
label_3a0658:
    // 0x3a0658: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x3a0658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x3a065c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a065cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0660: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0660u;
    SET_GPR_U32(ctx, 31, 0x3A0668u);
    ctx->pc = 0x3A0664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0660u;
    // 0x3a0664: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0660u, 0x3A0668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0668u;
label_3a0668:
    // 0x3a0668: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x3a0668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x3a066c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a066cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0678: 0x80e8306  j           func_3A0C18
    ctx->pc = 0x3A0678u;
    ctx->pc = 0x3A067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0678u;
    // 0x3a067c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C18u, 0x3A0678u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A0680u;
}
