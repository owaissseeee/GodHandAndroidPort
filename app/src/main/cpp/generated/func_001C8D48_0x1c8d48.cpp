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

// Function: func_001C8D48
// Address: 0x1c8d48 - 0x1c8dd8
void func_001C8D48_0x1c8d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C8D48_0x1c8d48");
#endif

    ctx->pc = 0x1c8d48u;

    // 0x1c8d48: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x1c8d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x1c8d4c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1c8d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1c8d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8d54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8d58: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1c8d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1c8d5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8d60: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1c8d60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8d64: 0xe4800614  swc1        $f0, 0x614($a0)
    ctx->pc = 0x1c8d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1556), bits); }
    // 0x1c8d68: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1c8d68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8d6c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1c8d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8d70: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1c8d70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8d74: 0xac800610  sw          $zero, 0x610($a0)
    ctx->pc = 0x1c8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1552), GPR_U32(ctx, 0));
    // 0x1c8d78: 0xac800618  sw          $zero, 0x618($a0)
    ctx->pc = 0x1c8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1560), GPR_U32(ctx, 0));
    // 0x1c8d7c: 0xac800644  sw          $zero, 0x644($a0)
    ctx->pc = 0x1c8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1604), GPR_U32(ctx, 0));
    // 0x1c8d80: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8D80u;
    {
        const bool branch_taken_0x1c8d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D80u;
        // 0x1c8d84: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d80) {
            ctx->pc = 0x1C8D94u;
            goto label_1c8d94;
        }
    }
    ctx->pc = 0x1C8D88u;
    // 0x1c8d88: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1c8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1c8d8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8D8Cu;
    {
        const bool branch_taken_0x1c8d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D8Cu;
        // 0x1c8d90: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d8c) {
            ctx->pc = 0x1C8D98u;
            goto label_1c8d98;
        }
    }
    ctx->pc = 0x1C8D94u;
label_1c8d94:
    // 0x1c8d94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8d98:
    // 0x1c8d98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8D98u;
    {
        const bool branch_taken_0x1c8d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D98u;
        // 0x1c8d9c: 0x24830630  addiu       $v1, $a0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d98) {
            ctx->pc = 0x1C8DD0u;
            goto label_1c8dd0;
        }
    }
    ctx->pc = 0x1C8DA0u;
    // 0x1c8da0: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x1c8da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1c8da4: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8DA4u;
    {
        const bool branch_taken_0x1c8da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8da4) {
            ctx->pc = 0x1C8DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8DA4u;
            // 0x1c8da8: 0xac400108  sw          $zero, 0x108($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8DC8u;
            goto label_1c8dc8;
        }
    }
    ctx->pc = 0x1C8DACu;
    // 0x1c8dac: 0xc4800630  lwc1        $f0, 0x630($a0)
    ctx->pc = 0x1c8dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8db0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1c8db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1c8db4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c8db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8db8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1c8db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1c8dbc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c8dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8dc0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1c8dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1c8dc4: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1c8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
label_1c8dc8:
    // 0x1c8dc8: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1c8dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1c8dcc: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1c8dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1c8dd0:
    // 0x1c8dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DD0u;
        // 0x1c8dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8DD8u;
}
