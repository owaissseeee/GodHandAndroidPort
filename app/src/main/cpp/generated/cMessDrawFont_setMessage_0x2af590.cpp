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

// Function: cMessDrawFont_setMessage
// Address: 0x2af590 - 0x2af628
void cMessDrawFont_setMessage_0x2af590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessDrawFont_setMessage_0x2af590");
#endif

    switch (ctx->pc) {
        case 0x2af5c0u: goto label_2af5c0;
        case 0x2af5d0u: goto label_2af5d0;
        case 0x2af5e8u: goto label_2af5e8;
        case 0x2af5f8u: goto label_2af5f8;
        case 0x2af60cu: goto label_2af60c;
        default: break;
    }

    ctx->pc = 0x2af590u;

    // 0x2af590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2af590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2af594: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2af594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2af598: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2af598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2af59c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2af59cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2af5a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2af5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2af5a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2af5a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5a8: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x2af5a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2af5ac: 0x8e0423a4  lw          $a0, 0x23A4($s0)
    ctx->pc = 0x2af5acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2af5b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2af5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2af5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af5b8: 0xc0abab4  jal         func_2AEAD0
    ctx->pc = 0x2AF5B8u;
    SET_GPR_U32(ctx, 31, 0x2AF5C0u);
    ctx->pc = 0x2AF5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF5B8u;
    // 0x2af5bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAD0u, 0x2AF5B8u, 0x2AF5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF5C0u;
label_2af5c0:
    // 0x2af5c0: 0x8e0423a4  lw          $a0, 0x23A4($s0)
    ctx->pc = 0x2af5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9124)));
    // 0x2af5c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2af5c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5c8: 0xc0abac0  jal         func_2AEB00
    ctx->pc = 0x2AF5C8u;
    SET_GPR_U32(ctx, 31, 0x2AF5D0u);
    ctx->pc = 0x2AF5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF5C8u;
    // 0x2af5cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB00u, 0x2AF5C8u, 0x2AF5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF5D0u;
label_2af5d0:
    // 0x2af5d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2af5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2af5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2af5d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2af5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5e0: 0xc0abd8a  jal         func_2AF628
    ctx->pc = 0x2AF5E0u;
    SET_GPR_U32(ctx, 31, 0x2AF5E8u);
    ctx->pc = 0x2AF5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF5E0u;
    // 0x2af5e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF628u, 0x2AF5E0u, 0x2AF5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF5E8u;
label_2af5e8:
    // 0x2af5e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2af5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2af5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5f0: 0xc0abd8e  jal         func_2AF638
    ctx->pc = 0x2AF5F0u;
    SET_GPR_U32(ctx, 31, 0x2AF5F8u);
    ctx->pc = 0x2AF5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF5F0u;
    // 0x2af5f4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF638u, 0x2AF5F0u, 0x2AF5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF5F8u;
label_2af5f8:
    // 0x2af5f8: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x2af5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x2af5fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2af5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af604: 0xc0abd92  jal         func_2AF648
    ctx->pc = 0x2AF604u;
    SET_GPR_U32(ctx, 31, 0x2AF60Cu);
    ctx->pc = 0x2AF608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF604u;
    // 0x2af608: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF648u, 0x2AF604u, 0x2AF60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF60Cu;
label_2af60c:
    // 0x2af60c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2af60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af610: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2af610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af614: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2af614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af618: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2af618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af620: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF620u;
        // 0x2af624: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF628u;
}
