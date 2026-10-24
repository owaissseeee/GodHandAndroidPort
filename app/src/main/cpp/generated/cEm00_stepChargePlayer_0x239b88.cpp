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

// Function: cEm00_stepChargePlayer
// Address: 0x239b88 - 0x23a010
void cEm00_stepChargePlayer_0x239b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepChargePlayer_0x239b88");
#endif

    switch (ctx->pc) {
        case 0x239bd4u: goto label_239bd4;
        case 0x239c00u: goto label_239c00;
        case 0x239c14u: goto label_239c14;
        case 0x239c34u: goto label_239c34;
        case 0x239c3cu: goto label_239c3c;
        case 0x239c5cu: goto label_239c5c;
        case 0x239c88u: goto label_239c88;
        case 0x239cb0u: goto label_239cb0;
        case 0x239cc0u: goto label_239cc0;
        case 0x239d6cu: goto label_239d6c;
        case 0x239d8cu: goto label_239d8c;
        case 0x239d94u: goto label_239d94;
        case 0x239e38u: goto label_239e38;
        case 0x239e44u: goto label_239e44;
        case 0x239e58u: goto label_239e58;
        case 0x239e84u: goto label_239e84;
        case 0x239ea4u: goto label_239ea4;
        case 0x239eacu: goto label_239eac;
        case 0x239ed4u: goto label_239ed4;
        case 0x239ee0u: goto label_239ee0;
        case 0x239ee8u: goto label_239ee8;
        case 0x239efcu: goto label_239efc;
        case 0x239f28u: goto label_239f28;
        case 0x239f48u: goto label_239f48;
        case 0x239f50u: goto label_239f50;
        case 0x239f70u: goto label_239f70;
        case 0x239f78u: goto label_239f78;
        case 0x239f88u: goto label_239f88;
        case 0x239f98u: goto label_239f98;
        case 0x239fbcu: goto label_239fbc;
        case 0x239fccu: goto label_239fcc;
        case 0x239fe4u: goto label_239fe4;
        case 0x239ff0u: goto label_239ff0;
        case 0x239ff8u: goto label_239ff8;
        default: break;
    }

    ctx->pc = 0x239b88u;

    // 0x239b88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x239b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x239b8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x239b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x239b90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x239b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x239b98: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x239b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x239b9c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x239b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x239ba0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x239ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x239ba4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x239ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x239ba8: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x239BA8u;
    {
        const bool branch_taken_0x239ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BA8u;
        // 0x239bac: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ba8) {
            ctx->pc = 0x239FF8u;
            goto label_239ff8;
        }
    }
    ctx->pc = 0x239BB0u;
    // 0x239bb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x239bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x239bb4: 0x2442a460  addiu       $v0, $v0, -0x5BA0
    ctx->pc = 0x239bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943840));
    // 0x239bb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x239bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239bbc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239bc0: 0x800008  jr          $a0
    ctx->pc = 0x239BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239BC8u: goto label_239bc8;
            case 0x239C0Cu: goto label_239c0c;
            case 0x239C4Cu: goto label_239c4c;
            case 0x239D78u: goto label_239d78;
            case 0x239E4Cu: goto label_239e4c;
            case 0x239E90u: goto label_239e90;
            case 0x239EF0u: goto label_239ef0;
            case 0x239F34u: goto label_239f34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239BC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x239BC8u;
label_239bc8:
    // 0x239bc8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x239bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x239bcc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x239BCCu;
    SET_GPR_U32(ctx, 31, 0x239BD4u);
    ctx->pc = 0x239BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BCCu;
    // 0x239bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x239BCCu, 0x239BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BD4u;
label_239bd4:
    // 0x239bd4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x239bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x239bd8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x239bd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x239bdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x239bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x239be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239be4: 0x8c651034  lw          $a1, 0x1034($v1)
    ctx->pc = 0x239be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4148)));
    // 0x239be8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x239be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x239bec: 0x8c661038  lw          $a2, 0x1038($v1)
    ctx->pc = 0x239becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4152)));
    // 0x239bf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239bf4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x239bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x239bf8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x239BF8u;
    SET_GPR_U32(ctx, 31, 0x239C00u);
    ctx->pc = 0x239BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BF8u;
    // 0x239bfc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x239BF8u, 0x239C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C00u;
