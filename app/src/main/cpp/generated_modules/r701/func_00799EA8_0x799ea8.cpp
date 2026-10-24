#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: func_00799EA8
// Address: 0x799ea8 - 0x79a490
void func_00799EA8_0x799ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799EA8_0x799ea8");
#endif

    switch (ctx->pc) {
        case 0x799ee8u: goto label_799ee8;
        case 0x799ef8u: goto label_799ef8;
        case 0x799f1cu: goto label_799f1c;
        case 0x799f24u: goto label_799f24;
        case 0x799f30u: goto label_799f30;
        case 0x799f48u: goto label_799f48;
        case 0x799f60u: goto label_799f60;
        case 0x799f74u: goto label_799f74;
        case 0x799f80u: goto label_799f80;
        case 0x799f8cu: goto label_799f8c;
        case 0x799f98u: goto label_799f98;
        case 0x799facu: goto label_799fac;
        case 0x799fc0u: goto label_799fc0;
        case 0x799fd4u: goto label_799fd4;
        case 0x799ff0u: goto label_799ff0;
        case 0x799ffcu: goto label_799ffc;
        case 0x79a008u: goto label_79a008;
        case 0x79a020u: goto label_79a020;
        case 0x79a030u: goto label_79a030;
        case 0x79a03cu: goto label_79a03c;
        case 0x79a0d0u: goto label_79a0d0;
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a120u: goto label_79a120;
        case 0x79a12cu: goto label_79a12c;
        case 0x79a13cu: goto label_79a13c;
        case 0x79a158u: goto label_79a158;
        case 0x79a1c4u: goto label_79a1c4;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a218u: goto label_79a218;
        case 0x79a224u: goto label_79a224;
        case 0x79a234u: goto label_79a234;
        case 0x79a250u: goto label_79a250;
        case 0x79a2bcu: goto label_79a2bc;
        case 0x79a2e8u: goto label_79a2e8;
        case 0x79a310u: goto label_79a310;
        case 0x79a31cu: goto label_79a31c;
        case 0x79a32cu: goto label_79a32c;
        case 0x79a348u: goto label_79a348;
        case 0x79a354u: goto label_79a354;
        case 0x79a388u: goto label_79a388;
        case 0x79a394u: goto label_79a394;
        case 0x79a3a4u: goto label_79a3a4;
        case 0x79a3c0u: goto label_79a3c0;
        case 0x79a3d0u: goto label_79a3d0;
        case 0x79a3e0u: goto label_79a3e0;
        case 0x79a3f0u: goto label_79a3f0;
        case 0x79a400u: goto label_79a400;
        case 0x79a40cu: goto label_79a40c;
        case 0x79a450u: goto label_79a450;
        case 0x79a458u: goto label_79a458;
        case 0x79a464u: goto label_79a464;
        default: break;
    }

    ctx->pc = 0x799ea8u;

    // 0x799ea8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x799eac: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799eb0: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799ebc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799ec4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x799ec8: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799ecc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799ed0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799ed8: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x799ed8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x799edc: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x799edcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x799ee0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799EE0u;
    SET_GPR_U32(ctx, 31, 0x799EE8u);
    ctx->pc = 0x799EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE0u;
    // 0x799ee4: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799EE0u, 0x799EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EE8u;
label_799ee8:
    // 0x799ee8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x799ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x799eec: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x799eecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x799ef0: 0xc07ea54  jal         func_1FA950
    ctx->pc = 0x799EF0u;
    SET_GPR_U32(ctx, 31, 0x799EF8u);
    ctx->pc = 0x799EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF0u;
    // 0x799ef4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA950u, 0x799EF0u, 0x799EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF8u;
label_799ef8:
    // 0x799ef8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x799EF8u;
    {
        const bool branch_taken_0x799ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ef8) {
            ctx->pc = 0x799EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EF8u;
            // 0x799efc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F34u;
            goto label_799f34;
        }
    }
    ctx->pc = 0x799F00u;
    // 0x799f00: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799f04: 0x2606aad8  addiu       $a2, $s0, -0x5528
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945496));
    // 0x799f08: 0x24053003  addiu       $a1, $zero, 0x3003
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12291));
    // 0x799f0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f14: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799F14u;
    SET_GPR_U32(ctx, 31, 0x799F1Cu);
    ctx->pc = 0x799F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F14u;
    // 0x799f18: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799F14u, 0x799F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F1Cu;
