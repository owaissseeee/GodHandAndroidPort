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

// Function: cModel_calcNullPart
// Address: 0x14a2b0 - 0x14a338
void cModel_calcNullPart_0x14a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_calcNullPart_0x14a2b0");
#endif

    switch (ctx->pc) {
        case 0x14a2f0u: goto label_14a2f0;
        default: break;
    }

    ctx->pc = 0x14a2b0u;

    // 0x14a2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a2b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14a2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14a2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a2bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a2c4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x14a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x14a2c8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x14a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x14a2cc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A2CCu;
    {
        const bool branch_taken_0x14a2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a2cc) {
            ctx->pc = 0x14A2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A2CCu;
            // 0x14a2d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A318u;
            goto label_14a318;
        }
    }
    ctx->pc = 0x14A2D4u;
    // 0x14a2d4: 0x26110110  addiu       $s1, $s0, 0x110
    ctx->pc = 0x14a2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a2d8: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x14a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14a2dc: 0x92080140  lbu         $t0, 0x140($s0)
    ctx->pc = 0x14a2dcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x14a2e0: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x14a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x14a2e4: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x14a2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x14a2e8: 0xc051e92  jal         func_147A48
    ctx->pc = 0x14A2E8u;
    SET_GPR_U32(ctx, 31, 0x14A2F0u);
    ctx->pc = 0x14A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2E8u;
    // 0x14a2ec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A48u, 0x14A2E8u, 0x14A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2F0u;
label_14a2f0:
    // 0x14a2f0: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x14a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x14a2f4: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A2F4u;
    {
        const bool branch_taken_0x14a2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x14a2f4) {
            ctx->pc = 0x14A2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A2F4u;
            // 0x14a2f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A318u;
            goto label_14a318;
        }
    }
    ctx->pc = 0x14A2FCu;
    // 0x14a2fc: 0xc6000110  lwc1        $f0, 0x110($s0)
    ctx->pc = 0x14a2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a300: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x14a300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x14a304: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x14a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a308: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14a308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14a30c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x14a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a310: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14a310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14a314: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14a314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14a318:
    // 0x14a318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a31c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a320: 0x3e00008  jr          $ra
    ctx->pc = 0x14A320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A320u;
        // 0x14a324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A328u;
    // 0x14a328: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14a328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14a32c: 0x0  nop
    ctx->pc = 0x14a32cu;
    // NOP
    // 0x14a330: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14a334: 0x0  nop
    ctx->pc = 0x14a334u;
    // NOP
    ctx->pc = 0x14a338u;
}