label_239c00:
    // 0x239c00: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x239c04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239c08: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239c08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239c0c:
    // 0x239c0c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x239C0Cu;
    SET_GPR_U32(ctx, 31, 0x239C14u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x239C0Cu, 0x239C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C14u;
label_239c14:
    // 0x239c14: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x239c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c1c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x239c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x239c20: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x239c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x239c24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x239c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x239c28: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x239c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x239c2c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x239C2Cu;
    SET_GPR_U32(ctx, 31, 0x239C34u);
    ctx->pc = 0x239C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C2Cu;
    // 0x239c30: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x239C2Cu, 0x239C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C34u;
label_239c34:
    // 0x239c34: 0xc055f06  jal         func_157C18
    ctx->pc = 0x239C34u;
    SET_GPR_U32(ctx, 31, 0x239C3Cu);
    ctx->pc = 0x239C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C34u;
    // 0x239c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x239C34u, 0x239C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C3Cu;
label_239c3c:
    // 0x239c3c: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x239C3Cu;
    {
        const bool branch_taken_0x239c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239c3c) {
            ctx->pc = 0x239E24u;
            goto label_239e24;
        }
    }
    ctx->pc = 0x239C44u;
    // 0x239c44: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x239C44u;
    {
        const bool branch_taken_0x239c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C44u;
        // 0x239c48: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c44) {
            ctx->pc = 0x239E1Cu;
            goto label_239e1c;
        }
    }
    ctx->pc = 0x239C4Cu;
label_239c4c:
    // 0x239c4c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x239c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x239c50: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x239c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x239c54: 0xc09d91a  jal         func_276468
    ctx->pc = 0x239C54u;
    SET_GPR_U32(ctx, 31, 0x239C5Cu);
    ctx->pc = 0x239C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C54u;
    // 0x239c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x239C54u, 0x239C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C5Cu;
label_239c5c:
    // 0x239c5c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x239c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x239c60: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x239c60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x239c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c68: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x239c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x239c6c: 0x8c65103c  lw          $a1, 0x103C($v1)
    ctx->pc = 0x239c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4156)));
    // 0x239c70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x239c70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x239c74: 0x8c661040  lw          $a2, 0x1040($v1)
    ctx->pc = 0x239c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4160)));
    // 0x239c78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239c78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c7c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x239c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x239c80: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x239C80u;
    SET_GPR_U32(ctx, 31, 0x239C88u);
    ctx->pc = 0x239C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C80u;
    // 0x239c84: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x239C80u, 0x239C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C88u;
label_239c88:
    // 0x239c88: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x239c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x239c8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239c90: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x239c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
    // 0x239c94: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x239c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x239c98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x239c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x239c9c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x239c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x239ca0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x239ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x239ca4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x239ca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x239ca8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x239CA8u;
    SET_GPR_U32(ctx, 31, 0x239CB0u);
    ctx->pc = 0x239CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239CA8u;
    // 0x239cac: 0xe7b40004  swc1        $f20, 0x4($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x239CA8u, 0x239CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CB0u;
label_239cb0:
    // 0x239cb0: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x239cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x239cb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x239cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239cb8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x239CB8u;
    SET_GPR_U32(ctx, 31, 0x239CC0u);
    ctx->pc = 0x239CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239CB8u;
    // 0x239cbc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x239CB8u, 0x239CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239CC0u;
