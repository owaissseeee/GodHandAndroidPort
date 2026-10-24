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

// Function: func_001C8020
// Address: 0x1c8020 - 0x1c8288
void func_001C8020_0x1c8020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C8020_0x1c8020");
#endif

    switch (ctx->pc) {
        case 0x1c80c8u: goto label_1c80c8;
        case 0x1c80d0u: goto label_1c80d0;
        default: break;
    }

    ctx->pc = 0x1c8020u;

    // 0x1c8020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c8020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c8024: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c8024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c8028: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c8028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c802c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c802cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8034: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c8034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c8038: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8038u;
    {
        const bool branch_taken_0x1c8038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8038u;
        // 0x1c803c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8038) {
            ctx->pc = 0x1C804Cu;
            goto label_1c804c;
        }
    }
    ctx->pc = 0x1C8040u;
    // 0x1c8040: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1c8040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c8044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8044u;
    {
        const bool branch_taken_0x1c8044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8044u;
        // 0x1c8048: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8044) {
            ctx->pc = 0x1C8050u;
            goto label_1c8050;
        }
    }
    ctx->pc = 0x1C804Cu;
label_1c804c:
    // 0x1c804c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c804cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8050:
    // 0x1c8050: 0x8e020644  lw          $v0, 0x644($s0)
    ctx->pc = 0x1c8050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1604)));
    // 0x1c8054: 0x50400087  beql        $v0, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x1C8054u;
    {
        const bool branch_taken_0x1c8054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8054) {
            ctx->pc = 0x1C8058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8054u;
            // 0x1c8058: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8274u;
            goto label_1c8274;
        }
    }
    ctx->pc = 0x1C805Cu;
    // 0x1c805c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1c805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1c8060: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c8060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c8064: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8064u;
    {
        const bool branch_taken_0x1c8064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8064) {
            ctx->pc = 0x1C8068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8064u;
            // 0x1c8068: 0x8e040644  lw          $a0, 0x644($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8088u;
            goto label_1c8088;
        }
    }
    ctx->pc = 0x1C806Cu;
    // 0x1c806c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1c806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8070: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c8070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c8074: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c8074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8078: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c8078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c807c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8080: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c8080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c8084: 0x8e040644  lw          $a0, 0x644($s0)
    ctx->pc = 0x1c8084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1604)));
label_1c8088:
    // 0x1c8088: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x1c8088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c808c: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x1c808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1c8090: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8090u;
    {
        const bool branch_taken_0x1c8090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8090) {
            ctx->pc = 0x1C8094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8090u;
            // 0x1c8094: 0x8e020644  lw          $v0, 0x644($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C80B4u;
            goto label_1c80b4;
        }
    }
    ctx->pc = 0x1C8098u;
    // 0x1c8098: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x1c8098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c809c: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1c809cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1c80a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c80a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c80a4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c80a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c80a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c80a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c80ac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c80acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c80b0: 0x8e020644  lw          $v0, 0x644($s0)
    ctx->pc = 0x1c80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1604)));
label_1c80b4:
    // 0x1c80b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c80b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c80b8: 0xc44005a8  lwc1        $f0, 0x5A8($v0)
    ctx->pc = 0x1c80b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c80bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c80bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1c80c0: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1C80C0u;
    SET_GPR_U32(ctx, 31, 0x1C80C8u);
    ctx->pc = 0x1C80C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80C0u;
    // 0x1c80c4: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1C80C0u, 0x1C80C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80C8u;
label_1c80c8:
    // 0x1c80c8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1C80C8u;
    SET_GPR_U32(ctx, 31, 0x1C80D0u);
    ctx->pc = 0x1C80CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C80C8u;
    // 0x1c80cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1C80C8u, 0x1C80D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C80D0u;