label_799f1c:
    // 0x799f1c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799F1Cu;
    SET_GPR_U32(ctx, 31, 0x799F24u);
    ctx->pc = 0x799F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F1Cu;
    // 0x799f20: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799F1Cu, 0x799F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F24u;
label_799f24:
    // 0x799f24: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799f28: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799F28u;
    SET_GPR_U32(ctx, 31, 0x799F30u);
    ctx->pc = 0x799F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F28u;
    // 0x799f2c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799F28u, 0x799F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F30u;
label_799f30:
    // 0x799f30: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_799f34:
    // 0x799f34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799f3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799f40: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x799F40u;
    SET_GPR_U32(ctx, 31, 0x799F48u);
    ctx->pc = 0x799F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F40u;
    // 0x799f44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x799F40u, 0x799F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F48u;
label_799f48:
    // 0x799f48: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x799f48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x799f4c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x799f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799f50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f58: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x799F58u;
    SET_GPR_U32(ctx, 31, 0x799F60u);
    ctx->pc = 0x799F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F58u;
    // 0x799f5c: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x799F58u, 0x799F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F60u;
label_799f60:
    // 0x799f60: 0x26318658  addiu       $s1, $s1, -0x79A8
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    // 0x799f64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f6c: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x799F6Cu;
    SET_GPR_U32(ctx, 31, 0x799F74u);
    ctx->pc = 0x799F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F6Cu;
    // 0x799f70: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x799F6Cu, 0x799F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F74u;
label_799f74:
    // 0x799f74: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799f78: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799F78u;
    SET_GPR_U32(ctx, 31, 0x799F80u);
    ctx->pc = 0x799F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F78u;
    // 0x799f7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799F78u, 0x799F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F80u;
label_799f80:
    // 0x799f80: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799f84: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799F84u;
    SET_GPR_U32(ctx, 31, 0x799F8Cu);
    ctx->pc = 0x799F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F84u;
    // 0x799f88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799F84u, 0x799F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F8Cu;
label_799f8c:
    // 0x799f8c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799f90: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799F90u;
    SET_GPR_U32(ctx, 31, 0x799F98u);
    ctx->pc = 0x799F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F90u;
    // 0x799f94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799F90u, 0x799F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F98u;
label_799f98:
    // 0x799f98: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799f9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799f9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799fa0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x799fa0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x799fa4: 0xc0b6cdc  jal         func_2DB370
    ctx->pc = 0x799FA4u;
    SET_GPR_U32(ctx, 31, 0x799FACu);
    ctx->pc = 0x799FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FA4u;
    // 0x799fa8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB370u, 0x799FA4u, 0x799FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FACu;
label_799fac:
    // 0x799fac: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799fb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799fb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799fb4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x799fb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x799fb8: 0xc0b6cdc  jal         func_2DB370
    ctx->pc = 0x799FB8u;
    SET_GPR_U32(ctx, 31, 0x799FC0u);
    ctx->pc = 0x799FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FB8u;
    // 0x799fbc: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB370u, 0x799FB8u, 0x799FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC0u;
label_799fc0:
    // 0x799fc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799fc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799fc4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x799fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799fc8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x799fc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799fcc: 0xc0b6cdc  jal         func_2DB370
    ctx->pc = 0x799FCCu;
    SET_GPR_U32(ctx, 31, 0x799FD4u);
    ctx->pc = 0x799FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FCCu;
    // 0x799fd0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB370u, 0x799FCCu, 0x799FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FD4u;
label_799fd4:
    // 0x799fd4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799fd8: 0x2606aad8  addiu       $a2, $s0, -0x5528
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945496));
    // 0x799fdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799fe8: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799FE8u;
    SET_GPR_U32(ctx, 31, 0x799FF0u);
    ctx->pc = 0x799FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE8u;
    // 0x799fec: 0x24053002  addiu       $a1, $zero, 0x3002 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799FE8u, 0x799FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF0u;
