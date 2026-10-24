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

// Function: UpdateAttackMovePhase_102FE8
// Address: 0x102fe8 - 0x1030c8
void UpdateAttackMovePhase_102FE8_0x102fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateAttackMovePhase_102FE8_0x102fe8");
#endif

    switch (ctx->pc) {
        case 0x103044u: goto label_103044;
        case 0x103064u: goto label_103064;
        case 0x103078u: goto label_103078;
        case 0x1030a4u: goto label_1030a4;
        case 0x1030b0u: goto label_1030b0;
        default: break;
    }

    ctx->pc = 0x102fe8u;

    // 0x102fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102fec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x102fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x102ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102ff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ff8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x102ff8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x102ffc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x102ffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x103000: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x103000u;
    {
        const bool branch_taken_0x103000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103000u;
        // 0x103004: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103000) {
            ctx->pc = 0x103018u;
            goto label_103018;
        }
    }
    ctx->pc = 0x103008u;
    // 0x103008: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x103008u;
    {
        const bool branch_taken_0x103008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x103008) {
            ctx->pc = 0x103070u;
            goto label_103070;
        }
    }
    ctx->pc = 0x103010u;
    // 0x103010: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x103010u;
    {
        const bool branch_taken_0x103010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103010u;
        // 0x103014: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103010) {
            ctx->pc = 0x1030B4u;
            goto label_1030b4;
        }
    }
    ctx->pc = 0x103018u;
label_103018:
    // 0x103018: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x103018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10301c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10301cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103020: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x103020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x103024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103028: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x103028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x10302c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10302cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103030: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x103030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x103034: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x103034u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103038: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x103038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10303c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10303Cu;
    SET_GPR_U32(ctx, 31, 0x103044u);
    ctx->pc = 0x103040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10303Cu;
    // 0x103040: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10303Cu, 0x103044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103044u;
label_103044:
    // 0x103044: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x103044u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x103048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10304c: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x10304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x103050: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x103050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103054: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103058: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x103058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10305c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x10305Cu;
    SET_GPR_U32(ctx, 31, 0x103064u);
    ctx->pc = 0x103060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10305Cu;
    // 0x103060: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x10305Cu, 0x103064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103064u;
label_103064:
    // 0x103064: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x103064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x103068: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x103068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10306c: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x10306cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_103070:
    // 0x103070: 0xc055f06  jal         func_157C18
    ctx->pc = 0x103070u;
    SET_GPR_U32(ctx, 31, 0x103078u);
    ctx->pc = 0x103074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103070u;
    // 0x103074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x103070u, 0x103078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103078u;
label_103078:
    // 0x103078: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103078u;
    {
        const bool branch_taken_0x103078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x103078) {
            ctx->pc = 0x103090u;
            goto label_103090;
        }
    }
    ctx->pc = 0x103080u;
    // 0x103080: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x103080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x103084: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x103084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x103088: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x103088u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10308c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10308cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_103090:
    // 0x103090: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x103090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x103094: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x103094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x103098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10309c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10309Cu;
    SET_GPR_U32(ctx, 31, 0x1030A4u);
    ctx->pc = 0x1030A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10309Cu;
    // 0x1030a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10309Cu, 0x1030A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030A4u;
label_1030a4:
    // 0x1030a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1030a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1030a8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1030A8u;
    SET_GPR_U32(ctx, 31, 0x1030B0u);
    ctx->pc = 0x1030ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1030A8u;
    // 0x1030ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1030A8u, 0x1030B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030B0u;
label_1030b0:
    // 0x1030b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1030b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1030b4:
    // 0x1030b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1030b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1030b8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1030b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1030bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1030BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1030C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030BCu;
        // 0x1030c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1030BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1030C4u;
    // 0x1030c4: 0x0  nop
    ctx->pc = 0x1030c4u;
    // NOP
    ctx->pc = 0x1030c8u;
}
