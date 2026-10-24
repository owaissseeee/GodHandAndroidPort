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

// Function: func_00241EB0
// Address: 0x241eb0 - 0x242388
void func_00241EB0_0x241eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00241EB0_0x241eb0");
#endif

    switch (ctx->pc) {
        case 0x241f34u: goto label_241f34;
        case 0x241f60u: goto label_241f60;
        case 0x241f90u: goto label_241f90;
        case 0x241fb0u: goto label_241fb0;
        case 0x241fd0u: goto label_241fd0;
        case 0x241fdcu: goto label_241fdc;
        case 0x24208cu: goto label_24208c;
        case 0x2420b4u: goto label_2420b4;
        case 0x2420d8u: goto label_2420d8;
        case 0x2420f8u: goto label_2420f8;
        case 0x24210cu: goto label_24210c;
        case 0x242138u: goto label_242138;
        case 0x242164u: goto label_242164;
        case 0x242178u: goto label_242178;
        case 0x2421a0u: goto label_2421a0;
        case 0x2421acu: goto label_2421ac;
        case 0x2421dcu: goto label_2421dc;
        case 0x24221cu: goto label_24221c;
        case 0x242224u: goto label_242224;
        case 0x242234u: goto label_242234;
        case 0x242260u: goto label_242260;
        case 0x24229cu: goto label_24229c;
        case 0x2422a8u: goto label_2422a8;
        case 0x2422dcu: goto label_2422dc;
        case 0x2422e8u: goto label_2422e8;
        case 0x2422f4u: goto label_2422f4;
        case 0x242304u: goto label_242304;
        case 0x242330u: goto label_242330;
        case 0x24234cu: goto label_24234c;
        case 0x242358u: goto label_242358;
        case 0x242364u: goto label_242364;
        default: break;
    }

    ctx->pc = 0x241eb0u;

    // 0x241eb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x241eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x241eb4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x241eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x241eb8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x241eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x241ebc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x241ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x241ec0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ec4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x241ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x241ec8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x241ec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241ecc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x241eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x241ed0: 0x244264f0  addiu       $v0, $v0, 0x64F0
    ctx->pc = 0x241ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x241ed4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x241ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x241ed8: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x241ed8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x241edc: 0x8e63070c  lw          $v1, 0x70C($s3)
    ctx->pc = 0x241edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1804)));
    // 0x241ee0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x241EE0u;
    {
        const bool branch_taken_0x241ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EE0u;
        // 0x241ee4: 0x8c500588  lw          $s0, 0x588($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ee0) {
            ctx->pc = 0x241F04u;
            goto label_241f04;
        }
    }
    ctx->pc = 0x241EE8u;
    // 0x241ee8: 0xdc620250  ld          $v0, 0x250($v1)
    ctx->pc = 0x241ee8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x241eec: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x241eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x241ef0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x241ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x241ef4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x241ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x241ef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x241ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x241efc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x241EFCu;
    {
        const bool branch_taken_0x241efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241efc) {
            ctx->pc = 0x241F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241EFCu;
            // 0x241f00: 0xae60070c  sw          $zero, 0x70C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 1804), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241F04u;
            goto label_241f04;
        }
    }
    ctx->pc = 0x241F04u;
label_241f04:
    // 0x241f04: 0x926302f6  lbu         $v1, 0x2F6($s3)
    ctx->pc = 0x241f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x241f08: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x241f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x241f0c: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x241F0Cu;
    {
        const bool branch_taken_0x241f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241F0Cu;
        // 0x241f10: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f0c) {
            ctx->pc = 0x242364u;
            goto label_242364;
        }
    }
    ctx->pc = 0x241F14u;
    // 0x241f14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x241f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241f18: 0x2442c820  addiu       $v0, $v0, -0x37E0
    ctx->pc = 0x241f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952992));
    // 0x241f1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241f20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x241f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241f24: 0x800008  jr          $a0
    ctx->pc = 0x241F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x241F2Cu: goto label_241f2c;
            case 0x241F78u: goto label_241f78;
            case 0x2420ACu: goto label_2420ac;
            case 0x242104u: goto label_242104;
            case 0x242130u: goto label_242130;
            case 0x242170u: goto label_242170;
            case 0x24222Cu: goto label_24222c;
            case 0x24226Cu: goto label_24226c;
            case 0x2422FCu: goto label_2422fc;
            case 0x24233Cu: goto label_24233c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241F24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x241F2Cu;