label_799ff0:
    // 0x799ff0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799ff4: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799FF4u;
    SET_GPR_U32(ctx, 31, 0x799FFCu);
    ctx->pc = 0x799FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF4u;
    // 0x799ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799FF4u, 0x799FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FFCu;
label_799ffc:
    // 0x799ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a000: 0xc07ea54  jal         func_1FA950
    ctx->pc = 0x79A000u;
    SET_GPR_U32(ctx, 31, 0x79A008u);
    ctx->pc = 0x79A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A000u;
    // 0x79a004: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA950u, 0x79A000u, 0x79A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A008u;
label_79a008:
    // 0x79a008: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a00c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a014: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a018: 0xc07ea42  jal         func_1FA908
    ctx->pc = 0x79A018u;
    SET_GPR_U32(ctx, 31, 0x79A020u);
    ctx->pc = 0x79A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A018u;
    // 0x79a01c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA908u, 0x79A018u, 0x79A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A020u;
label_79a020:
    // 0x79a020: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a024: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a028: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A028u;
    SET_GPR_U32(ctx, 31, 0x79A030u);
    ctx->pc = 0x79A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A028u;
    // 0x79a02c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A028u, 0x79A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A030u;
label_79a030:
    // 0x79a030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a034: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A034u;
    SET_GPR_U32(ctx, 31, 0x79A03Cu);
    ctx->pc = 0x79A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A034u;
    // 0x79a038: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A034u, 0x79A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A03Cu;
label_79a03c:
    // 0x79a03c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a044: 0x50620083  beql        $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x79A044u;
    {
        const bool branch_taken_0x79a044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x79a044) {
            ctx->pc = 0x79A048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A044u;
            // 0x79a048: 0x8e658658  lw          $a1, -0x79A8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A254u;
            goto label_79a254;
        }
    }
    ctx->pc = 0x79A04Cu;
    // 0x79a04c: 0x106000be  beqz        $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x79A04Cu;
    {
        const bool branch_taken_0x79a04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A04Cu;
        // 0x79a050: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a04c) {
            ctx->pc = 0x79A348u;
            goto label_79a348;
        }
    }
    ctx->pc = 0x79A054u;
    // 0x79a054: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x79A054u;
    {
        const bool branch_taken_0x79a054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A054u;
        // 0x79a058: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a054) {
            ctx->pc = 0x79A158u;
            goto label_79a158;
        }
    }
    ctx->pc = 0x79A05Cu;
    // 0x79a05c: 0x146200bb  bne         $v1, $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x79A05Cu;
    {
        const bool branch_taken_0x79a05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A05Cu;
        // 0x79a060: 0x26648658  addiu       $a0, $s3, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a05c) {
            ctx->pc = 0x79A34Cu;
            goto label_79a34c;
        }
    }
    ctx->pc = 0x79A064u;
    // 0x79a064: 0x8e658658  lw          $a1, -0x79A8($s3)
    ctx->pc = 0x79a064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x79a068: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79a06c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a070: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x79a070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a074: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x79A074u;
    {
        const bool branch_taken_0x79a074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a074) {
            ctx->pc = 0x79A078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A074u;
            // 0x79a078: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A150u;
            goto label_79a150;
        }
    }
    ctx->pc = 0x79A07Cu;
    // 0x79a07c: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x79a07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79a080: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x79a080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x79a084: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x79a088: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x79a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a08c: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x79a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a090: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A090u;
    {
        const bool branch_taken_0x79a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A090u;
        // 0x79a094: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a090) {
            ctx->pc = 0x79A0D8u;
            goto label_79a0d8;
        }
    }
    ctx->pc = 0x79A098u;
    // 0x79a098: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a09c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A09Cu;
    {
        const bool branch_taken_0x79a09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A09Cu;
        // 0x79a0a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a09c) {
            ctx->pc = 0x79A0D8u;
            goto label_79a0d8;
        }
    }
    ctx->pc = 0x79A0A4u;
    // 0x79a0a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79a0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a0a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79A0A8u;
    {
        const bool branch_taken_0x79a0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0A8u;
        // 0x79a0ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0a8) {
            ctx->pc = 0x79A0D8u;
            goto label_79a0d8;
        }
    }
    ctx->pc = 0x79A0B0u;
    // 0x79a0b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a0b4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a0b8: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x79a0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x79a0bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a0c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a0c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a0c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0c8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A0C8u;
    SET_GPR_U32(ctx, 31, 0x79A0D0u);
    ctx->pc = 0x79A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0C8u;
    // 0x79a0cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A0C8u, 0x79A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0D0u;
