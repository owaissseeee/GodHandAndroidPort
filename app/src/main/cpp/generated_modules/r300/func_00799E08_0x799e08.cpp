#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_00799E08
// Address: 0x799e08 - 0x799f48
void func_00799E08_0x799e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799E08_0x799e08");
#endif

    switch (ctx->pc) {
        case 0x799e40u: goto label_799e40;
        case 0x799e58u: goto label_799e58;
        case 0x799e64u: goto label_799e64;
        case 0x799e78u: goto label_799e78;
        case 0x799eb4u: goto label_799eb4;
        case 0x799eccu: goto label_799ecc;
        case 0x799ed8u: goto label_799ed8;
        case 0x799ef0u: goto label_799ef0;
        case 0x799efcu: goto label_799efc;
        case 0x799f1cu: goto label_799f1c;
        default: break;
    }

    ctx->pc = 0x799e08u;

    // 0x799e08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x799e0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e10: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x799e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x799e14: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799e18: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x799e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x799e1c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x799e20: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x799e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x799e24: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x799e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x799e28: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x799e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x799e2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799e30: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x799e30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x799e34: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799e38: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799E38u;
    SET_GPR_U32(ctx, 31, 0x799E40u);
    ctx->pc = 0x799E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E38u;
    // 0x799e3c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E38u, 0x799E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E40u;
label_799e40:
    // 0x799e40: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x799e40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e44: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x799e48: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799e4c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799e50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799E50u;
    {
        const bool branch_taken_0x799e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E50u;
        // 0x799e54: 0x3c15005f  lui         $s5, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e50) {
            ctx->pc = 0x799E64u;
            goto label_799e64;
        }
    }
    ctx->pc = 0x799E58u;
label_799e58:
    // 0x799e58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e5c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799E5Cu;
    SET_GPR_U32(ctx, 31, 0x799E64u);
    ctx->pc = 0x799E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E5Cu;
    // 0x799e60: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E5Cu, 0x799E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E64u;
label_799e64:
    // 0x799e64: 0x2650ea60  addiu       $s0, $s2, -0x15A0
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x799e68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e70: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799E70u;
    SET_GPR_U32(ctx, 31, 0x799E78u);
    ctx->pc = 0x799E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E70u;
    // 0x799e74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799E70u, 0x799E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E78u;
label_799e78:
    // 0x799e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e7c: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x799E7Cu;
    {
        const bool branch_taken_0x799e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E7Cu;
        // 0x799e80: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e7c) {
            ctx->pc = 0x799E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e58;
        }
    }
    ctx->pc = 0x799E84u;
    // 0x799e84: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x799e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799e88: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x799e8c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799e90: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799e90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799e94: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x799e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x799e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ea0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799ea4: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799ea8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799eac: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x799EACu;
    SET_GPR_U32(ctx, 31, 0x799EB4u);
    ctx->pc = 0x799EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EACu;
    // 0x799eb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799EACu, 0x799EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB4u;
label_799eb4:
    // 0x799eb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799eb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec4: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799EC4u;
    SET_GPR_U32(ctx, 31, 0x799ECCu);
    ctx->pc = 0x799EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EC4u;
    // 0x799ec8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799EC4u, 0x799ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ECCu;
label_799ecc:
    // 0x799ecc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ed0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799ED0u;
    SET_GPR_U32(ctx, 31, 0x799ED8u);
    ctx->pc = 0x799ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ED0u;
    // 0x799ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799ED0u, 0x799ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ED8u;
label_799ed8:
    // 0x799ed8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799ed8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799edc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ee4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ee8: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799EE8u;
    SET_GPR_U32(ctx, 31, 0x799EF0u);
    ctx->pc = 0x799EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE8u;
    // 0x799eec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799EE8u, 0x799EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF0u;
label_799ef0:
    // 0x799ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ef4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799EF4u;
    SET_GPR_U32(ctx, 31, 0x799EFCu);
    ctx->pc = 0x799EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF4u;
    // 0x799ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799EF4u, 0x799EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EFCu;
label_799efc:
    // 0x799efc: 0x8ea48658  lw          $a0, -0x79A8($s5)
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
    // 0x799f00: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x799f04: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799f08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799f0c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799f10: 0x8e832f84  lw          $v1, 0x2F84($s4)
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799f14: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799F14u;
    SET_GPR_U32(ctx, 31, 0x799F1Cu);
    ctx->pc = 0x799F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F14u;
    // 0x799f18: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799F14u, 0x799F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F1Cu;
label_799f1c:
    // 0x799f1c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x799f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799f20: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x799f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799f24: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x799f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799f28: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x799f28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799f2c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x799f2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799f30: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x799f30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799f34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799f38: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x799f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x799F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F3Cu;
        // 0x799f40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F44u;
    // 0x799f44: 0x0  nop
    ctx->pc = 0x799f44u;
    // NOP
    ctx->pc = 0x799f48u;
}
} // namespace gh_r300