label_241f2c:
    // 0x241f2c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x241F2Cu;
    SET_GPR_U32(ctx, 31, 0x241F34u);
    ctx->pc = 0x241F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F2Cu;
    // 0x241f30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x241F2Cu, 0x241F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F34u;
label_241f34:
    // 0x241f34: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x241f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x241f38: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x241f38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x241f3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x241f40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f44: 0x8c650d60  lw          $a1, 0xD60($v1)
    ctx->pc = 0x241f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3424)));
    // 0x241f48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x241f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f4c: 0x8c660d64  lw          $a2, 0xD64($v1)
    ctx->pc = 0x241f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3428)));
    // 0x241f50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241f50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f54: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x241f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x241f58: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x241F58u;
    SET_GPR_U32(ctx, 31, 0x241F60u);
    ctx->pc = 0x241F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F58u;
    // 0x241f5c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x241F58u, 0x241F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F60u;
label_241f60:
    // 0x241f60: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x241f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x241f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241f68: 0xa663054a  sh          $v1, 0x54A($s3)
    ctx->pc = 0x241f68u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x241f6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x241f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x241f70: 0xa6630548  sh          $v1, 0x548($s3)
    ctx->pc = 0x241f70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x241f74: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x241f74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_241f78:
    // 0x241f78: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x241f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
    // 0x241f7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241f80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x241f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241f84: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x241f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x241f88: 0xc0989d4  jal         func_262750
    ctx->pc = 0x241F88u;
    SET_GPR_U32(ctx, 31, 0x241F90u);
    ctx->pc = 0x241F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241F88u;
    // 0x241f8c: 0xae6216d0  sw          $v0, 0x16D0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x241F88u, 0x241F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241F90u;
label_241f90:
    // 0x241f90: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x241f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
    // 0x241f94: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x241f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x241f98: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x241f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x241f9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fa0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x241fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x241fa4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x241fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x241fa8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x241FA8u;
    SET_GPR_U32(ctx, 31, 0x241FB0u);
    ctx->pc = 0x241FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241FA8u;
    // 0x241fac: 0xae6216d0  sw          $v0, 0x16D0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x241FA8u, 0x241FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FB0u;
label_241fb0:
    // 0x241fb0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x241FB0u;
    {
        const bool branch_taken_0x241fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FB0u;
        // 0x241fb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fb0) {
            ctx->pc = 0x241FBCu;
            goto label_241fbc;
        }
    }
    ctx->pc = 0x241FB8u;
    // 0x241fb8: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x241fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_241fbc:
    // 0x241fbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x241fc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x241fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x241fc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x241fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241fc8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x241FC8u;
    SET_GPR_U32(ctx, 31, 0x241FD0u);
    ctx->pc = 0x241FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241FC8u;
    // 0x241fcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x241FC8u, 0x241FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FD0u;
label_241fd0:
    // 0x241fd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x241fd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x241fd4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x241FD4u;
    SET_GPR_U32(ctx, 31, 0x241FDCu);
    ctx->pc = 0x241FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241FD4u;
    // 0x241fd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x241FD4u, 0x241FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241FDCu;