label_1c80d0:
    // 0x1c80d0: 0x12200067  beqz        $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x1C80D0u;
    {
        const bool branch_taken_0x1c80d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80D0u;
        // 0x1c80d4: 0x2402033f  addiu       $v0, $zero, 0x33F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 831));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80d0) {
            ctx->pc = 0x1C8270u;
            goto label_1c8270;
        }
    }
    ctx->pc = 0x1C80D8u;
    // 0x1c80d8: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c80d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1c80dc: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C80DCu;
    {
        const bool branch_taken_0x1c80dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80DCu;
        // 0x1c80e0: 0x28620340  slti        $v0, $v1, 0x340 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)832) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80dc) {
            ctx->pc = 0x1C8194u;
            goto label_1c8194;
        }
    }
    ctx->pc = 0x1C80E4u;
    // 0x1c80e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C80E4u;
    {
        const bool branch_taken_0x1c80e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80E4u;
        // 0x1c80e8: 0x2862030d  slti        $v0, $v1, 0x30D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)781) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80e4) {
            ctx->pc = 0x1C8130u;
            goto label_1c8130;
        }
    }
    ctx->pc = 0x1C80ECu;
    // 0x1c80ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C80ECu;
    {
        const bool branch_taken_0x1c80ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80ECu;
        // 0x1c80f0: 0x2862030b  slti        $v0, $v1, 0x30B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)779) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80ec) {
            ctx->pc = 0x1C8114u;
            goto label_1c8114;
        }
    }
    ctx->pc = 0x1C80F4u;
    // 0x1c80f4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C80F4u;
    {
        const bool branch_taken_0x1c80f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C80F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80F4u;
        // 0x1c80f8: 0x24020301  addiu       $v0, $zero, 0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80f4) {
            ctx->pc = 0x1C81E0u;
            goto label_1c81e0;
        }
    }
    ctx->pc = 0x1C80FCu;
    // 0x1c80fc: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C80FCu;
    {
        const bool branch_taken_0x1c80fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C80FCu;
        // 0x1c8100: 0x2402030a  addiu       $v0, $zero, 0x30A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c80fc) {
            ctx->pc = 0x1C81E0u;
            goto label_1c81e0;
        }
    }
    ctx->pc = 0x1C8104u;
    // 0x1c8104: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C8104u;
    {
        const bool branch_taken_0x1c8104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8104u;
        // 0x1c8108: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8104) {
            ctx->pc = 0x1C8198u;
            goto label_1c8198;
        }
    }
    ctx->pc = 0x1C810Cu;
    // 0x1c810c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1C810Cu;
    {
        const bool branch_taken_0x1c810c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C810Cu;
        // 0x1c8110: 0xc6000624  lwc1        $f0, 0x624($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c810c) {
            ctx->pc = 0x1C8244u;
            goto label_1c8244;
        }
    }
    ctx->pc = 0x1C8114u;
label_1c8114:
    // 0x1c8114: 0x24020325  addiu       $v0, $zero, 0x325
    ctx->pc = 0x1c8114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 805));
    // 0x1c8118: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C8118u;
    {
        const bool branch_taken_0x1c8118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8118u;
        // 0x1c811c: 0x24020332  addiu       $v0, $zero, 0x332 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 818));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8118) {
            ctx->pc = 0x1C8194u;
            goto label_1c8194;
        }
    }
    ctx->pc = 0x1C8120u;
    // 0x1c8120: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C8120u;
    {
        const bool branch_taken_0x1c8120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8120u;
        // 0x1c8124: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8120) {
            ctx->pc = 0x1C81E4u;
            goto label_1c81e4;
        }
    }
    ctx->pc = 0x1C8128u;
    // 0x1c8128: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1C8128u;
    {
        const bool branch_taken_0x1c8128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8128u;
        // 0x1c812c: 0xc6000624  lwc1        $f0, 0x624($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8128) {
            ctx->pc = 0x1C8244u;
            goto label_1c8244;
        }
    }
    ctx->pc = 0x1C8130u;
