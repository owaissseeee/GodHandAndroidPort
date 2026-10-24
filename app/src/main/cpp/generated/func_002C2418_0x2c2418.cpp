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

// Function: func_002C2418
// Address: 0x2c2418 - 0x2c2468
void func_002C2418_0x2c2418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C2418_0x2c2418");
#endif

    ctx->pc = 0x2c2418u;

    // 0x2c2418: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2c2418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2c241c: 0x2446ea60  addiu       $a2, $v0, -0x15A0
    ctx->pc = 0x2c241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x2c2420: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x2c2420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEAD0u));
    // 0x2c2424: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2424u;
    {
        const bool branch_taken_0x2c2424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2424u;
        // 0x2c2428: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2424) {
            ctx->pc = 0x2C2460u;
            goto label_2c2460;
        }
    }
    ctx->pc = 0x2C242Cu;
    // 0x2c242c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C242Cu;
    {
        const bool branch_taken_0x2c242c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C242Cu;
        // 0x2c2430: 0x2482005c  addiu       $v0, $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c242c) {
            ctx->pc = 0x2C2444u;
            goto label_2c2444;
        }
    }
    ctx->pc = 0x2C2434u;
    // 0x2c2434: 0xacc20070  sw          $v0, 0x70($a2)
    ctx->pc = 0x2c2434u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 2));
    // 0x2c2438: 0x9083007c  lbu         $v1, 0x7C($a0)
    ctx->pc = 0x2c2438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2c243c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C243Cu;
    {
        const bool branch_taken_0x2c243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C243Cu;
        // 0x2c2440: 0xa0c30064  sb          $v1, 0x64($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 100), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c243c) {
            ctx->pc = 0x2C2460u;
            goto label_2c2460;
        }
    }
    ctx->pc = 0x2C2444u;
label_2c2444:
    // 0x2c2444: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x2c2444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x2c2448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2448u;
    {
        const bool branch_taken_0x2c2448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2448u;
        // 0x2c244c: 0x2482005c  addiu       $v0, $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2448) {
            ctx->pc = 0x2C245Cu;
            goto label_2c245c;
        }
    }
    ctx->pc = 0x2C2450u;
    // 0x2c2450: 0x9082007d  lbu         $v0, 0x7D($a0)
    ctx->pc = 0x2c2450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 125)));
    // 0x2c2454: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2454u;
    {
        const bool branch_taken_0x2c2454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2454u;
        // 0x2c2458: 0xa0c20064  sb          $v0, 0x64($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 100), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2454) {
            ctx->pc = 0x2C2460u;
            goto label_2c2460;
        }
    }
    ctx->pc = 0x2C245Cu;
label_2c245c:
    // 0x2c245c: 0xacc20070  sw          $v0, 0x70($a2)
    ctx->pc = 0x2c245cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 2));
label_2c2460:
    // 0x2c2460: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2460u;
        // 0x2c2464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2468u;
}
