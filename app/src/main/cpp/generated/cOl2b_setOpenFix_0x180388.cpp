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

// Function: cOl2b_setOpenFix
// Address: 0x180388 - 0x180440
void cOl2b_setOpenFix_0x180388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl2b_setOpenFix_0x180388");
#endif

    switch (ctx->pc) {
        case 0x1803a8u: goto label_1803a8;
        default: break;
    }

    ctx->pc = 0x180388u;

    // 0x180388: 0x8c820a24  lw          $v0, 0xA24($a0)
    ctx->pc = 0x180388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2596)));
    // 0x18038c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180390: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x180390u;
    {
        const bool branch_taken_0x180390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x180394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180390u;
        // 0x180394: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180390) {
            ctx->pc = 0x180434u;
            goto label_180434;
        }
    }
    ctx->pc = 0x180398u;
    // 0x180398: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x180398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x18039c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18039cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1803a0: 0x24467ff0  addiu       $a2, $v0, 0x7FF0
    ctx->pc = 0x1803a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32752));
    // 0x1803a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1803a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1803a8:
    // 0x1803a8: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1803a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1803ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1803acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1803b0: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1803b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1803b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1803B4u;
    {
        const bool branch_taken_0x1803b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1803B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803B4u;
        // 0x1803b8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803b4) {
            ctx->pc = 0x1803C4u;
            goto label_1803c4;
        }
    }
    ctx->pc = 0x1803BCu;
    // 0x1803bc: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1803bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1803c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1803c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1803c4:
    // 0x1803c4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1803c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1803c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1803C8u;
    {
        const bool branch_taken_0x1803c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803C8u;
        // 0x1803cc: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803c8) {
            ctx->pc = 0x1803E0u;
            goto label_1803e0;
        }
    }
    ctx->pc = 0x1803D0u;
    // 0x1803d0: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x1803d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1803d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1803d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1803d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1803D8u;
    {
        const bool branch_taken_0x1803d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803D8u;
        // 0x1803dc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803d8) {
            ctx->pc = 0x1803E4u;
            goto label_1803e4;
        }
    }
    ctx->pc = 0x1803E0u;
label_1803e0:
    // 0x1803e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1803e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1803e4:
    // 0x1803e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1803E4u;
    {
        const bool branch_taken_0x1803e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803E4u;
        // 0x1803e8: 0x24430100  addiu       $v1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803e4) {
            ctx->pc = 0x18040Cu;
            goto label_18040c;
        }
    }
    ctx->pc = 0x1803ECu;
    // 0x1803ec: 0x50660008  beql        $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1803ECu;
    {
        const bool branch_taken_0x1803ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1803ec) {
            ctx->pc = 0x1803F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1803ECu;
            // 0x1803f0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180410u;
            goto label_180410;
        }
    }
    ctx->pc = 0x1803F4u;
    // 0x1803f4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1803f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1803f8: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1803f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1803fc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1803fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180400: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x180400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x180404: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x180404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180408: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x180408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_18040c:
    // 0x18040c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18040cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_180410:
    // 0x180410: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x180410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x180414: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x180414u;
    {
        const bool branch_taken_0x180414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180414u;
        // 0x180418: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180414) {
            ctx->pc = 0x1803A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1803a8;
        }
    }
    ctx->pc = 0x18041Cu;
    // 0x18041c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180420: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x180420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x180424: 0xac820a24  sw          $v0, 0xA24($a0)
    ctx->pc = 0x180424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2596), GPR_U32(ctx, 2));
    // 0x180428: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x180428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x18042c: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x18042cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x180430: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x180430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_180434:
    // 0x180434: 0x3e00008  jr          $ra
    ctx->pc = 0x180434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180434u;
        // 0x180438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18043Cu;
    // 0x18043c: 0x0  nop
    ctx->pc = 0x18043cu;
    // NOP
    ctx->pc = 0x180440u;
}
