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

// Function: StepObj_advanceFrame
// Address: 0x2fc9a8 - 0x2fcac8
void StepObj_advanceFrame_0x2fc9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepObj_advanceFrame_0x2fc9a8");
#endif

    switch (ctx->pc) {
        case 0x2fca3cu: goto label_2fca3c;
        case 0x2fca84u: goto label_2fca84;
        default: break;
    }

    ctx->pc = 0x2fc9a8u;

    // 0x2fc9a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc9ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fc9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fc9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc9b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc9b8: 0x86030238  lh          $v1, 0x238($s0)
    ctx->pc = 0x2fc9b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x2fc9bc: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FC9BCu;
    {
        const bool branch_taken_0x2fc9bc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2FC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9BCu;
        // 0x2fc9c0: 0x96040238  lhu         $a0, 0x238($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9bc) {
            ctx->pc = 0x2FCA04u;
            goto label_2fca04;
        }
    }
    ctx->pc = 0x2FC9C4u;
    // 0x2fc9c4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fc9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2fc9c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fc9cc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fc9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fc9d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC9D0u;
    {
        const bool branch_taken_0x2fc9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9D0u;
        // 0x2fc9d4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9d0) {
            ctx->pc = 0x2FC9E8u;
            goto label_2fc9e8;
        }
    }
    ctx->pc = 0x2FC9D8u;
    // 0x2fc9d8: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x2fc9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
    // 0x2fc9dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fc9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fc9e0: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FC9E0u;
    {
        const bool branch_taken_0x2fc9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9E0u;
        // 0x2fc9e4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9e0) {
            ctx->pc = 0x2FCA7Cu;
            goto label_2fca7c;
        }
    }
    ctx->pc = 0x2FC9E8u;
label_2fc9e8:
    // 0x2fc9e8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fc9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2fc9ec: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fc9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2fc9f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fc9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fc9f4: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FC9F4u;
    {
        const bool branch_taken_0x2fc9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc9f4) {
            ctx->pc = 0x2FCA7Cu;
            goto label_2fca7c;
        }
    }
    ctx->pc = 0x2FC9FCu;
    // 0x2fc9fc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2FC9FCu;
    {
        const bool branch_taken_0x2fc9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9FCu;
        // 0x2fca00: 0xc6000234  lwc1        $f0, 0x234($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9fc) {
            ctx->pc = 0x2FCA8Cu;
            goto label_2fca8c;
        }
    }
    ctx->pc = 0x2FCA04u;
label_2fca04:
    // 0x2fca04: 0x8602022e  lh          $v0, 0x22E($s0)
    ctx->pc = 0x2fca04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
    // 0x2fca08: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2fca08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fca0c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FCA0Cu;
    {
        const bool branch_taken_0x2fca0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fca0c) {
            ctx->pc = 0x2FCA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCA0Cu;
            // 0x2fca10: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCA48u;
            goto label_2fca48;
        }
    }
    ctx->pc = 0x2FCA14u;
    // 0x2fca14: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x2fca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2fca18: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x2fca18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x2fca1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCA1Cu;
    {
        const bool branch_taken_0x2fca1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA1Cu;
        // 0x2fca20: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca1c) {
            ctx->pc = 0x2FCA34u;
            goto label_2fca34;
        }
    }
    ctx->pc = 0x2FCA24u;
    // 0x2fca24: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FCA24u;
    {
        const bool branch_taken_0x2fca24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca24) {
            ctx->pc = 0x2FCA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCA24u;
            // 0x2fca28: 0xa604022e  sh          $a0, 0x22E($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCA44u;
            goto label_2fca44;
        }
    }
    ctx->pc = 0x2FCA2Cu;
    // 0x2fca2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCA2Cu;
    {
        const bool branch_taken_0x2fca2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA2Cu;
        // 0x2fca30: 0xa600022e  sh          $zero, 0x22E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca2c) {
            ctx->pc = 0x2FCA44u;
            goto label_2fca44;
        }
    }
    ctx->pc = 0x2FCA34u;
label_2fca34:
    // 0x2fca34: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2FCA34u;
    SET_GPR_U32(ctx, 31, 0x2FCA3Cu);
    ctx->pc = 0x2FCA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCA34u;
    // 0x2fca38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FCA34u, 0x2FCA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCA3Cu;
label_2fca3c:
    // 0x2fca3c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2FCA3Cu;
    {
        const bool branch_taken_0x2fca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA3Cu;
        // 0x2fca40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca3c) {
            ctx->pc = 0x2FCAB4u;
            goto label_2fcab4;
        }
    }
    ctx->pc = 0x2FCA44u;
label_2fca44:
    // 0x2fca44: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fca44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2fca48:
    // 0x2fca48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fca4c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fca50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCA50u;
    {
        const bool branch_taken_0x2fca50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA50u;
        // 0x2fca54: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca50) {
            ctx->pc = 0x2FCA68u;
            goto label_2fca68;
        }
    }
    ctx->pc = 0x2FCA58u;
    // 0x2fca58: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x2fca58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
    // 0x2fca5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fca5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fca60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCA60u;
    {
        const bool branch_taken_0x2fca60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA60u;
        // 0x2fca64: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca60) {
            ctx->pc = 0x2FCA7Cu;
            goto label_2fca7c;
        }
    }
    ctx->pc = 0x2FCA68u;
label_2fca68:
    // 0x2fca68: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fca68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2fca6c: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2fca70: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fca70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fca74: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCA74u;
    {
        const bool branch_taken_0x2fca74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fca74) {
            ctx->pc = 0x2FCA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCA74u;
            // 0x2fca78: 0xc6000234  lwc1        $f0, 0x234($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCA8Cu;
            goto label_2fca8c;
        }
    }
    ctx->pc = 0x2FCA7Cu;
label_2fca7c:
    // 0x2fca7c: 0xc0be8d4  jal         func_2FA350
    ctx->pc = 0x2FCA7Cu;
    SET_GPR_U32(ctx, 31, 0x2FCA84u);
    ctx->pc = 0x2FCA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCA7Cu;
    // 0x2fca80: 0x26040234  addiu       $a0, $s0, 0x234 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA350u, 0x2FCA7Cu, 0x2FCA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCA84u;
label_2fca84:
    // 0x2fca84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FCA84u;
    {
        const bool branch_taken_0x2fca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA84u;
        // 0x2fca88: 0xc6000234  lwc1        $f0, 0x234($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca84) {
            ctx->pc = 0x2FCAA4u;
            goto label_2fcaa4;
        }
    }
    ctx->pc = 0x2FCA8Cu;
label_2fca8c:
    // 0x2fca8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fca8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fca90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fca90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fca94: 0x0  nop
    ctx->pc = 0x2fca94u;
    // NOP
    // 0x2fca98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fca98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fca9c: 0xe6000234  swc1        $f0, 0x234($s0)
    ctx->pc = 0x2fca9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
    // 0x2fcaa0: 0xc6000234  lwc1        $f0, 0x234($s0)
    ctx->pc = 0x2fcaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fcaa4:
    // 0x2fcaa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fcaa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcaa8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fcaa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2fcaac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2fcaacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2fcab0: 0xa603022e  sh          $v1, 0x22E($s0)
    ctx->pc = 0x2fcab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 3));
label_2fcab4:
    // 0x2fcab4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fcab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fcab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcabc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCABCu;
        // 0x2fcac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCAC4u;
    // 0x2fcac4: 0x0  nop
    ctx->pc = 0x2fcac4u;
    // NOP
    ctx->pc = 0x2fcac8u;
}
