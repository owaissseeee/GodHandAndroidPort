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

// Function: cOl2b_setInitFix
// Address: 0x1804f8 - 0x1805a8
void cOl2b_setInitFix_0x1804f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl2b_setInitFix_0x1804f8");
#endif

    switch (ctx->pc) {
        case 0x180518u: goto label_180518;
        default: break;
    }

    ctx->pc = 0x1804f8u;

    // 0x1804f8: 0x8c820a24  lw          $v0, 0xA24($a0)
    ctx->pc = 0x1804f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2596)));
    // 0x1804fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1804FCu;
    {
        const bool branch_taken_0x1804fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804FCu;
        // 0x180500: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804fc) {
            ctx->pc = 0x1805A0u;
            goto label_1805a0;
        }
    }
    ctx->pc = 0x180504u;
    // 0x180504: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x180504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x180508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18050c: 0x24467fc0  addiu       $a2, $v0, 0x7FC0
    ctx->pc = 0x18050cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32704));
    // 0x180510: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x180510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180514: 0x0  nop
    ctx->pc = 0x180514u;
    // NOP
label_180518:
    // 0x180518: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x180518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x18051c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18051cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180520: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x180520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x180524: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180524u;
    {
        const bool branch_taken_0x180524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180524u;
        // 0x180528: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180524) {
            ctx->pc = 0x180534u;
            goto label_180534;
        }
    }
    ctx->pc = 0x18052Cu;
    // 0x18052c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x18052cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x180530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x180530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180534:
    // 0x180534: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x180534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x180538: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180538u;
    {
        const bool branch_taken_0x180538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180538u;
        // 0x18053c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180538) {
            ctx->pc = 0x180550u;
            goto label_180550;
        }
    }
    ctx->pc = 0x180540u;
    // 0x180540: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x180540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x180544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180548u;
    {
        const bool branch_taken_0x180548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180548u;
        // 0x18054c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180548) {
            ctx->pc = 0x180554u;
            goto label_180554;
        }
    }
    ctx->pc = 0x180550u;
label_180550:
    // 0x180550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180554:
    // 0x180554: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x180554u;
    {
        const bool branch_taken_0x180554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180554u;
        // 0x180558: 0x24430100  addiu       $v1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180554) {
            ctx->pc = 0x18057Cu;
            goto label_18057c;
        }
    }
    ctx->pc = 0x18055Cu;
    // 0x18055c: 0x50660008  beql        $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18055Cu;
    {
        const bool branch_taken_0x18055c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x18055c) {
            ctx->pc = 0x180560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18055Cu;
            // 0x180560: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180580u;
            goto label_180580;
        }
    }
    ctx->pc = 0x180564u;
    // 0x180564: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x180564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180568: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x180568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x18056c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x18056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180570: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x180570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x180574: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x180574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180578: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x180578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_18057c:
    // 0x18057c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_180580:
    // 0x180580: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x180580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x180584: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x180584u;
    {
        const bool branch_taken_0x180584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180584u;
        // 0x180588: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180584) {
            ctx->pc = 0x180518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180518;
        }
    }
    ctx->pc = 0x18058Cu;
    // 0x18058c: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18058cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x180590: 0xac800a24  sw          $zero, 0xA24($a0)
    ctx->pc = 0x180590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2596), GPR_U32(ctx, 0));
    // 0x180594: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x180594u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x180598: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x180598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18059c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18059cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1805a0:
    // 0x1805a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1805A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1805A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805A0u;
        // 0x1805a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1805A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1805A8u;
}
