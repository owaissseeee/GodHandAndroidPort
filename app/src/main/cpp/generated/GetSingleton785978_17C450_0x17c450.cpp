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

// Function: GetSingleton785978_17C450
// Address: 0x17c450 - 0x17c4a8
void GetSingleton785978_17C450_0x17c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton785978_17C450_0x17c450");
#endif

    switch (ctx->pc) {
        case 0x17c474u: goto label_17c474;
        case 0x17c48cu: goto label_17c48c;
        default: break;
    }

    ctx->pc = 0x17c450u;

    // 0x17c450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c454: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17c454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x17c458: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c45c: 0x8c625978  lw          $v0, 0x5978($v1)
    ctx->pc = 0x17c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785978u));
    // 0x17c460: 0x24705978  addiu       $s0, $v1, 0x5978
    ctx->pc = 0x17c460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22904));
    // 0x17c464: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C464u;
    {
        const bool branch_taken_0x17c464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C464u;
        // 0x17c468: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c464) {
            ctx->pc = 0x17C48Cu;
            goto label_17c48c;
        }
    }
    ctx->pc = 0x17C46Cu;
    // 0x17c46c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x17C46Cu;
    SET_GPR_U32(ctx, 31, 0x17C474u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x17C46Cu, 0x17C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C474u;
label_17c474:
    // 0x17c474: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17c474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17c478: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x17c478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17c47c: 0x24a51c68  addiu       $a1, $a1, 0x1C68
    ctx->pc = 0x17c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7272));
    // 0x17c480: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x17c480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x17c484: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17C484u;
    SET_GPR_U32(ctx, 31, 0x17C48Cu);
    ctx->pc = 0x17C488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C484u;
    // 0x17c488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17C484u, 0x17C48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C48Cu;
label_17c48c:
    // 0x17c48c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17c48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c494: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c498: 0x3e00008  jr          $ra
    ctx->pc = 0x17C498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C498u;
        // 0x17c49c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C4A0u;
    // 0x17c4a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17c4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17c4a4: 0x0  nop
    ctx->pc = 0x17c4a4u;
    // NOP
    ctx->pc = 0x17c4a8u;
}
