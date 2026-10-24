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

// Function: cIDBase_transSprite
// Address: 0x2aaff0 - 0x2ab0b8
void cIDBase_transSprite_0x2aaff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_transSprite_0x2aaff0");
#endif

    switch (ctx->pc) {
        case 0x2ab0a8u: goto label_2ab0a8;
        default: break;
    }

    ctx->pc = 0x2aaff0u;

    // 0x2aaff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aaff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aaff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aaff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aaff8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2aaff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2aaffc: 0x90830046  lbu         $v1, 0x46($a0)
    ctx->pc = 0x2aaffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x2ab000: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB000u;
    {
        const bool branch_taken_0x2ab000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB000u;
        // 0x2ab004: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab000) {
            ctx->pc = 0x2AB010u;
            goto label_2ab010;
        }
    }
    ctx->pc = 0x2AB008u;
    // 0x2ab008: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB008u;
    {
        const bool branch_taken_0x2ab008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB008u;
        // 0x2ab00c: 0x9162008d  lbu         $v0, 0x8D($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 141)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab008) {
            ctx->pc = 0x2AB014u;
            goto label_2ab014;
        }
    }
    ctx->pc = 0x2AB010u;
label_2ab010:
    // 0x2ab010: 0x90820046  lbu         $v0, 0x46($a0)
    ctx->pc = 0x2ab010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 70)));
label_2ab014:
    // 0x2ab014: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x2ab014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x2ab018: 0x8562008e  lh          $v0, 0x8E($t3)
    ctx->pc = 0x2ab018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 142)));
    // 0x2ab01c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ab01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab024: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ab024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ab028: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2ab028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x2ab02c: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x2ab02cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ab030: 0x8165008c  lb          $a1, 0x8C($t3)
    ctx->pc = 0x2ab030u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 140)));
    // 0x2ab034: 0xc5620058  lwc1        $f2, 0x58($t3)
    ctx->pc = 0x2ab034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab038: 0xc5630068  lwc1        $f3, 0x68($t3)
    ctx->pc = 0x2ab038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab03c: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x2ab03cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ab040: 0x0  nop
    ctx->pc = 0x2ab040u;
    // NOP
    // 0x2ab044: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x2ab044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x2ab048: 0xc560005c  lwc1        $f0, 0x5C($t3)
    ctx->pc = 0x2ab048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab04c: 0xc561006c  lwc1        $f1, 0x6C($t3)
    ctx->pc = 0x2ab04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab050: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2ab050u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2ab054: 0x9168002d  lbu         $t0, 0x2D($t3)
    ctx->pc = 0x2ab054u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 45)));
    // 0x2ab058: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ab058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab05c: 0xc5700070  lwc1        $f16, 0x70($t3)
    ctx->pc = 0x2ab05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2ab060: 0x8d660084  lw          $a2, 0x84($t3)
    ctx->pc = 0x2ab060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
    // 0x2ab064: 0x460e1b83  div.s       $f14, $f3, $f14
    ctx->pc = 0x2ab064u;
    ctx->f[14] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[14]);
    // 0x2ab068: 0xc56c0050  lwc1        $f12, 0x50($t3)
    ctx->pc = 0x2ab068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ab06c: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x2ab06cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2ab070: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2ab070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ab074: 0xc56d0054  lwc1        $f13, 0x54($t3)
    ctx->pc = 0x2ab074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ab078: 0x46000bc6  mov.s       $f15, $f1
    ctx->pc = 0x2ab078u;
    ctx->f[15] = FPU_MOV_S(ctx->f[1]);
    // 0x2ab07c: 0x8d670064  lw          $a3, 0x64($t3)
    ctx->pc = 0x2ab07cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 100)));
    // 0x2ab080: 0x91690089  lbu         $t1, 0x89($t3)
    ctx->pc = 0x2ab080u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 137)));
    // 0x2ab084: 0x916a008b  lbu         $t2, 0x8B($t3)
    ctx->pc = 0x2ab084u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 139)));
    // 0x2ab088: 0x916b008a  lbu         $t3, 0x8A($t3)
    ctx->pc = 0x2ab088u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 138)));
    // 0x2ab08c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2ab08cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ab090: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2ab090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ab094: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2ab094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2ab098: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x2ab098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2ab09c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2ab09cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ab0a0: 0xc0b1c2a  jal         func_2C70A8
    ctx->pc = 0x2AB0A0u;
    SET_GPR_U32(ctx, 31, 0x2AB0A8u);
    ctx->pc = 0x2AB0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB0A0u;
    // 0x2ab0a4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C70A8u, 0x2AB0A0u, 0x2AB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB0A8u;
label_2ab0a8:
    // 0x2ab0a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ab0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB0ACu;
        // 0x2ab0b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB0B4u;
    // 0x2ab0b4: 0x0  nop
    ctx->pc = 0x2ab0b4u;
    // NOP
    ctx->pc = 0x2ab0b8u;
}