label_79a0d0:
    // 0x79a0d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79A0D0u;
    {
        const bool branch_taken_0x79a0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a0d0) {
            ctx->pc = 0x79A0FCu;
            goto label_79a0fc;
        }
    }
    ctx->pc = 0x79A0D8u;
label_79a0d8:
    // 0x79a0d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a0dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a0e0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a0e4: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x79a0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x79a0e8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a0ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a0f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a0f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0f4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A0F4u;
    SET_GPR_U32(ctx, 31, 0x79A0FCu);
    ctx->pc = 0x79A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0F4u;
    // 0x79a0f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A0F4u, 0x79A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0FCu;
label_79a0fc:
    // 0x79a0fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a100: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a104: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x79a108: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79a108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x79a10c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79a110: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79a110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79a114: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a118: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a11c: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x79a11cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_79a120:
    // 0x79a120: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79a124: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79A124u;
    SET_GPR_U32(ctx, 31, 0x79A12Cu);
    ctx->pc = 0x79A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A124u;
    // 0x79a128: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A124u, 0x79A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A12Cu;
label_79a12c:
    // 0x79a12c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a130: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a134: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A134u;
    SET_GPR_U32(ctx, 31, 0x79A13Cu);
    ctx->pc = 0x79A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A134u;
    // 0x79a138: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A134u, 0x79A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A13Cu;
label_79a13c:
    // 0x79a13c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x79a13cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a140: 0x0  nop
    ctx->pc = 0x79a140u;
    // NOP
    // 0x79a144: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x79A144u;
    {
        const bool branch_taken_0x79a144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a144) {
            ctx->pc = 0x79A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A144u;
            // 0x79a148: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a120;
        }
    }
    ctx->pc = 0x79A14Cu;
    // 0x79a14c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_79a150:
    // 0x79a150: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A150u;
    SET_GPR_U32(ctx, 31, 0x79A158u);
    ctx->pc = 0x79A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A150u;
    // 0x79a154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A150u, 0x79A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A158u;
label_79a158:
    // 0x79a158: 0x8e658658  lw          $a1, -0x79A8($s3)
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x79a15c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x79a160: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79a160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a164: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x79a164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x79a168: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x79A168u;
    {
        const bool branch_taken_0x79a168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a168) {
            ctx->pc = 0x79A16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A168u;
            // 0x79a16c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A248u;
            goto label_79a248;
        }
    }
    ctx->pc = 0x79A170u;
    // 0x79a170: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x79a170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x79a174: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x79a178: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x79a178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x79a17c: 0x8e628658  lw          $v0, -0x79A8($s3)
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x79a180: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79a184: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x79a184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x79a188: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79A188u;
    {
        const bool branch_taken_0x79a188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A188u;
        // 0x79a18c: 0x861024  and         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a188) {
            ctx->pc = 0x79A1CCu;
            goto label_79a1cc;
        }
    }
    ctx->pc = 0x79A190u;
    // 0x79a190: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A190u;
    {
        const bool branch_taken_0x79a190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A190u;
        // 0x79a194: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a190) {
            ctx->pc = 0x79A1CCu;
            goto label_79a1cc;
        }
    }
    ctx->pc = 0x79A198u;
    // 0x79a198: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x79a198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x79a19c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79A19Cu;
    {
        const bool branch_taken_0x79a19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A19Cu;
        // 0x79a1a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a19c) {
            ctx->pc = 0x79A1CCu;
            goto label_79a1cc;
        }
    }
    ctx->pc = 0x79A1A4u;
    // 0x79a1a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a1a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a1ac: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x79a1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x79a1b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a1b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a1b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a1b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1bc: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A1BCu;
    SET_GPR_U32(ctx, 31, 0x79A1C4u);
    ctx->pc = 0x79A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1BCu;
    // 0x79a1c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A1BCu, 0x79A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C4u;
