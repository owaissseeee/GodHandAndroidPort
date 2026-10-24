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

// Function: func_0034A400
// Address: 0x34a400 - 0x34a4c0
void func_0034A400_0x34a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034A400_0x34a400");
#endif

    switch (ctx->pc) {
        case 0x34a450u: goto label_34a450;
        case 0x34a460u: goto label_34a460;
        case 0x34a480u: goto label_34a480;
        default: break;
    }

    ctx->pc = 0x34a400u;

    // 0x34a400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34a404: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34a408: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34a408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a40c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34a410: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34a410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a414: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34a418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34a418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a41c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34a420: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34a420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a424: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34a424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34a428: 0x2a020120  slti        $v0, $s0, 0x120
    ctx->pc = 0x34a428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x34a42c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34a42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34a430: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34a430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a434: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x34a434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x34a438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a440: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34A440u;
    {
        const bool branch_taken_0x34a440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A440u;
        // 0x34a444: 0x8e542004  lw          $s4, 0x2004($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a440) {
            ctx->pc = 0x34A4A0u;
            goto label_34a4a0;
        }
    }
    ctx->pc = 0x34A448u;
    // 0x34a448: 0xc0cadd6  jal         func_32B758
    ctx->pc = 0x34A448u;
    SET_GPR_U32(ctx, 31, 0x34A450u);
    ctx->pc = 0x32B758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B758u, 0x34A448u, 0x34A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A450u;
label_34a450:
    // 0x34a450: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34A450u;
    {
        const bool branch_taken_0x34a450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A450u;
        // 0x34a454: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a450) {
            ctx->pc = 0x34A484u;
            goto label_34a484;
        }
    }
    ctx->pc = 0x34A458u;
    // 0x34a458: 0xc0d36ba  jal         func_34DAE8
    ctx->pc = 0x34A458u;
    SET_GPR_U32(ctx, 31, 0x34A460u);
    ctx->pc = 0x34A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A458u;
    // 0x34a45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DAE8u, 0x34A458u, 0x34A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A460u;
label_34a460:
    // 0x34a460: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34a460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a464: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x34a464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x34a468: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34a468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a46c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34a46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a470: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A470u;
    {
        const bool branch_taken_0x34a470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A470u;
        // 0x34a474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a470) {
            ctx->pc = 0x34A484u;
            goto label_34a484;
        }
    }
    ctx->pc = 0x34A478u;
    // 0x34a478: 0xc0d2930  jal         func_34A4C0
    ctx->pc = 0x34A478u;
    SET_GPR_U32(ctx, 31, 0x34A480u);
    ctx->pc = 0x34A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A4C0u, 0x34A478u, 0x34A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A480u;
label_34a480:
    // 0x34a480: 0x513823  subu        $a3, $v0, $s1
    ctx->pc = 0x34a480u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_34a484:
    // 0x34a484: 0xde4309c8  ld          $v1, 0x9C8($s2)
    ctx->pc = 0x34a484u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
    // 0x34a488: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x34a488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x34a48c: 0x2442a0f0  addiu       $v0, $v0, -0x5F10
    ctx->pc = 0x34a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942960));
    // 0x34a490: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x34a490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x34a494: 0xe3182d  daddu       $v1, $a3, $v1
    ctx->pc = 0x34a494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 3));
    // 0x34a498: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x34a498u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x34a49c: 0xfe4309c8  sd          $v1, 0x9C8($s2)
    ctx->pc = 0x34a49cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 2504), GPR_U64(ctx, 3));
label_34a4a0:
    // 0x34a4a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34a4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a4a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34a4a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a4a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34a4a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a4ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34a4acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a4b0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34a4b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a4b4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34a4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x34A4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4B8u;
        // 0x34a4bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A4C0u;
}
