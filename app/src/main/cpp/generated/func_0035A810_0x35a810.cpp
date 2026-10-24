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

// Function: func_0035A810
// Address: 0x35a810 - 0x35a8a8
void func_0035A810_0x35a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A810_0x35a810");
#endif

    switch (ctx->pc) {
        case 0x35a844u: goto label_35a844;
        default: break;
    }

    ctx->pc = 0x35a810u;

    // 0x35a810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35a814: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35a814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35a818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a81c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35a81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a820: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x35a820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x35a824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a828: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35a828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35a82c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x35a82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a830: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35a834: 0x2453e270  addiu       $s3, $v0, -0x1D90
    ctx->pc = 0x35a834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959728));
    // 0x35a838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35a838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35a83c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35A83Cu;
    SET_GPR_U32(ctx, 31, 0x35A844u);
    ctx->pc = 0x35A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A83Cu;
    // 0x35a840: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35A83Cu, 0x35A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A844u;
label_35a844:
    // 0x35a844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a848: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35A848u;
    {
        const bool branch_taken_0x35a848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35a848) {
            ctx->pc = 0x35A870u;
            goto label_35a870;
        }
    }
    ctx->pc = 0x35A850u;
    // 0x35a850: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x35a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x35a854: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x35a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35a858: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x35a858u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a85c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x35a860: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x35a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x35a864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35A864u;
    {
        const bool branch_taken_0x35a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A864u;
        // 0x35a868: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a864) {
            ctx->pc = 0x35A888u;
            goto label_35a888;
        }
    }
    ctx->pc = 0x35A86Cu;
    // 0x35a86c: 0x0  nop
    ctx->pc = 0x35a86cu;
    // NOP
label_35a870:
    // 0x35a870: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x35a870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x35a874: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x35a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x35a878: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35a87c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35a87cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x35a880: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x35a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x35a884: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35a884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35a888:
    // 0x35a888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a88c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a88cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35a890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a894: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35a894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35a898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35a898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a89c: 0x3e00008  jr          $ra
    ctx->pc = 0x35A89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A89Cu;
        // 0x35a8a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A8A4u;
    // 0x35a8a4: 0x0  nop
    ctx->pc = 0x35a8a4u;
    // NOP
    ctx->pc = 0x35a8a8u;
}