label_1c8130:
    // 0x1c8130: 0x24020419  addiu       $v0, $zero, 0x419
    ctx->pc = 0x1c8130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1049));
    // 0x1c8134: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C8134u;
    {
        const bool branch_taken_0x1c8134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8134u;
        // 0x1c8138: 0x2862041a  slti        $v0, $v1, 0x41A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1050) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8134) {
            ctx->pc = 0x1C81E0u;
            goto label_1c81e0;
        }
    }
    ctx->pc = 0x1C813Cu;
    // 0x1c813c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C813Cu;
    {
        const bool branch_taken_0x1c813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C813Cu;
        // 0x1c8140: 0x24020410  addiu       $v0, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c813c) {
            ctx->pc = 0x1C815Cu;
            goto label_1c815c;
        }
    }
    ctx->pc = 0x1C8144u;
    // 0x1c8144: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C8144u;
    {
        const bool branch_taken_0x1c8144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8144u;
        // 0x1c8148: 0x24020411  addiu       $v0, $zero, 0x411 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8144) {
            ctx->pc = 0x1C81E0u;
            goto label_1c81e0;
        }
    }
    ctx->pc = 0x1C814Cu;
    // 0x1c814c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C814Cu;
    {
        const bool branch_taken_0x1c814c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C814Cu;
        // 0x1c8150: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c814c) {
            ctx->pc = 0x1C8198u;
            goto label_1c8198;
        }
    }
    ctx->pc = 0x1C8154u;
    // 0x1c8154: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C8154u;
    {
        const bool branch_taken_0x1c8154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8154u;
        // 0x1c8158: 0xc6000624  lwc1        $f0, 0x624($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8154) {
            ctx->pc = 0x1C8244u;
            goto label_1c8244;
        }
    }
    ctx->pc = 0x1C815Cu;
label_1c815c:
    // 0x1c815c: 0x2402041f  addiu       $v0, $zero, 0x41F
    ctx->pc = 0x1c815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x1c8160: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C8160u;
    {
        const bool branch_taken_0x1c8160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8160u;
        // 0x1c8164: 0x28620420  slti        $v0, $v1, 0x420 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1056) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8160) {
            ctx->pc = 0x1C81E0u;
            goto label_1c81e0;
        }
    }
    ctx->pc = 0x1C8168u;
    // 0x1c8168: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8168u;
    {
        const bool branch_taken_0x1c8168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8168u;
        // 0x1c816c: 0x2402041a  addiu       $v0, $zero, 0x41A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8168) {
            ctx->pc = 0x1C8180u;
            goto label_1c8180;
        }
    }
    ctx->pc = 0x1C8170u;
    // 0x1c8170: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8170u;
    {
        const bool branch_taken_0x1c8170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8170u;
        // 0x1c8174: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8170) {
            ctx->pc = 0x1C8198u;
            goto label_1c8198;
        }
    }
    ctx->pc = 0x1C8178u;
    // 0x1c8178: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C8178u;
    {
        const bool branch_taken_0x1c8178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8178u;
        // 0x1c817c: 0xc6000624  lwc1        $f0, 0x624($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8178) {
            ctx->pc = 0x1C8244u;
            goto label_1c8244;
        }
    }
    ctx->pc = 0x1C8180u;
label_1c8180:
    // 0x1c8180: 0x2402042e  addiu       $v0, $zero, 0x42E
    ctx->pc = 0x1c8180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
    // 0x1c8184: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C8184u;
    {
        const bool branch_taken_0x1c8184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8184u;
        // 0x1c8188: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8184) {
            ctx->pc = 0x1C81E4u;
            goto label_1c81e4;
        }
    }
    ctx->pc = 0x1C818Cu;
    // 0x1c818c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1C818Cu;
    {
        const bool branch_taken_0x1c818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C818Cu;
        // 0x1c8190: 0xc6000624  lwc1        $f0, 0x624($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c818c) {
            ctx->pc = 0x1C8244u;
            goto label_1c8244;
        }
    }
    ctx->pc = 0x1C8194u;
