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

// Function: func_00300E30
// Address: 0x300e30 - 0x300ef8
void func_00300E30_0x300e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00300E30_0x300e30");
#endif

    switch (ctx->pc) {
        case 0x300e5cu: goto label_300e5c;
        case 0x300e6cu: goto label_300e6c;
        case 0x300ee0u: goto label_300ee0;
        default: break;
    }

    ctx->pc = 0x300e30u;

    // 0x300e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x300e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x300e34: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x300e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x300e38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x300e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x300e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x300e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300e40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x300e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x300e44: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x300e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x300e48: 0x9043028e  lbu         $v1, 0x28E($v0)
    ctx->pc = 0x300e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 654)));
    // 0x300e4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x300E4Cu;
    {
        const bool branch_taken_0x300e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E4Cu;
        // 0x300e50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e4c) {
            ctx->pc = 0x300E64u;
            goto label_300e64;
        }
    }
    ctx->pc = 0x300E54u;
    // 0x300e54: 0xc0c7426  jal         func_31D098
    ctx->pc = 0x300E54u;
    SET_GPR_U32(ctx, 31, 0x300E5Cu);
    ctx->pc = 0x300E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300E54u;
    // 0x300e58: 0x26040220  addiu       $a0, $s0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D098u, 0x300E54u, 0x300E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E5Cu;
label_300e5c:
    // 0x300e5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300E5Cu;
    {
        const bool branch_taken_0x300e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E5Cu;
        // 0x300e60: 0xae020220  sw          $v0, 0x220($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e5c) {
            ctx->pc = 0x300E70u;
            goto label_300e70;
        }
    }
    ctx->pc = 0x300E64u;
label_300e64:
    // 0x300e64: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x300E64u;
    SET_GPR_U32(ctx, 31, 0x300E6Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x300E64u, 0x300E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E6Cu;
label_300e6c:
    // 0x300e6c: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x300e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
label_300e70:
    // 0x300e70: 0x96040224  lhu         $a0, 0x224($s0)
    ctx->pc = 0x300e70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x300e74: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x300E74u;
    {
        const bool branch_taken_0x300e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x300E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300E74u;
        // 0x300e78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e74) {
            ctx->pc = 0x300E98u;
            goto label_300e98;
        }
    }
    ctx->pc = 0x300E7Cu;
    // 0x300e7c: 0xc6000228  lwc1        $f0, 0x228($s0)
    ctx->pc = 0x300e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300e84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300e84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x300e88: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x300e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300e8c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x300e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x300e90: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x300e90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x300e94: 0x69480a  movz        $t1, $v1, $t1
    ctx->pc = 0x300e94u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_300e98:
    // 0x300e98: 0x8e080118  lw          $t0, 0x118($s0)
    ctx->pc = 0x300e98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x300e9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x300e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ea0: 0x8606018c  lh          $a2, 0x18C($s0)
    ctx->pc = 0x300ea0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x300ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ea8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x300ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x300eac: 0x24a701a0  addiu       $a3, $a1, 0x1A0
    ctx->pc = 0x300eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 416));
    // 0x300eb0: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x300eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x300eb4: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x300eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x300eb8: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x300eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x300ebc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x300ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x300ec0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x300ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x300ec4: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x300ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x300ec8: 0x9608018e  lhu         $t0, 0x18E($s0)
    ctx->pc = 0x300ec8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 398)));
    // 0x300ecc: 0x8ca60100  lw          $a2, 0x100($a1)
    ctx->pc = 0x300eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x300ed0: 0x8ca90108  lw          $t1, 0x108($a1)
    ctx->pc = 0x300ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x300ed4: 0x8caa010c  lw          $t2, 0x10C($a1)
    ctx->pc = 0x300ed4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
    // 0x300ed8: 0xc0c03be  jal         func_300EF8
    ctx->pc = 0x300ED8u;
    SET_GPR_U32(ctx, 31, 0x300EE0u);
    ctx->pc = 0x300EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300ED8u;
    // 0x300edc: 0x8cab0110  lw          $t3, 0x110($a1) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EF8u, 0x300ED8u, 0x300EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300EE0u;
label_300ee0:
    // 0x300ee0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x300ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300ee4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x300ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300ee8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x300ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300eec: 0x3e00008  jr          $ra
    ctx->pc = 0x300EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EECu;
        // 0x300ef0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300EF4u;
    // 0x300ef4: 0x0  nop
    ctx->pc = 0x300ef4u;
    // NOP
    ctx->pc = 0x300ef8u;
}
