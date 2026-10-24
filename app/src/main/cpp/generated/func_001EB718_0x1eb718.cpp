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

// Function: func_001EB718
// Address: 0x1eb718 - 0x1eb7b8
void func_001EB718_0x1eb718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EB718_0x1eb718");
#endif

    switch (ctx->pc) {
        case 0x1eb750u: goto label_1eb750;
        default: break;
    }

    ctx->pc = 0x1eb718u;

    // 0x1eb718: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1eb718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1eb71c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1eb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1eb720: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1eb720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1eb724: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eb724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eb728: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1eb728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb72c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1eb72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1eb730: 0x24523050  addiu       $s2, $v0, 0x3050
    ctx->pc = 0x1eb730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x1eb734: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1eb734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1eb738: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1eb738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eb740: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1eb740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eb744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb748: 0xc04e3ae  jal         func_138EB8
    ctx->pc = 0x1EB748u;
    SET_GPR_U32(ctx, 31, 0x1EB750u);
    ctx->pc = 0x1EB74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB748u;
    // 0x1eb74c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138EB8u, 0x1EB748u, 0x1EB750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB750u;
label_1eb750:
    // 0x1eb750: 0x26420c90  addiu       $v0, $s2, 0xC90
    ctx->pc = 0x1eb750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3216));
    // 0x1eb754: 0x26430ea0  addiu       $v1, $s2, 0xEA0
    ctx->pc = 0x1eb754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3744));
    // 0x1eb758: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB758u;
    {
        const bool branch_taken_0x1eb758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB758u;
        // 0x1eb75c: 0xae620200  sw          $v0, 0x200($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb758) {
            ctx->pc = 0x1EB778u;
            goto label_1eb778;
        }
    }
    ctx->pc = 0x1EB760u;
    // 0x1eb760: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1eb760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb764: 0xe6400ea0  swc1        $f0, 0xEA0($s2)
    ctx->pc = 0x1eb764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3744), bits); }
    // 0x1eb768: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1eb768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb76c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1eb76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1eb770: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1eb770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb774: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1eb774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1eb778:
    // 0x1eb778: 0x8e640200  lw          $a0, 0x200($s3)
    ctx->pc = 0x1eb778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x1eb77c: 0x24820200  addiu       $v0, $a0, 0x200
    ctx->pc = 0x1eb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1eb780: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB780u;
    {
        const bool branch_taken_0x1eb780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1EB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB780u;
        // 0x1eb784: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb780) {
            ctx->pc = 0x1EB7A0u;
            goto label_1eb7a0;
        }
    }
    ctx->pc = 0x1EB788u;
    // 0x1eb788: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1eb788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb78c: 0xe4800200  swc1        $f0, 0x200($a0)
    ctx->pc = 0x1eb78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
    // 0x1eb790: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1eb790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb794: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1eb794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1eb798: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1eb798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb79c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1eb79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1eb7a0:
    // 0x1eb7a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1eb7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb7a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eb7a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb7a8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1eb7a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7B0u;
        // 0x1eb7b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB7B8u;
}