label_239cc0:
    // 0x239cc0: 0x26050580  addiu       $a1, $s0, 0x580
    ctx->pc = 0x239cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x239cc4: 0x10bd0006  beq         $a1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x239CC4u;
    {
        const bool branch_taken_0x239cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 29));
        ctx->pc = 0x239CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC4u;
        // 0x239cc8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cc4) {
            ctx->pc = 0x239CE0u;
            goto label_239ce0;
        }
    }
    ctx->pc = 0x239CCCu;
    // 0x239ccc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x239cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239cd0: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x239cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x239cd4: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x239cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x239cd8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x239cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239cdc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x239cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_239ce0:
    // 0x239ce0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x239ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x239ce4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x239ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239ce8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x239ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x239cec: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x239cecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239cf0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x239cf0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239cf4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x239cf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x239cf8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x239cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x239cfc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x239cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x239d00: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x239d00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239d04: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x239d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x239d08: 0x26020590  addiu       $v0, $s0, 0x590
    ctx->pc = 0x239d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x239d0c: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x239D0Cu;
    {
        const bool branch_taken_0x239d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x239D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D0Cu;
        // 0x239d10: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d0c) {
            ctx->pc = 0x239D28u;
            goto label_239d28;
        }
    }
    ctx->pc = 0x239D14u;
    // 0x239d14: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x239d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239d18: 0xe6000590  swc1        $f0, 0x590($s0)
    ctx->pc = 0x239d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1424), bits); }
    // 0x239d1c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x239d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x239d20: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x239d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239d24: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x239d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_239d28:
    // 0x239d28: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x239d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239d2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x239d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x239d30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x239d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239d34: 0xe6140594  swc1        $f20, 0x594($s0)
    ctx->pc = 0x239d34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1428), bits); }
    // 0x239d38: 0x0  nop
    ctx->pc = 0x239d38u;
    // NOP
    // 0x239d3c: 0x0  nop
    ctx->pc = 0x239d3cu;
    // NOP
    // 0x239d40: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x239d40u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x239d44: 0xda040590  lqc2        $vf4, 0x590($s0)
    ctx->pc = 0x239d44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x239d48: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x239d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x239d4c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x239d4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x239d50: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x239d50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x239d54: 0xfa040590  sqc2        $vf4, 0x590($s0)
    ctx->pc = 0x239d54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x239d58: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x239d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x239d5c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x239d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x239d60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x239d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x239d64: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x239D64u;
    SET_GPR_U32(ctx, 31, 0x239D6Cu);
    ctx->pc = 0x239D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D64u;
    // 0x239d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x239D64u, 0x239D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D6Cu;
label_239d6c:
    // 0x239d6c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x239d70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239d74: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239d74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239d78:
    // 0x239d78: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x239d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x239d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d80: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x239d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x239d84: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x239D84u;
    SET_GPR_U32(ctx, 31, 0x239D8Cu);
    ctx->pc = 0x239D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D84u;
    // 0x239d88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x239D84u, 0x239D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D8Cu;
label_239d8c:
    // 0x239d8c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x239D8Cu;
    SET_GPR_U32(ctx, 31, 0x239D94u);
    ctx->pc = 0x239D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239D8Cu;
    // 0x239d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x239D8Cu, 0x239D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D94u;
label_239d94:
    // 0x239d94: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x239d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239d98: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x239d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x239d9c: 0x26020590  addiu       $v0, $s0, 0x590
    ctx->pc = 0x239d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x239da0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x239da0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239da4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x239da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x239da8: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x239da8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239dac: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x239dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x239db0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x239db0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x239db4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x239db4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x239db8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x239db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x239dbc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x239dbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239dc0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x239dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x239dc4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x239dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x239dc8: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x239DC8u;
    {
        const bool branch_taken_0x239dc8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x239DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DC8u;
        // 0x239dcc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dc8) {
            ctx->pc = 0x239DE4u;
            goto label_239de4;
        }
    }
    ctx->pc = 0x239DD0u;
    // 0x239dd0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x239dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239dd4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x239dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x239dd8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x239dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x239ddc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x239ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x239de0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x239de0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_239de4:
    // 0x239de4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x239de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x239de8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x239de8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239dec: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x239decu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239df0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x239df0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x239df4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x239df4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x239df8: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x239df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239dfc: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x239dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239e00: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x239e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x239e04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x239e04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x239e08: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x239e08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239e0c: 0x0  nop
    ctx->pc = 0x239e0cu;
    // NOP
    // 0x239e10: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x239E10u;
    {
        const bool branch_taken_0x239e10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x239E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E10u;
        // 0x239e14: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e10) {
            ctx->pc = 0x239E24u;
            goto label_239e24;
        }
    }
    ctx->pc = 0x239E18u;
    // 0x239e18: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_239e1c:
    // 0x239e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239e20: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239e24:
    // 0x239e24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x239e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x239e28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x239e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x239e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e30: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x239E30u;
    SET_GPR_U32(ctx, 31, 0x239E38u);
    ctx->pc = 0x239E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E30u;
    // 0x239e34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x239E30u, 0x239E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E38u;
label_239e38:
    // 0x239e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e3c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x239E3Cu;
    SET_GPR_U32(ctx, 31, 0x239E44u);
    ctx->pc = 0x239E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E3Cu;
    // 0x239e40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x239E3Cu, 0x239E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E44u;
label_239e44:
    // 0x239e44: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x239E44u;
    {
        const bool branch_taken_0x239e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E44u;
        // 0x239e48: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e44) {
            ctx->pc = 0x239FFCu;
            goto label_239ffc;
        }
    }
    ctx->pc = 0x239E4Cu;