label_1c8194:
    // 0x1c8194: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1c8194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1c8198:
    // 0x1c8198: 0xc6020624  lwc1        $f2, 0x624($s0)
    ctx->pc = 0x1c8198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c819c: 0xc441de70  lwc1        $f1, -0x2190($v0)
    ctx->pc = 0x1c819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c81a0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1c81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1c81a4: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x1c81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1c81a8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x1c81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x1c81ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c81acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c81b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c81b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c81b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c81b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c81b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c81b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c81bc: 0xc6020624  lwc1        $f2, 0x624($s0)
    ctx->pc = 0x1c81bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c81c0: 0xc461de74  lwc1        $f1, -0x218C($v1)
    ctx->pc = 0x1c81c0u;
    { uint32_t bits = FAST_READ32(0x3BDE74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c81c4: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x1c81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1c81c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c81c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c81cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c81d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c81d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c81d4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1c81d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c81d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C81D8u;
    {
        const bool branch_taken_0x1c81d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81D8u;
        // 0x1c81dc: 0xc481de78  lwc1        $f1, -0x2188($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294958712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81d8) {
            ctx->pc = 0x1C8228u;
            goto label_1c8228;
        }
    }
    ctx->pc = 0x1C81E0u;
label_1c81e0:
    // 0x1c81e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1c81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1c81e4:
    // 0x1c81e4: 0xc6020624  lwc1        $f2, 0x624($s0)
    ctx->pc = 0x1c81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c81e8: 0xc441de7c  lwc1        $f1, -0x2184($v0)
    ctx->pc = 0x1c81e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c81ec: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1c81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1c81f0: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x1c81f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1c81f4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x1c81f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x1c81f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c81f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c81fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c81fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8200: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8204: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c8204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c8208: 0xc6020624  lwc1        $f2, 0x624($s0)
    ctx->pc = 0x1c8208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c820c: 0xc461de80  lwc1        $f1, -0x2180($v1)
    ctx->pc = 0x1c820cu;
    { uint32_t bits = FAST_READ32(0x3BDE80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8210: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x1c8210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1c8214: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c8214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c8218: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c8218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c821c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c821cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8220: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1c8220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c8224: 0xc481de84  lwc1        $f1, -0x217C($a0)
    ctx->pc = 0x1c8224u;
    { uint32_t bits = FAST_READ32(0x3BDE84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c8228:
    // 0x1c8228: 0xc6020624  lwc1        $f2, 0x624($s0)
    ctx->pc = 0x1c8228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c822c: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x1c822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1c8230: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c8230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c8234: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c8234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c823c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c823cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c8240: 0xc6000624  lwc1        $f0, 0x624($s0)
    ctx->pc = 0x1c8240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c8244:
    // 0x1c8244: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1c8244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1c8248: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c824c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c824cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c8250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8254: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c8254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c8258: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c825c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c825cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8260: 0x0  nop
    ctx->pc = 0x1c8260u;
    // NOP
    // 0x1c8264: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8264u;
    {
        const bool branch_taken_0x1c8264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8264u;
        // 0x1c8268: 0xe6000624  swc1        $f0, 0x624($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8264) {
            ctx->pc = 0x1C8270u;
            goto label_1c8270;
        }
    }
    ctx->pc = 0x1C826Cu;
    // 0x1c826c: 0xe6020624  swc1        $f2, 0x624($s0)
    ctx->pc = 0x1c826cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
label_1c8270:
    // 0x1c8270: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c8270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c8274:
    // 0x1c8274: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c8274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c827c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C827Cu;
        // 0x1c8280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8284u;
    // 0x1c8284: 0x0  nop
    ctx->pc = 0x1c8284u;
    // NOP
    ctx->pc = 0x1c8288u;
}
