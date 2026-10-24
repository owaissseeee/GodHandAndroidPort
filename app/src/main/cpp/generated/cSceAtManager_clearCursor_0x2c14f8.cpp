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

// Function: cSceAtManager_clearCursor
// Address: 0x2c14f8 - 0x2c1540
void cSceAtManager_clearCursor_0x2c14f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_clearCursor_0x2c14f8");
#endif

    switch (ctx->pc) {
        case 0x2c1530u: goto label_2c1530;
        default: break;
    }

    ctx->pc = 0x2c14f8u;

    // 0x2c14f8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2c14fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c14fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1500: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x2c1500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x2c1504: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2c1504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2c1508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c150c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2c150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2c1510: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C1510u;
    {
        const bool branch_taken_0x2c1510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1510u;
        // 0x2c1514: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1510) {
            ctx->pc = 0x2C1530u;
            goto label_2c1530;
        }
    }
    ctx->pc = 0x2C1518u;
    // 0x2c1518: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x2c1518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x2c151c: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x2c151cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x2c1520: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x2c1520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x2c1524: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x2c1524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x2c1528: 0xc0b0586  jal         func_2C1618
    ctx->pc = 0x2C1528u;
    SET_GPR_U32(ctx, 31, 0x2C1530u);
    ctx->pc = 0x2C152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1528u;
    // 0x2c152c: 0xa0400064  sb          $zero, 0x64($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1618u, 0x2C1528u, 0x2C1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1530u;
label_2c1530:
    // 0x2c1530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1534: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1534u;
        // 0x2c1538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C153Cu;
    // 0x2c153c: 0x0  nop
    ctx->pc = 0x2c153cu;
    // NOP
    ctx->pc = 0x2c1540u;
}
