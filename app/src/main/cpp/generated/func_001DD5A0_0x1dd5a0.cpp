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

// Function: func_001DD5A0
// Address: 0x1dd5a0 - 0x1dd648
void func_001DD5A0_0x1dd5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DD5A0_0x1dd5a0");
#endif

    switch (ctx->pc) {
        case 0x1dd5c4u: goto label_1dd5c4;
        case 0x1dd5d4u: goto label_1dd5d4;
        case 0x1dd5e4u: goto label_1dd5e4;
        case 0x1dd5f4u: goto label_1dd5f4;
        case 0x1dd604u: goto label_1dd604;
        case 0x1dd614u: goto label_1dd614;
        case 0x1dd624u: goto label_1dd624;
        case 0x1dd634u: goto label_1dd634;
        default: break;
    }

    ctx->pc = 0x1dd5a0u;

    // 0x1dd5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd5a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dd5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dd5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dd5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd5b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5bc: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD5BCu;
    SET_GPR_U32(ctx, 31, 0x1DD5C4u);
    ctx->pc = 0x1DD5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5BCu;
    // 0x1dd5c0: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD5BCu, 0x1DD5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5C4u;
label_1dd5c4:
    // 0x1dd5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5cc: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD5CCu;
    SET_GPR_U32(ctx, 31, 0x1DD5D4u);
    ctx->pc = 0x1DD5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5CCu;
    // 0x1dd5d0: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD5CCu, 0x1DD5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5D4u;
label_1dd5d4:
    // 0x1dd5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5dc: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD5DCu;
    SET_GPR_U32(ctx, 31, 0x1DD5E4u);
    ctx->pc = 0x1DD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5DCu;
    // 0x1dd5e0: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD5DCu, 0x1DD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5E4u;
label_1dd5e4:
    // 0x1dd5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5ec: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD5ECu;
    SET_GPR_U32(ctx, 31, 0x1DD5F4u);
    ctx->pc = 0x1DD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5ECu;
    // 0x1dd5f0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD5ECu, 0x1DD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5F4u;
label_1dd5f4:
    // 0x1dd5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5fc: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD5FCu;
    SET_GPR_U32(ctx, 31, 0x1DD604u);
    ctx->pc = 0x1DD600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5FCu;
    // 0x1dd600: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD5FCu, 0x1DD604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD604u;
label_1dd604:
    // 0x1dd604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd608: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd60c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD60Cu;
    SET_GPR_U32(ctx, 31, 0x1DD614u);
    ctx->pc = 0x1DD610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD60Cu;
    // 0x1dd610: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD60Cu, 0x1DD614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD614u;
label_1dd614:
    // 0x1dd614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd618: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd61c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD61Cu;
    SET_GPR_U32(ctx, 31, 0x1DD624u);
    ctx->pc = 0x1DD620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD61Cu;
    // 0x1dd620: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD61Cu, 0x1DD624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD624u;
label_1dd624:
    // 0x1dd624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd628: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dd628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd62c: 0xc077496  jal         func_1DD258
    ctx->pc = 0x1DD62Cu;
    SET_GPR_U32(ctx, 31, 0x1DD634u);
    ctx->pc = 0x1DD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD62Cu;
    // 0x1dd630: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD258u, 0x1DD62Cu, 0x1DD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD634u;
label_1dd634:
    // 0x1dd634: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dd634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd640: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD640u;
        // 0x1dd644: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD648u;
}