label_241fdc:
    // 0x241fdc: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x241fdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x241fe0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x241fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x241fe4: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x241FE4u;
    {
        const bool branch_taken_0x241fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241FE4u;
        // 0x241fe8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fe4) {
            ctx->pc = 0x242364u;
            goto label_242364;
        }
    }
    ctx->pc = 0x241FECu;
    // 0x241fec: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x241fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x241ff0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x241ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x241ff4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x241ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x241ff8: 0x26620490  addiu       $v0, $s3, 0x490
    ctx->pc = 0x241ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
    // 0x241ffc: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x241FFCu;
    {
        const bool branch_taken_0x241ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x241ffc) {
            ctx->pc = 0x242000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241FFCu;
            // 0x242000: 0x8e6200f0  lw          $v0, 0xF0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242020u;
            goto label_242020;
        }
    }
    ctx->pc = 0x242004u;
    // 0x242004: 0xc6600490  lwc1        $f0, 0x490($s3)
    ctx->pc = 0x242004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242008: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x242008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24200c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242010: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x242010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x242014: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x242014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242018: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x242018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24201c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x24201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_242020:
    // 0x242020: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x242020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x242024: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x242024u;
    {
        const bool branch_taken_0x242024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x242028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242024u;
        // 0x242028: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242024) {
            ctx->pc = 0x242048u;
            goto label_242048;
        }
    }
    ctx->pc = 0x24202Cu;
    // 0x24202c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242030: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x242030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x242034: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x242034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242038: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x242038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24203c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242040: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x242040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x242044: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x242044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242048:
    // 0x242048: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x242048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24204c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24204cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x242050: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x242050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x242054: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x242054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x242058: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x242058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x24205c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24205cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242060: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x242060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x242064: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x242064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x242068: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x242068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x24206c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x24206cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x242070: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x242070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x242074: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x242074u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242078: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x242078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24207c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24207cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242080: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x242080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x242084: 0xc04c784  jal         func_131E10
    ctx->pc = 0x242084u;
    SET_GPR_U32(ctx, 31, 0x24208Cu);
    ctx->pc = 0x242088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242084u;
    // 0x242088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x242084u, 0x24208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24208Cu;
label_24208c:
    // 0x24208c: 0x145000b6  bne         $v0, $s0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x24208Cu;
    {
        const bool branch_taken_0x24208c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x242090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24208Cu;
        // 0x242090: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24208c) {
            ctx->pc = 0x242368u;
            goto label_242368;
        }
    }
    ctx->pc = 0x242094u;
    // 0x242094: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x242094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242098: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x242098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24209c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x24209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x2420a0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2420a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2420a4: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2420A4u;
    {
        const bool branch_taken_0x2420a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2420A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2420A4u;
        // 0x2420a8: 0xa26302f6  sb          $v1, 0x2F6($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2420a4) {
            ctx->pc = 0x242368u;
            goto label_242368;
        }
    }
    ctx->pc = 0x2420ACu;
label_2420ac:
    // 0x2420ac: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2420ACu;
    SET_GPR_U32(ctx, 31, 0x2420B4u);
    ctx->pc = 0x2420B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420ACu;
    // 0x2420b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2420ACu, 0x2420B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420B4u;
label_2420b4:
    // 0x2420b4: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x2420b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x2420b8: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x2420b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2420bc: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x2420bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x2420c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2420c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420c4: 0x8c700d68  lw          $s0, 0xD68($v1)
    ctx->pc = 0x2420c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3432)));
    // 0x2420c8: 0x8c710d6c  lw          $s1, 0xD6C($v1)
    ctx->pc = 0x2420c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
    // 0x2420cc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2420ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2420d0: 0xc09b9ea  jal         func_26E7A8
    ctx->pc = 0x2420D0u;
    SET_GPR_U32(ctx, 31, 0x2420D8u);
    ctx->pc = 0x2420D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420D0u;
    // 0x2420d4: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E7A8u, 0x2420D0u, 0x2420D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420D8u;
label_2420d8:
    // 0x2420d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2420d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2420dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2420dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2420e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420e4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2420e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2420e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2420ec: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2420ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2420f0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2420F0u;
    SET_GPR_U32(ctx, 31, 0x2420F8u);
    ctx->pc = 0x2420F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2420F0u;
    // 0x2420f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2420F0u, 0x2420F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2420F8u;
label_2420f8:
    // 0x2420f8: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x2420f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x2420fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2420fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242100: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x242100u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_242104:
    // 0x242104: 0xc055f06  jal         func_157C18
    ctx->pc = 0x242104u;
    SET_GPR_U32(ctx, 31, 0x24210Cu);
    ctx->pc = 0x242108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242104u;
    // 0x242108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x242104u, 0x24210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24210Cu;
