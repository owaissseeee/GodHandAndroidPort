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

// Function: func_001B02C8
// Address: 0x1b02c8 - 0x1b0340
void func_001B02C8_0x1b02c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B02C8_0x1b02c8");
#endif

    switch (ctx->pc) {
        case 0x1b0304u: goto label_1b0304;
        case 0x1b031cu: goto label_1b031c;
        case 0x1b032cu: goto label_1b032c;
        default: break;
    }

    ctx->pc = 0x1b02c8u;

    // 0x1b02c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b02c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b02cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b02ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b02d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b02d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b02d4: 0x24428160  addiu       $v0, $v0, -0x7EA0
    ctx->pc = 0x1b02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934880));
    // 0x1b02d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b02d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b02dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b02dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b02e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b02e4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1b02e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1b02e8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1b02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b02ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B02ECu;
    {
        const bool branch_taken_0x1b02ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02ECu;
        // 0x1b02f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b02ec) {
            ctx->pc = 0x1B0308u;
            goto label_1b0308;
        }
    }
    ctx->pc = 0x1B02F4u;
    // 0x1b02f4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b02f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1b02f8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b02f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b02fc: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1B02FCu;
    SET_GPR_U32(ctx, 31, 0x1B0304u);
    ctx->pc = 0x1B0300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02FCu;
    // 0x1b0300: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1B02FCu, 0x1B0304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0304u;
label_1b0304:
    // 0x1b0304: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1b0304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1b0308:
    // 0x1b0308: 0x8e050604  lw          $a1, 0x604($s0)
    ctx->pc = 0x1b0308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1b030c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B030Cu;
    {
        const bool branch_taken_0x1b030c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B030Cu;
        // 0x1b0310: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b030c) {
            ctx->pc = 0x1B0320u;
            goto label_1b0320;
        }
    }
    ctx->pc = 0x1B0314u;
    // 0x1b0314: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1B0314u;
    SET_GPR_U32(ctx, 31, 0x1B031Cu);
    ctx->pc = 0x1B0318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0314u;
    // 0x1b0318: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1B0314u, 0x1B031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B031Cu;
label_1b031c:
    // 0x1b031c: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x1b031cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
label_1b0320:
    // 0x1b0320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0324: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B0324u;
    SET_GPR_U32(ctx, 31, 0x1B032Cu);
    ctx->pc = 0x1B0328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0324u;
    // 0x1b0328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B0324u, 0x1B032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B032Cu;
label_1b032c:
    // 0x1b032c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b032cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0338: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0338u;
        // 0x1b033c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0340u;
}