label_239e4c:
    // 0x239e4c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x239e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x239e50: 0xc09d91a  jal         func_276468
    ctx->pc = 0x239E50u;
    SET_GPR_U32(ctx, 31, 0x239E58u);
    ctx->pc = 0x239E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E50u;
    // 0x239e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x239E50u, 0x239E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E58u;
label_239e58:
    // 0x239e58: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x239e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x239e5c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x239e5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x239e60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x239e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x239e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e68: 0x8c651044  lw          $a1, 0x1044($v1)
    ctx->pc = 0x239e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4164)));
    // 0x239e6c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x239e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x239e70: 0x8c661048  lw          $a2, 0x1048($v1)
    ctx->pc = 0x239e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4168)));
    // 0x239e74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239e74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e78: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x239e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x239e7c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x239E7Cu;
    SET_GPR_U32(ctx, 31, 0x239E84u);
    ctx->pc = 0x239E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E7Cu;
    // 0x239e80: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x239E7Cu, 0x239E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E84u;
label_239e84:
    // 0x239e84: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x239e88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239e8c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239e90:
    // 0x239e90: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x239e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x239e94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e98: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x239e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x239e9c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x239E9Cu;
    SET_GPR_U32(ctx, 31, 0x239EA4u);
    ctx->pc = 0x239EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239E9Cu;
    // 0x239ea0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x239E9Cu, 0x239EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EA4u;
label_239ea4:
    // 0x239ea4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x239EA4u;
    SET_GPR_U32(ctx, 31, 0x239EACu);
    ctx->pc = 0x239EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EA4u;
    // 0x239ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x239EA4u, 0x239EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EACu;
label_239eac:
    // 0x239eac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239EACu;
    {
        const bool branch_taken_0x239eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239eac) {
            ctx->pc = 0x239EC0u;
            goto label_239ec0;
        }
    }
    ctx->pc = 0x239EB4u;
    // 0x239eb4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x239eb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239ebc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239ec0:
    // 0x239ec0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x239ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x239ec4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x239ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x239ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ecc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x239ECCu;
    SET_GPR_U32(ctx, 31, 0x239ED4u);
    ctx->pc = 0x239ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239ECCu;
    // 0x239ed0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x239ECCu, 0x239ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239ED4u;
label_239ed4:
    // 0x239ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ed8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x239ED8u;
    SET_GPR_U32(ctx, 31, 0x239EE0u);
    ctx->pc = 0x239EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239ED8u;
    // 0x239edc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x239ED8u, 0x239EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EE0u;
label_239ee0:
    // 0x239ee0: 0xc09c452  jal         func_271148
    ctx->pc = 0x239EE0u;
    SET_GPR_U32(ctx, 31, 0x239EE8u);
    ctx->pc = 0x239EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EE0u;
    // 0x239ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271148u, 0x239EE0u, 0x239EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EE8u;
label_239ee8:
    // 0x239ee8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x239EE8u;
    {
        const bool branch_taken_0x239ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EE8u;
        // 0x239eec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ee8) {
            ctx->pc = 0x239FFCu;
            goto label_239ffc;
        }
    }
    ctx->pc = 0x239EF0u;
label_239ef0:
    // 0x239ef0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x239ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x239ef4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x239EF4u;
    SET_GPR_U32(ctx, 31, 0x239EFCu);
    ctx->pc = 0x239EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EF4u;
    // 0x239ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x239EF4u, 0x239EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EFCu;
label_239efc:
    // 0x239efc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x239efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x239f00: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x239f00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x239f04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x239f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x239f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f0c: 0x8c65104c  lw          $a1, 0x104C($v1)
    ctx->pc = 0x239f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4172)));
    // 0x239f10: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x239f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x239f14: 0x8c661050  lw          $a2, 0x1050($v1)
    ctx->pc = 0x239f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4176)));
    // 0x239f18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x239f18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f1c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x239f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x239f20: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x239F20u;
    SET_GPR_U32(ctx, 31, 0x239F28u);
    ctx->pc = 0x239F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F20u;
    // 0x239f24: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x239F20u, 0x239F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F28u;
label_239f28:
    // 0x239f28: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x239f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x239f2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239f30: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x239f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_239f34:
    // 0x239f34: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x239f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x239f38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f3c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x239f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x239f40: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x239F40u;
    SET_GPR_U32(ctx, 31, 0x239F48u);
    ctx->pc = 0x239F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F40u;
    // 0x239f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x239F40u, 0x239F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F48u;
