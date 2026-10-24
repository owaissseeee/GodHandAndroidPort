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

// Function: cOl2b_setCloseFix
// Address: 0x180440 - 0x1804f8
void cOl2b_setCloseFix_0x180440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl2b_setCloseFix_0x180440");
#endif

    switch (ctx->pc) {
        case 0x180460u: goto label_180460;
        default: break;
    }

    ctx->pc = 0x180440u;

    // 0x180440: 0x8c820a24  lw          $v0, 0xA24($a0)
    ctx->pc = 0x180440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2596)));
    // 0x180444: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x180444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180448: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x180448u;
    {
        const bool branch_taken_0x180448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180448u;
        // 0x18044c: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180448) {
            ctx->pc = 0x1804ECu;
            goto label_1804ec;
        }
    }
    ctx->pc = 0x180450u;
    // 0x180450: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x180450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x180454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180458: 0x24468020  addiu       $a2, $v0, -0x7FE0
    ctx->pc = 0x180458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x18045c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18045cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180460:
    // 0x180460: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x180460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x180464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180468: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x180468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18046c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18046Cu;
    {
        const bool branch_taken_0x18046c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18046Cu;
        // 0x180470: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18046c) {
            ctx->pc = 0x18047Cu;
            goto label_18047c;
        }
    }
    ctx->pc = 0x180474u;
    // 0x180474: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x180474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x180478: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18047c:
    // 0x18047c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x18047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x180480: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180480u;
    {
        const bool branch_taken_0x180480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180480u;
        // 0x180484: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180480) {
            ctx->pc = 0x180498u;
            goto label_180498;
        }
    }
    ctx->pc = 0x180488u;
    // 0x180488: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x180488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x18048c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180490: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180490u;
    {
        const bool branch_taken_0x180490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180490u;
        // 0x180494: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180490) {
            ctx->pc = 0x18049Cu;
            goto label_18049c;
        }
    }
    ctx->pc = 0x180498u;
label_180498:
    // 0x180498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18049c:
    // 0x18049c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18049Cu;
    {
        const bool branch_taken_0x18049c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1804A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18049Cu;
        // 0x1804a0: 0x24430100  addiu       $v1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18049c) {
            ctx->pc = 0x1804C4u;
            goto label_1804c4;
        }
    }
    ctx->pc = 0x1804A4u;
    // 0x1804a4: 0x50660008  beql        $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1804A4u;
    {
        const bool branch_taken_0x1804a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1804a4) {
            ctx->pc = 0x1804A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1804A4u;
            // 0x1804a8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1804C8u;
            goto label_1804c8;
        }
    }
    ctx->pc = 0x1804ACu;
    // 0x1804ac: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1804acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1804b0: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1804b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1804b4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1804b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1804b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1804b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1804bc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1804bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1804c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1804c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1804c4:
    // 0x1804c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1804c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1804c8:
    // 0x1804c8: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x1804c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1804cc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1804CCu;
    {
        const bool branch_taken_0x1804cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1804D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804CCu;
        // 0x1804d0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804cc) {
            ctx->pc = 0x180460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180460;
        }
    }
    ctx->pc = 0x1804D4u;
    // 0x1804d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1804d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1804d8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1804d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1804dc: 0xac820a24  sw          $v0, 0xA24($a0)
    ctx->pc = 0x1804dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2596), GPR_U32(ctx, 2));
    // 0x1804e0: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1804e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1804e4: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1804e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1804e8: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1804e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1804ec:
    // 0x1804ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1804ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1804F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804ECu;
        // 0x1804f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1804ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1804F4u;
    // 0x1804f4: 0x0  nop
    ctx->pc = 0x1804f4u;
    // NOP
    ctx->pc = 0x1804f8u;
}
