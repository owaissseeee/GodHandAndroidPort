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

// Function: cOm5a_setOpenFix
// Address: 0x1ad918 - 0x1ad9c8
void cOm5a_setOpenFix_0x1ad918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm5a_setOpenFix_0x1ad918");
#endif

    switch (ctx->pc) {
        case 0x1ad918u: goto label_1ad918;
        case 0x1ad91cu: goto label_1ad91c;
        case 0x1ad920u: goto label_1ad920;
        case 0x1ad924u: goto label_1ad924;
        case 0x1ad928u: goto label_1ad928;
        case 0x1ad92cu: goto label_1ad92c;
        case 0x1ad930u: goto label_1ad930;
        case 0x1ad934u: goto label_1ad934;
        case 0x1ad938u: goto label_1ad938;
        case 0x1ad93cu: goto label_1ad93c;
        case 0x1ad940u: goto label_1ad940;
        case 0x1ad944u: goto label_1ad944;
        case 0x1ad948u: goto label_1ad948;
        case 0x1ad94cu: goto label_1ad94c;
        case 0x1ad950u: goto label_1ad950;
        case 0x1ad954u: goto label_1ad954;
        case 0x1ad958u: goto label_1ad958;
        case 0x1ad95cu: goto label_1ad95c;
        case 0x1ad960u: goto label_1ad960;
        case 0x1ad964u: goto label_1ad964;
        case 0x1ad968u: goto label_1ad968;
        case 0x1ad96cu: goto label_1ad96c;
        case 0x1ad970u: goto label_1ad970;
        case 0x1ad974u: goto label_1ad974;
        case 0x1ad978u: goto label_1ad978;
        case 0x1ad97cu: goto label_1ad97c;
        case 0x1ad980u: goto label_1ad980;
        case 0x1ad984u: goto label_1ad984;
        case 0x1ad988u: goto label_1ad988;
        case 0x1ad98cu: goto label_1ad98c;
        case 0x1ad990u: goto label_1ad990;
        case 0x1ad994u: goto label_1ad994;
        case 0x1ad998u: goto label_1ad998;
        case 0x1ad99cu: goto label_1ad99c;
        case 0x1ad9a0u: goto label_1ad9a0;
        case 0x1ad9a4u: goto label_1ad9a4;
        case 0x1ad9a8u: goto label_1ad9a8;
        case 0x1ad9acu: goto label_1ad9ac;
        case 0x1ad9b0u: goto label_1ad9b0;
        case 0x1ad9b4u: goto label_1ad9b4;
        case 0x1ad9b8u: goto label_1ad9b8;
        case 0x1ad9bcu: goto label_1ad9bc;
        case 0x1ad9c0u: goto label_1ad9c0;
        case 0x1ad9c4u: goto label_1ad9c4;
        default: break;
    }

    ctx->pc = 0x1ad918u;

label_1ad918:
    // 0x1ad918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ad91c:
    // 0x1ad91c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ad91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ad920:
    // 0x1ad920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ad924:
    // 0x1ad924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ad928:
    // 0x1ad928: 0x9202060d  lbu         $v0, 0x60D($s0)
    ctx->pc = 0x1ad928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1549)));
label_1ad92c:
    // 0x1ad92c: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_1ad930:
    if (ctx->pc == 0x1AD930u) {
        ctx->pc = 0x1AD930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD92Cu;
        // 0x1ad930: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD934u;
        goto label_1ad934;
    }
    ctx->pc = 0x1AD92Cu;
    {
        const bool branch_taken_0x1ad92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad92c) {
            ctx->pc = 0x1AD930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD92Cu;
            // 0x1ad930: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD9BCu;
            goto label_1ad9bc;
        }
    }
    ctx->pc = 0x1AD934u;
label_1ad934:
    // 0x1ad934: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1ad934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1ad938:
    // 0x1ad938: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1ad938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1ad93c:
    // 0x1ad93c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1ad93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1ad940:
    // 0x1ad940: 0x40f809  jalr        $v0