label_239f48:
    // 0x239f48: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x239F48u;
    SET_GPR_U32(ctx, 31, 0x239F50u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x239F48u, 0x239F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F50u;
label_239f50:
    // 0x239f50: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x239f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f58: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x239f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x239f5c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x239f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x239f60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x239f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x239f64: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x239f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x239f68: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x239F68u;
    SET_GPR_U32(ctx, 31, 0x239F70u);
    ctx->pc = 0x239F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F68u;
    // 0x239f6c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x239F68u, 0x239F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F70u;
label_239f70:
    // 0x239f70: 0xc055f06  jal         func_157C18
    ctx->pc = 0x239F70u;
    SET_GPR_U32(ctx, 31, 0x239F78u);
    ctx->pc = 0x239F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F70u;
    // 0x239f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x239F70u, 0x239F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F78u;
label_239f78:
    // 0x239f78: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x239F78u;
    {
        const bool branch_taken_0x239f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F78u;
        // 0x239f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f78) {
            ctx->pc = 0x239FD4u;
            goto label_239fd4;
        }
    }
    ctx->pc = 0x239F80u;
    // 0x239f80: 0xc09c36c  jal         func_270DB0
    ctx->pc = 0x239F80u;
    SET_GPR_U32(ctx, 31, 0x239F88u);
    ctx->pc = 0x239F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F80u;
    // 0x239f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270DB0u, 0x239F80u, 0x239F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F88u;
label_239f88:
    // 0x239f88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x239F88u;
    {
        const bool branch_taken_0x239f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f88) {
            ctx->pc = 0x239FC4u;
            goto label_239fc4;
        }
    }
    ctx->pc = 0x239F90u;
    // 0x239f90: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x239F90u;
    SET_GPR_U32(ctx, 31, 0x239F98u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x239F90u, 0x239F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F98u;
label_239f98:
    // 0x239f98: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x239f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x239f9c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x239f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x239fa0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x239fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x239fa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239fa8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x239fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x239fac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239fb0: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x239fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x239fb4: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x239FB4u;
    SET_GPR_U32(ctx, 31, 0x239FBCu);
    ctx->pc = 0x239FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FB4u;
    // 0x239fb8: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x239FB4u, 0x239FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FBCu;
label_239fbc:
    // 0x239fbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x239FBCu;
    {
        const bool branch_taken_0x239fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FBCu;
        // 0x239fc0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fbc) {
            ctx->pc = 0x239FFCu;
            goto label_239ffc;
        }
    }
    ctx->pc = 0x239FC4u;
label_239fc4:
    // 0x239fc4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x239FC4u;
    SET_GPR_U32(ctx, 31, 0x239FCCu);
    ctx->pc = 0x239FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FC4u;
    // 0x239fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x239FC4u, 0x239FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FCCu;
label_239fcc:
    // 0x239fcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239FCCu;
    {
        const bool branch_taken_0x239fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FCCu;
        // 0x239fd0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fcc) {
            ctx->pc = 0x239FFCu;
            goto label_239ffc;
        }
    }
    ctx->pc = 0x239FD4u;
label_239fd4:
    // 0x239fd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x239fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x239fd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x239fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x239fdc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x239FDCu;
    SET_GPR_U32(ctx, 31, 0x239FE4u);
    ctx->pc = 0x239FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FDCu;
    // 0x239fe0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x239FDCu, 0x239FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FE4u;
label_239fe4:
    // 0x239fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239fe8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x239FE8u;
    SET_GPR_U32(ctx, 31, 0x239FF0u);
    ctx->pc = 0x239FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FE8u;
    // 0x239fec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x239FE8u, 0x239FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FF0u;
label_239ff0:
    // 0x239ff0: 0xc09c452  jal         func_271148
    ctx->pc = 0x239FF0u;
    SET_GPR_U32(ctx, 31, 0x239FF8u);
    ctx->pc = 0x239FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FF0u;
    // 0x239ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271148u, 0x239FF0u, 0x239FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FF8u;
label_239ff8:
    // 0x239ff8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x239ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_239ffc:
    // 0x239ffc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x239ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a000: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x23a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23a004: 0x3e00008  jr          $ra
    ctx->pc = 0x23A004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A004u;
        // 0x23a008: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A00Cu;
    // 0x23a00c: 0x0  nop
    ctx->pc = 0x23a00cu;
    // NOP
    ctx->pc = 0x23a010u;
}