label_24210c:
    // 0x24210c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24210Cu;
    {
        const bool branch_taken_0x24210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24210c) {
            ctx->pc = 0x242120u;
            goto label_242120;
        }
    }
    ctx->pc = 0x242114u;
    // 0x242114: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x242114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x242118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24211c: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x24211cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_242120:
    // 0x242120: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242124: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x242128: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x242128u;
    {
        const bool branch_taken_0x242128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242128u;
        // 0x24212c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242128) {
            ctx->pc = 0x2422E0u;
            goto label_2422e0;
        }
    }
    ctx->pc = 0x242130u;
label_242130:
    // 0x242130: 0xc09d91a  jal         func_276468
    ctx->pc = 0x242130u;
    SET_GPR_U32(ctx, 31, 0x242138u);
    ctx->pc = 0x242134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242130u;
    // 0x242134: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x242130u, 0x242138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242138u;
label_242138:
    // 0x242138: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x242138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x24213c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24213cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x242140: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x242140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242148: 0x8c650ddc  lw          $a1, 0xDDC($v1)
    ctx->pc = 0x242148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3548)));
    // 0x24214c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24214cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242150: 0x8c660de0  lw          $a2, 0xDE0($v1)
    ctx->pc = 0x242150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3552)));
    // 0x242154: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x242154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242158: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x242158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24215c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24215Cu;
    SET_GPR_U32(ctx, 31, 0x242164u);
    ctx->pc = 0x242160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24215Cu;
    // 0x242160: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24215Cu, 0x242164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242164u;
label_242164:
    // 0x242164: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x242164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x242168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24216c: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x24216cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_242170:
    // 0x242170: 0xc055f06  jal         func_157C18
    ctx->pc = 0x242170u;
    SET_GPR_U32(ctx, 31, 0x242178u);
    ctx->pc = 0x242174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242170u;
    // 0x242174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x242170u, 0x242178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242178u;
label_242178:
    // 0x242178: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242178u;
    {
        const bool branch_taken_0x242178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242178) {
            ctx->pc = 0x24218Cu;
            goto label_24218c;
        }
    }
    ctx->pc = 0x242180u;
    // 0x242180: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x242180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x242184: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242188: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x242188u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_24218c:
    // 0x24218c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24218cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242190: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x242194: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242198: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x242198u;
    SET_GPR_U32(ctx, 31, 0x2421A0u);
    ctx->pc = 0x24219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242198u;
    // 0x24219c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x242198u, 0x2421A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421A0u;
label_2421a0:
    // 0x2421a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2421a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2421a4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2421A4u;
    SET_GPR_U32(ctx, 31, 0x2421ACu);
    ctx->pc = 0x2421A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2421A4u;
    // 0x2421a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2421A4u, 0x2421ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421ACu;
label_2421ac:
    // 0x2421ac: 0x966203ac  lhu         $v0, 0x3AC($s3)
    ctx->pc = 0x2421acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 940)));
    // 0x2421b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2421b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2421b4: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2421B4u;
    {
        const bool branch_taken_0x2421b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2421B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421B4u;
        // 0x2421b8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421b4) {
            ctx->pc = 0x242368u;
            goto label_242368;
        }
    }
    ctx->pc = 0x2421BCu;
    // 0x2421bc: 0x8e62070c  lw          $v0, 0x70C($s3)
    ctx->pc = 0x2421bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1804)));
    // 0x2421c0: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x2421C0u;
    {
        const bool branch_taken_0x2421c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2421c0) {
            ctx->pc = 0x2421C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2421C0u;
            // 0x2421c4: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24236Cu;
            goto label_24236c;
        }
    }
    ctx->pc = 0x2421C8u;
    // 0x2421c8: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x2421c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x2421cc: 0x262464f0  addiu       $a0, $s1, 0x64F0
    ctx->pc = 0x2421ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25840));
    // 0x2421d0: 0x240603d1  addiu       $a2, $zero, 0x3D1
    ctx->pc = 0x2421d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 977));
    // 0x2421d4: 0xc0a48fa  jal         func_2923E8
    ctx->pc = 0x2421D4u;
    SET_GPR_U32(ctx, 31, 0x2421DCu);
    ctx->pc = 0x2421D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2421D4u;
    // 0x2421d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x2421D4u, 0x2421DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421DCu;