label_1ad944:
    if (ctx->pc == 0x1AD944u) {
        ctx->pc = 0x1AD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD940u;
        // 0x1ad944: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD948u;
        goto label_1ad948;
    }
    ctx->pc = 0x1AD940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD948u);
        ctx->pc = 0x1AD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD940u;
        // 0x1ad944: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD940u, 0x1AD948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD948u;
label_1ad948:
    // 0x1ad948: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ad948u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1ad94c:
    // 0x1ad94c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ad94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1ad950:
    // 0x1ad950: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1ad950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1ad954:
    // 0x1ad954: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ad958:
    if (ctx->pc == 0x1AD958u) {
        ctx->pc = 0x1AD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD954u;
        // 0x1ad958: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD95Cu;
        goto label_1ad95c;
    }
    ctx->pc = 0x1AD954u;
    {
        const bool branch_taken_0x1ad954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD954u;
        // 0x1ad958: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad954) {
            ctx->pc = 0x1AD968u;
            goto label_1ad968;
        }
    }
    ctx->pc = 0x1AD95Cu;
label_1ad95c:
    // 0x1ad95c: 0xc6010790  lwc1        $f1, 0x790($s0)
    ctx->pc = 0x1ad95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad960:
    // 0x1ad960: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ad964:
    if (ctx->pc == 0x1AD964u) {
        ctx->pc = 0x1AD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD960u;
        // 0x1ad964: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD968u;
        goto label_1ad968;
    }
    ctx->pc = 0x1AD960u;
    {
        const bool branch_taken_0x1ad960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD960u;
        // 0x1ad964: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad960) {
            ctx->pc = 0x1AD970u;
            goto label_1ad970;
        }
    }
    ctx->pc = 0x1AD968u;
label_1ad968:
    // 0x1ad968: 0xc6010790  lwc1        $f1, 0x790($s0)
    ctx->pc = 0x1ad968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad96c:
    // 0x1ad96c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ad96cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ad970:
    // 0x1ad970: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ad970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1ad974:
    // 0x1ad974: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1ad974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1ad978:
    // 0x1ad978: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ad978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ad97c:
    // 0x1ad97c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1ad97cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1ad980:
    // 0x1ad980: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1ad980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1ad984:
    // 0x1ad984: 0x60f809  jalr        $v1
label_1ad988:
    if (ctx->pc == 0x1AD988u) {
        ctx->pc = 0x1AD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD984u;
        // 0x1ad988: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD98Cu;
        goto label_1ad98c;
    }
    ctx->pc = 0x1AD984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AD98Cu);
        ctx->pc = 0x1AD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD984u;
        // 0x1ad988: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD984u, 0x1AD98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD98Cu;
label_1ad98c:
    // 0x1ad98c: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x1ad98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_1ad990:
    // 0x1ad990: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x1ad990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_1ad994:
    // 0x1ad994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ad994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad998:
    // 0x1ad998: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ad998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad99c:
    // 0x1ad99c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ad99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1ad9a0:
    // 0x1ad9a0: 0xa204060d  sb          $a0, 0x60D($s0)
    ctx->pc = 0x1ad9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1549), (uint8_t)GPR_U32(ctx, 4));
label_1ad9a4:
    // 0x1ad9a4: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x1ad9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
label_1ad9a8:
    // 0x1ad9a8: 0xa20502f4  sb          $a1, 0x2F4($s0)
    ctx->pc = 0x1ad9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 5));
label_1ad9ac:
    // 0x1ad9ac: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ad9acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1ad9b0:
    // 0x1ad9b0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1ad9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1ad9b4:
    // 0x1ad9b4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1ad9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ad9b8:
    // 0x1ad9b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ad9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad9bc:
    // 0x1ad9bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad9c0:
    // 0x1ad9c0: 0x3e00008  jr          $ra
label_1ad9c4:
    if (ctx->pc == 0x1AD9C4u) {
        ctx->pc = 0x1AD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9C0u;
        // 0x1ad9c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD9C8u;
        goto label_fallthrough_0x1ad9c0;
    }
    ctx->pc = 0x1AD9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD9C0u;
        // 0x1ad9c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ad9c0:
    ctx->pc = 0x1AD9C8u;
}
