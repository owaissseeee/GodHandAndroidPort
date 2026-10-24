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

// Function: func_0035F788
// Address: 0x35f788 - 0x35f830
void func_0035F788_0x35f788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F788_0x35f788");
#endif

    switch (ctx->pc) {
        case 0x35f7b8u: goto label_35f7b8;
        case 0x35f7c8u: goto label_35f7c8;
        case 0x35f7d8u: goto label_35f7d8;
        case 0x35f7e8u: goto label_35f7e8;
        case 0x35f7f8u: goto label_35f7f8;
        case 0x35f808u: goto label_35f808;
        default: break;
    }

    ctx->pc = 0x35f788u;

    // 0x35f788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f78c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35f790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35f794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35f798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35f79c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x35f79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f7a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35f7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35f7a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35f7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f7a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35f7ac: 0x24455d18  addiu       $a1, $v0, 0x5D18
    ctx->pc = 0x35f7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23832));
    // 0x35f7b0: 0xc0d7bcc  jal         func_35EF30
    ctx->pc = 0x35F7B0u;
    SET_GPR_U32(ctx, 31, 0x35F7B8u);
    ctx->pc = 0x35F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F7B0u;
    // 0x35f7b4: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF30u, 0x35F7B0u, 0x35F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F7B8u;
label_35f7b8:
    // 0x35f7b8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35f7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35f7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f7c0: 0xc0d7bce  jal         func_35EF38
    ctx->pc = 0x35F7C0u;
    SET_GPR_U32(ctx, 31, 0x35F7C8u);
    ctx->pc = 0x35F7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F7C0u;
    // 0x35f7c4: 0x24a56730  addiu       $a1, $a1, 0x6730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF38u, 0x35F7C0u, 0x35F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F7C8u;
label_35f7c8:
    // 0x35f7c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35f7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35f7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f7d0: 0xc0d7bd0  jal         func_35EF40
    ctx->pc = 0x35F7D0u;
    SET_GPR_U32(ctx, 31, 0x35F7D8u);
    ctx->pc = 0x35F7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F7D0u;
    // 0x35f7d4: 0x24a55ec0  addiu       $a1, $a1, 0x5EC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF40u, 0x35F7D0u, 0x35F7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F7D8u;
label_35f7d8:
    // 0x35f7d8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35f7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f7e0: 0xc0d7bd4  jal         func_35EF50
    ctx->pc = 0x35F7E0u;
    SET_GPR_U32(ctx, 31, 0x35F7E8u);
    ctx->pc = 0x35F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F7E0u;
    // 0x35f7e4: 0x24a56368  addiu       $a1, $a1, 0x6368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF50u, 0x35F7E0u, 0x35F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F7E8u;
label_35f7e8:
    // 0x35f7e8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35f7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f7f0: 0xc0d7bd8  jal         func_35EF60
    ctx->pc = 0x35F7F0u;
    SET_GPR_U32(ctx, 31, 0x35F7F8u);
    ctx->pc = 0x35F7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F7F0u;
    // 0x35f7f4: 0x24a56110  addiu       $a1, $a1, 0x6110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF60u, 0x35F7F0u, 0x35F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F7F8u;
label_35f7f8:
    // 0x35f7f8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35f7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f800: 0xc0d7bdc  jal         func_35EF70
    ctx->pc = 0x35F800u;
    SET_GPR_U32(ctx, 31, 0x35F808u);
    ctx->pc = 0x35F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F800u;
    // 0x35f804: 0x24a565c0  addiu       $a1, $a1, 0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF70u, 0x35F800u, 0x35F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F808u;
label_35f808:
    // 0x35f808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f80c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f810: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f814: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35f814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f81c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f81cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f820: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35f820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f824: 0x80d7bde  j           func_35EF78
    ctx->pc = 0x35F824u;
    ctx->pc = 0x35F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F824u;
    // 0x35f828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF78u, 0x35F824u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35F82Cu;
    // 0x35f82c: 0x0  nop
    ctx->pc = 0x35f82cu;
    // NOP
    ctx->pc = 0x35f830u;
}