label_79a1c4:
    // 0x79a1c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79A1C4u;
    {
        const bool branch_taken_0x79a1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a1c4) {
            ctx->pc = 0x79A1F0u;
            goto label_79a1f0;
        }
    }
    ctx->pc = 0x79A1CCu;
label_79a1cc:
    // 0x79a1cc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a1d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a1d4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a1d8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x79a1dc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a1e0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a1e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a1e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1e8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A1E8u;
    SET_GPR_U32(ctx, 31, 0x79A1F0u);
    ctx->pc = 0x79A1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1E8u;
    // 0x79a1ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A1E8u, 0x79A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1F0u;
label_79a1f0:
    // 0x79a1f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a1f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a1f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a1f8: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x79a1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x79a1fc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79a1fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x79a200: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79a204: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79a208: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a20c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a210: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x79a210u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x79a214: 0x0  nop
    ctx->pc = 0x79a214u;
    // NOP
label_79a218:
    // 0x79a218: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x79a218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79a21c: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79A21Cu;
    SET_GPR_U32(ctx, 31, 0x79A224u);
    ctx->pc = 0x79A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A21Cu;
    // 0x79a220: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A21Cu, 0x79A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A224u;
label_79a224:
    // 0x79a224: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a228: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a22c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A22Cu;
    SET_GPR_U32(ctx, 31, 0x79A234u);
    ctx->pc = 0x79A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A22Cu;
    // 0x79a230: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A22Cu, 0x79A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A234u;
label_79a234:
    // 0x79a234: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x79a234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a238: 0x0  nop
    ctx->pc = 0x79a238u;
    // NOP
    // 0x79a23c: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x79A23Cu;
    {
        const bool branch_taken_0x79a23c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a23c) {
            ctx->pc = 0x79A240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A23Cu;
            // 0x79a240: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a218;
        }
    }
    ctx->pc = 0x79A244u;
    // 0x79a244: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x79a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79a248:
    // 0x79a248: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A248u;
    SET_GPR_U32(ctx, 31, 0x79A250u);
    ctx->pc = 0x79A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A248u;
    // 0x79a24c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A248u, 0x79A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A250u;
label_79a250:
    // 0x79a250: 0x8e658658  lw          $a1, -0x79A8($s3)
    ctx->pc = 0x79a250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
label_79a254:
    // 0x79a254: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x79a254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x79a258: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79a258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79a25c: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x79a25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x79a260: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x79A260u;
    {
        const bool branch_taken_0x79a260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a260) {
            ctx->pc = 0x79A264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A260u;
            // 0x79a264: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A340u;
            goto label_79a340;
        }
    }
    ctx->pc = 0x79A268u;
    // 0x79a268: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x79a268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x79a26c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x79a270: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x79a270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x79a274: 0x8e628658  lw          $v0, -0x79A8($s3)
    ctx->pc = 0x79a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x79a278: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x79a278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79a27c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x79a27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x79a280: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79A280u;
    {
        const bool branch_taken_0x79a280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A280u;
        // 0x79a284: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a280) {
            ctx->pc = 0x79A2C4u;
            goto label_79a2c4;
        }
    }
    ctx->pc = 0x79A288u;
    // 0x79a288: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x79a288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x79a28c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A28Cu;
    {
        const bool branch_taken_0x79a28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A28Cu;
        // 0x79a290: 0x861024  and         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a28c) {
            ctx->pc = 0x79A2C4u;
            goto label_79a2c4;
        }
    }
    ctx->pc = 0x79A294u;
    // 0x79a294: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79A294u;
    {
        const bool branch_taken_0x79a294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A294u;
        // 0x79a298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a294) {
            ctx->pc = 0x79A2C4u;
            goto label_79a2c4;
        }
    }
    ctx->pc = 0x79A29Cu;
    // 0x79a29c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a2a0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a2a4: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x79a2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x79a2a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a2ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a2b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a2b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2b4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A2B4u;
    SET_GPR_U32(ctx, 31, 0x79A2BCu);
    ctx->pc = 0x79A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2B4u;
    // 0x79a2b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A2B4u, 0x79A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2BCu;
