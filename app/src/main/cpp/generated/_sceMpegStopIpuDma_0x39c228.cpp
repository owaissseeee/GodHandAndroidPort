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

// Function: _sceMpegStopIpuDma
// Address: 0x39c228 - 0x39c2c8
void _sceMpegStopIpuDma_0x39c228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegStopIpuDma_0x39c228");
#endif

    switch (ctx->pc) {
        case 0x39c238u: goto label_39c238;
        case 0x39c294u: goto label_39c294;
        default: break;
    }

    ctx->pc = 0x39c228u;

    // 0x39c228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39c22c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39c230: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39C230u;
    SET_GPR_U32(ctx, 31, 0x39C238u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39C230u, 0x39C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C238u;
label_39c238:
    // 0x39c238: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x39c238u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x39c23c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x39c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x39c240: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x39c240u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62752);
    // 0x39c244: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x39c244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x39c248: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x39c248u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x39c24c: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x39c24cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62864);
    // 0x39c250: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39c250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39c254: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x39c254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x39c258: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x39c258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x39c25c: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x39c25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x39c260: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x39c260u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x39c264: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x39c264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x39c268: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x39c268u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x39c26c: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x39c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x39c270: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x39c270u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0));
    // 0x39c274: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x39c274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x39c278: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x39c278u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x39c27c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39c27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x39c280: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x39c280u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x39c284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C284u;
    {
        const bool branch_taken_0x39c284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C284u;
        // 0x39c288: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c284) {
            ctx->pc = 0x39C298u;
            goto label_39c298;
        }
    }
    ctx->pc = 0x39C28Cu;
    // 0x39c28c: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39C28Cu;
    SET_GPR_U32(ctx, 31, 0x39C294u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39C28Cu, 0x39C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C294u;
label_39c294:
    // 0x39c294: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39c294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_39c298:
    // 0x39c298: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39c298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39c29c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x39c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x39c2a0: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x39c2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x39c2a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x39c2a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39c2ac: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x39c2acu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x39c2b0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x39c2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x39c2b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x39c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x39c2b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c2bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x39c2bcu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2));
    // 0x39c2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x39C2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2C0u;
        // 0x39c2c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C2C8u;
}
