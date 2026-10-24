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

// Function: func_0034E790
// Address: 0x34e790 - 0x34e808
void func_0034E790_0x34e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E790_0x34e790");
#endif

    switch (ctx->pc) {
        case 0x34e790u: goto label_34e790;
        case 0x34e794u: goto label_34e794;
        case 0x34e798u: goto label_34e798;
        case 0x34e79cu: goto label_34e79c;
        case 0x34e7a0u: goto label_34e7a0;
        case 0x34e7a4u: goto label_34e7a4;
        case 0x34e7a8u: goto label_34e7a8;
        case 0x34e7acu: goto label_34e7ac;
        case 0x34e7b0u: goto label_34e7b0;
        case 0x34e7b4u: goto label_34e7b4;
        case 0x34e7b8u: goto label_34e7b8;
        case 0x34e7bcu: goto label_34e7bc;
        case 0x34e7c0u: goto label_34e7c0;
        case 0x34e7c4u: goto label_34e7c4;
        case 0x34e7c8u: goto label_34e7c8;
        case 0x34e7ccu: goto label_34e7cc;
        case 0x34e7d0u: goto label_34e7d0;
        case 0x34e7d4u: goto label_34e7d4;
        case 0x34e7d8u: goto label_34e7d8;
        case 0x34e7dcu: goto label_34e7dc;
        case 0x34e7e0u: goto label_34e7e0;
        case 0x34e7e4u: goto label_34e7e4;
        case 0x34e7e8u: goto label_34e7e8;
        case 0x34e7ecu: goto label_34e7ec;
        case 0x34e7f0u: goto label_34e7f0;
        case 0x34e7f4u: goto label_34e7f4;
        case 0x34e7f8u: goto label_34e7f8;
        case 0x34e7fcu: goto label_34e7fc;
        case 0x34e800u: goto label_34e800;
        case 0x34e804u: goto label_34e804;
        default: break;
    }

    ctx->pc = 0x34e790u;

label_34e790:
    // 0x34e790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34e794:
    // 0x34e794: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_34e798:
    // 0x34e798: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x34e798u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_34e79c:
    // 0x34e79c: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x34e79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_34e7a0:
    // 0x34e7a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34e7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_34e7a4:
    // 0x34e7a4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34e7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_34e7a8:
    // 0x34e7a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34e7ac:
    // 0x34e7ac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34e7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_34e7b0:
    // 0x34e7b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34e7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_34e7b4:
    // 0x34e7b4: 0xc0d6872  jal         func_35A1C8
label_34e7b8:
    if (ctx->pc == 0x34E7B8u) {
        ctx->pc = 0x34E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7B4u;
        // 0x34e7b8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E7BCu;
        goto label_34e7bc;
    }
    ctx->pc = 0x34E7B4u;
    SET_GPR_U32(ctx, 31, 0x34E7BCu);
    ctx->pc = 0x34E7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E7B4u;
    // 0x34e7b8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34E7B4u, 0x34E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E7BCu;
label_34e7bc:
    // 0x34e7bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34e7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34e7c0:
    // 0x34e7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34e7c4:
    // 0x34e7c4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_34e7c8:
    if (ctx->pc == 0x34E7C8u) {
        ctx->pc = 0x34E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7C4u;
        // 0x34e7c8: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E7CCu;
        goto label_34e7cc;
    }
    ctx->pc = 0x34E7C4u;
    {
        const bool branch_taken_0x34e7c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7C4u;
        // 0x34e7c8: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e7c4) {
            ctx->pc = 0x34E7ECu;
            goto label_34e7ec;
        }
    }
    ctx->pc = 0x34E7CCu;
label_34e7cc:
    // 0x34e7cc: 0xde020990  ld          $v0, 0x990($s0)
    ctx->pc = 0x34e7ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 2448)));
label_34e7d0:
    // 0x34e7d0: 0xa3b30000  sb          $s3, 0x0($sp)
    ctx->pc = 0x34e7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 19));
label_34e7d4:
    // 0x34e7d4: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x34e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
label_34e7d8:
    // 0x34e7d8: 0xc0d6872  jal         func_35A1C8
label_34e7dc:
    if (ctx->pc == 0x34E7DCu) {
        ctx->pc = 0x34E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7D8u;
        // 0x34e7dc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E7E0u;
        goto label_34e7e0;
    }
    ctx->pc = 0x34E7D8u;
    SET_GPR_U32(ctx, 31, 0x34E7E0u);
    ctx->pc = 0x34E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E7D8u;
    // 0x34e7dc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34E7D8u, 0x34E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E7E0u;
label_34e7e0:
    // 0x34e7e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34e7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34e7e4:
    // 0x34e7e4: 0x220f809  jalr        $s1
label_34e7e8:
    if (ctx->pc == 0x34E7E8u) {
        ctx->pc = 0x34E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7E4u;
        // 0x34e7e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E7ECu;
        goto label_34e7ec;
    }
    ctx->pc = 0x34E7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x34E7ECu);
        ctx->pc = 0x34E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E7E4u;
        // 0x34e7e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E7E4u, 0x34E7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34E7ECu;
label_34e7ec:
    // 0x34e7ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34e7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34e7f0:
    // 0x34e7f0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34e7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_34e7f4:
    // 0x34e7f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34e7f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34e7f8:
    // 0x34e7f8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x34e7f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_34e7fc:
    // 0x34e7fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34e7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34e800:
    // 0x34e800: 0x3e00008  jr          $ra
label_34e804:
    if (ctx->pc == 0x34E804u) {
        ctx->pc = 0x34E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E800u;
        // 0x34e804: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34E808u;
        goto label_fallthrough_0x34e800;
    }
    ctx->pc = 0x34E800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E800u;
        // 0x34e804: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34e800:
    ctx->pc = 0x34E808u;
}