label_79a2bc:
    // 0x79a2bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79A2BCu;
    {
        const bool branch_taken_0x79a2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a2bc) {
            ctx->pc = 0x79A2E8u;
            goto label_79a2e8;
        }
    }
    ctx->pc = 0x79A2C4u;
label_79a2c4:
    // 0x79a2c4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a2c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a2cc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a2d0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x79a2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x79a2d4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a2d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a2dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a2dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2e0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A2E0u;
    SET_GPR_U32(ctx, 31, 0x79A2E8u);
    ctx->pc = 0x79A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2E0u;
    // 0x79a2e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A2E0u, 0x79A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2E8u;
label_79a2e8:
    // 0x79a2e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a2ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a2ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a2f0: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x79a2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x79a2f4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79a2f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x79a2f8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79a2fc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79a300: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a304: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a308: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x79a308u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x79a30c: 0x0  nop
    ctx->pc = 0x79a30cu;
    // NOP
label_79a310:
    // 0x79a310: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x79a310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a314: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79A314u;
    SET_GPR_U32(ctx, 31, 0x79A31Cu);
    ctx->pc = 0x79A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A314u;
    // 0x79a318: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A314u, 0x79A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A31Cu;
label_79a31c:
    // 0x79a31c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a324: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A324u;
    SET_GPR_U32(ctx, 31, 0x79A32Cu);
    ctx->pc = 0x79A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A324u;
    // 0x79a328: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A324u, 0x79A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A32Cu;
label_79a32c:
    // 0x79a32c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x79a32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a330: 0x0  nop
    ctx->pc = 0x79a330u;
    // NOP
    // 0x79a334: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x79A334u;
    {
        const bool branch_taken_0x79a334 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a334) {
            ctx->pc = 0x79A338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A334u;
            // 0x79a338: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a310;
        }
    }
    ctx->pc = 0x79A33Cu;
    // 0x79a33c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a340:
    // 0x79a340: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A340u;
    SET_GPR_U32(ctx, 31, 0x79A348u);
    ctx->pc = 0x79A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A340u;
    // 0x79a344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A340u, 0x79A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A348u;
label_79a348:
    // 0x79a348: 0x26648658  addiu       $a0, $s3, -0x79A8
    ctx->pc = 0x79a348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936152));
label_79a34c:
    // 0x79a34c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A34Cu;
    SET_GPR_U32(ctx, 31, 0x79A354u);
    ctx->pc = 0x79A350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A34Cu;
    // 0x79a350: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A34Cu, 0x79A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A354u;
label_79a354:
    // 0x79a354: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a358: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x79a358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x79a35c: 0x54600019  bnel        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x79A35Cu;
    {
        const bool branch_taken_0x79a35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a35c) {
            ctx->pc = 0x79A360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A35Cu;
            // 0x79a360: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3C4u;
            goto label_79a3c4;
        }
    }
    ctx->pc = 0x79A364u;
    // 0x79a364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a368: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a36c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x79a36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x79a370: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79a370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79a374: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79a378: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79a37c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a380: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a384: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x79a384u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_79a388:
    // 0x79a388: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79a38c: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79A38Cu;
    SET_GPR_U32(ctx, 31, 0x79A394u);
    ctx->pc = 0x79A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A38Cu;
    // 0x79a390: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79A38Cu, 0x79A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A394u;
label_79a394:
    // 0x79a394: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a398: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a39c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A39Cu;
    SET_GPR_U32(ctx, 31, 0x79A3A4u);
    ctx->pc = 0x79A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A39Cu;
    // 0x79a3a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A39Cu, 0x79A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A4u;