label_2421dc:
    // 0x2421dc: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2421DCu;
    {
        const bool branch_taken_0x2421dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2421E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421DCu;
        // 0x2421e0: 0xae62070c  sw          $v0, 0x70C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421dc) {
            ctx->pc = 0x242364u;
            goto label_242364;
        }
    }
    ctx->pc = 0x2421E4u;
    // 0x2421e4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2421e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2421e8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2421e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2421ec: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2421ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2421f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2421f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421f4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2421f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2421f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2421f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421fc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2421fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x242200: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x242200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x242204: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x242204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x242208: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x242208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24220c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x24220cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x242210: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x242210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x242214: 0xc0708a0  jal         func_1C2280
    ctx->pc = 0x242214u;
    SET_GPR_U32(ctx, 31, 0x24221Cu);
    ctx->pc = 0x242218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242214u;
    // 0x242218: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2280u, 0x242214u, 0x24221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24221Cu;
label_24221c:
    // 0x24221c: 0xc0708c2  jal         func_1C2308
    ctx->pc = 0x24221Cu;
    SET_GPR_U32(ctx, 31, 0x242224u);
    ctx->pc = 0x242220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24221Cu;
    // 0x242220: 0x8e64070c  lw          $a0, 0x70C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2308u, 0x24221Cu, 0x242224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242224u;
label_242224:
    // 0x242224: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x242224u;
    {
        const bool branch_taken_0x242224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242224u;
        // 0x242228: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242224) {
            ctx->pc = 0x242368u;
            goto label_242368;
        }
    }
    ctx->pc = 0x24222Cu;
label_24222c:
    // 0x24222c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24222Cu;
    SET_GPR_U32(ctx, 31, 0x242234u);
    ctx->pc = 0x242230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24222Cu;
    // 0x242230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24222Cu, 0x242234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242234u;
label_242234:
    // 0x242234: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x242234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x242238: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x242238u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24223c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24223cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242240: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242244: 0x8c650de4  lw          $a1, 0xDE4($v1)
    ctx->pc = 0x242244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3556)));
    // 0x242248: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x242248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24224c: 0x8c660de8  lw          $a2, 0xDE8($v1)
    ctx->pc = 0x24224cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3560)));
    // 0x242250: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x242250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242254: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x242254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x242258: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x242258u;
    SET_GPR_U32(ctx, 31, 0x242260u);
    ctx->pc = 0x24225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242258u;
    // 0x24225c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x242258u, 0x242260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242260u;
label_242260:
    // 0x242260: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x242260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x242264: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242268: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x242268u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_24226c:
    // 0x24226c: 0x8e6216d0  lw          $v0, 0x16D0($s3)
    ctx->pc = 0x24226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5840)));
    // 0x242270: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x242270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x242274: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x242274u;
    {
        const bool branch_taken_0x242274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x242278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242274u;
        // 0x242278: 0xae6216d0  sw          $v0, 0x16D0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242274) {
            ctx->pc = 0x2422C4u;
            goto label_2422c4;
        }
    }
    ctx->pc = 0x24227Cu;
    // 0x24227c: 0xc66005a8  lwc1        $f0, 0x5A8($s3)
    ctx->pc = 0x24227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242280: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242284: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x242284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x242288: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x242288u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24228c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24228cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242290: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x242290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x242294: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x242294u;
    SET_GPR_U32(ctx, 31, 0x24229Cu);
    ctx->pc = 0x242298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242294u;
    // 0x242298: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x242294u, 0x24229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24229Cu;
label_24229c:
    // 0x24229c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x24229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2422a0: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2422A0u;
    SET_GPR_U32(ctx, 31, 0x2422A8u);
    ctx->pc = 0x2422A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2422A0u;
    // 0x2422a4: 0x8e6500f0  lw          $a1, 0xF0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2422A0u, 0x2422A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422A8u;
