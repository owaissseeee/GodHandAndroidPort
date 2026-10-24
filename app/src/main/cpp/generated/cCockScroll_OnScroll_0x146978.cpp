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

// Function: cCockScroll_OnScroll
// Address: 0x146978 - 0x146a18
void cCockScroll_OnScroll_0x146978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCockScroll_OnScroll_0x146978");
#endif

    ctx->pc = 0x146978u;

    // 0x146978: 0x84870100  lh          $a3, 0x100($a0)
    ctx->pc = 0x146978u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x14697c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x14697cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x146980: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x146980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x146984: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x146984u;
    {
        const bool branch_taken_0x146984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146984u;
        // 0x146988: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146984) {
            ctx->pc = 0x146A0Cu;
            goto label_146a0c;
        }
    }
    ctx->pc = 0x14698Cu;
    // 0x14698c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14698Cu;
    {
        const bool branch_taken_0x14698c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x146990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14698Cu;
        // 0x146990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14698c) {
            ctx->pc = 0x1469A4u;
            goto label_1469a4;
        }
    }
    ctx->pc = 0x146994u;
    // 0x146994: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x146994u;
    {
        const bool branch_taken_0x146994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x146998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146994u;
        // 0x146998: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146994) {
            ctx->pc = 0x1469B0u;
            goto label_1469b0;
        }
    }
    ctx->pc = 0x14699Cu;
    // 0x14699c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14699Cu;
    {
        const bool branch_taken_0x14699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1469A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14699Cu;
        // 0x1469a0: 0x90820104  lbu         $v0, 0x104($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14699c) {
            ctx->pc = 0x1469C0u;
            goto label_1469c0;
        }
    }
    ctx->pc = 0x1469A4u;
label_1469a4:
    // 0x1469a4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1469a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1469a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1469A8u;
    {
        const bool branch_taken_0x1469a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1469ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1469A8u;
        // 0x1469ac: 0x246330d1  addiu       $v1, $v1, 0x30D1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12497));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469a8) {
            ctx->pc = 0x1469B4u;
            goto label_1469b4;
        }
    }
    ctx->pc = 0x1469B0u;
label_1469b0:
    // 0x1469b0: 0x2463304e  addiu       $v1, $v1, 0x304E
    ctx->pc = 0x1469b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12366));
label_1469b4:
    // 0x1469b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1469b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1469b8: 0xa44300f0  sh          $v1, 0xF0($v0)
    ctx->pc = 0x1469b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x1469bc: 0x90820104  lbu         $v0, 0x104($a0)
    ctx->pc = 0x1469bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 260)));
label_1469c0:
    // 0x1469c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1469c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1469c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1469C4u;
    {
        const bool branch_taken_0x1469c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469c4) {
            ctx->pc = 0x1469C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1469C4u;
            // 0x1469c8: 0x90820104  lbu         $v0, 0x104($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1469E8u;
            goto label_1469e8;
        }
    }
    ctx->pc = 0x1469CCu;
    // 0x1469cc: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x1469ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1469d0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1469d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1469d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1469d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1469d8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1469d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1469dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1469dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1469e0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1469e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1469e4: 0x90820104  lbu         $v0, 0x104($a0)
    ctx->pc = 0x1469e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 260)));
label_1469e8:
    // 0x1469e8: 0x84830100  lh          $v1, 0x100($a0)
    ctx->pc = 0x1469e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x1469ec: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x1469ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x1469f0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1469f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1469f4: 0xa0820104  sb          $v0, 0x104($a0)
    ctx->pc = 0x1469f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 260), (uint8_t)GPR_U32(ctx, 2));
    // 0x1469f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1469f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1469fc: 0xa46600f8  sh          $a2, 0xF8($v1)
    ctx->pc = 0x1469fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 248), (uint16_t)GPR_U32(ctx, 6));
    // 0x146a00: 0x94820100  lhu         $v0, 0x100($a0)
    ctx->pc = 0x146a00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x146a04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146a08: 0xa4820100  sh          $v0, 0x100($a0)
    ctx->pc = 0x146a08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 2));
label_146a0c:
    // 0x146a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x146A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146A14u;
    // 0x146a14: 0x0  nop
    ctx->pc = 0x146a14u;
    // NOP
    ctx->pc = 0x146a18u;
}