label_79a3a4:
    // 0x79a3a4: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x79a3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a3a8: 0x0  nop
    ctx->pc = 0x79a3a8u;
    // NOP
    // 0x79a3ac: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x79A3ACu;
    {
        const bool branch_taken_0x79a3ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a3ac) {
            ctx->pc = 0x79A3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3ACu;
            // 0x79a3b0: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a388;
        }
    }
    ctx->pc = 0x79A3B4u;
    // 0x79a3b4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x79a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79a3b8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A3B8u;
    SET_GPR_U32(ctx, 31, 0x79A3C0u);
    ctx->pc = 0x79A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B8u;
    // 0x79a3bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A3B8u, 0x79A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C0u;
label_79a3c0:
    // 0x79a3c0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a3c4:
    // 0x79a3c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3c8: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x79A3C8u;
    SET_GPR_U32(ctx, 31, 0x79A3D0u);
    ctx->pc = 0x79A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3C8u;
    // 0x79a3cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x79A3C8u, 0x79A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3D0u;
label_79a3d0:
    // 0x79a3d0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79a3d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3d8: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x79A3D8u;
    SET_GPR_U32(ctx, 31, 0x79A3E0u);
    ctx->pc = 0x79A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3D8u;
    // 0x79a3dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x79A3D8u, 0x79A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3E0u;
label_79a3e0:
    // 0x79a3e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x79a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x79a3e8: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x79A3E8u;
    SET_GPR_U32(ctx, 31, 0x79A3F0u);
    ctx->pc = 0x79A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3E8u;
    // 0x79a3ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x79A3E8u, 0x79A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3F0u;
label_79a3f0:
    // 0x79a3f0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a3f4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a3f8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A3F8u;
    SET_GPR_U32(ctx, 31, 0x79A400u);
    ctx->pc = 0x79A3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3F8u;
    // 0x79a3fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A3F8u, 0x79A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A400u;
label_79a400:
    // 0x79a400: 0x26648658  addiu       $a0, $s3, -0x79A8
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936152));
    // 0x79a404: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A404u;
    SET_GPR_U32(ctx, 31, 0x79A40Cu);
    ctx->pc = 0x79A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A404u;
    // 0x79a408: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A404u, 0x79A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A40Cu;
label_79a40c:
    // 0x79a40c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a410: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x79a410u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x79a414: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A414u;
    {
        const bool branch_taken_0x79a414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A414u;
        // 0x79a418: 0x8e638658  lw          $v1, -0x79A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a414) {
            ctx->pc = 0x79A450u;
            goto label_79a450;
        }
    }
    ctx->pc = 0x79A41Cu;
    // 0x79a41c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x79a41cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79a420: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a424: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79a428: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a42c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a430: 0x24e7a490  addiu       $a3, $a3, -0x5B70
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943888));
    // 0x79a434: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a438: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79a438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79a43c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a43cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a440: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a444: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79a448: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x79A448u;
    SET_GPR_U32(ctx, 31, 0x79A450u);
    ctx->pc = 0x79A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A448u;
    // 0x79a44c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79A448u, 0x79A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A450u;
label_79a450:
    // 0x79a450: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A450u;
    SET_GPR_U32(ctx, 31, 0x79A458u);
    ctx->pc = 0x79A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A450u;
    // 0x79a454: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A450u, 0x79A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A458u;
label_79a458:
    // 0x79a458: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a45c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A45Cu;
    SET_GPR_U32(ctx, 31, 0x79A464u);
    ctx->pc = 0x79A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A45Cu;
    // 0x79a460: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A45Cu, 0x79A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A464u;
label_79a464:
    // 0x79a464: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a468: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a46c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a470: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79a470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a474: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79a474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a47c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x79a47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79a480: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x79a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a484: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x79a484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a488: 0x3e00008  jr          $ra
    ctx->pc = 0x79A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A488u;
        // 0x79a48c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A490u;
}
} // namespace gh_r701