label_2422a8:
    // 0x2422a8: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2422a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x2422ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2422acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2422b0: 0x0  nop
    ctx->pc = 0x2422b0u;
    // NOP
    // 0x2422b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2422b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2422b8: 0x0  nop
    ctx->pc = 0x2422b8u;
    // NOP
    // 0x2422bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2422BCu;
    {
        const bool branch_taken_0x2422bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2422bc) {
            ctx->pc = 0x2422CCu;
            goto label_2422cc;
        }
    }
    ctx->pc = 0x2422C4u;
label_2422c4:
    // 0x2422c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2422c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2422c8: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x2422c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_2422cc:
    // 0x2422cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2422ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2422d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2422d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2422d4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2422D4u;
    SET_GPR_U32(ctx, 31, 0x2422DCu);
    ctx->pc = 0x2422D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2422D4u;
    // 0x2422d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2422D4u, 0x2422DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422DCu;
label_2422dc:
    // 0x2422dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2422dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2422e0:
    // 0x2422e0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2422E0u;
    SET_GPR_U32(ctx, 31, 0x2422E8u);
    ctx->pc = 0x2422E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2422E0u;
    // 0x2422e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2422E0u, 0x2422E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422E8u;
label_2422e8:
    // 0x2422e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2422e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2422ec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2422ECu;
    SET_GPR_U32(ctx, 31, 0x2422F4u);
    ctx->pc = 0x2422F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2422ECu;
    // 0x2422f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2422ECu, 0x2422F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2422F4u;
label_2422f4:
    // 0x2422f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2422F4u;
    {
        const bool branch_taken_0x2422f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2422F4u;
        // 0x2422f8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422f4) {
            ctx->pc = 0x242368u;
            goto label_242368;
        }
    }
    ctx->pc = 0x2422FCu;
label_2422fc:
    // 0x2422fc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2422FCu;
    SET_GPR_U32(ctx, 31, 0x242304u);
    ctx->pc = 0x242300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2422FCu;
    // 0x242300: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2422FCu, 0x242304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242304u;
label_242304:
    // 0x242304: 0x8e630304  lw          $v1, 0x304($s3)
    ctx->pc = 0x242304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
    // 0x242308: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x242308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24230c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24230cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242314: 0x8c650dec  lw          $a1, 0xDEC($v1)
    ctx->pc = 0x242314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3564)));
    // 0x242318: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x242318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24231c: 0x8c660df0  lw          $a2, 0xDF0($v1)
    ctx->pc = 0x24231cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3568)));
    // 0x242320: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x242320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242324: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x242324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x242328: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x242328u;
    SET_GPR_U32(ctx, 31, 0x242330u);
    ctx->pc = 0x24232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242328u;
    // 0x24232c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x242328u, 0x242330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242330u;
label_242330:
    // 0x242330: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x242330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x242334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242338: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x242338u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_24233c:
    // 0x24233c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24233cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242340: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x242344: 0xc055f06  jal         func_157C18
    ctx->pc = 0x242344u;
    SET_GPR_U32(ctx, 31, 0x24234Cu);
    ctx->pc = 0x242348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242344u;
    // 0x242348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x242344u, 0x24234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24234Cu;
label_24234c:
    // 0x24234c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24234cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242350: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x242350u;
    SET_GPR_U32(ctx, 31, 0x242358u);
    ctx->pc = 0x242354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242350u;
    // 0x242354: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x242350u, 0x242358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242358u;
label_242358:
    // 0x242358: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24235c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24235Cu;
    SET_GPR_U32(ctx, 31, 0x242364u);
    ctx->pc = 0x242360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24235Cu;
    // 0x242360: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24235Cu, 0x242364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242364u;
label_242364:
    // 0x242364: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x242364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_242368:
    // 0x242368: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x242368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_24236c:
    // 0x24236c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x24236cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x242370: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x242370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x242374: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x242374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x242378: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x242378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24237c: 0x3e00008  jr          $ra
    ctx->pc = 0x24237Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24237Cu;
        // 0x242380: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24237Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242384u;
    // 0x242384: 0x0  nop
    ctx->pc = 0x242384u;
    // NOP
    ctx->pc = 0x242388u;
}
