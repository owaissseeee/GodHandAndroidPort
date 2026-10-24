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

// Function: GetSingleton786508_2F5358
// Address: 0x2f5358 - 0x2f53a8
void GetSingleton786508_2F5358_0x2f5358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton786508_2F5358_0x2f5358");
#endif

    switch (ctx->pc) {
        case 0x2f537cu: goto label_2f537c;
        case 0x2f5394u: goto label_2f5394;
        default: break;
    }

    ctx->pc = 0x2f5358u;

    // 0x2f5358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f535c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f535cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f5360: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f5360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f5364: 0x8c626508  lw          $v0, 0x6508($v1)
    ctx->pc = 0x2f5364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786508u));
    // 0x2f5368: 0x24706508  addiu       $s0, $v1, 0x6508
    ctx->pc = 0x2f5368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25864));
    // 0x2f536c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F536Cu;
    {
        const bool branch_taken_0x2f536c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F536Cu;
        // 0x2f5370: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f536c) {
            ctx->pc = 0x2F5394u;
            goto label_2f5394;
        }
    }
    ctx->pc = 0x2F5374u;
    // 0x2f5374: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F5374u;
    SET_GPR_U32(ctx, 31, 0x2F537Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F5374u, 0x2F537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F537Cu;
label_2f537c:
    // 0x2f537c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f537cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f5380: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f5380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f5384: 0x24a5f398  addiu       $a1, $a1, -0xC68
    ctx->pc = 0x2f5384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964120));
    // 0x2f5388: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f5388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f538c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F538Cu;
    SET_GPR_U32(ctx, 31, 0x2F5394u);
    ctx->pc = 0x2F5390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F538Cu;
    // 0x2f5390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F538Cu, 0x2F5394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5394u;
label_2f5394:
    // 0x2f5394: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f5394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f5398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f539c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f539cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f53a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F53A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53A0u;
        // 0x2f53a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F53A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F53A8u;
}
