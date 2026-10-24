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

// Function: func_0032F230
// Address: 0x32f230 - 0x32f288
void func_0032F230_0x32f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F230_0x32f230");
#endif

    switch (ctx->pc) {
        case 0x32f244u: goto label_32f244;
        case 0x32f26cu: goto label_32f26c;
        default: break;
    }

    ctx->pc = 0x32f230u;

    // 0x32f230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32f234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32f23c: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32F23Cu;
    SET_GPR_U32(ctx, 31, 0x32F244u);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32F23Cu, 0x32F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F244u;
label_32f244:
    // 0x32f244: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32f244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32f248: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x32f248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x32f24c: 0x24501e68  addiu       $s0, $v0, 0x1E68
    ctx->pc = 0x32f24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7784));
    // 0x32f250: 0x24841e70  addiu       $a0, $a0, 0x1E70
    ctx->pc = 0x32f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7792));
    // 0x32f254: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32f254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D1E68u));
    // 0x32f258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f25c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32F25Cu;
    {
        const bool branch_taken_0x32f25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F25Cu;
        // 0x32f260: 0x24066590  addiu       $a2, $zero, 0x6590 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f25c) {
            ctx->pc = 0x32F270u;
            goto label_32f270;
        }
    }
    ctx->pc = 0x32F264u;
    // 0x32f264: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x32F264u;
    SET_GPR_U32(ctx, 31, 0x32F26Cu);
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32F264u, 0x32F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F26Cu;
label_32f26c:
    // 0x32f26c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32f270:
    // 0x32f270: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f274: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32f274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f278: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32f278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32f27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f280: 0x80cff22  j           func_33FC88
    ctx->pc = 0x32F280u;
    ctx->pc = 0x32F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F280u;
    // 0x32f284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32F280u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32F288u;
}
