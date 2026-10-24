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

// Function: InitObjVtableFreeField604_192210
// Address: 0x192210 - 0x192270
void InitObjVtableFreeField604_192210_0x192210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableFreeField604_192210_0x192210");
#endif

    switch (ctx->pc) {
        case 0x19224cu: goto label_19224c;
        case 0x19225cu: goto label_19225c;
        default: break;
    }

    ctx->pc = 0x192210u;

    // 0x192210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192214: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x192214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x192218: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x192218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19221c: 0x24424328  addiu       $v0, $v0, 0x4328
    ctx->pc = 0x19221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17192));
    // 0x192220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19222c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19222cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x192230: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x192230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x192234: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x192234u;
    {
        const bool branch_taken_0x192234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192234u;
        // 0x192238: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192234) {
            ctx->pc = 0x192250u;
            goto label_192250;
        }
    }
    ctx->pc = 0x19223Cu;
    // 0x19223c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19223cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x192240: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x192240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192244: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x192244u;
    SET_GPR_U32(ctx, 31, 0x19224Cu);
    ctx->pc = 0x192248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192244u;
    // 0x192248: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x192244u, 0x19224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19224Cu;
label_19224c:
    // 0x19224c: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x19224cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
label_192250:
    // 0x192250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192254: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x192254u;
    SET_GPR_U32(ctx, 31, 0x19225Cu);
    ctx->pc = 0x192258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192254u;
    // 0x192258: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x192254u, 0x19225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19225Cu;
label_19225c:
    // 0x19225c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19225cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192268: 0x3e00008  jr          $ra
    ctx->pc = 0x192268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192268u;
        // 0x19226c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192270u;
}
