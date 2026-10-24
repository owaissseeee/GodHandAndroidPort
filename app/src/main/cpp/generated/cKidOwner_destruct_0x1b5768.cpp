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

// Function: cKidOwner_destruct
// Address: 0x1b5768 - 0x1b57e8
void cKidOwner_destruct_0x1b5768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cKidOwner_destruct_0x1b5768");
#endif

    switch (ctx->pc) {
        case 0x1b57a4u: goto label_1b57a4;
        case 0x1b57d4u: goto label_1b57d4;
        default: break;
    }

    ctx->pc = 0x1b5768u;

    // 0x1b5768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b576c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b576cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b5770: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b5770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b5774: 0x24428840  addiu       $v0, $v0, -0x77C0
    ctx->pc = 0x1b5774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936640));
    // 0x1b5778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b577c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b577cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5784: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1b5784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1b5788: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1b5788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b578c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B578Cu;
    {
        const bool branch_taken_0x1b578c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B578Cu;
        // 0x1b5790: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b578c) {
            ctx->pc = 0x1B57A8u;
            goto label_1b57a8;
        }
    }
    ctx->pc = 0x1B5794u;
    // 0x1b5794: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b5794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b5798: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b5798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b579c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1B579Cu;
    SET_GPR_U32(ctx, 31, 0x1B57A4u);
    ctx->pc = 0x1B57A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B579Cu;
    // 0x1b57a0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1B579Cu, 0x1B57A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57A4u;
label_1b57a4:
    // 0x1b57a4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1b57a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1b57a8:
    // 0x1b57a8: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x1b57a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1b57ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B57ACu;
    {
        const bool branch_taken_0x1b57ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57ACu;
        // 0x1b57b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57ac) {
            ctx->pc = 0x1B57B8u;
            goto label_1b57b8;
        }
    }
    ctx->pc = 0x1B57B4u;
    // 0x1b57b4: 0xa06202f4  sb          $v0, 0x2F4($v1)
    ctx->pc = 0x1b57b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 2));
label_1b57b8:
    // 0x1b57b8: 0x8e030608  lw          $v1, 0x608($s0)
    ctx->pc = 0x1b57b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1b57bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B57BCu;
    {
        const bool branch_taken_0x1b57bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57BCu;
        // 0x1b57c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57bc) {
            ctx->pc = 0x1B57C8u;
            goto label_1b57c8;
        }
    }
    ctx->pc = 0x1B57C4u;
    // 0x1b57c4: 0xa06202f4  sb          $v0, 0x2F4($v1)
    ctx->pc = 0x1b57c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 2));
label_1b57c8:
    // 0x1b57c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b57c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57cc: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B57CCu;
    SET_GPR_U32(ctx, 31, 0x1B57D4u);
    ctx->pc = 0x1B57D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B57CCu;
    // 0x1b57d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B57CCu, 0x1B57D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B57D4u;
label_1b57d4:
    // 0x1b57d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b57d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b57d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b57d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b57dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b57dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b57e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B57E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57E0u;
        // 0x1b57e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B57E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B57E8u;
}
